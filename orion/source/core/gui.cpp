#include "source/core/gui.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <map>
#include <numbers>
#include <ranges>

#include "source/resource/font/font_awesome_6_pro_light_300.h"
#include "source/resource/font/font_awesome_6_pro_regular_400.h"
#include "source/resource/font/font_awesome_6_pro_solid_900.h"
#include "source/resource/font/font_awesome_6_pro_thin_100.h"
#include "source/resource/font/museo_sans_cyrl_300.h"
#include "source/resource/font/museo_sans_cyrl_500.h"
#include "source/resource/font/museo_sans_cyrl_700.h"
#include "source/resource/font/museo_sans_cyrl_900.h"
#if _WIN64
    #if NDEBUG  // WIN64 RELEASE
        #include "source/resource/shader/output/Release/x64/blur_x_dx11.h"
        #include "source/resource/shader/output/Release/x64/blur_x_dx9.h"
        #include "source/resource/shader/output/Release/x64/blur_y_dx11.h"
        #include "source/resource/shader/output/Release/x64/blur_y_dx9.h"
    #else  // WIN64 DEBUG
        #include "source/resource/shader/output/Debug/x64/blur_x_dx11.h"
        #include "source/resource/shader/output/Debug/x64/blur_x_dx9.h"
        #include "source/resource/shader/output/Debug/x64/blur_y_dx11.h"
        #include "source/resource/shader/output/Debug/x64/blur_y_dx9.h"
    #endif
#else
    #if NDEBUG  // WIN32 RELEASE
        #include "source/resource/shader/output/Release/Win32/blur_x_dx11.h"
        #include "source/resource/shader/output/Release/Win32/blur_x_dx9.h"
        #include "source/resource/shader/output/Release/Win32/blur_y_dx11.h"
        #include "source/resource/shader/output/Release/Win32/blur_y_dx9.h"
    #else  // WIN32 DEBUG
        #include "source/resource/shader/output/Debug/Win32/blur_x_dx11.h"
        #include "source/resource/shader/output/Debug/Win32/blur_x_dx9.h"
        #include "source/resource/shader/output/Debug/Win32/blur_y_dx11.h"
        #include "source/resource/shader/output/Debug/Win32/blur_y_dx9.h"
    #endif
#endif

#define SAFERELEASE(v) \
    if ( v != nullptr ) { \
        v->Release(); \
        v = nullptr; \
    }

using orion::core::Gui;
using orion::utility::XorStr;

Gui::Gui(const Platform &, ImGuiContext &imgui_context) noexcept {
    auto &imgui_io = imgui_context.IO;
    imgui_io.IniFilename = nullptr;
    imgui_io.MouseDrawCursor = open;

    auto &imgui_style = imgui_context.Style;
    imgui_style.WindowPadding = ImVec2 { 0.0f, 0.0f };
    imgui_style.WindowRounding = 10.0f;
    imgui_style.WindowBorderSize = 0.0f;
    imgui_style.ChildRounding = 10.0f;
    imgui_style.ScrollbarSize = 9.0f;
    imgui_style.RoundCornersUseTex = false;
    imgui_style.CurveTessellationTol = 0.1f;
    imgui_style.CircleTessellationMaxError = 0.1f;
    imgui_style.FramePadding = ImVec2 { 5.0f, 2.0f };
    imgui_style.FrameRounding = 4.0f;
    imgui_style.PopupRounding = 4.0f;

    //colors.knob_background = ImColor { 16, 31, 69, 103 };
    //colors.knob_border = ImColor { 0, 18, 37, 218 };
    //colors.knob_circle = ImColor { 28, 176, 248, 218 };

    auto &imgui_colors = imgui_style.Colors;
    imgui_colors[ImGuiCol_WindowShadow] = ImColor { 0, 0, 0, 255 };
    imgui_colors[ImGuiCol_ChildBg] = ImColor { 10, 12, 14, 200 };
    imgui_colors[ImGuiCol_Border] = ImColor { 36, 36, 39, 25 };
    imgui_colors[ImGuiCol_FrameBg] = ImColor { 8, 8, 8, 230 };
    imgui_colors[ImGuiCol_TextSelectedBg] = ImColor { 70, 70, 70, 90 };
    imgui_colors[ImGuiCol_PopupBg] = ImColor { 27, 29, 32, 240 };
    imgui_colors[ImGuiCol_Header] = ImColor { 25, 25, 25, 79 };
    imgui_colors[ImGuiCol_HeaderHovered] = ImColor { 87, 87, 87, 148 };
    imgui_colors[ImGuiCol_HeaderActive] = ImColor { 108, 110, 111, 136 };
    imgui_colors[ImGuiCol_ScrollbarBg] = ImColor { 0, 0, 0, 0 };
    imgui_colors[ImGuiCol_ScrollbarGrab] = ImColor { 31, 43, 51, 107 };
    imgui_colors[ImGuiCol_ScrollbarGrabHovered] = ImColor { 45, 64, 77, 107 };
    imgui_colors[ImGuiCol_ScrollbarGrabActive] = ImColor { 51, 67, 79, 120 };

    auto font_awesome_config = ImFontConfig {};
    font_awesome_config.MergeMode = true;

    auto &fonts = *imgui_io.Fonts;
    fonts.AddFontFromMemoryCompressedTTF(
        museo_sans_cyrl_700_compressed_data,
        museo_sans_cyrl_700_compressed_size,
        16.0f
    );  // default
    fonts.AddFontFromMemoryCompressedTTF(
        font_awesome_6_pro_regular_400_compressed_data,
        font_awesome_6_pro_regular_400_compressed_size,
        14.0f,
        &font_awesome_config,
        font_awesome_glyph_range.data()
    );

    fonts.AddFontFromMemoryCompressedTTF(
        museo_sans_cyrl_900_compressed_data,
        museo_sans_cyrl_900_compressed_size,
        32.0f
    );  // logo, watermark
    fonts.AddFontFromMemoryCompressedTTF(
        font_awesome_6_pro_solid_900_compressed_data,
        font_awesome_6_pro_solid_900_compressed_size,
        32.0f,
        &font_awesome_config,
        font_awesome_glyph_range.data()
    );

    fonts.AddFontFromMemoryCompressedTTF(
        museo_sans_cyrl_900_compressed_data,
        museo_sans_cyrl_900_compressed_size,
        13.0f
    );  // features: slider
}

auto Gui::toggle_open() noexcept -> void {
    open = !open;
    ImGui::GetIO().MouseDrawCursor = open;
}

auto Gui::is_open() const noexcept -> bool {
    return open;
}

auto Gui::draw() noexcept -> void {
    auto &imgui_context = *ImGui::GetCurrentContext();
    const auto &imgui_io = imgui_context.IO;
    const auto &imgui_fonts = imgui_io.Fonts->Fonts;
    auto &imgui_style = imgui_context.Style;

    auto &window_drawlist = *imgui_context.CurrentWindow->DrawList;
    const auto &window_pos = imgui_context.CurrentWindow->Pos;
    const auto window_rect = ImRect { window_pos, window_pos + window_size };

    draw_tabs_background(imgui_style, window_drawlist, window_rect);
    draw_tabs_and_watermark_seperator(window_drawlist, window_rect);
    draw_watermark_background(imgui_style, window_drawlist, window_rect);
    draw_tabs_watermark_and_utility_content_seperator(window_drawlist, window_rect);
    draw_utility_background(imgui_style, window_drawlist, window_rect);
    draw_utility_and_background_seperator(window_drawlist, window_rect);
    draw_content_background(imgui_style, window_drawlist, window_rect);
    draw_logo(imgui_fonts, window_drawlist, window_rect);
    draw_watermark(imgui_fonts, window_drawlist, window_rect);
    draw_tabs(imgui_context, imgui_style, imgui_fonts, window_drawlist);
    draw_utility_save_button(imgui_fonts, window_drawlist);
    draw_content(imgui_style, window_rect);

    imgui_style.Alpha = 1.0f;
}

auto Gui::draw_tabs_background(
    const ImGuiStyle &imgui_style,
    ImDrawList &window_drawlist,
    const ImRect &window_rect
) noexcept -> void {
    window_drawlist.AddRectFilled(
        window_rect.Min,
        ImVec2 { window_rect.Min.x + 191.0f, window_rect.Max.y - 60.0f - 2.0f },
        IM_COL32(8, 8, 8, 217),
        imgui_style.WindowRounding,
        ImDrawFlags_RoundCornersTopLeft
    );
}

auto Gui::draw_tabs_and_watermark_seperator(ImDrawList &window_drawlist, const ImRect &window_rect) noexcept -> void {
    window_drawlist.AddRectFilled(
        ImVec2 { window_rect.Min.x, window_rect.Max.y - 60.0f - 2.0f },
        ImVec2 { window_rect.Min.x + 191.0f, window_rect.Max.y - 60.0f },
        IM_COL32(15, 15, 15, 214)
    );
}

auto Gui::draw_watermark_background(
    const ImGuiStyle &imgui_style,
    ImDrawList &window_drawlist,
    const ImRect &window_rect
) noexcept -> void {
    window_drawlist.AddRectFilled(
        ImVec2 { window_rect.Min.x, window_rect.Max.y - 60.0f },
        ImVec2 { window_rect.Min.x + 191.0f, window_rect.Max.y },
        IM_COL32(8, 8, 8, 217),
        imgui_style.WindowRounding,
        ImDrawFlags_RoundCornersBottomLeft
    );
}

auto Gui::draw_tabs_watermark_and_utility_content_seperator(
    ImDrawList &window_drawlist,
    const ImRect &window_rect
) noexcept -> void {
    window_drawlist.AddRectFilled(
        ImVec2 { window_rect.Min.x + 191.0f, window_rect.Min.y },
        ImVec2 { window_rect.Min.x + 191.0f + 2.0f, window_rect.Max.y },
        IM_COL32(15, 15, 15, 214)
    );
}

auto Gui::draw_utility_background(
    const ImGuiStyle &imgui_style,
    ImDrawList &window_drawlist,
    const ImRect &window_rect
) noexcept -> void {
    window_drawlist.AddRectFilled(
        ImVec2 { window_rect.Min.x + 191.0f + 2.0f, window_rect.Min.y },
        ImVec2 { window_rect.Max.x, window_rect.Min.y + 70.0f },
        IM_COL32(10, 10, 10, 230),
        imgui_style.WindowRounding,
        ImDrawFlags_RoundCornersTopRight
    );
}

auto Gui::draw_utility_and_background_seperator(ImDrawList &window_drawlist, const ImRect &window_rect) noexcept -> void {
    window_drawlist.AddRectFilled(
        ImVec2 { window_rect.Min.x + 191.0f + 2.0f, window_rect.Min.y + 70.0f },
        ImVec2 { window_rect.Max.x, window_rect.Min.y + 70.0f + 2.0f },
        IM_COL32(15, 15, 15, 214)
    );
}

auto Gui::draw_content_background(
    const ImGuiStyle &imgui_style,
    ImDrawList &window_drawlist,
    const ImRect &window_rect
) noexcept -> void {
    window_drawlist.AddRectFilled(
        ImVec2 { window_rect.Min.x + 191.0f + 2.0f, window_rect.Min.y + 70.0f + 2.0f },
        window_rect.Max,
        IM_COL32(8, 8, 8, 240),
        imgui_style.WindowRounding,
        ImDrawFlags_RoundCornersBottomRight
    );
}

auto Gui::draw_logo(
    const ImVector<ImFont *> &imgui_fonts,
    ImDrawList &window_drawlist,
    const ImRect &window_rect
) noexcept -> void {
    ImGui::SetCurrentFont(imgui_fonts[1]);
    const auto text = ImStrv { decltype(window_name)::access() };
    const auto text_size = ImGui::CalcTextSize(text);
    const auto text_pos = ImVec2 {
        (191.0f - text_size.x) * 0.5f,
        (70.0f - text_size.y) * 0.5f,
    };
    window_drawlist.AddText(
        window_rect.Min + text_pos + ImVec2 { -1.0f, -1.0f },
        IM_COL32(65, 186, 217, 255),
        text
    );
    window_drawlist.AddText(window_rect.Min + text_pos, IM_COL32(255, 255, 248, 255), text);
    ImGui::SetCurrentFont(imgui_fonts[0]);
}

auto Gui::draw_watermark(
    const ImVector<ImFont *> &imgui_fonts,
    ImDrawList &window_drawlist,
    const ImRect &window_rect
) noexcept -> void {
    window_drawlist.AddCircleFilled(
        ImVec2 {
            window_rect.Min.x + 30.0f,
            window_rect.Max.y - (60.0f * 0.5f),
        },
        19.0f,
        IM_COL32(0, 0, 0, 115)
    );
    window_drawlist.AddText(
        imgui_fonts[1],
        20.0f,
        ImVec2 {
            window_rect.Min.x + 21.0f,
            window_rect.Max.y - (60.0f * 0.5f + 11.0f),
        },
        IM_COL32(255, 255, 255, 255),
        ImStrv { XorStr<"\xef\x88\x9b">::access() }
    );
    window_drawlist.AddText(
        imgui_fonts[0],
        15.0f,
        ImVec2 {
            window_rect.Min.x + 58.0f,
            window_rect.Max.y - (60.0f * 0.5f + 18.0f),
        },
        IM_COL32(255, 255, 255, 255),
        ImStrv { XorStr<"Wyxather">::access() }
    );
    window_drawlist.AddText(
        imgui_fonts[0],
        15.0f,
        ImVec2 {
            window_rect.Min.x + 58.0f,
            window_rect.Max.y - (60.0f * 0.5f - 2.0f),
        },
        IM_COL32(70, 70, 70, 255),
        ImStrv { XorStr<"Build: ">::access() }
    );
    window_drawlist.AddText(
        imgui_fonts[0],
        15.0f,
        ImVec2 {
            window_rect.Min.x + (58.0f + 41.0f),
            window_rect.Max.y - (60.0f * 0.5f - 2.0f),
        },
        IM_COL32(0, 165, 243, 255),
        ImStrv { XorStr<__DATE__>::access() }
    );
}

auto Gui::draw_tabs(
    const ImGuiContext &imgui_context,
    ImGuiStyle &imgui_style,
    const ImVector<ImFont *> &imgui_fonts,
    ImDrawList &window_drawlist
) noexcept -> void {
    ImGui::SetCursorPos(ImVec2 {});
    ImGui::Dummy(ImVec2 { 0.0f, 70.0f + 1.0f - imgui_style.ItemSpacing.y });
    draw_tabs_group(
        imgui_fonts,
        window_drawlist,
        ImVec2 { 20.0f, 70.0f + 1.0f },
        ImStrv { XorStr<"Aimbot">::access() }
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\x81\x9b">::access() },
        ImStrv { XorStr<"Ragebot">::access() },
        1
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\x8b\xaa">::access() },
        ImStrv { XorStr<"Anti Aim">::access() },
        2
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\xa3\x8c">::access() },
        ImStrv { XorStr<"Legitbot">::access() },
        3
    );
    draw_tabs_group(
        imgui_fonts,
        window_drawlist,
        ImVec2 { 20.0f, 210.0f },
        ImStrv { XorStr<"Visuals">::access() }
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\x80\x87">::access() },
        ImStrv { XorStr<"Player">::access() },
        4
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\x95\xbe">::access() },
        ImStrv { XorStr<"World">::access() },
        5
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\xa2\xa9">::access() },
        ImStrv { XorStr<"View">::access() },
        6
    );
    draw_tabs_group(
        imgui_fonts,
        window_drawlist,
        ImVec2 { 20.0f, 349.0f },
        ImStrv { XorStr<"Miscellaneous">::access() }
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\x9f\x99">::access() },
        ImStrv { XorStr<"Main">::access() },
        7
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\x97\x94">::access() },
        ImStrv { XorStr<"Inventory">::access() },
        8
    );
    draw_tabs_button(
        imgui_context,
        imgui_style,
        window_drawlist,
        ImStrv { XorStr<"\xef\x80\x93">::access() },
        ImStrv { XorStr<"Configs">::access() },
        9
    );
}

auto Gui::draw_tabs_group(
    const ImVector<ImFont *> &imgui_fonts,
    ImDrawList &window_drawlist,
    const ImVec2 &group_pos,
    const ImStrv group_text
) const noexcept -> void {
    ImGui::SetCursorPos(group_pos);
    window_drawlist.AddText(
        imgui_fonts[1],
        14.0f,
        ImGui::GetCursorScreenPos(),
        IM_COL32(70, 70, 70, 255),
        group_text
    );
    ImGui::Dummy(ImVec2 { 0.0f, 14.0f });
}

auto Gui::draw_tabs_button(
    const ImGuiContext &imgui_context,
    ImGuiStyle &imgui_style,
    ImDrawList &window_drawlist,
    const ImStrv button_icon,
    const ImStrv button_label,
    const std::uint8_t index
) noexcept -> void {
    constexpr auto button_rounding = 5.0f;
    constexpr auto button_size = ImVec2 { 171.0f, 30.0f };
    constexpr auto button_offset = ImVec2 { 10.0f, 1.0f };
    static auto animations = std::map<std::uint8_t, float> {};
    auto &animation = animations[index];
    const auto button_label_size = ImGui::CalcTextSize(button_label);
    ImGui::SetCursorPos(ImGui::GetCursorPos() + button_offset);
    const auto button_pos = ImGui::GetCursorScreenPos();
    const auto button_text_pos = ImVec2 {
        button_pos.x,
        button_pos.y + (button_size.y - button_label_size.y) * 0.5f,
    };
    if ( ImGui::InvisibleButton(button_label, button_size) ) {
        active_tab = index;
    }
    if ( active_tab == index ) {
        animation = ImLerp(animation, 1.0f, imgui_context.IO.DeltaTime * 8.0f);
        imgui_style.Alpha = animation;
    } else {
        animation = ImLerp(animation, 0.0f, imgui_context.IO.DeltaTime * 8.0f);
    }
    window_drawlist.AddRectFilled(
        button_pos,
        button_pos + button_size,
        IM_COL32(39, 61, 71, static_cast<int>(72.0f * animation)),
        button_rounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddText(button_text_pos + ImVec2 { 13.0, -1.0f }, IM_COL32(0, 165, 243, 255), button_icon);
    window_drawlist.AddText(
        button_text_pos + ImVec2 { 40.0f, 0.0f },
        IM_COL32(255, 255, 255, 255),
        button_label
    );
}

auto Gui::draw_utility_save_button(const ImVector<ImFont *> &imgui_fonts, ImDrawList &window_drawlist) noexcept -> void {
    ImGui::SetCursorPos(ImVec2 {});
    ImGui::Dummy(ImVec2 {});
    ImGui::SameLine(191.0f + 2.0f);
    constexpr auto utility_save_button_rounding = 4.0;
    constexpr auto utility_save_button_offset = ImVec2 { 20.0f, 21.0f };
    constexpr auto utility_save_button_size = ImVec2 { 100.0f, 29.0f };
    const auto pos = ImGui::GetCursorScreenPos();
    const auto utility_save_button_pos = pos + utility_save_button_offset;
    ImGui::InvisibleButton(ImStrv { XorStr<"Save">::access() }, utility_save_button_size);
    window_drawlist.AddRect(
        utility_save_button_pos,
        utility_save_button_pos + utility_save_button_size,
        IM_COL32(53, 53, 53, 75),
        utility_save_button_rounding
    );
    window_drawlist.AddText(
        imgui_fonts[0],
        17.0f,
        utility_save_button_pos + ImVec2 { 20.0f, 5.0f },
        IM_COL32(186, 202, 203, 176),
        ImStrv { XorStr<"\xef\x83\x87">::access() }
    );
    window_drawlist.AddText(
        imgui_fonts[1],
        17.0f,
        utility_save_button_pos + ImVec2 { 49.0f, 6.0f },
        IM_COL32(186, 202, 203, 176),
        ImStrv { XorStr<"Save">::access() }
    );
}

auto Gui::draw_content(const ImGuiStyle &imgui_style, const ImRect &window_rect) const noexcept -> void {
    constexpr auto content_offset = ImVec2 { 191.0f + 2.0f, 70.0f + 2.0f };
    constexpr auto content_padding = ImVec2 { 20.0f, 20.0f };
    const auto content_size = window_size - content_offset - (content_padding * 2.0f);
    ImGui::SetNextWindowPos(
        window_rect.Min + content_offset + content_padding
        + ImVec2 { 0.0f, 10.0f * (1.0f - imgui_style.Alpha) }
    );
    if ( ImGui::BeginChild(
             ImStrv { XorStr<"Content">::access() },
             content_size,
             ImGuiChildFlags_::ImGuiChildFlags_None,
             ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
         ) ) {
        draw_content_group(content_size);
    }
    ImGui::EndChild();
}

auto Gui::draw_content_group(const ImVec2 &content_size) const noexcept -> void {
    constexpr auto content_group_spacing = ImVec2 { 10.0f, 0.0f };
    const auto content_group_width =
        content_size.x * 0.5f - content_group_spacing.x;
    const auto content_group = [&content_group_width](
                                   const ImStrv content_group_name,
                                   std::invocable auto features
                               ) noexcept {
        if ( ImGui::BeginChild(
                 content_group_name,
                 ImVec2 { content_group_width, 0.0f },
                 ImGuiChildFlags_::ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_::ImGuiChildFlags_Border
             ) ) {
            ImGui::TextUnformatted(content_group_name);
            ImGui::Spacing();
            const auto content_group_pos = ImGui::GetCursorScreenPos();
            ImGui::GetWindowDrawList()->AddLine(
                content_group_pos,
                content_group_pos + ImVec2 { content_group_width, 0.0f },
                IM_COL32(132, 132, 132, 29),
                2.0f
            );
            ImGui::Dummy(ImVec2 { 0.0f, 14.0f });
            std::invoke(features);
        }
        ImGui::EndChild();
        ImGui::Spacing();
    };

    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2 { 10.0f, 8.0f });

    if ( active_tab == 1 ) {
        ImGui::BeginGroup();
        content_group(ImStrv { XorStr<"Main">::access() }, []() noexcept {
            static bool b[5] {};
            static float f { 100.0f };
            draw_feature(ImStrv { XorStr<"Enabled">::access() }, b[0]);
            draw_feature(ImStrv { XorStr<"Peak Assist">::access() }, b[1]);
            draw_feature(ImStrv { XorStr<"Hide Shots">::access() }, b[2]);
            draw_feature(ImStrv { XorStr<"Double Tap">::access() }, b[3]);
            draw_feature(
                ImStrv { XorStr<"Field of View">::access() },
                f,
                0.0f,
                100.0f,
                ImStrv { XorStr<"%.0f">::access() }
            );
        });
        content_group(ImStrv { XorStr<"Accuracy">::access() }, []() noexcept {
            static bool b[2] {};
            draw_feature(ImStrv { XorStr<"Auto Scope">::access() }, b[0]);
            draw_feature(ImStrv { XorStr<"Auto Stop">::access() }, b[1]);
        });
        ImGui::EndGroup();
        ImGui::SameLine();
        ImGui::BeginGroup();
        content_group(ImStrv { XorStr<"Selection">::access() }, []() noexcept {
            static bool b[5] {};
            static float f { 100.0f };
            static int i { 100 };
            draw_feature(
                ImStrv { XorStr<"Hitboxes">::access() },
                b,
                {
                    ImStrv { XorStr<"Head">::access() },
                    ImStrv { XorStr<"Neck">::access() },
                    ImStrv { XorStr<"Body">::access() },
                    ImStrv { XorStr<"Leg">::access() },
                    ImStrv { XorStr<"Feet">::access() },
                }
            );
            draw_feature(ImStrv { XorStr<"Multipoint">::access() }, b[1]);
            draw_feature(
                ImStrv { XorStr<"Hit Chance">::access() },
                f,
                0.0f,
                100.0f,
                ImStrv { XorStr<"%.0f">::access() }
            );
            draw_feature(
                ImStrv { XorStr<"Minimum Damage">::access() },
                i,
                0,
                100,
                ImStrv { XorStr<"%.0f">::access() }
            );
            draw_feature(ImStrv { XorStr<"Penetrate Walls">::access() }, b[4]);
        });
        content_group(ImStrv { XorStr<"Safety">::access() }, []() noexcept {
            static bool b[3] {};
            static int i;
            draw_feature(
                ImStrv { XorStr<"Body Aim">::access() },
                i,
                {
                    ImStrv { XorStr<"Default">::access() },
                    ImStrv { XorStr<"Accuracy">::access() },
                }
            );
            draw_feature(ImStrv { XorStr<"Safe Points">::access() }, b[1]);
            draw_feature(ImStrv { XorStr<"Ensure Hitbox Safety">::access() }, b[2]);
        });
        ImGui::EndGroup();
    }

    ImGui::PopStyleVar();
}

auto Gui::draw_feature(const ImStrv name, bool &value) -> void {
    static auto animations = std::map<ImGuiID, Animation<bool>> {};
    const auto &imgui_context = *ImGui::GetCurrentContext();
    auto &window = *imgui_context.CurrentWindow;
    auto &window_drawlist = *window.DrawList;
    const auto id = window.GetID(&value);
    auto &animation = animations[id];
    const auto size = ImVec2 { ImGui::GetContentRegionAvail().x, 27.0f };
    const auto rect = ImRect { window.DC.CursorPos, window.DC.CursorPos + size };
    const auto button_rect = ImRect {
        ImVec2 { rect.Max.x - 25.0f, rect.Min.y },
        rect.Max,
    };
    const auto button_rect_center = button_rect.GetCenter();
    ImGui::ItemSize(size);
    ImGui::ItemAdd(rect, id);
    if ( ImGui::ButtonBehavior(button_rect, id, nullptr, nullptr) ) {
        value = !value;
    }
    animation.animate(imgui_context.IO.DeltaTime, value);
    const auto button_render_rect = ImRect {
        ImVec2 { button_rect.Min.x, button_rect_center.y - 5.0f },
        ImVec2 { button_rect.Max.x, button_rect_center.y + 5.0f },
    };
    window_drawlist.AddText(
        ImVec2 {
            rect.Min.x,
            rect.Min.y + (size.y - ImGui::CalcTextSize(name).y) * 0.5f,
        },
        animation.get_lerp<Animation<>::Color { 128, 128, 128, 255 }, Animation<>::Color { 255, 255, 255, 255 }>(),
        name
    );
    window_drawlist.AddRectFilled(
        button_render_rect.Min,
        button_render_rect.Max,
        animation.get_lerp<Animation<>::Color { 8, 8, 8, 230 }, Animation<>::Color { 16, 31, 69, 103 }>(),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddRect(
        button_render_rect.Min,
        button_render_rect.Max,
        animation.get_lerp<Animation<>::Color { 18, 18, 18, 200 }, Animation<>::Color { 0, 18, 37, 218 }>(),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddCircleFilled(
        ImLerp(
            ImVec2 { button_render_rect.Min.x + 7.0f, button_rect_center.y },
            ImVec2 { button_render_rect.Max.x - 7.0f, button_rect_center.y },
            animation.get_lerp()
        ),
        7.0f,
        animation.get_lerp<Animation<>::Color { 78, 78, 78, 200 }, Animation<>::Color { 28, 176, 248, 218 }>()
    );
}

auto Gui::draw_feature(const ImStrv name, float &value, const float min, const float max, const ImStrv format) -> void {
    constexpr auto grab_render_radius = 5.0f;
    static auto animations = std::map<ImGuiID, Animation<float>> {};
    auto &imgui_context = *ImGui::GetCurrentContext();
    auto &window = *imgui_context.CurrentWindow;
    auto &window_drawlist = *window.DrawList;
    const auto id = window.GetID(&value);
    auto &animation = animations[id];
    const auto size = ImVec2 { ImGui::GetContentRegionAvail().x, 27.0f };
    const auto rect = ImRect { window.DC.CursorPos, window.DC.CursorPos + size };
    animation.animate(imgui_context.IO.DeltaTime, value, min, max);
    ImGui::ItemSize(rect);
    ImGui::ItemAdd(rect, id, nullptr);
    window_drawlist.AddText(
        ImVec2 {
            rect.Min.x,
            rect.Min.y + (size.y - ImGui::CalcTextSize(name).y) * 0.5f,
        },
        IM_COL32(128, 128, 128, 255),
        name
    );
    ImGui::SetCurrentFont(ImGui::GetIO().Fonts->Fonts[2]);
    const auto value_text_size = ImVec2 { 19.0f, 13.0f };
    const auto value_text_height_offset = (size.y - value_text_size.y) * 0.5f;
    const auto value_text_rect = ImRect {
        ImVec2 { rect.Max.x - value_text_size.x, rect.Min.y + value_text_height_offset },
        ImVec2 { rect.Max.x, rect.Max.y - value_text_height_offset },
    };
    ImGui::SameLine();
    ImGui::SetCursorScreenPos(value_text_rect.Min - ImVec2 { 5.0f, 3.0f });
    if ( auto temp_value = value; ImGui::InputFloat(
             ImStrv { XorStr<"##">::access() },
             &temp_value,
             0.0f,
             0.0f,
             format.Begin,
             ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll
                 | ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsDecimal
                 | ImGuiInputTextFlags_::ImGuiInputTextFlags_EnterReturnsTrue
         ) ) {
        value = std::clamp(temp_value, min, max);
    }
    window_drawlist.AddRect(
        value_text_rect.Min - ImVec2 { 5.0f, 3.0f },
        value_text_rect.Max + ImVec2 { 5.0f, 3.0f },
        IM_COL32(18, 18, 18, 200),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    ImGui::SetCurrentFont(ImGui::GetIO().Fonts->Fonts[0]);
    const auto slider_rect = ImRect {
        ImVec2 {
            rect.Min.x + size.x * 0.5f,
            rect.Min.y,
        },
        ImVec2 {
            value_text_rect.Min.x - 10.0f,
            rect.Max.y,
        },
    };
    const auto clicked =
        ImGui::ItemHoverable(slider_rect, id, imgui_context.LastItemData.InFlags)
        && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left, id);
    const auto make_active = (clicked || imgui_context.NavActivateId == id);
    if ( make_active && clicked ) {
        ImGui::SetKeyOwner(ImGuiKey::ImGuiKey_MouseLeft, id);
    }
    if ( make_active ) {
        ImGui::SetActiveID(id, &window);
        ImGui::SetFocusID(id, &window);
        ImGui::FocusWindow(&window);
        imgui_context.ActiveIdUsingNavDirMask |=
            (1 << ImGuiDir_::ImGuiDir_Left) | (1 << ImGuiDir_::ImGuiDir_Right);
    }
    auto grab_rect = ImRect {};
    if ( ImGui::SliderBehavior(
             slider_rect,
             id,
             ImGuiDataType_::ImGuiDataType_Float,
             &value,
             &min,
             &max,
             format.Begin,
             ImGuiSliderFlags_::ImGuiSliderFlags_None,
             &grab_rect
         ) ) {
        ImGui::MarkItemEdited(id);
    }
    window_drawlist.AddRectFilled(
        ImVec2 { slider_rect.Min.x + grab_render_radius * 0.5f, slider_rect.Min.y + 11.5f },
        ImVec2 { slider_rect.Max.x - grab_render_radius * 0.5f, slider_rect.Max.y - 11.5f },
        IM_COL32(8, 8, 8, 230),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddRectFilled(
        ImVec2 { slider_rect.Min.x + grab_render_radius, slider_rect.Min.y + 11.5f },
        ImVec2 {
            ImLerp(
                slider_rect.Min.x + grab_render_radius,
                slider_rect.Max.x - grab_render_radius,
                animation.get_lerp()
            ),
            slider_rect.Max.y - 11.5f,
        },
        IM_COL32(28, 176, 248, 114),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddCircleFilled(
        ImVec2 {
            ImLerp(
                slider_rect.Min.x + grab_render_radius,
                slider_rect.Max.x - grab_render_radius,
                animation.get_lerp()
            ),
            (grab_rect.Min.y + grab_rect.Max.y) * 0.5f,
        },
        grab_render_radius,
        IM_COL32(28, 176, 248, 218)
    );
}

auto Gui::draw_feature(const ImStrv name, int &value, const int min, const int max, const ImStrv format) -> void {
    constexpr auto grab_render_radius = 5.0f;
    static auto animations = std::map<ImGuiID, Animation<int>> {};
    auto &imgui_context = *ImGui::GetCurrentContext();
    auto &window = *imgui_context.CurrentWindow;
    auto &window_drawlist = *window.DrawList;
    const auto id = window.GetID(&value);
    auto &animation = animations[id];
    const auto size = ImVec2 { ImGui::GetContentRegionAvail().x, 27.0f };
    const auto rect = ImRect { window.DC.CursorPos, window.DC.CursorPos + size };
    animation.animate(imgui_context.IO.DeltaTime, value, min, max);
    ImGui::ItemSize(rect);
    ImGui::ItemAdd(rect, id, nullptr);
    window_drawlist.AddText(
        ImVec2 {
            rect.Min.x,
            rect.Min.y + (size.y - ImGui::CalcTextSize(name).y) * 0.5f,
        },
        IM_COL32(128, 128, 128, 255),
        name
    );
    ImGui::SetCurrentFont(ImGui::GetIO().Fonts->Fonts[2]);
    const auto value_text_size = ImVec2 { 19.0f, 13.0f };
    const auto value_text_height_offset = (size.y - value_text_size.y) * 0.5f;
    const auto value_text_rect = ImRect {
        ImVec2 { rect.Max.x - value_text_size.x, rect.Min.y + value_text_height_offset },
        ImVec2 { rect.Max.x, rect.Max.y - value_text_height_offset },
    };
    ImGui::SameLine();
    ImGui::SetCursorScreenPos(value_text_rect.Min - ImVec2 { 5.0f, 3.0f });
    if ( auto temp_value = value; ImGui::InputInt(
             ImStrv { XorStr<"##">::access() },
             &temp_value,
             1,
             100,
             ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll
                 | ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsDecimal
                 | ImGuiInputTextFlags_::ImGuiInputTextFlags_EnterReturnsTrue
         ) ) {
        value = std::clamp(temp_value, min, max);
    }
    window_drawlist.AddRect(
        value_text_rect.Min - ImVec2 { 5.0f, 3.0f },
        value_text_rect.Max + ImVec2 { 5.0f, 3.0f },
        IM_COL32(18, 18, 18, 200),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    ImGui::SetCurrentFont(ImGui::GetIO().Fonts->Fonts[0]);
    const auto slider_rect = ImRect {
        ImVec2 {
            rect.Min.x + size.x * 0.5f,
            rect.Min.y,
        },
        ImVec2 {
            value_text_rect.Min.x - 10.0f,
            rect.Max.y,
        },
    };
    const auto clicked =
        ImGui::ItemHoverable(slider_rect, id, imgui_context.LastItemData.InFlags)
        && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left, id);
    const auto make_active = (clicked || imgui_context.NavActivateId == id);
    if ( make_active && clicked ) {
        ImGui::SetKeyOwner(ImGuiKey::ImGuiKey_MouseLeft, id);
    }
    if ( make_active ) {
        ImGui::SetActiveID(id, &window);
        ImGui::SetFocusID(id, &window);
        ImGui::FocusWindow(&window);
        imgui_context.ActiveIdUsingNavDirMask |=
            (1 << ImGuiDir_::ImGuiDir_Left) | (1 << ImGuiDir_::ImGuiDir_Right);
    }
    auto grab_rect = ImRect {};
    if ( ImGui::SliderBehavior(
             slider_rect,
             id,
             ImGuiDataType_::ImGuiDataType_S32,
             &value,
             &min,
             &max,
             format.Begin,
             ImGuiSliderFlags_::ImGuiSliderFlags_None,
             &grab_rect
         ) ) {
        ImGui::MarkItemEdited(id);
    }
    window_drawlist.AddRectFilled(
        ImVec2 { slider_rect.Min.x + grab_render_radius * 0.5f, slider_rect.Min.y + 11.5f },
        ImVec2 { slider_rect.Max.x - grab_render_radius * 0.5f, slider_rect.Max.y - 11.5f },
        IM_COL32(8, 8, 8, 230),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddRectFilled(
        ImVec2 { slider_rect.Min.x + grab_render_radius, slider_rect.Min.y + 11.5f },
        ImVec2 {
            ImLerp(
                slider_rect.Min.x + grab_render_radius,
                slider_rect.Max.x - grab_render_radius,
                animation.get_lerp()
            ),
            slider_rect.Max.y - 11.5f,
        },
        IM_COL32(28, 176, 248, 114),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddCircleFilled(
        ImVec2 {
            ImLerp(
                slider_rect.Min.x + grab_render_radius,
                slider_rect.Max.x - grab_render_radius,
                animation.get_lerp()
            ),
            (grab_rect.Min.y + grab_rect.Max.y) * 0.5f,
        },
        grab_render_radius,
        IM_COL32(28, 176, 248, 218)
    );
}

auto Gui::draw_feature(const ImStrv name, int &value, const std::initializer_list<ImStrv> items) noexcept -> void {
    static auto animations = std::map<ImGuiID, float> {};
    const auto &combo_preview_value = *(items.begin() + value);
    auto &imgui_context = *ImGui::GetCurrentContext();
    auto &window = *imgui_context.CurrentWindow;
    auto &window_drawlist = *window.DrawList;
    const auto id = window.GetID(&value);
    auto &animation = animations[id];
    const auto popup_id = ImHashStr(ImStrv { XorStr<"##ComboPopup">::access() }, id);
    const auto size = ImVec2 { ImGui::GetContentRegionAvail().x, 27.0f };
    const auto rect = ImRect { window.DC.CursorPos, window.DC.CursorPos + size };
    const auto button_rect = ImRect {
        ImVec2 { rect.Min.x + size.x * 0.5f, rect.Min.y },
        rect.Max,
    };
    ImGui::ItemSize(size);
    ImGui::ItemAdd(rect, id);
    window_drawlist.AddText(
        ImVec2 {
            rect.Min.x,
            rect.Min.y + (size.y - ImGui::CalcTextSize(name).y) * 0.5f,
        },
        IM_COL32(128, 128, 128, 255),
        name
    );
    const auto pressed = ImGui::ButtonBehavior(button_rect, id, nullptr, nullptr);
    auto popup_open = ImGui::IsPopupOpen(popup_id, ImGuiPopupFlags_None);
    if ( pressed && !popup_open ) {
        ImGui::OpenPopupEx(popup_id, ImGuiPopupFlags_None);
        popup_open = true;
    }
    window_drawlist.AddRectFilled(
        ImVec2 { button_rect.Min.x, button_rect.Min.y + 2.0f },
        ImVec2 { button_rect.Max.x, button_rect.Max.y - 2.0f },
        IM_COL32(8, 8, 8, 230),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddRect(
        ImVec2 { button_rect.Min.x, button_rect.Min.y + 2.0f },
        ImVec2 { button_rect.Max.x, button_rect.Max.y - 2.0f },
        IM_COL32(18, 18, 18, 200),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    ImGui::RenderTextClipped(
        ImVec2 { button_rect.Min.x + 5.0f, button_rect.Min.y + 5.0f },
        ImVec2 { button_rect.Max.x - 5.0f, button_rect.Max.y - 5.0f },
        combo_preview_value,
        nullptr
    );
    const auto arrow_pos = ImVec2 { button_rect.Max.x - 12.0f, button_rect.Min.y + 12.0f };
    const auto rot_angle = 0.75f * std::numbers::pi_v<float>;
    const auto cos_a = std::cosf(rot_angle);
    const auto sin_a = std::sinf(rot_angle);
    const ImVec2 points[] = {
        arrow_pos + ImRotate(ImVec2 { -5 * 0.5f, -5 * 0.5f }, cos_a, sin_a),
        arrow_pos + ImRotate(ImVec2 { 5 * 0.5f, -5 * 0.5f }, cos_a, sin_a),
        arrow_pos + ImRotate(ImVec2 { 5 * 0.5f, 5 * 0.5f }, cos_a, sin_a)
    };
    ImGui::PushClipRect(rect.Min, rect.Max, false);
    window_drawlist.AddShadowRect(
        ImVec2 { arrow_pos.x, rect.Min.y },
        ImVec2 { rect.Max.x, rect.Max.y },
        IM_COL32(0, 0, 0, 255),
        128.0f,
        ImVec2 {},
        ImDrawFlags_::ImDrawFlags_RoundCornersAll,
        4.0f
    );
    ImGui::PopClipRect();
    window_drawlist.AddPolyline(points, 3, IM_COL32(255, 255, 255, 255), ImDrawFlags_::ImDrawFlags_None, 2.0f);
    if ( !popup_open ) {
        animation = 0.0f;
        return;
    }
    animation = ImLerp(animation, 1.0f, imgui_context.IO.DeltaTime * 8.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_Alpha, animation);
    ImGui::BeginComboPopup(popup_id, button_rect, ImGuiComboFlags_::ImGuiComboFlags_None);
    for ( auto [i, item] : items | std::ranges::views::enumerate ) {
        const auto is_selected = (value == i);
        if ( ImGui::Selectable(*(items.begin() + i), is_selected) ) {
            value = static_cast<int>(i);
        }
        if ( is_selected ) {
            ImGui::SetItemDefaultFocus();
        }
    }
    ImGui::EndPopup();
    ImGui::PopStyleVar();
    imgui_context.BeginComboDepth--;
}

auto Gui::draw_feature(const ImStrv name, bool value[], const std::initializer_list<ImStrv> items) noexcept -> void {
    static auto animations = std::map<ImGuiID, float> {};
    auto &imgui_context = *ImGui::GetCurrentContext();
    auto &window = *imgui_context.CurrentWindow;
    auto &window_drawlist = *window.DrawList;
    const auto id = window.GetID(&value);
    auto &animation = animations[id];
    const auto popup_id = ImHashStr(ImStrv { XorStr<"##ComboPopup">::access() }, id);
    const auto size = ImVec2 { ImGui::GetContentRegionAvail().x, 27.0f };
    const auto rect = ImRect { window.DC.CursorPos, window.DC.CursorPos + size };
    const auto button_rect = ImRect {
        ImVec2 { rect.Min.x + size.x * 0.5f, rect.Min.y },
        rect.Max,
    };
    ImGui::ItemSize(size);
    ImGui::ItemAdd(rect, id);
    window_drawlist.AddText(
        ImVec2 {
            rect.Min.x,
            rect.Min.y + (size.y - ImGui::CalcTextSize(name).y) * 0.5f,
        },
        IM_COL32(128, 128, 128, 255),
        name
    );
    const auto pressed = ImGui::ButtonBehavior(button_rect, id, nullptr, nullptr);
    auto popup_open = ImGui::IsPopupOpen(popup_id, ImGuiPopupFlags_None);
    if ( pressed && !popup_open ) {
        ImGui::OpenPopupEx(popup_id, ImGuiPopupFlags_None);
        popup_open = true;
    }
    window_drawlist.AddRectFilled(
        ImVec2 { button_rect.Min.x, button_rect.Min.y + 2.0f },
        ImVec2 { button_rect.Max.x, button_rect.Max.y - 2.0f },
        IM_COL32(8, 8, 8, 230),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    window_drawlist.AddRect(
        ImVec2 { button_rect.Min.x, button_rect.Min.y + 2.0f },
        ImVec2 { button_rect.Max.x, button_rect.Max.y - 2.0f },
        IM_COL32(18, 18, 18, 200),
        4.0f,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
    auto add_comma = false;
    auto text_pos = ImVec2 { button_rect.Min.x + 5.0f, button_rect.Min.y + 5.0f };
    for ( auto [i, item] : items | std::ranges::views::enumerate ) {
        if ( !value[i] ) {
            continue;
        }
        if ( text_pos.x > rect.Max.x ) {
            break;
        }
        if ( add_comma ) {
            const auto comma = ImStrv { XorStr<", ">::access() };
            ImGui::RenderTextClipped(
                text_pos,
                ImVec2 { button_rect.Max.x - 5.0f, button_rect.Max.y - 5.0f },
                comma,
                nullptr
            );
            text_pos.x += ImGui::CalcTextSize(comma).x;
        } else {
            add_comma = true;
        }
        ImGui::RenderTextClipped(
            text_pos,
            ImVec2 { button_rect.Max.x - 5.0f, button_rect.Max.y - 5.0f },
            item,
            nullptr
        );
        text_pos.x += ImGui::CalcTextSize(item).x;
    }
    const auto arrow_pos = ImVec2 { button_rect.Max.x - 12.0f, button_rect.Min.y + 12.0f };
    const auto rot_angle = 0.75f * std::numbers::pi_v<float>;
    const auto cos_a = std::cosf(rot_angle);
    const auto sin_a = std::sinf(rot_angle);
    const ImVec2 points[] = {
        arrow_pos + ImRotate(ImVec2 { -5 * 0.5f, -5 * 0.5f }, cos_a, sin_a),
        arrow_pos + ImRotate(ImVec2 { 5 * 0.5f, -5 * 0.5f }, cos_a, sin_a),
        arrow_pos + ImRotate(ImVec2 { 5 * 0.5f, 5 * 0.5f }, cos_a, sin_a)
    };
    ImGui::PushClipRect(rect.Min, rect.Max, false);
    window_drawlist.AddShadowRect(
        ImVec2 { arrow_pos.x, rect.Min.y },
        ImVec2 { rect.Max.x, rect.Max.y },
        IM_COL32(0, 0, 0, 255),
        128.0f,
        ImVec2 {},
        ImDrawFlags_::ImDrawFlags_RoundCornersAll,
        4.0f
    );
    ImGui::PopClipRect();
    window_drawlist.AddPolyline(points, 3, IM_COL32(255, 255, 255, 255), ImDrawFlags_::ImDrawFlags_None, 2.0f);
    if ( !popup_open ) {
        animation = 0.0f;
        return;
    }
    animation = ImLerp(animation, 1.0f, imgui_context.IO.DeltaTime * 8.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_Alpha, animation);
    ImGui::BeginComboPopup(popup_id, button_rect, ImGuiComboFlags_::ImGuiComboFlags_None);
    for ( auto [i, item] : items | std::ranges::views::enumerate ) {
        if ( ImGui::Selectable(*(items.begin() + i), value[i], ImGuiSelectableFlags_::ImGuiSelectableFlags_DontClosePopups) ) {
            value[i] = !value[i];
        }
    }
    ImGui::EndPopup();
    ImGui::PopStyleVar();
    imgui_context.BeginComboDepth--;
}

Gui::BlurParams::BlurParams(float texel_size, float blur_amount) noexcept {
    constexpr auto compute_gaussian = [](const float value, const float theta) noexcept {
        constexpr auto v = 2.0f * std::numbers::pi_v<float>;
        return (1.0f / std::sqrt(v * theta))
            * std::exp(-(value * value) / (2.0f * theta * theta));
    };
    sample_offsets[0] = 0.0f;
    sample_weights[0] = compute_gaussian(0.0f, blur_amount);
    auto totalWeight = sample_weights[0].value;
    for ( auto i = std::size_t {}; i < (15 / 2); ++i ) {
        const auto offset = texel_size * (static_cast<float>(i) * 2.0f + 1.5f);
        const auto weight = compute_gaussian(static_cast<float>(i) + 1.0f, blur_amount);
        sample_offsets[i * 2 + 1] = offset;
        sample_offsets[i * 2 + 2] = -offset;
        sample_weights[i * 2 + 1] = weight;
        sample_weights[i * 2 + 2] = weight;
        totalWeight += weight * 2.0f;
    }
    for ( auto &sampleWeight : sample_weights ) {
        sampleWeight /= totalWeight;
    }
}

auto Gui::PostProcessDX9::initialize(IDirect3DDevice9 &direct3ddevice9) noexcept -> void {
    device = &direct3ddevice9;
}

auto Gui::PostProcessDX9::create_device_objects() noexcept -> void {
    device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &backbuffer);
    device->GetRenderTarget(0, &original_rendertarget);
    device->CreatePixelShader((const DWORD *)(blur_x_dx9), &pixelshader[0]);
    device->CreatePixelShader((const DWORD *)(blur_y_dx9), &pixelshader[1]);
    texture_size = ImVec2();
}

auto Gui::PostProcessDX9::invalidate_device_objects() noexcept -> void {
    SAFERELEASE(backbuffer)
    SAFERELEASE(original_rendertarget)
    for ( auto &ps : pixelshader ) {
        SAFERELEASE(ps)
    }
    SAFERELEASE(texture)
    SAFERELEASE(texture_surface)
}

auto Gui::PostProcessDX9::draw(ImDrawList &drawlist) noexcept -> void {
    if ( auto backbuffer_desc = D3DSURFACE_DESC {};
         backbuffer->GetDesc(&backbuffer_desc) == D3D_OK ) [[likely]] {
        if ( (backbuffer_desc.Width != static_cast<UINT>(texture_size.x))
             || (backbuffer_desc.Height != static_cast<UINT>(texture_size.y)) )
            [[unlikely]] {
            texture_size.x = static_cast<float>(backbuffer_desc.Width);
            texture_size.y = static_cast<float>(backbuffer_desc.Height);
            SAFERELEASE(texture)
            SAFERELEASE(texture_surface)
            device->CreateTexture(
                backbuffer_desc.Width,
                backbuffer_desc.Height,
                1,
                D3DUSAGE_RENDERTARGET,
                D3DFMT_A8R8G8B8,
                D3DPOOL_DEFAULT,
                &texture,
                nullptr
            );
            texture->GetSurfaceLevel(0, &texture_surface);
            pixelshader_const[0] = { 1.0f / texture_size.x, 8.0f };
            pixelshader_const[1] = { 1.0f / texture_size.y, 8.0f };
        }
    }
    const auto p_min = ImGui::GetWindowPos();
    const auto p_max = ImGui::GetWindowSize() + p_min;
    const auto uv_min = p_min / texture_size;
    const auto uv_max = p_max / texture_size;
    drawlist.AddCallback(begin, this);
    for ( auto i = 0; i < 8; ++i ) {
        drawlist.AddCallback(first_pass, this);
        drawlist.AddImage(texture, p_min, p_max, uv_min, uv_max);
        drawlist.AddCallback(second_pass, this);
        drawlist.AddImage(texture, p_min, p_max, uv_min, uv_max);
    }
    drawlist.AddCallback(end, this);
    drawlist.AddImageRounded(
        texture,
        p_min,
        p_max,
        uv_min,
        uv_max,
        IM_COL32_WHITE,
        ImGui::GetStyle().WindowRounding
    );
    drawlist.AddCallback(ImDrawCallback_ResetRenderState, nullptr);
}

auto Gui::PostProcessDX9::begin(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX9 *>(cmd->UserCallbackData);
    pp.device->StretchRect(pp.backbuffer, nullptr, pp.texture_surface, nullptr, D3DTEXF_NONE);
    pp.device->SetRenderTarget(0, pp.texture_surface);
}

auto Gui::PostProcessDX9::first_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX9 *>(cmd->UserCallbackData);
    pp.device->SetPixelShader(pp.pixelshader[0]);
    pp.device->SetPixelShaderConstantF(
        0,
        (const float *)(&pp.pixelshader_const[0]),
        (sizeof(pp.pixelshader_const[0]) / 16)
    );
}

auto Gui::PostProcessDX9::second_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX9 *>(cmd->UserCallbackData);
    pp.device->SetPixelShader(pp.pixelshader[1]);
    pp.device->SetPixelShaderConstantF(
        0,
        (const float *)(&pp.pixelshader_const[1]),
        (sizeof(pp.pixelshader_const[1]) / 16)
    );
}

auto Gui::PostProcessDX9::end(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX9 *>(cmd->UserCallbackData);
    pp.device->SetRenderTarget(0, pp.original_rendertarget);
}

auto Gui::PostProcessDX11::initialize(
    IDXGISwapChain &dxgiswapchain,
    ID3D11Device &d3d11device,
    ID3D11DeviceContext &d3d11devicecontext
) noexcept -> void {
    swapchain = &dxgiswapchain;
    device = &d3d11device;
    device_context = &d3d11devicecontext;
    texture_box.front = 0;
    texture_box.back = 1;
}

auto Gui::PostProcessDX11::create_device_objects() noexcept -> void {
    device_context->OMGetRenderTargets(1, &backbuffer_rtv, nullptr);
    if ( backbuffer_rtv != nullptr ) {
        backbuffer_rtv->GetResource((ID3D11Resource **)(&backbuffer));
    } else {
        swapchain->GetBuffer(0, IID_PPV_ARGS(&backbuffer));
        device->CreateRenderTargetView(backbuffer, nullptr, &backbuffer_rtv);
    }
    device->CreatePixelShader(blur_x_dx11, sizeof(blur_x_dx11), nullptr, &pixelshader[0]);
    device->CreatePixelShader(blur_y_dx11, sizeof(blur_y_dx11), nullptr, &pixelshader[1]);
    const auto bufferdesc = D3D11_BUFFER_DESC {
        .ByteWidth = sizeof(BlurParams),
        .Usage = D3D11_USAGE::D3D11_USAGE_DYNAMIC,
        .BindFlags = D3D11_BIND_FLAG::D3D11_BIND_CONSTANT_BUFFER,
        .CPUAccessFlags = D3D11_CPU_ACCESS_FLAG::D3D11_CPU_ACCESS_WRITE,
        .MiscFlags = 0,
        .StructureByteStride = 0,
    };
    for ( auto &psc : pixelshader_const ) {
        device->CreateBuffer(&bufferdesc, nullptr, &psc);
    }
    texture_size = ImVec2 {};
}

auto Gui::PostProcessDX11::invalidate_device_objects() noexcept -> void {
    SAFERELEASE(backbuffer)
    SAFERELEASE(backbuffer_rtv)
    const auto objects =
        std::ranges::views::zip(pixelshader, pixelshader_const, texture, texture_rtv, texture_srv);
    for ( auto &&[pixshad, pixshadcons, tex, tex_rtv, tex_srv] : objects ) {
        SAFERELEASE(pixshad);
        SAFERELEASE(pixshadcons);
        SAFERELEASE(tex);
        SAFERELEASE(tex_rtv);
        SAFERELEASE(tex_srv);
    }
}

void Gui::PostProcessDX11::set_rendertarget() const noexcept {
    return device_context->OMSetRenderTargets(1, &backbuffer_rtv, nullptr);
}

auto Gui::PostProcessDX11::draw(ImDrawList &drawlist) noexcept -> void {
    auto backbuffer_desc = CD3D11_TEXTURE2D_DESC {};
    backbuffer->GetDesc(&backbuffer_desc);
    if ( (backbuffer_desc.Width != static_cast<UINT>(texture_size.x))
         || (backbuffer_desc.Height != static_cast<UINT>(texture_size.y)) ) [[unlikely]] {
        texture_size.x = static_cast<float>(backbuffer_desc.Width);
        texture_size.y = static_cast<float>(backbuffer_desc.Height);
        backbuffer_desc.BindFlags |= D3D11_BIND_SHADER_RESOURCE | D3D11_BIND_RENDER_TARGET;
        const auto textures = std::ranges::views::zip(texture, texture_rtv, texture_srv);
        for ( auto &&[tex, tex_rtv, tex_srv] : textures ) {
            SAFERELEASE(tex);
            SAFERELEASE(tex_rtv);
            SAFERELEASE(tex_srv);
            if ( device->CreateTexture2D(&backbuffer_desc, nullptr, &tex) == S_OK )
                [[likely]] {
                const auto tex_rtv_desc = CD3D11_RENDER_TARGET_VIEW_DESC {
                    tex,
                    D3D11_RTV_DIMENSION_TEXTURE2D,
                };
                device->CreateRenderTargetView(tex, &tex_rtv_desc, &tex_rtv);
                const auto tex_srv_desc = CD3D11_SHADER_RESOURCE_VIEW_DESC {
                    tex,
                    D3D11_SRV_DIMENSION_TEXTURE2D,
                };
                device->CreateShaderResourceView(tex, &tex_srv_desc, &tex_srv);
            }
        }
        auto mapped_resource = D3D11_MAPPED_SUBRESOURCE {};
        if ( device_context->Map(pixelshader_const[0], 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_resource)
             == S_OK ) [[likely]] {
            const auto blur_params = BlurParams {
                1.0f / texture_size.x,
                8.0f,
            };
            std::memcpy(mapped_resource.pData, &blur_params, sizeof(blur_params));
            device_context->Unmap(pixelshader_const[0], 0);
        }
        if ( device_context->Map(pixelshader_const[1], 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_resource)
             == S_OK ) [[likely]] {
            const auto blur_params = BlurParams {
                1.0f / texture_size.y,
                8.0f,
            };
            std::memcpy(mapped_resource.pData, &blur_params, sizeof(blur_params));
            device_context->Unmap(pixelshader_const[1], 0);
        }
    }
    const auto window_size = ImGui::GetWindowSize();
    const auto window_pos = ImGui::GetWindowPos();
    texture_box.left =
        static_cast<UINT>(std::clamp(window_pos.x, 0.0f, texture_size.x));
    texture_box.top =
        static_cast<UINT>(std::clamp(window_pos.y, 0.0f, texture_size.y));
    texture_box.right = static_cast<UINT>(
        std::clamp(window_pos.x + window_size.x, 0.0f, texture_size.x)
    );
    texture_box.bottom = static_cast<UINT>(
        std::clamp(window_pos.y + window_size.y, 0.0f, texture_size.y)
    );
    const auto &p_min = window_pos;
    const auto p_max = ImVec2 {
        static_cast<float>(texture_box.right),
        static_cast<float>(texture_box.bottom),
    };
    const auto uv_min = p_min / texture_size;
    const auto uv_max = p_max / texture_size;
    drawlist.AddCallback(begin, this);
    for ( auto i = 0; i < 8; ++i ) {
        drawlist.AddCallback(first_pass, this);
        drawlist.AddImage(texture_srv[0], p_min, p_max, uv_min, uv_max);
        drawlist.AddCallback(second_pass, this);
        drawlist.AddImage(texture_srv[1], p_min, p_max, uv_min, uv_max);
    }
    drawlist.AddCallback(end, this);
    drawlist.AddImageRounded(
        texture_srv[0],
        p_min,
        p_max,
        uv_min,
        uv_max,
        IM_COL32_WHITE,
        ImGui::GetStyle().WindowRounding
    );
    drawlist.AddCallback(ImDrawCallback_ResetRenderState, nullptr);
}

auto Gui::PostProcessDX11::begin(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX11 *>(cmd->UserCallbackData);
    pp.device_context->CopyResource(pp.texture[0], pp.backbuffer);
}

auto Gui::PostProcessDX11::first_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX11 *>(cmd->UserCallbackData);
    pp.device_context->OMSetRenderTargets(1, &pp.texture_rtv[1], nullptr);
    pp.device_context->PSSetShader(pp.pixelshader[0], nullptr, 0);
    pp.device_context->PSSetConstantBuffers(0, 1, &pp.pixelshader_const[0]);
}

auto Gui::PostProcessDX11::second_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX11 *>(cmd->UserCallbackData);
    pp.device_context->OMSetRenderTargets(1, &pp.texture_rtv[0], nullptr);
    pp.device_context->PSSetShader(pp.pixelshader[1], nullptr, 0);
    pp.device_context->PSSetConstantBuffers(0, 1, &pp.pixelshader_const[1]);
}

auto Gui::PostProcessDX11::end(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void {
    const auto &pp = *static_cast<PostProcessDX11 *>(cmd->UserCallbackData);
    pp.device_context->OMSetRenderTargets(1, &pp.backbuffer_rtv, nullptr);
}
