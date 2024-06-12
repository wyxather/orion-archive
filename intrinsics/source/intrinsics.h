#pragma once

#include <bit>
#include <cstring>
#include <utility>

namespace intrinsics {

    [[nodiscard]] inline auto strcmp(const char *const str1, const char *const str2) noexcept -> int {
        constexpr auto mode = _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH
            | _SIDD_NEGATIVE_POLARITY | _SIDD_LEAST_SIGNIFICANT;

        auto ptr1 = std::bit_cast<const __m128i *>(str1);
        auto ptr2 = std::bit_cast<const __m128i *>(str2);

        for ( ;; ++ptr1, ++ptr2 ) {
            const auto a = _mm_loadu_si128(ptr1);
            const auto b = _mm_loadu_si128(ptr2);

            if ( std::cmp_not_equal(_mm_cmpistrc(a, b, mode), 0) ) {
                const auto index = _mm_cmpistri(a, b, mode);

                const auto b1 = std::bit_cast<const std::byte *>(ptr1)[index];
                const auto b2 = std::bit_cast<const std::byte *>(ptr2)[index];

                if ( b1 < b2 ) {
                    return -1;
                }
                if ( b1 > b2 ) {
                    return 1;
                }
                break;
            }

            if ( std::cmp_not_equal(_mm_cmpistrz(a, b, mode), 0) ) {
                break;
            }
        }
        return 0;
    }

    [[nodiscard]] inline auto memcmp(
        const unsigned char *const buf1,
        const unsigned char *const buf2,
        std::size_t size
    ) noexcept -> int {
        constexpr auto mode = _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH
            | _SIDD_NEGATIVE_POLARITY | _SIDD_LEAST_SIGNIFICANT;

        auto ptr1 = std::bit_cast<const __m128i *>(buf1);
        auto ptr2 = std::bit_cast<const __m128i *>(buf2);

        for ( ; std::cmp_not_equal(size, 0);
              ++ptr1,
              ++ptr2,
              std::cmp_greater(size, sizeof(__m128i)) ? size -= sizeof(__m128i) : size = 0 ) {
            const auto a = _mm_loadu_si128(ptr1);
            const auto b = _mm_loadu_si128(ptr2);

            if ( std::cmp_not_equal(
                     _mm_cmpestrc(a, static_cast<int>(size), b, static_cast<int>(size), mode),
                     0
                 ) ) {
                const auto index =
                    _mm_cmpestri(a, static_cast<int>(size), b, static_cast<int>(size), mode);

                const auto b1 = std::bit_cast<const std::byte *>(ptr1)[index];
                const auto b2 = std::bit_cast<const std::byte *>(ptr2)[index];

                if ( b1 < b2 ) {
                    return -1;
                }
                if ( b1 > b2 ) {
                    return 1;
                }
                break;
            }
        }
        return 0;
    }

    [[nodiscard]] inline auto memcmp(const void *const buf1, const void *const buf2, const std::size_t size) noexcept -> int {
        return intrinsics::memcmp(
            static_cast<const unsigned char *>(buf1),
            static_cast<const unsigned char *>(buf2),
            size
        );
    }

}  // namespace intrinsics
