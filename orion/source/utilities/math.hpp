#pragma once

namespace orion::utils::Math {
    namespace Easing {
        [[nodiscard]] constexpr auto in_out_quart(const float ratio) noexcept {
            return ratio < 0.5f
                ? 8.0f * ratio * ratio * ratio * ratio
                : 1.0f - std::pow(-2.0f * ratio + 2.0f, 4.0f) * 0.5f;
        }

        [[nodiscard]] constexpr auto out_expo(const float ratio) noexcept {
            return ratio == 1.0f ? 1.0f : 1.0f - std::pow(2.0f, -10.0f * ratio);
        }

        [[nodiscard]] constexpr auto in_out_expo(const float ratio) noexcept {
            return ratio == 0.0f ? 0.0f
                : ratio == 1.0f  ? 1.0f
                : ratio < 0.5
                ? std::pow(2.0f, 20.0f * ratio - 10.0f) * 0.5f
                : (2.0f - std::pow(2.0f, -20.0f * ratio + 10.0f)) * 0.5f;
        }
    }  // namespace Easing

    [[nodiscard]] constexpr auto smoothstep(const float ratio) noexcept {
        const auto reversed_ratio = 1.0f - ratio;
        const auto x = reversed_ratio * reversed_ratio;
        return std::lerp(ratio * ratio, 1.0f - x, ratio);
    }

    template<typename T>
    [[nodiscard]] constexpr auto deg_to_rad(const T degrees) noexcept {
        return degrees * (std::numbers::pi_v<T> / static_cast<T>(180));
    }

    template<typename T>
    [[nodiscard]] constexpr auto rad_to_deg(const T radians) noexcept {
        return radians * (static_cast<T>(180) / std::numbers::pi_v<T>);
    }
}  // namespace orion::utils::Math
