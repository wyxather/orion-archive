#include "imgui_custom.h"

#include <cmath>

[[nodiscard]] static auto RenderTextClippedEx(
    ImDrawList* const draw_list,
    const ImVec2& pos_min,
    const ImVec2& pos_max,
    const ImStrv text,
    const ImVec2* text_size_if_known,
    const ImVec2& align,
    const ImRect* clip_rect,
    const ImU32 color) noexcept -> void {
    using namespace ImGui;

    // Perform CPU side clipping for single clipped element to avoid using scissor state
    ImVec2 pos = pos_min;
    pos.y += 3.f;
    const ImVec2 text_size = text_size_if_known
        ? *text_size_if_known
        : CalcTextSize(text, false, 0.0f);

    const ImVec2* clip_min = clip_rect ? &clip_rect->Min : &pos_min;
    const ImVec2* clip_max = clip_rect ? &clip_rect->Max : &pos_max;
    bool need_clipping = (pos.x + text_size.x >= clip_max->x)
        || (pos.y + text_size.y >= clip_max->y);
    if (clip_rect)  // If we had no explicit clipping rectangle then pos==clip_min
        need_clipping |= (pos.x < clip_min->x) || (pos.y < clip_min->y);

    // Align whole block. We should defer that to the better rendering function when we'll have support for individual line alignment.
    // Align whole block. We should defer that to the better rendering function when we'll have support for individual line alignment.
    if (align.x > 0.0f)
        pos.x =
            ImMax(pos.x, pos.x + (pos_max.x - pos.x - text_size.x) * align.x);
    if (align.y > 0.0f)
        pos.y =
            ImMax(pos.y, pos.y + (pos_max.y - pos.y - text_size.y) * align.y);

    const ImStrv icon_text(text.Begin, &text.Begin[3]);
    const ImStrv display_text(&text.Begin[3], text.End);
    const ImVec2 icon_size = CalcTextSize(icon_text, false, 0.0f);

    // Render
    draw_list->AddText(NULL, 0.0f, pos, color, icon_text, 0.0f, NULL);
    if (need_clipping) {
        ImVec4 fine_clip_rect(
            clip_min->x,
            clip_min->y,
            clip_max->x,
            clip_max->y);
        draw_list->AddText(
            NULL,
            0.0f,
            pos + ImVec2 {icon_size.x, 0.0f},
            GetColorU32(ImGuiCol_Text),
            display_text,
            0.0f,
            &fine_clip_rect);
    } else {
        draw_list->AddText(
            NULL,
            0.0f,
            pos + ImVec2 {icon_size.x, 0.0f},
            GetColorU32(ImGuiCol_Text),
            display_text,
            0.0f,
            NULL);
    }
}

[[nodiscard]] static auto RenderTextClipped(
    const ImVec2& pos_min,
    const ImVec2& pos_max,
    ImStrv text,
    const ImVec2* text_size_if_known,
    const ImVec2& align,
    const ImRect* clip_rect,
    const ImU32 color) noexcept -> void {
    using namespace ImGui;

    // Hide anything after a '##' string
    // FIXME-IMSTR: This is not new but should be moved out of there.
    text.End = FindRenderedTextEnd(text);
    if (text.Begin == text.End)
        return;

    ImGuiContext& g = *GImGui;
    ImGuiWindow* window = g.CurrentWindow;
    RenderTextClippedEx(
        window->DrawList,
        pos_min,
        pos_max,
        text,
        text_size_if_known,
        align,
        clip_rect,
        color);
    if (g.LogEnabled)
        LogRenderedText(&pos_min, text);
}

[[nodiscard]] static auto PatchFormatStringFloatToInt(const char* fmt) noexcept
    -> const char* {
    if (fmt[0] == '%' && fmt[1] == '.' && fmt[2] == '0' && fmt[3] == 'f'
        && fmt[4]
            == 0)  // Fast legacy path for "%.0f" which is expected to be the most common case.
        return "%d";
    const char* fmt_start =
        ImParseFormatFindStart(fmt);  // Find % (if any, and ignore %%)
    const char* fmt_end = ImParseFormatFindEnd(
        fmt_start);  // Find end of format specifier, which itself is an exercise of confidence/recklessness (because snprintf is dependent on libc or user).
    if (fmt_end > fmt_start && fmt_end[-1] == 'f') {
#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
        if (fmt_start == fmt && fmt_end[0] == 0)
            return "%d";
        const char* tmp_format;
        ImFormatStringToTempBuffer(
            &tmp_format,
            NULL,
            "%.*s%%d%s",
            (int)(fmt_start - fmt),
            fmt,
            fmt_end);  // Honor leading and trailing decorations, but lose alignment/precision.
        return tmp_format;
#else
        IM_ASSERT(
            0
            && "DragInt(): Invalid format string!");  // Old versions used a default parameter of "%.0f", please replace with e.g. "%d"
#endif
    }
    return fmt;
}

[[nodiscard]] static auto SliderScalar(
    ImStrv label,
    ImGuiDataType data_type,
    void* p_data,
    const void* p_min,
    const void* p_max,
    float radius,
    int color,
    const char* format,
    ImGuiSliderFlags flags,
    float thickness) noexcept -> bool {
    using namespace ImGui;

    ImGuiWindow* window = GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);
    const float w = CalcItemWidth();

    const ImVec2 label_size = CalcTextSize(label, true);
    const ImRect frame_bb(
        window->DC.CursorPos,
        window->DC.CursorPos
            + ImVec2(w, label_size.y + style.FramePadding.y * 2.0f));
    const ImRect total_bb(
        frame_bb.Min,
        frame_bb.Max
            + ImVec2(
                label_size.x > 0.0f ? style.ItemInnerSpacing.x + label_size.x
                                    : 0.0f,
                0.0f));

    const bool temp_input_allowed = (flags & ImGuiSliderFlags_NoInput) == 0;
    ItemSize(total_bb, style.FramePadding.y);
    if (!ItemAdd(
            total_bb,
            id,
            &frame_bb,
            temp_input_allowed ? ImGuiItemFlags_Inputable : 0))
        return false;

    // Default format string when passing NULL
    if (format == NULL)
        format = DataTypeGetInfo(data_type)->PrintFmt;

    const bool hovered = ItemHoverable(frame_bb, id);
    bool temp_input_is_active = temp_input_allowed && TempInputIsActive(id);
    if (!temp_input_is_active) {
        // Tabbing or CTRL-clicking on Slider turns it into an input box
        const bool input_requested_by_tabbing = temp_input_allowed
            && (g.LastItemData.StatusFlags
                & ImGuiItemStatusFlags_FocusedByTabbing)
                != 0;
        const bool clicked = hovered && IsMouseClicked(0, id);
        const bool make_active =
            (input_requested_by_tabbing || clicked || g.NavActivateId == id);
        if (make_active && clicked)
            SetKeyOwner(ImGuiKey_MouseLeft, id);
        if (make_active && temp_input_allowed)
            if (input_requested_by_tabbing || (clicked && g.IO.KeyCtrl)
                || (g.NavActivateId == id
                    && (g.NavActivateFlags & ImGuiActivateFlags_PreferInput)))
                temp_input_is_active = true;

        if (make_active && !temp_input_is_active) {
            SetActiveID(id, window);
            SetFocusID(id, window);
            FocusWindow(window);
            g.ActiveIdUsingNavDirMask |=
                (1 << ImGuiDir_Left) | (1 << ImGuiDir_Right);
        }
    }

    if (temp_input_is_active) {
        // Only clamp CTRL+Click input when ImGuiSliderFlags_AlwaysClamp is set
        const bool is_clamp_input = (flags & ImGuiSliderFlags_AlwaysClamp) != 0;
        return TempInputScalar(
            frame_bb,
            id,
            label,
            data_type,
            p_data,
            format,
            is_clamp_input ? p_min : NULL,
            is_clamp_input ? p_max : NULL);
    }

    // Draw frame
    const ImU32 frame_col = GetColorU32(
        g.ActiveId == id ? ImGuiCol_FrameBgActive
            : hovered    ? ImGuiCol_FrameBgHovered
                         : ImGuiCol_FrameBg);
    const auto frame_col_after {color};
    RenderNavHighlight(frame_bb, id);
    //RenderFrame(
    //    frame_bb.Min,
    //    frame_bb.Max,
    //    frame_col,
    //    true,
    //    g.Style.FrameRounding);

    // Slider behavior
    ImRect grab_bb;
    const bool value_changed = SliderBehavior(
        frame_bb,
        id,
        data_type,
        p_data,
        p_min,
        p_max,
        format,
        flags,
        &grab_bb);
    if (value_changed)
        MarkItemEdited(id);

    ImRect draw_bb {frame_bb};
    if (thickness != 1.00f) {
        const auto shrink_amount {static_cast<int>(
            (frame_bb.Max.y - frame_bb.Min.y) * 0.50f * (1.00f - thickness))};
        draw_bb.Min.y += shrink_amount;
        draw_bb.Max.y -= shrink_amount;
    }

    window->DrawList->AddRectFilled(
        draw_bb.Min,
        ImVec2(
            grab_bb.Min.x + (grab_bb.Max.x - grab_bb.Min.x) * 0.65f,
            draw_bb.Max.y),
        frame_col,
        style.FrameRounding,
        ImDrawFlags_RoundCornersTopLeft | ImDrawFlags_RoundCornersBottomLeft);
    window->DrawList->AddRectFilled(
        ImVec2(
            grab_bb.Max.x - (grab_bb.Max.x - grab_bb.Min.x) * 0.35f,
            draw_bb.Min.y),
        draw_bb.Max,
        frame_col_after,
        style.FrameRounding,
        ImDrawFlags_RoundCornersTopRight | ImDrawFlags_RoundCornersBottomRight);

    // Render grab
    if (grab_bb.Max.x > grab_bb.Min.x)
        window->DrawList->AddCircleFilled(
            grab_bb.GetCenter(),
            radius,
            GetColorU32(
                g.ActiveId == id ? ImGuiCol_SliderGrabActive
                                 : ImGuiCol_SliderGrab));

    // Display value using user-provided display format so user can add prefix/suffix/decorations to the value.
    char value_buf[64];
    const char* value_buf_end = value_buf
        + DataTypeFormatString(value_buf,
                               IM_ARRAYSIZE(value_buf),
                               data_type,
                               p_data,
                               format);
    if (g.LogEnabled)
        LogSetNextTextDecoration("{", "}");
    //RenderTextClipped(
    //    frame_bb.Min,
    //    frame_bb.Max,
    //    ImStrv(value_buf, value_buf_end),
    //    NULL,
    //    ImVec2(0.5f, 0.5f));

    //if (label_size.x > 0.0f)
    //    RenderText(
    //        ImVec2(
    //            frame_bb.Max.x + style.ItemInnerSpacing.x,
    //            frame_bb.Min.y + style.FramePadding.y),
    //        label);

    IMGUI_TEST_ENGINE_ITEM_INFO(
        id,
        label,
        g.LastItemData.StatusFlags
            | (temp_input_allowed ? ImGuiItemStatusFlags_Inputable : 0));
    return value_changed;
}

auto ImGui::ButtonIcon(
    ImStrv label,
    const ImVec2& size_arg,
    const ImU32 color,
    ImGuiButtonFlags flags) noexcept -> bool {
    ImGuiWindow* window = GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);
    const ImVec2 label_size = CalcTextSize(label, NULL, true);

    ImVec2 pos = window->DC.CursorPos;
    if ((flags & ImGuiButtonFlags_AlignTextBaseLine)
        && style.FramePadding.y
            < window->DC
                  .CurrLineTextBaseOffset)  // Try to vertically align buttons that are smaller/have no padding so that text baseline matches (bit hacky, since it shouldn't be a flag)
        pos.y += window->DC.CurrLineTextBaseOffset - style.FramePadding.y;
    ImVec2 size = CalcItemSize(
        size_arg,
        label_size.x + style.FramePadding.x * 2.0f,
        label_size.y + style.FramePadding.y * 2.0f);

    const ImRect bb(pos, pos + size);
    ItemSize(size, style.FramePadding.y);
    if (!ItemAdd(bb, id))
        return false;

    if (g.LastItemData.InFlags & ImGuiItemFlags_ButtonRepeat)
        flags |= ImGuiButtonFlags_Repeat;

    bool hovered, held;
    bool pressed = ButtonBehavior(bb, id, &hovered, &held, flags);

    // Render
    const ImU32 col = GetColorU32(
        (held && hovered) ? ImGuiCol_ButtonActive
            : hovered     ? ImGuiCol_ButtonHovered
                          : ImGuiCol_Button);
    RenderNavHighlight(bb, id);
    RenderFrame(bb.Min, bb.Max, col, true, style.FrameRounding);

    if (g.LogEnabled)
        LogSetNextTextDecoration("[", "]");
    RenderTextClipped(
        bb.Min + style.FramePadding,
        bb.Max - style.FramePadding,
        label,
        &label_size,
        style.ButtonTextAlign,
        &bb,
        color);

    // Automatically close popups
    //if (pressed && !(flags & ImGuiButtonFlags_DontClosePopups) && (window->Flags & ImGuiWindowFlags_Popup))
    //    CloseCurrentPopup();

    IMGUI_TEST_ENGINE_ITEM_INFO(id, label, g.LastItemData.StatusFlags);
    return pressed;
}

auto ImGui::ButtonToggle(
    ImStrv str_id,
    bool& v,
    float widthMult,
    float height) noexcept -> float {
    const auto cursorScreenPos {ImGui::GetCursorScreenPos()};
    const auto styleAlpha {static_cast<int>(ImGui::GetStyle().Alpha * 255)};
    const auto windowDrawlist {ImGui::GetWindowDrawList()};
    const auto frameHeight {height ? height : ImGui::GetFrameHeight()};
    const auto frameWidth {frameHeight * widthMult};
    const auto circleRadius {frameHeight * .4f};
    const auto& context {*GImGui};

    float t;

    ImGui::InvisibleButton(str_id, ImVec2 {frameWidth, frameHeight});
    if (ImGui::IsItemClicked())
        v = !v;

    if (constexpr auto ANIM_SPEED {.4f};
        context.LastActiveId == context.CurrentWindow->GetID(str_id)) {
        const auto t_anim {ImSaturate(context.LastActiveIdTimer / ANIM_SPEED)};
        t = v ? std::sqrt(t_anim) : std::powf(1.f - t_anim, 2);
    } else
        t = v ? 1.f : 0.f;

    if (constexpr auto heightMult {.2f}; ImGui::IsItemHovered()) {
        windowDrawlist->AddRectFilled(
            ImVec2 {
                cursorScreenPos.x,
                cursorScreenPos.y + frameHeight * heightMult},
            ImVec2 {
                cursorScreenPos.x + frameWidth,
                cursorScreenPos.y + frameHeight - frameHeight * heightMult},
            ImGui::ColorConvertFloat4ToU32(ImLerp(
                ImVec4 {ImColor {3, 11, 29, styleAlpha}},
                ImVec4 {ImColor {0, 33, 72, styleAlpha}},
                t)),
            frameHeight * .5f);
        windowDrawlist->AddCircleFilled(
            ImVec2 {
                cursorScreenPos.x + circleRadius
                    + t * (frameWidth - circleRadius * 2),
                cursorScreenPos.y + frameHeight * .5f},
            circleRadius - 1.5f,
            ImGui::ColorConvertFloat4ToU32(ImLerp(
                ImVec4 {ImColor {87, 98, 108, styleAlpha}},
                ImVec4 {ImColor {34, 167, 255, styleAlpha}},
                t)));
    } else {
        windowDrawlist->AddRectFilled(
            ImVec2 {
                cursorScreenPos.x,
                cursorScreenPos.y + frameHeight * heightMult},
            ImVec2 {
                cursorScreenPos.x + frameWidth,
                cursorScreenPos.y + frameHeight - frameHeight * heightMult},
            ImGui::ColorConvertFloat4ToU32(ImLerp(
                ImVec4 {ImColor {2, 6, 17, styleAlpha}},
                ImVec4 {ImColor {0, 22, 49, styleAlpha}},
                t)),
            frameHeight * .5f);
        windowDrawlist->AddCircleFilled(
            ImVec2 {
                cursorScreenPos.x + circleRadius
                    + t * (frameWidth - circleRadius * 2),
                cursorScreenPos.y + frameHeight * .5f},
            circleRadius - 1.5f,
            ImGui::ColorConvertFloat4ToU32(ImLerp(
                ImVec4 {ImColor {76, 85, 94, styleAlpha}},
                ImVec4 {ImColor {0, 153, 255, styleAlpha}},
                t)));
    }

    return t;
}

auto ImGui::SliderFloat5(
    ImStrv label,
    float& v,
    float v_min,
    float v_max,
    float radius,
    int color,
    const char* format,
    int flags,
    float thickness) noexcept -> bool {
    return SliderScalar(
        label,
        ImGuiDataType_Float,
        &v,
        &v_min,
        &v_max,
        radius,
        color,
        format,
        flags,
        thickness);
}
