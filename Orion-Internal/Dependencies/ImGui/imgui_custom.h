#pragma once

namespace ImGui {
    IMGUI_API auto ButtonIcon ( const char* label, const ImVec2& size = ImVec2{}, ImU32 color = GetColorU32 ( ImGuiCol_Text ), ImGuiButtonFlags flags = ImGuiButtonFlags_None ) noexcept -> bool;
    IMGUI_API auto ButtonToggle ( const char* str_id, bool& v, float widthMult, float height = {} ) noexcept -> float;
    IMGUI_API auto SliderFloat5 ( const char* label, float& v, float v_min, float v_max, float radius, int color, const char* format = "%.3f", int flags = 0, float thickness = 0.10f ) noexcept -> bool;
}