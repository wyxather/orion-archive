#pragma once

#include <intrin.h>

namespace orion::utility {

    class Memory final {
    private:
        Memory() = delete;

    public:
        Memory(Memory &&) = delete;
        Memory &operator=(Memory &&) = delete;

        Memory(const Memory &) = delete;
        Memory &operator=(const Memory &) = delete;

        template<typename T, typename U>
        [[nodiscard]] static constexpr auto memcmp(T *const data1, U *const data2, int size) noexcept -> int {
            constexpr auto mode =
                (_SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH
                 | _SIDD_NEGATIVE_POLARITY | _SIDD_LEAST_SIGNIFICANT);
            auto ptr1 = (const __m128i *)(data1);
            auto ptr2 = (const __m128i *)(data2);
            for ( ;; ++ptr1, ++ptr2 ) {
                const auto a = _mm_loadu_si128(ptr1);
                const auto b = _mm_loadu_si128(ptr2);
                if ( _mm_cmpestrc(a, size, b, size, mode) != 0 ) {
                    const auto index = _mm_cmpestri(a, size, b, size, mode);
                    const auto value1 = ((const unsigned char *)(ptr1))[index];
                    const auto value2 = ((const unsigned char *)(ptr2))[index];
                    if ( value1 < value2 ) {
                        return int { -1 };
                    }
                    if ( value1 > value2 ) {
                        return int { 1 };
                    }
                    return int { 0 };
                }
                if ( size <= 16 ) {
                    return int { 0 };
                }
                size -= 16;
            }
            return int { 0 };
        }
    };

}  // namespace orion::utility
