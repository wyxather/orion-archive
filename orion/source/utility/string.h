#pragma once

#include <intrin.h>

#include <array>
#include <cstddef>
#include <ranges>

namespace orion::utility {

    template<typename, std::size_t = 0>
    class String;

    template<std::size_t CharCount>
    class String<char, CharCount> final : public std::array<char, CharCount> {
    public:
        constexpr String() noexcept = default;

        consteval explicit(false) String(const char (&str)[CharCount]) noexcept {
            std::ranges::copy(str, std::array<char, CharCount>::data());
        }

        consteval String(String &&) noexcept = default;
        consteval String &operator=(String &&) noexcept = default;

        consteval String(const String &) noexcept = default;
        consteval String &operator=(const String &) noexcept = default;

        [[nodiscard]] static constexpr auto strlen(const char *const str
        ) noexcept -> std::size_t {
            constexpr auto mode =
                (_SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH | _SIDD_LEAST_SIGNIFICANT);
            const auto zeros = _mm_setzero_si128();
            auto result = std::size_t {};
            for ( auto mem = (const __m128i *)(str);; ++mem, result += sizeof(__m128i) ) {
                const auto data = _mm_loadu_si128(mem);
                if ( _mm_cmpistrc(data, zeros, mode) != 0 ) {
                    const auto index = _mm_cmpistri(data, zeros, mode);
                    return result + index;
                }
            }
            return result;
        }

        [[nodiscard]] static constexpr auto strcmp(const char *const str1, const char *const str2) noexcept -> int {
            constexpr auto mode =
                (_SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH
                 | _SIDD_NEGATIVE_POLARITY | _SIDD_LEAST_SIGNIFICANT);
            auto ptr1 = (const __m128i *)(str1);
            auto ptr2 = (const __m128i *)(str2);
            for ( ;; ++ptr1, ++ptr2 ) {
                const auto a = _mm_loadu_si128(ptr1);
                const auto b = _mm_loadu_si128(ptr2);
                if ( _mm_cmpistrc(a, b, mode) != 0 ) {
                    const auto index = _mm_cmpistri(a, b, mode);
                    const auto b1 = ((const std::uint8_t *)(ptr1))[index];
                    const auto b2 = ((const std::uint8_t *)(ptr2))[index];
                    if ( b1 < b2 ) {
                        return int { -1 };
                    }
                    if ( b1 > b2 ) {
                        return int { 1 };
                    }
                    return int { 0 };
                }
                if ( _mm_cmpistrz(a, b, mode) != 0 ) {
                    return int { 0 };
                }
            }
            return int { 0 };
        }
    };

    template<std::size_t CharCount>
    class String<wchar_t, CharCount> final : public std::array<wchar_t, CharCount> {
    public:
        constexpr String() noexcept = default;

        consteval explicit(false) String(const wchar_t (&str)[CharCount]) noexcept {
            std::ranges::copy(str, std::array<wchar_t, CharCount>::data());
        }

        consteval String(String &&) noexcept = default;
        consteval String &operator=(String &&) noexcept = default;

        consteval String(const String &) noexcept = default;
        consteval String &operator=(const String &) noexcept = default;
    };

    template<std::size_t CharCount>
    String(const char (&)[CharCount]) -> String<char, CharCount>;

    template<std::size_t CharCount>
    String(const wchar_t (&)[CharCount]) -> String<wchar_t, CharCount>;

}  // namespace orion::utility
