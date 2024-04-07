#pragma once

#include "source/utility/string.h"
#include "source/utility/xorarr.h"

namespace orion::utility {

    template<String str>
    class XorStr final {
    public:
        consteval XorStr() noexcept = default;

        XorStr(XorStr &&) = delete;
        XorStr &operator=(XorStr &&) = delete;

        XorStr(const XorStr &) = delete;
        XorStr &operator=(const XorStr &) = delete;

        [[nodiscard]] static constexpr auto access() noexcept -> auto {
            return xorarr(str);
        }

        [[nodiscard]] static consteval auto size() noexcept -> auto {
            return str.size() - 1;
        }
    };

}  // namespace orion::utility
