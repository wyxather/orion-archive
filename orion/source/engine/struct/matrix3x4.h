#pragma once

namespace orion {
    struct Vector3;

    struct Matrix3x4 final {
    private:
        std::array<std::array<float, 4>, 3> m;

    public:
        constexpr auto&& operator[](int i) noexcept {
            return m[i];
        }

        constexpr auto&& operator[](int i) const noexcept {
            return m[i];
        }

        auto origin() const noexcept -> Vector3;
    };
}  // namespace orion
