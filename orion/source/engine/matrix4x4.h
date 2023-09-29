#pragma once

struct ImVec2;

namespace orion::engine {

    struct Vector3;

    struct Matrix4x4 final {
    public:
        constexpr explicit Matrix4x4() noexcept = default;

        constexpr ~Matrix4x4() noexcept = default;

        constexpr Matrix4x4(const Matrix4x4&) noexcept = default;
        constexpr Matrix4x4& operator=(const Matrix4x4&) noexcept = default;

        constexpr Matrix4x4(Matrix4x4&&) noexcept = default;
        constexpr Matrix4x4& operator=(Matrix4x4&&) noexcept = default;

        NODISCARD auto world_to_screen(
            const Vector3& world_pos,
            ImVec2& screen_pos
        ) const noexcept -> bool;

        NODISCARD auto world_to_screen_pixel_aligned(
            const Vector3& world_pos,
            ImVec2& screen_pos
        ) const noexcept -> bool;

    private:
        std::array<std::array<float, 4>, 4> m {};
    };

}  // namespace orion::engine
