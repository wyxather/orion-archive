#pragma once

namespace orion::utilities::math
{

namespace easing
{

NODISCARD constexpr auto in_out_quart(const float ratio) noexcept
{
    return ratio < 0.5f ? 8.0f * ratio * ratio * ratio * ratio : 1.0f - std::pow(-2.0f * ratio + 2.0f, 4.0f) * 0.5f;
}

NODISCARD constexpr auto out_expo(const float ratio) noexcept
{
    return ratio == 1.0f ? 1.0f : 1.0f - std::pow(2.0f, -10.0f * ratio);
}

NODISCARD constexpr auto in_out_expo(const float ratio) noexcept
{
    if (ratio == 0.0f)
    {
        return 0.0f;
    }
    if (ratio == 1.0f)
    {
        return 1.0f;
    }
    if (ratio < 0.5f)
    {
        return std::pow(2.0f, 20.0f * ratio - 10.0f) * 0.5f;
    }
    return (2.0f - std::pow(2.0f, -20.0f * ratio + 10.0f)) * 0.5f;
}

} // namespace easing

NODISCARD constexpr auto smooth_step(const float ratio) noexcept
{
    const auto reversed_ratio = 1.0f - ratio;
    const auto x = reversed_ratio * reversed_ratio;
    return std::lerp(ratio * ratio, 1.0f - x, ratio);
}

template <typename T> NODISCARD constexpr auto deg_to_rad(const T degrees) noexcept
{
    return degrees * (std::numbers::pi_v<T> / static_cast<T>(180));
}

template <typename T> NODISCARD constexpr auto rad_to_deg(const T radians) noexcept
{
    return radians * (static_cast<T>(180) / std::numbers::pi_v<T>);
}

} // namespace orion::utilities::math
