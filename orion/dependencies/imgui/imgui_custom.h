#pragma once

namespace ImGui {
    [[nodiscard]] auto ButtonIcon(
        ImStrv label,
        const ImVec2& size = ImVec2(0.f, 0.f),
        ImU32 color = GetColorU32(ImGuiCol_Text),
        ImGuiButtonFlags flags = ImGuiButtonFlags_None) noexcept -> bool;

    [[nodiscard]] auto ButtonToggle(
        ImStrv str_id,
        bool& v,
        float widthMult,
        float height = 0.f) noexcept -> float;

    auto SliderFloat5(
        ImStrv label,
        float& v,
        float v_min,
        float v_max,
        float radius,
        int color,
        const char* format = "%.3f",
        int flags = 0,
        float thickness = 0.10f) noexcept -> bool;
}  // namespace ImGui
