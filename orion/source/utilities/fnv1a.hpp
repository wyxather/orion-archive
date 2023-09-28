#pragma once

namespace orion::utilities {
    template<stb::fixed_string _Str = "", typename _SizeTy = std::uint32_t>
    class Fnv1a final {
    public:
        Fnv1a() = delete;

        Fnv1a(Fnv1a&&) = delete;
        Fnv1a& operator=(Fnv1a&&) = delete;

        Fnv1a(const Fnv1a&) = delete;
        Fnv1a& operator=(const Fnv1a&) = delete;

    private:
        [[nodiscard]] static consteval auto getOffset() noexcept -> _SizeTy {
            switch (sizeof(_SizeTy)) {
                default:
                    return _SizeTy {};
                case (sizeof(std::uint32_t)):
                    return static_cast<_SizeTy>(0x811C9DC5);
                case (sizeof(std::uint64_t)):
                    return static_cast<_SizeTy>(0xCBF29CE484222325);
            }
        }

        [[nodiscard]] static consteval auto getPrime() noexcept -> _SizeTy {
            switch (sizeof(_SizeTy)) {
                default:
                    return _SizeTy {};
                case (sizeof(std::uint32_t)):
                    return static_cast<_SizeTy>(0x1000193);
                case (sizeof(std::uint64_t)):
                    return static_cast<_SizeTy>(0x00000100000001B3);
            }
        }

    public:
        [[nodiscard]] static constexpr auto hash(const char* str) noexcept
            -> _SizeTy {
            constexpr auto prime = getPrime();
            auto offset = getOffset();
            while (*str) {
                offset ^= *str++;
                offset *= prime;
            }
            return offset;
        }

        [[nodiscard]] static constexpr auto match(const char* const str)
            -> bool {
            return value == hash(str);
        }

        static constexpr auto value =
            stb::consteval_value<Fnv1a::hash(_Str.data())>::value;
    };
}  // namespace orion::utils
