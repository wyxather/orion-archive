#pragma once

namespace orion::utilities {

    template<stb::fixed_string str = "", typename size_type = std::uint32_t>
    class Fnv1a final {
    public:
        NON_CONSTRUCTIBLE(Fnv1a)

    private:
        NODISCARD static consteval auto get_prime() noexcept -> size_type {
            switch (sizeof(size_type)) {
                case sizeof(std::uint32_t):
                    return static_cast<size_type>(0x1000193);
                case sizeof(std::uint64_t):
                    return static_cast<size_type>(0x00000100000001B3);
                default:
                    return size_type {};
            }
        }

        NODISCARD static consteval auto get_offset() noexcept -> size_type {
            switch (sizeof(size_type)) {
                case sizeof(std::uint32_t):
                    return static_cast<size_type>(0x811C9DC5);
                case sizeof(std::uint64_t):
                    return static_cast<size_type>(0xCBF29CE484222325);
                default:
                    return size_type {};
            }
        }

    public:
        NODISCARD static constexpr auto hash(const char* str) noexcept
            -> size_type {
            constexpr auto PRIME = get_prime();
            constexpr auto OFFSET = get_offset();
            auto offset = OFFSET;
            while (*str) {
                offset ^= *str++;
                offset *= PRIME;
            }
            return offset;
        }

        static constexpr auto value =
            stb::consteval_value<hash(str.data())>::value;

        NODISCARD static constexpr auto eq(const char* const str) -> bool {
            return value == hash(str);
        }
    };

}  // namespace orion::utilities
