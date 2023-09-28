#include "gui_builder.h"

#include "dependencies/imgui/imgui_custom.h"
#include "source/orion.h"
#include "source/resources/fonts/fontawesome.h"
#include "source/utilities/math.hpp"

orion::GuiBuilder::Font::Font(ImFont& font) noexcept :
    font(font),
    scale(font.Scale) {
    ImGui::PushFont(&font);
}

orion::GuiBuilder::Font::Font(ImFont& font, const float scale) noexcept :
    font(font),
    scale(font.Scale) {
    font.Scale = scale;
    ImGui::PushFont(&font);
}

orion::GuiBuilder::Font::~Font() noexcept {
    Font::font.Scale = Font::scale;
    ImGui::PopFont();
}

orion::GuiBuilder::Header::Header() noexcept {
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing,
        ImVec2(0.0f, 2.0f)
    );
    ImGui::BeginChild(
        utils::Fnv1a<"##Header">::value,
        ImVec2(191.0f, 0.0f),
        false,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
}

orion::GuiBuilder::Header::~Header() noexcept {
    ImGui::EndChild();
    ImGui::PopStyleVar();
}

orion::GuiBuilder::Header::Nav::Nav() noexcept {
    const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
    const auto size = ImGui::GetContentRegionAvail();
    ImGui::BeginChild(
        utils::Fnv1a<"##Header::Nav">::value,
        size - ImVec2(0.0f, 62.0f),
        false,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
    const auto& style = ImGui::GetStyle();
    ImGui::GetWindowDrawList()->AddRectFilled(
        pos,
        pos + size,
        IM_COL32(16, 16, 15, static_cast<int>(230.0f * style.Alpha)),
        style.WindowRounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersTopLeft
    );
    Nav::watermark();
}

orion::GuiBuilder::Header::Nav::~Nav() noexcept {
    ImGui::EndChild();
    Nav::profile();
}

auto orion::GuiBuilder::Header::Nav::watermark() noexcept -> void {
    const auto& style = ImGui::GetStyle();
    ImGui::BeginChild(
        utils::Fnv1a<"##Header::Nav::watermark">::value,
        ImVec2(0.0f, 62.0f),
        false,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
    {
        utils::String<"ORION"> label;
        const Font font(*orion.get_gui().get_fonts().watermark);
        const auto content_region_avail = ImGui::GetContentRegionAvail();
        const auto text_size = ImGui::CalcTextSize(label.c_str());
        const ImVec2 text_pos(
            (content_region_avail.x - text_size.x) * 0.5f,
            (content_region_avail.y - text_size.y) * 0.5f + 5.0f
        );
        ImGui::SetCursorPos(text_pos);
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_Text,
            ImVec4(0.25490f, 0.72941f, 0.85098f, 1.0f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_TextDisabled,
            ImVec4(0.25490f, 0.72941f, 0.85098f, 1.0f * style.Alpha)
        );
        ImGui::TextUnformatted(label.c_str());
        ImGui::PopStyleColor(2);
        ImGui::SetCursorPos(ImVec2(text_pos.x + 1.0f, text_pos.y));
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_Text,
            ImVec4(0.94118f, 0.94118f, 0.94118f, 1.0f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_TextDisabled,
            ImVec4(0.94118f, 0.94118f, 0.94118f, 1.0f * style.Alpha)
        );
        ImGui::TextUnformatted(label.c_str());
        ImGui::PopStyleColor(2);
    }
    ImGui::EndChild();
}

auto orion::GuiBuilder::Header::Nav::profile() noexcept -> void {
    auto&& draw_list = *ImGui::GetWindowDrawList();
    const auto& style = ImGui::GetStyle();
    const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
    const auto size = ImGui::GetContentRegionAvail();
    draw_list.AddRectFilled(
        pos - ImVec2(0.0f, 2.0f),
        pos + ImVec2(size.x, 0.0f),
        IM_COL32(20, 20, 19, static_cast<int>(230.0f * style.Alpha))
    );
    ImGui::BeginChild(
        utils::Fnv1a<"##Header::Nav::profile">::value,
        ImVec2(0.0f, 0.0f),
        false,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
    draw_list.AddRectFilled(
        pos,
        pos + size,
        IM_COL32(16, 16, 15, static_cast<int>(230.0f * style.Alpha)),
        style.WindowRounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersBottomLeft
    );
    const auto content_region_avail = ImGui::GetContentRegionAvail();
    const auto profile_picture_pos =
        pos + ImVec2(31.0f, content_region_avail.y * 0.5f);
    draw_list.AddCircleFilled(
        profile_picture_pos,
        19.0f,
        IM_COL32(8, 8, 8, static_cast<int>(255.0f * style.Alpha))
    );
    {
        const Font font(*orion.get_gui().get_fonts().profile);
        const auto profile_icon =
            FontAwesome::get<FontAwesome::Type::USER_SECRET>();
        draw_list.AddText(
            profile_picture_pos - ImGui::CalcTextSize(profile_icon) * 0.5f,
            IM_COL32(240, 240, 240, static_cast<int>(255.0f * style.Alpha)),
            profile_icon
        );
    }
    {
        utils::String<"Wyxather"> author;
        utils::String<"Build:" __DATE__> build;
        const Font font(*orion.get_gui().get_fonts().factory);
        const ImVec2 text_pos(profile_picture_pos.x + 29.0f, pos.y + 32.0f);
        draw_list.AddText(
            ImVec2(profile_picture_pos.x + 29.0f, pos.y + 12.0f),
            IM_COL32(240, 240, 240, static_cast<int>(255.0f * style.Alpha)),
            author.c_str()
        );
        draw_list.AddText(
            text_pos,
            IM_COL32(64, 69, 75, static_cast<int>(255.0f * style.Alpha)),
            ImStrv(build, &build[6])
        );
        draw_list.AddText(
            text_pos
                + ImVec2(
                    ImGui::CalcTextSize(ImStrv(build, &build[6]), false, 0.0f).x
                        + 5.0f,
                    0.0f
                ),
            IM_COL32(0, 149, 235, static_cast<int>(255.0f * style.Alpha)),
            &build[6]
        );
    }
    ImGui::EndChild();
}

orion::GuiBuilder::Header::Nav::Items::Items() noexcept {
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing,
        ImVec2(5.0f, 5.0f)
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_WindowPadding,
        ImVec2(10.0f, 8.0f)
    );
    ImGui::BeginChild(
        utils::Fnv1a<"##Header::Nav::Items">::value,
        ImVec2(0.0f, 0.0f),
        true,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
}

orion::GuiBuilder::Header::Nav::Items::~Items() noexcept {
    ImGui::EndChild();
    ImGui::PopStyleVar(2);
}

auto orion::GuiBuilder::Header::Nav::Items::button(
    const char* const str,
    const char* const icon,
    const std::uint32_t hash
) noexcept -> void {
    std::string preview = icon;
    preview += str;
    auto&& gui = orion.get_gui();
    const Font font(*gui.get_fonts().navbar);
    auto&& current_tab = gui.get_tabs()[hash];
    const auto& style = ImGui::GetStyle();
    if (current_tab.active) {
        if (current_tab.alpha < 1.0f)
            current_tab.alpha = std::clamp(
                current_tab.alpha
                    + ImGui::GetIO().DeltaTime * Gui::animation_speed,
                0.0f,
                1.0f
            );
    } else {
        if (current_tab.alpha > 0.0f)
            current_tab.alpha = std::clamp(
                current_tab.alpha
                    - ImGui::GetIO().DeltaTime * Gui::animation_speed,
                0.0f,
                1.0f
            );
    }
    current_tab.alpha_animated =
        style.Alpha * utils::Math::Easing::out_expo(current_tab.alpha);
    const auto button_alpha =
        style.Alpha * utils::Math::Easing::in_out_expo(current_tab.alpha);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 5.0f);
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ButtonTextAlign,
        ImVec2(0.0f, 0.5f)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Button,
        ImVec4(0.24706f, 0.24706f, 0.23529f, 1.0f * button_alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ButtonActive,
        ImVec4(0.24706f, 0.24706f, 0.23529f, 1.0f * button_alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ButtonHovered,
        ImVec4(0.24706f, 0.24706f, 0.23529f, 1.0f * button_alpha)
    );
    if (ImGui::ButtonIcon(
            preview.c_str(),
            ImVec2(171.0f, 30.0f),
            IM_COL32(0, 149, 235, static_cast<int>(255.0f * style.Alpha))
        )) {
        if (auto& last_active_tab = gui.get_last_active_tab();
            last_active_tab != nullptr) {
            if (last_active_tab != &current_tab
                && last_active_tab->alpha == 1.0f) {
                last_active_tab->active = false;
                last_active_tab = &current_tab;
                last_active_tab->active = true;
            }
        } else {
            last_active_tab = &current_tab;
            last_active_tab->active = true;
        }
    }
    ImGui::PopStyleVar(2);
    ImGui::PopStyleColor(3);
}

auto orion::GuiBuilder::Header::Nav::Items::text(const char* const str) noexcept
    -> void {
    const auto& style = ImGui::GetStyle();
    const Font font(*orion.get_gui().get_fonts().factory, (14.0f / 15.0f));
    if (Items::first_text_call)
        ImGui::Dummy(ImVec2(0.0f, 10.0f));
    else
        Items::first_text_call = true;
    ImGui::Dummy(ImVec2(5.0f, 0.0f));
    ImGui::SameLine();
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.25098f, 0.27059f, 0.29412f, 1.0f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_TextDisabled,
        ImVec4(0.25098f, 0.27059f, 0.29412f, 1.0f * style.Alpha)
    );
    ImGui::TextUnformatted(str);
    ImGui::PopStyleColor(2);
}

orion::GuiBuilder::Body::Body() noexcept {
    ImGui::SameLine();
    auto&& draw_list = *ImGui::GetWindowDrawList();
    const auto& style = ImGui::GetStyle();
    const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
    const auto size = ImGui::GetContentRegionAvail();
    draw_list.AddRectFilled(
        pos - ImVec2(2.0f, 0.0f),
        pos + ImVec2(0.0f, size.y),
        IM_COL32(20, 20, 19, static_cast<int>(230.0f * style.Alpha))
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing,
        ImVec2(0.0f, 2.0f)
    );
    ImGui::BeginChild(
        utils::Fnv1a<"##Body">::value,
        ImVec2(0.0f, 0.0f),
        false,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
    draw_list.AddRectFilled(
        pos,
        pos + size,
        IM_COL32(16, 16, 15, static_cast<int>(230.0f * style.Alpha)),
        style.WindowRounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersBottomRight
            | ImDrawFlags_::ImDrawFlags_RoundCornersTopRight
    );
}

orion::GuiBuilder::Body::~Body() noexcept {
    ImGui::EndChild();
    ImGui::PopStyleVar();
}

orion::GuiBuilder::Body::Head::Head() noexcept :
    font(*orion.get_gui().get_fonts().head) {
    const auto& style = ImGui::GetStyle();
    ImGui::BeginChild(
        utils::Fnv1a<"##Body::Head">::value,
        ImVec2(0.0f, 70.0f),
        false,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
    const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
    ImGui::GetWindowDrawList()->AddRectFilled(
        pos,
        pos + ImGui::GetContentRegionAvail(),
        IM_COL32(8, 8, 8, static_cast<int>(255.0f * style.Alpha)),
        style.WindowRounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersTopRight
    );
}

orion::GuiBuilder::Body::Head::~Head() noexcept {
    ImGui::EndChild();
}

auto orion::GuiBuilder::Body::Head::save() const noexcept -> void {
    const auto label =
        std::string(FontAwesome::get<FontAwesome::Type::FLOPPY_DISK>())
        + utils::String<"    ">().c_str() + utils::String<"Save">().c_str();
    const auto alpha = ImGui::GetStyle().Alpha * 1.0f;
    ImGui::SetCursorPos(ImVec2(18.0f, 21.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.58431f, 0.67843f, 0.71765f, alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Border,
        ImVec4(0.09804f, 0.09804f, 0.09804f, alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Button,
        ImVec4(0.0f, 0.0f, 0.0f, 0.0f)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ButtonActive,
        ImVec4(0.08627f, 0.08627f, 0.09412f, alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ButtonHovered,
        ImVec4(0.08235f, 0.08235f, 0.08627f, alpha)
    );
    if (ImGui::Button(label.c_str(), ImVec2(100.0f, 29.0f))) {
        auto&& config = orion.get_config();
        config.save();
        config.update();
    }
    ImGui::PopStyleVar(2);
    ImGui::PopStyleColor(5);
}

auto orion::GuiBuilder::Body::Head::create() const noexcept -> void {
    const auto label =
        std::string(FontAwesome::get<FontAwesome::Type::FILE_PLUS>())
        + utils::String<"    ">().c_str() + utils::String<"Create">().c_str();
    const auto alpha = ImGui::GetStyle().Alpha * 1.0f;
    ImGui::SameLine(0.0f, 20.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3.0f);
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Button,
        ImVec4(0.00000f, 0.43529f, 0.69412f, alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ButtonActive,
        ImVec4(0.00000f, 0.54510f, 0.87451f, alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ButtonHovered,
        ImVec4(0.00000f, 0.52549f, 0.84314f, alpha)
    );
    if (ImGui::Button(label.c_str(), ImVec2(130.0f, 29.0f))) {
        auto&& config = orion.get_config();
        config.create();
        config.update();
    }
    ImGui::PopStyleVar();
    ImGui::PopStyleColor(3);
}

auto orion::GuiBuilder::Body::Head::combo(
    const char* const items,
    int& value
) noexcept -> bool {
    const auto& style = ImGui::GetStyle();
    ImGui::SameLine(0.0f, 20.0f);
    ImGui::SetNextItemWidth(189.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_FramePadding,
        ImVec2(6.0f, 6.0f)
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing,
        ImVec2(8.0f, 16.0f)
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_WindowPadding,
        ImVec2(10.0f, 7.0f)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Border,
        ImVec4(0.09804f, 0.09804f, 0.09804f, 1.0f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.56471f, 0.61569f, 0.64706f, 1.0f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Header,
        ImVec4(0.04706f, 0.04706f, 0.04706f, 0.78431f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_HeaderActive,
        ImVec4(0.03137f, 0.03137f, 0.03137f, 0.78431f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_HeaderHovered,
        ImVec4(0.06275f, 0.06275f, 0.06275f, 0.78431f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Button,
        ImVec4(0.04706f, 0.04706f, 0.04706f, 1.0f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ButtonHovered,
        ImVec4(0.08235f, 0.08235f, 0.08627f, 1.0f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_FrameBg,
        ImVec4(0.04706f, 0.04706f, 0.04706f, 1.0f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_FrameBgHovered,
        ImVec4(0.08235f, 0.08235f, 0.08627f, 1.0f * style.Alpha)
    );
    const auto result = ImGui::Combo(
        utils::String<"##Body::Head::combo">().c_str(),
        &value,
        items
    );
    ImGui::PopStyleVar(6);
    ImGui::PopStyleColor(9);
    return result;
}

orion::GuiBuilder::Body::Content::Content() noexcept {
    const auto& style = ImGui::GetStyle();
    ImGui::BeginChild(
        utils::Fnv1a<"##Body::Content">::value,
        ImVec2(),
        false,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
    const auto pos = ImGui::GetWindowPos();
    ImGui::GetWindowDrawList()->AddRectFilled(
        pos,
        pos + ImGui::GetContentRegionAvail(),
        IM_COL32(8, 8, 8, static_cast<int>(255.0f * style.Alpha)),
        style.WindowRounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersBottomRight
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_WindowPadding,
        ImVec2(0.0f, 15.0f)
    );
    ImGui::BeginChild(
        utils::Fnv1a<"##Body::ContentChild">::value,
        ImGui::GetContentRegionAvail() - ImVec2(18.0f, 0.0f),
        true,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
}

orion::GuiBuilder::Body::Content::~Content() noexcept {
    ImGui::EndChild();
    ImGui::PopStyleVar();
    ImGui::EndChild();
}

orion::GuiBuilder::Body::Content::Panel::Panel(const std::uint32_t hash
) noexcept {
    const auto& gui = orion.get_gui();
    if (const auto tab = gui.get_tabs().find(hash);
        tab == nullptr || !tab->active) {
        Panel::resume = false;
    } else {
        Panel::resume = true;
        const auto& style = ImGui::GetStyle();
        ImGui::PushStyleVar(
            ImGuiStyleVar_::ImGuiStyleVar_Alpha,
            style.Alpha * tab->alpha
        );
        ImGui::PushStyleVar(
            ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha,
            style.Alpha * tab->alpha
        );
        ImGui::PushStyleVar(
            ImGuiStyleVar_::ImGuiStyleVar_WindowPadding,
            ImVec2(18.0f, 0.0f)
        );
        ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ScrollbarSize, 9.0f);
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ScrollbarBg,
            ImVec4(0.0f, 0.0f, 0.0f, 0.0f)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ScrollbarGrab,
            ImVec4(0.09412f, 0.12157f, 0.14510f, 1.0f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ScrollbarGrabActive,
            ImVec4(0.12941f, 0.16863f, 0.19608f, 1.0f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ScrollbarGrabHovered,
            ImVec4(0.10980f, 0.14118f, 0.16863f, 1.0f * style.Alpha)
        );
        const auto vertical_offset = ImGui::GetContentRegionAvail().y * 0.5f;
        ImGui::SetCursorPos(
            ImGui::GetCursorPos()
            + ImVec2(
                0.0f,
                vertical_offset
                    - vertical_offset
                        * gui.get_last_active_tab()->alpha_animated
            )
        );
        ImGui::BeginChild(
            utils::Fnv1a<"##Body::Content::Main::Panel">::value,
            ImVec2(),
            true,
            ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
                | ImGuiWindowFlags_::ImGuiWindowFlags_NoTitleBar
                | ImGuiWindowFlags_::ImGuiWindowFlags_NoResize
                | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse
                | ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar
                | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
                | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
        );
    }
}

orion::GuiBuilder::Body::Content::Panel::~Panel() noexcept {
    if (Panel::resume) {
        ImGui::EndChild();
        ImGui::PopStyleVar(4);
        ImGui::PopStyleColor(4);
    }
}

orion::GuiBuilder::Body::Content::Panel::Config::Config() noexcept {
    ImGui::Dummy(ImVec2(0.0f, 1.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ChildRounding, 3.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3.0f);
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing,
        ImVec2(0.0f, 10.0f)
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_WindowPadding,
        ImVec2(8.0f, 7.0f)
    );
    const auto alpha = ImGui::GetStyle().Alpha * 1.0f;
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ChildBg,
        ImVec4(0.047059f, 0.047059f, 0.047059f, alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Border,
        ImVec4(0.086275f, 0.086275f, 0.086275f, alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_BorderShadow,
        ImVec4(0.019608f, 0.019608f, 0.019608f, alpha)
    );

    auto&& config = orion.get_config();
    const auto& files = config.get_files();
    for (auto&& file : files) {
        auto resizing = false;

        switch (
            Config::draw(file.name, file.time, file.active, config.get_input())
        ) {
            default:
                break;
            case Event::SAVE:
                config.save();
                break;
            case Event::LOAD:
                config.load(file);
                break;
            case Event::REMOVE:
                config.remove(file);
                resizing = true;
                break;
            case Event::RENAME:
                config.rename(file);
                break;
        }

        config.update();

        if (resizing)
            break;
    }
}

orion::GuiBuilder::Body::Content::Panel::Config::~Config() noexcept {
    ImGui::PopStyleVar(5);
    ImGui::PopStyleColor(3);
}

auto orion::GuiBuilder::Body::Content::Panel::Config::draw(
    const std::string_view name,
    const std::string_view time,
    const bool active,
    std::array<char, 260>& input
) const noexcept -> Event {
    auto result = Event::UNDEFINED;

    ImGui::BeginChild(
        name.data(),
        ImVec2(0.0f, 54.0f),
        true,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoResize
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar
    );

    const auto& style = ImGui::GetStyle();
    const auto pos = ImGui::GetCursorPos();

    if (active) {
        ImGui::SetCursorPos(
            pos + ImVec2(ImGui::GetContentRegionAvail().x - 90.0f, 6.0f)
        );
        ImGui::PushStyleVar(
            ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize,
            1.0f
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_Border,
            ImVec4(0.235294f, 0.352941f, 0.423529f, 1.000000f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_Button,
            ImVec4(0.043137f, 0.050980f, 0.050980f, 1.000000f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ButtonActive,
            ImVec4(0.133333f, 0.156863f, 0.156863f, 1.000000f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ButtonHovered,
            ImVec4(0.078431f, 0.094118f, 0.094118f, 1.000000f * style.Alpha)
        );
        if (ImGui::Button(
                std::string(
                    std::string(
                        FontAwesome::get<FontAwesome::Type::FLOPPY_DISK>()
                    )
                    + utils::String<"    ">().c_str()
                    + utils::String<"Save">().c_str()
                )
                    .c_str(),
                ImVec2(90.0f, 27.0f)
            ))
            result = Event::SAVE;
        ImGui::PopStyleVar();
        ImGui::PopStyleColor(4);
    } else {
        ImGui::SetCursorPos(
            pos + ImVec2(ImGui::GetContentRegionAvail().x - 90.0f, 6.0f)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_Button,
            ImVec4(0.000000f, 0.435294f, 0.694118f, 1.000000f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ButtonActive,
            ImVec4(0.000000f, 0.545098f, 0.874510f, 1.000000f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ButtonHovered,
            ImVec4(0.000000f, 0.525490f, 0.843137f, 1.000000f * style.Alpha)
        );
        if (ImGui::Button(
                std::string(
                    std::string(FontAwesome::get<FontAwesome::Type::DOWNLOAD>())
                    + utils::String<"    ">().c_str()
                    + utils::String<"Load">().c_str()
                )
                    .c_str(),
                ImVec2(90.0f, 27.0f)
            ))
            result = Event::LOAD;
        ImGui::PopStyleColor(3);
    }

    if (!utils::Fnv1a<"Default">::match(name.data())) {
        static std::string last_config_name;
        static auto popup_alpha = 0.0f;
        const auto content_region_avail = ImGui::GetContentRegionAvail();

        ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_Button, ImVec4());
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ButtonActive,
            ImVec4(0.188235f, 0.188235f, 0.188235f, 1.000000f * style.Alpha)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_ButtonHovered,
            ImVec4(0.125490f, 0.125490f, 0.125490f, 1.000000f * style.Alpha)
        );

        ImGui::SetCursorPos(
            pos + ImVec2(content_region_avail.x - 119.0f, 10.0f)
        );
        if (ImGui::Button(FontAwesome::get<FontAwesome::Type::TRASH_CAN>()))
            result = Event::REMOVE;

        utils::String<"##Menu::Body::Content::Main::Panel::Config::Rename">
            window_rename;

        ImGui::SetCursorPos(
            pos + ImVec2(content_region_avail.x - 148.0f, 10.0f)
        );
        if (ImGui::Button(FontAwesome::get<FontAwesome::Type::FILE_SIGNATURE>()
            )) {
            ImGui::OpenPopup(window_rename.c_str());
            strcpy_s(input.data(), input.size(), name.data());
            last_config_name = name;
            popup_alpha = 0.0f;
        }

        ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_Alpha, popup_alpha);
        ImGui::SetNextWindowSize(
            ImVec2(256.0f, 35.0f) * style.Alpha,
            ImGuiCond_::ImGuiCond_Always
        );
        if (ImGui::BeginPopup(
                window_rename.c_str(),
                ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar
            )) {
            ImGui::PushStyleColor(
                ImGuiCol_::ImGuiCol_FrameBg,
                ImVec4(0.031373f, 0.031373f, 0.031373f, 0.941176f * style.Alpha)
            );
            ImGui::PushStyleColor(
                ImGuiCol_::ImGuiCol_TextSelectedBg,
                ImVec4(0.250980f, 0.250980f, 0.250980f, 0.768627f * style.Alpha)
            );
            ImGui::InputText(
                window_rename.c_str(),
                input.data(),
                input.size(),
                ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter,
                Config::filter_config_name
            );
            ImGui::PopStyleColor(2);
            ImGui::EndPopup();
            result = Event::INPUT;
            popup_alpha =
                std::clamp(popup_alpha + ImGui::GetIO().DeltaTime, 0.f, 1.f);
        } else if (last_config_name == name && input.data() != name) {
            last_config_name.clear();
            result = Event::RENAME;
        }

        ImGui::PopStyleVar();
        ImGui::PopStyleColor(3);
    }

    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing,
        ImVec2(0.0f, 7.0f)
    );
    ImGui::SetCursorPos(pos);
    {
        const Gui::PushFont font(
            orion.get_gui().get_fonts().factory,
            (17.0f / 15.0f)
        );
        ImGui::PushStyleColor(
            ImGuiCol_::ImGuiCol_Text,
            ImVec4(0.941176f, 0.941176f, 0.941176f, 1.000000f * style.Alpha)
        );
        ImGui::TextUnformatted(name.data());
        ImGui::PopStyleColor();
    }

    const auto description_pos = ImGui::GetCursorPos();

    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.647059f, 0.670588f, 0.698039f, 1.000000f * style.Alpha)
    );
    ImGui::TextUnformatted(utils::String<"Modified: ">().c_str());
    ImGui::PopStyleColor();
    ImGui::SameLine();

    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.262745f, 0.513726f, 0.658824f, 1.000000f * style.Alpha)
    );
    ImGui::TextUnformatted(time.data());
    ImGui::PopStyleColor();
    ImGui::SameLine(0.0f, 14.0f);

    ImGui::SetCursorPos(description_pos + ImVec2(180.0f, 0.0f));
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.647059f, 0.670588f, 0.698039f, 1.000000f * style.Alpha)
    );
    ImGui::TextUnformatted(utils::String<"Author: ">().c_str());
    ImGui::PopStyleColor();
    ImGui::SameLine();

    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.262745f, 0.513726f, 0.658824f, 1.000000f * style.Alpha)
    );
    ImGui::TextUnformatted(utils::String<"Wyxather">().c_str());
    ImGui::PopStyleColor();

    ImGui::PopStyleVar();

    ImGui::EndChild();

    return result;
}

auto orion::GuiBuilder::Body::Content::Panel::Config::filter_config_name(
    ImGuiInputTextCallbackData* const data
) noexcept -> int {
    switch (data->EventChar) {
        case ('A'):
            return 0;
        case ('B'):
            return 0;
        case ('C'):
            return 0;
        case ('D'):
            return 0;
        case ('E'):
            return 0;
        case ('F'):
            return 0;
        case ('G'):
            return 0;
        case ('H'):
            return 0;
        case ('I'):
            return 0;
        case ('J'):
            return 0;
        case ('K'):
            return 0;
        case ('L'):
            return 0;
        case ('M'):
            return 0;
        case ('N'):
            return 0;
        case ('O'):
            return 0;
        case ('P'):
            return 0;
        case ('Q'):
            return 0;
        case ('R'):
            return 0;
        case ('S'):
            return 0;
        case ('T'):
            return 0;
        case ('U'):
            return 0;
        case ('V'):
            return 0;
        case ('W'):
            return 0;
        case ('X'):
            return 0;
        case ('Y'):
            return 0;
        case ('Z'):
            return 0;
        case ('a'):
            return 0;
        case ('b'):
            return 0;
        case ('c'):
            return 0;
        case ('d'):
            return 0;
        case ('e'):
            return 0;
        case ('f'):
            return 0;
        case ('g'):
            return 0;
        case ('h'):
            return 0;
        case ('i'):
            return 0;
        case ('j'):
            return 0;
        case ('k'):
            return 0;
        case ('l'):
            return 0;
        case ('m'):
            return 0;
        case ('n'):
            return 0;
        case ('o'):
            return 0;
        case ('p'):
            return 0;
        case ('q'):
            return 0;
        case ('r'):
            return 0;
        case ('s'):
            return 0;
        case ('t'):
            return 0;
        case ('u'):
            return 0;
        case ('v'):
            return 0;
        case ('w'):
            return 0;
        case ('x'):
            return 0;
        case ('y'):
            return 0;
        case ('z'):
            return 0;
        case ('0'):
            return 0;
        case ('1'):
            return 0;
        case ('2'):
            return 0;
        case ('3'):
            return 0;
        case ('4'):
            return 0;
        case ('5'):
            return 0;
        case ('6'):
            return 0;
        case ('7'):
            return 0;
        case ('8'):
            return 0;
        case ('9'):
            return 0;
        case ('-'):
            return 0;
        case (' '):
            return 0;
    }
    return 1;
}

orion::GuiBuilder::Body::Content::Panel::Table::Table() noexcept {
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_CellPadding,
        ImVec2(7.5f, ImGui::GetStyle().CellPadding.y)
    );
    Table::resume = ImGui::BeginTable(
        utils::String<"##Body::Content::Panel::Table">().c_str(),
        2
    );
    if (Table::resume)
        ImGui::TableNextRow();
}

orion::GuiBuilder::Body::Content::Panel::Table::~Table() noexcept {
    if (Table::resume)
        ImGui::EndTable();
    ImGui::PopStyleVar();
}

auto orion::GuiBuilder::Body::Content::Panel::Table::begin_group(
    const char* const name,
    const std::uint32_t hash,
    const bool next_column
) noexcept -> void {
    constexpr auto title_height = 23.00f;
    constexpr auto line_width_offset = 4.00f;
    constexpr auto line_height = 2.00f;
    constexpr auto seperator_height = 18.00f;

    const auto& style = ImGui::GetStyle();
    auto&& gui = orion.get_gui();
    auto&& last_active_group = gui.get_last_active_group();
    last_active_group = &gui.get_last_active_tab()->groups[hash];

    if (next_column)
        ImGui::TableNextColumn();

    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_CellPadding,
        ImVec2(0.0f, 5.0f)
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_WindowPadding,
        ImVec2(10.0f, 8.0f)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Border,
        ImVec4(0.0f, 0.0f, 0.0f, 0.0f)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_ChildBg,
        ImVec4(0.039215f, 0.039215f, 0.047058f, 1.0f * style.Alpha)
    );
    ImGui::BeginChild(
        hash,
        ImVec2(
            0.0f,
            title_height + line_height + seperator_height
                + style.ItemSpacing.y * 2.0f
                + (21.0f + style.CellPadding.y * 2.0f)
                    * static_cast<float>(last_active_group->widget_count)
                + style.WindowPadding.y
        ),
        true,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );

    const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos()
        + ImVec2(-line_width_offset, title_height);
    ImGui::GetWindowDrawList()->AddRectFilled(
        pos,
        pos
            + ImVec2(
                ImGui::GetContentRegionAvail().x + line_width_offset * 2.0f,
                line_height
            ),
        IM_COL32(24, 24, 24, static_cast<int>(255.0f * style.Alpha))
    );

    const Font font(*orion.get_gui().get_fonts().factory, (16.f / 15.f));
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_Text,
        ImVec4(0.9411764f, 0.9411764f, 0.9411764f, 1.0f * style.Alpha)
    );
    ImGui::PushStyleColor(
        ImGuiCol_::ImGuiCol_TextDisabled,
        ImVec4(0.9411764f, 0.9411764f, 0.9411764f, 1.0f * style.Alpha)
    );
    ImGui::TextUnformatted(name);
    ImGui::PopStyleColor(2);

    ImGui::Dummy(ImVec2(0.0f, seperator_height));
}

auto orion::GuiBuilder::Body::Content::Panel::Table::end_group() noexcept
    -> void {
    ImGui::EndChild();
    ImGui::Dummy(ImVec2(0.0f, 5.0f));
    ImGui::PopStyleVar(2);
    ImGui::PopStyleColor(2);
}
