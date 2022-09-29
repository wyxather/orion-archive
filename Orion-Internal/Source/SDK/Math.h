#pragma once

namespace Math
{
    template <typename T>
    constexpr auto deg2rad(T degrees) noexcept
    {
        return degrees * (std::numbers::pi_v<T> / static_cast<T>(180));
    }

    template <typename T>
    constexpr auto rad2deg(T radians) noexcept
    {
        return radians * (static_cast<T>(180) / std::numbers::pi_v<T>);
    }
}