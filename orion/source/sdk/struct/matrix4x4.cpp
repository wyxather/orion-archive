#include "Matrix4x4.h"

#include "Vector3.h"

auto orion::Matrix4x4::world_to_screen(
    const Vector3& world_pos,
    ImVec2& screen_pos
) const noexcept -> bool {
    const auto w(
        Matrix4x4::m[3][0] * world_pos.x + Matrix4x4::m[3][1] * world_pos.y
        + Matrix4x4::m[3][2] * world_pos.z + Matrix4x4::m[3][3]
    );

    if (w < 0.001f)
        return false;

    screen_pos = ImGui::GetIO().DisplaySize * 0.5f;
    screen_pos.x *= 1.0f
        + (Matrix4x4::m[0][0] * world_pos.x + Matrix4x4::m[0][1] * world_pos.y
           + Matrix4x4::m[0][2] * world_pos.z + Matrix4x4::m[0][3])
            / w;
    screen_pos.y *= 1.0f
        - (Matrix4x4::m[1][0] * world_pos.x + Matrix4x4::m[1][1] * world_pos.y
           + Matrix4x4::m[1][2] * world_pos.z + Matrix4x4::m[1][3])
            / w;
    return true;
}

auto orion::Matrix4x4::world_to_screen_pixel_aligned(
    const Vector3& world_pos,
    ImVec2& screen_pos
) const noexcept -> bool {
    if (Matrix4x4::world_to_screen(world_pos, screen_pos) == false)
        return false;
    screen_pos = ImFloor(screen_pos);
    return true;
}
