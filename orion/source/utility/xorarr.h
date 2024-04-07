#pragma once

#include <intrin.h>

#include <array>
#include <concepts>
#include <cstddef>
#include <cstdint>
#include <type_traits>
#include <utility>
#include <xtr1common>

#define xorarr(arr) \
    orion::utility::XorArr( \
        []() consteval noexcept { return arr.data(); }, \
        std::integral_constant<std::size_t, arr.size()> {}, \
        std::make_index_sequence<orion::utility::XorArr<>::calc_buffer_size<sizeof(arr)>()> {} \
    )

namespace orion::utility {

    template<typename = void, std::size_t = 0, typename = void, typename = void>
    class XorArr;

    template<>
    class XorArr<void, 0, void, void> {
    private:
        template<std::uint32_t Seed>
        [[nodiscard]] static consteval auto calc_key_4() noexcept -> std::uint32_t {
            auto value = Seed;
            for ( const auto c : __TIME__ ) {
                value = static_cast<std::uint32_t>((value ^ c) * 16777619ULL);
            }
            return value;
        }

    protected:
        constexpr XorArr() noexcept = default;

        XorArr(XorArr &&) = delete;
        XorArr &operator=(XorArr &&) = delete;

        XorArr(const XorArr &) = delete;
        XorArr &operator=(const XorArr &) = delete;

        template<std::size_t N, std::integral DataType>
        [[nodiscard]] static consteval auto load_xored_8(
            const std::uint64_t key,
            const std::size_t idx,
            const DataType *const data
        ) noexcept -> std::uint64_t {
            constexpr auto value_size = sizeof(DataType);
            constexpr auto idx_offset = (8 / value_size);
            auto value = key;
            for ( auto i = std::size_t {}; i < idx_offset && i + idx * idx_offset < N; ++i ) {
                value ^=
                    (std::uint64_t {
                         static_cast<std::make_unsigned_t<DataType>>(data[i + idx * idx_offset]) }
                     << ((i % idx_offset) * (8 * value_size)));
            }
            return value;
        }

        [[nodiscard]] static consteval auto load_from_reg(const std::uint64_t value
        ) noexcept -> std::uint64_t {
            volatile auto reg = value;
            return reg;
        }

    public:
        template<std::size_t SizeOfArray>
        [[nodiscard]] static consteval auto calc_buffer_size() noexcept -> std::size_t {
            auto size = (SizeOfArray / 16);
            if constexpr ( (SizeOfArray % 16) != 0 ) {
                size += 1;
            }
            return std::size_t { size * 2 };
        }

        template<std::size_t Seed>
        [[nodiscard]] static consteval auto calc_key_8() noexcept -> std::uint64_t {
            constexpr auto first_part = XorArr<>::calc_key_4<2166136261 + Seed>();
            constexpr auto second_part = XorArr<>::calc_key_4<first_part>();
            return std::uint64_t { (static_cast<std::uint64_t>(first_part) << 32) | second_part };
        }
    };

    template<std::integral DataType, std::size_t DataCount, std::uint64_t... Keys, std::size_t... Indices>
    class XorArr<DataType, DataCount, std::integer_sequence<std::uint64_t, Keys...>, std::index_sequence<Indices...>> final
        : private XorArr<> {
    private:
        static constexpr auto alignment = 16;

        alignas(alignment) std::array<std::uint64_t, sizeof...(Keys)> bytes {};

    public:
        template<std::invocable Lambda>
        explicit __forceinline XorArr(const Lambda lambda, std::integral_constant<std::size_t, DataCount>, std::index_sequence<Indices...>) noexcept
            : bytes { XorArr<>::load_from_reg(
                  std::integral_constant<std::uint64_t, XorArr<>::load_xored_8<DataCount>(Keys, Indices, lambda())>::value
              )... } {
            alignas(alignment) constexpr auto keys =
                std::array<std::uint64_t, sizeof...(Keys)> { XorArr<>::load_from_reg(Keys)... };
            ((Indices >= (sizeof(bytes) / 16)
                  ? static_cast<void>(0)
                  : _mm_store_si128(
                        (__m128i *)(bytes.data()) + Indices,
                        _mm_xor_si128(
                            _mm_load_si128((const __m128i *)(bytes.data()) + Indices),
                            _mm_load_si128((const __m128i *)(keys.data()) + Indices)
                        )
                    )),
             ...);
        }

        [[nodiscard]] constexpr auto data() const noexcept -> auto {
            return (const DataType *)(bytes.data());
        }

        [[nodiscard]] static consteval auto size() noexcept -> auto {
            return DataCount;
        }
    };

    template<std::invocable Lambda, std::size_t DataCount, std::size_t... Indices>
    XorArr(Lambda lambda, std::integral_constant<std::size_t, DataCount>, std::index_sequence<Indices...>)
        -> XorArr<
            std::remove_cvref_t<decltype(lambda()[0])>,
            DataCount,
            std::integer_sequence<std::uint64_t, XorArr<>::calc_key_8<Indices>()...>,
            std::index_sequence<Indices...>>;

}  // namespace orion::utility
