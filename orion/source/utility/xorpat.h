#pragma once

#include <concepts>
#include <cstdint>
#include <span>

#include "source/utility/pattern.h"
#include "source/utility/string.h"
#include "source/utility/xorarr.h"

namespace orion::utility {

    template<String str, std::uint8_t masked>
    class XorPat final {
    public:
        consteval XorPat() noexcept = default;

        XorPat(XorPat &&) = delete;
        XorPat &operator=(XorPat &&) = delete;

        XorPat(const XorPat &) = delete;
        XorPat &operator=(const XorPat &) = delete;

        [[nodiscard]] static constexpr auto access() noexcept -> auto {
            constexpr auto pattern = Pattern<str, masked>::value;
            return xorarr(pattern);
        }

        [[nodiscard]] static consteval auto size() noexcept -> auto {
            constexpr auto pattern = Pattern<str, masked>::value;
            return pattern.size();
        }

        template<std::integral T>
        [[nodiscard]] static constexpr auto find(const std::span<T> bytes) noexcept -> auto {
            const auto pattern = access();
            return Pattern<str, masked>::find(
                std::span<T> {
                    pattern.data(),
                    pattern.size(),
                },
                bytes
            );
        }
    };

}  // namespace orion::utility
