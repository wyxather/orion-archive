#pragma once

struct ImVec2;

namespace orion {
    struct Vector3;

    struct Matrix4x4 final {
    private:
        std::array<std::array<float, 4>, 4> m;

    public:
        [[nodiscard]] auto world_to_screen(
            const Vector3& world_pos,
            ImVec2& screen_pos
        ) const noexcept -> bool;
        [[nodiscard]] auto world_to_screen_pixel_aligned(
            const Vector3& world_pos,
            ImVec2& screen_pos
        ) const noexcept -> bool;
    };
}  // namespace orion
