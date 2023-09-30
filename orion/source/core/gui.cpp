#include "gui.h"

#include "dependencies/imgui/imgui_custom.h"
#include "source/core/gui/gui_builder.h"
#include "source/orion.h"
#include "source/resources/fonts/fontawesome.h"
#include "source/resources/fonts/museosanscyrl.h"

using orion::resources::fonts::FontAwesome;

orion::Gui::Gui() noexcept {
    Gui::setup_io();
    Gui::setup_style();
    Gui::setup_fonts();
}

auto orion::Gui::setup_io() const noexcept -> void {
    auto&& io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
}

auto orion::Gui::setup_style() const noexcept -> void {
    ImGui::StyleColorsDark();

    auto&& style = ImGui::GetStyle();
    style.WindowShadowSize = 25.0f;

    auto&& colors = style.Colors;
    colors[ImGuiCol_WindowShadow] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
}

auto orion::Gui::setup_fonts() noexcept -> void {
    constexpr auto get_font_glyph_ranges = []() noexcept {
        static ImVector<ImWchar> ranges;

        if (!ranges.empty())
            return ranges.Data;

        auto&& imgui_fonts = *ImGui::GetIO().Fonts;
        ImFontGlyphRangesBuilder builder;
        constexpr std::array<ImWchar, 9> base_ranges {
            0x0100,
            0x024F,  // Latin Extended-A + Latin Extended-B
            0x0300,
            0x03FF,  // Combining Diacritical Marks + Greek/Coptic
            0x0600,
            0x06FF,  // Arabic
            0x0E00,
            0x0E7F,  // Thai
            0
        };
        builder.AddRanges(base_ranges.data());
        builder.AddRanges(imgui_fonts.GetGlyphRangesCyrillic());
        builder.AddRanges(imgui_fonts.GetGlyphRangesChineseSimplifiedCommon());
        builder.AddText("\u9F8D\u738B\u2122");
        builder.BuildRanges(&ranges);

        return ranges.Data;
    };

    auto&& imgui_fonts = *ImGui::GetIO().Fonts;

    Gui::fonts.factory = imgui_fonts.AddFontFromMemoryCompressedTTF(
        resources::fonts::museosanscyrl_700_compressed_data.data(),
        resources::fonts::museosanscyrl_700_compressed_size,
        15.0f,
        nullptr,
        get_font_glyph_ranges()
    );
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        imgui_fonts.AddFontFromMemoryCompressedTTF(
            resources::fonts::fa_compressed_data.data(),
            resources::fonts::fa_compressed_size,
            13.0f,
            &cfg,
            FontAwesome::range
        );
    }

    Gui::fonts.navbar = imgui_fonts.AddFontFromMemoryCompressedTTF(
        resources::fonts::museosanscyrl_700_compressed_data.data(),
        resources::fonts::museosanscyrl_700_compressed_size,
        16.0f
    );
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        cfg.GlyphOffset = ImVec2(16.0f, 0.0f);
        cfg.GlyphExtraSpacing = ImVec2(36.0f, 0.0f);
        cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0.0f;
        imgui_fonts.AddFontFromMemoryCompressedTTF(
            resources::fonts::fa_compressed_data.data(),
            resources::fonts::fa_compressed_size,
            14.0f,
            &cfg,
            FontAwesome::range
        );
    }

    Gui::fonts.profile = imgui_fonts.AddFontFromMemoryCompressedTTF(
        resources::fonts::museosanscyrl_700_compressed_data.data(),
        resources::fonts::museosanscyrl_700_compressed_size,
        15.0f
    );
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        cfg.GlyphOffset = ImVec2(0.0f, 0.0f);
        cfg.GlyphExtraSpacing = ImVec2(0.0f, 0.0f);
        cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0.0f;
        imgui_fonts.AddFontFromMemoryCompressedTTF(
            resources::fonts::fa_compressed_data.data(),
            resources::fonts::fa_compressed_size,
            15.0f,
            &cfg,
            FontAwesome::range
        );
    }

    Gui::fonts.watermark = imgui_fonts.AddFontFromMemoryCompressedTTF(
        resources::fonts::museosanscyrl_900_compressed_data.data(),
        resources::fonts::museosanscyrl_900_compressed_size,
        32.0f
    );

    Gui::fonts.head = imgui_fonts.AddFontFromMemoryCompressedTTF(
        resources::fonts::museosanscyrl_700_compressed_data.data(),
        resources::fonts::museosanscyrl_700_compressed_size,
        17.0f,
        nullptr,
        get_font_glyph_ranges()
    );
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        imgui_fonts.AddFontFromMemoryCompressedTTF(
            resources::fonts::fa_compressed_data.data(),
            resources::fonts::fa_compressed_size,
            15.0f,
            &cfg,
            FontAwesome::range
        );
    }
}

auto orion::Gui::animate_alpha() noexcept -> void {
    if (Gui::open == true) {
        if (Gui::alpha < 1.0f)
            Gui::alpha = std::clamp(
                Gui::alpha + ImGui::GetIO().DeltaTime * Gui::animation_speed,
                0.0f,
                1.0f
            );
    } else {
        if (Gui::alpha > 0.0f)
            Gui::alpha = std::clamp(
                Gui::alpha - ImGui::GetIO().DeltaTime * Gui::animation_speed,
                0.0f,
                1.0f
            );
    }
}

auto orion::Gui::on_close() const noexcept -> void {
    ImGui::GetIO().MouseDrawCursor = false;
}

auto orion::Gui::on_animating() noexcept -> void {
    Gui::animating = true;
    Gui::alpha_animated = utilities::math::easing::in_out_quart(Gui::alpha);
    Gui::size_animated = Gui::size * Gui::alpha_animated;
    Gui::position_animated =
        Gui::position + (Gui::size - Gui::size_animated) * 0.5f;
    ImGui::SetNextWindowPos(
        Gui::position_animated,
        ImGuiCond_::ImGuiCond_Always
    );
    ImGui::GetIO().MouseDrawCursor = false;
}

auto orion::Gui::on_open() noexcept -> void {
    Gui::animating = false;
    Gui::alpha_animated = Gui::alpha;
    Gui::size_animated = Gui::size;
    ImGui::GetIO().MouseDrawCursor = true;
}

auto orion::Gui::init() noexcept -> void {
    Gui::position = (ImGui::GetIO().DisplaySize - Gui::size) * 0.5f;

    switch (orion.get_renderer().get_type()) {
        case core::Renderer::Type::DirectX11: {
            Gui::post_process = std::make_unique<core::gui::BlurD3D11>();
            break;
        }
        case core::Renderer::Type::DirectX9: {
            Gui::post_process = std::make_unique<core::gui::BlurD3D9>();
            break;
        }
    }
}

auto orion::Gui::begin() const noexcept -> void {
    ImGui::SetNextWindowSize(Gui::size_animated, ImGuiCond_::ImGuiCond_Always);

    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_Alpha,
        Gui::alpha_animated
    );
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha,
        Gui::alpha_animated
    );

    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2());
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing,
        ImVec2(2.0f, 0.0f)
    );
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowBorderSize, 0.0f);
    ImGui::PushStyleVar(
        ImGuiStyleVar_::ImGuiStyleVar_WindowRounding,
        Gui::rounding
    );
    ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_WindowBg, ImVec4());

    ImGui::BeginDisabled(Gui::animating);
    ImGui::Begin(
        utilities::String<"Gui">().c_str(),
        nullptr,
        ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoSavedSettings
            | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
    );
}

auto orion::Gui::end() const noexcept -> void {
    ImGui::End();
    ImGui::EndDisabled();
    ImGui::PopStyleColor();
    ImGui::PopStyleVar(4);
    ImGui::PopStyleVar(2);
}

auto orion::Gui::update_position() noexcept -> void {
    if (!Gui::animating)
        Gui::position = ImGui::GetWindowPos();
}

auto orion::Gui::draw() noexcept -> void {
    Gui::animate_alpha();

    if (Gui::alpha <= 0.0f)
        return Gui::on_close();

    if (Gui::alpha < 1.0f)
        Gui::on_animating();
    else
        Gui::on_open();

    Gui::begin();
    Gui::update_position();
    Gui::post_process->draw(
        Gui::get_position(),
        Gui::get_position() + Gui::get_size(),
        Gui::rounding
    );
    Gui::builder();
    Gui::end();

    ImGui::ShowDemoWindow();
    ImGui::ShowDebugLogWindow();
}

namespace orion {
    struct StyleVar {
        StyleVar(ImGuiStyleVar idx, float val) noexcept {
            ImGui::PushStyleVar(idx, val);
        }

        StyleVar(ImGuiStyleVar idx, const ImVec2& val) noexcept {
            ImGui::PushStyleVar(idx, val);
        }

        ~StyleVar() noexcept {
            ImGui::PopStyleVar();
        }
    };

    struct StyleColor {
        StyleColor(ImGuiCol idx, ImU32 col) noexcept {
            ImGui::PushStyleColor(idx, col);
        }

        StyleColor(ImGuiCol idx, const ImVec4& col) noexcept {
            ImGui::PushStyleColor(idx, col);
        }

        ~StyleColor() noexcept {
            ImGui::PopStyleColor();
        }
    };

    struct Component {
        ~Component() noexcept {
            ImGui::PopStyleVar(m_styleVarCount);
            ImGui::PopStyleColor(m_styleColorCount);
        }

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return Continue();
        }

    protected:
        [[nodiscard]] constexpr auto Continue() const noexcept -> bool {
            return m_continue;
        }

        constexpr auto Continue(bool value) noexcept {
            m_continue = value;
        }

        auto Begin(
            const char* name,
            bool* p_open = nullptr,
            ImGuiWindowFlags flags = ImGuiWindowFlags_::ImGuiWindowFlags_None
        ) noexcept {
            m_continue = ImGui::Begin(name, p_open, flags);
        }

        auto BeginChild(
            ImGuiID id,
            const ImVec2& size = ImVec2(0, 0),
            bool border = false,
            ImGuiWindowFlags flags = ImGuiWindowFlags_::ImGuiWindowFlags_None
        ) noexcept {
            m_continue = ImGui::BeginChild(id, size, border, flags);
        }

        static auto EndChild() noexcept {
            return ImGui::EndChild();
        }

        auto BeginTable(const char* str_id, int column) noexcept {
            m_continue = ImGui::BeginTable(str_id, column);
        }

        auto EndTable() const noexcept {
            if (m_continue)
                ImGui::EndTable();
        }

        auto PushStyleVar(ImGuiStyleVar idx, float val) noexcept {
            ImGui::PushStyleVar(idx, val);
            m_styleVarCount++;
        }

        auto PushStyleVar(ImGuiStyleVar idx, const ImVec2& val) noexcept {
            ImGui::PushStyleVar(idx, val);
            m_styleVarCount++;
        }

        auto PushStyleColor(ImGuiCol idx, const ImVec4& col) noexcept {
            ImGui::PushStyleColor(idx, col);
            m_styleColorCount++;
        }

        static auto Background(
            const ImVec2& p_min,
            const ImVec2& p_max,
            ImU32 col,
            float rounding = 0.0F,
            ImDrawFlags flags = ImDrawFlags_::ImDrawFlags_None
        ) noexcept {
            return ImGui::GetWindowDrawList()
                ->AddRectFilled(p_min, p_max, col, rounding, flags);
        }

        static auto Background(
            ImU32 col,
            float rounding = 0.0F,
            ImDrawFlags flags = ImDrawFlags_::ImDrawFlags_None
        ) noexcept {
            const auto pos {ImGui::GetWindowPos() + ImGui::GetCursorPos()};
            return ImGui::GetWindowDrawList()->AddRectFilled(
                pos,
                pos + ImGui::GetContentRegionAvail(),
                col,
                rounding,
                flags
            );
        }

    private:
        bool m_continue = {};
        int m_styleVarCount = {};
        int m_styleColorCount = {};
    };

    struct Menu: Component {
        struct Body;
        struct Tab;
    };

    struct Menu::Tab: Component {
        explicit Tab(std::uint32_t hash) noexcept {
            if (const auto tab = orion.get_gui().get_tabs().find(hash);
                tab && tab->active) {
                Component::Continue(true);
                const auto& alpha = ImGui::GetStyle().Alpha;
                Component::PushStyleVar(
                    ImGuiStyleVar_::ImGuiStyleVar_Alpha,
                    alpha * tab->alpha
                );
                Component::PushStyleVar(
                    ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha,
                    alpha * tab->alpha
                );
            }
        }
    };

    struct Menu::Body: Component {
        struct Content;
    };

    struct Menu::Body::Content: Component {
        struct Main;
    };

    struct Menu::Body::Content::Main: Component {
        struct Panel;
    };

    struct Menu::Body::Content::Main::Panel: Component {
        struct Table;
    };

    struct Menu::Body::Content::Main::Panel::Table: Component {
        struct Widget;
    };

    struct Menu::Body::Content::Main::Panel::Table::Widget: Component {
        Widget() noexcept : m_count {0} {
            utilities::String<"##Menu::Body::Content::Panel::Table::Widget">
                name;
            Component::BeginTable(name, 2);
        }

        ~Widget() noexcept {
            if (Component::Continue()) {
                ImGui::EndTable();
                orion.get_gui().get_last_active_group()->widget_count = m_count;
            }
        }

        template<stb::fixed_string str>
        constexpr void Toggle(
            bool& value,
            float color[4],
            float colorReference[4],
            float* popupAlpha
        ) noexcept {
            utilities::String<str> name;

            constexpr auto fontHeight = 14.f;
            constexpr auto toggleWidthMult = 1.35f;
            constexpr auto textPositionVerticalOffset = 2.f;

            const Gui::PushFont font {
                orion.get_gui().get_fonts().factory,
                (fontHeight / 15.f)
            };
            float ratio = 0;

            m_count++;

            ImGui::TableNextRow();

            if (ImGui::TableSetColumnIndex(1)) {
                const auto pos = ImGui::GetCursorPos()
                    + ImVec2 {
                        ImGui::GetContentRegionAvail().x
                            - ImGui::GetFrameHeight() * toggleWidthMult,
                        (ImGui::GetFrameHeight() - ImGui::GetFrameHeight() * .8f
                        ) * .5f
                    };
                ImGui::SetCursorPos(pos);
                ratio =
                    ImGui::ButtonToggle(name.c_str(), value, toggleWidthMult);

                if (color) {
                    constexpr auto itemSpaceWidth {8.00f};
                    constexpr auto colorVerticalOffset {3.00f};

                    const auto colorIcon {
                        FontAwesome::get<FontAwesome::Type::Palette>()
                    };
                    const auto colorLabel {
                        std::string {colorIcon} + name.c_str()
                    };
                    const auto& style = ImGui::GetStyle();

                    const StyleVar styleVar[] = {
                        {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                        {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3}
                    };
                    const StyleColor styleColor[] = {
                        {ImGuiCol_::ImGuiCol_Text,
                         ImVec4 {.564705f, .615686f, .647058f, 1}},
                        {ImGuiCol_::ImGuiCol_Button, ImVec4 {}},
                        {ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4 {}},
                        {ImGuiCol_::ImGuiCol_ButtonActive, ImVec4 {}},
                        {ImGuiCol_::ImGuiCol_FrameBg,
                         ImVec4 {.0470588f, .0470588f, .0470588f, 1}},
                        {ImGuiCol_::ImGuiCol_FrameBgActive,
                         ImVec4 {.0941176f, .0941176f, .0941176f, 1}},
                        {ImGuiCol_::ImGuiCol_FrameBgHovered,
                         ImVec4 {.070588f, .070588f, .070588f, 1}},
                        {ImGuiCol_::ImGuiCol_TextSelectedBg,
                         ImVec4 {.250980f, .250980f, .250980f, .768627f}}
                    };

                    ImGui::SetCursorPos(
                        pos
                        - ImVec2 {ImGui::GetFrameHeight() * toggleWidthMult, 0}
                    );
                    if (ImGui::Button(std::string {
                            std::string {colorIcon} + "##" + name.c_str()
                        }
                                          .c_str())) {
                        colorReference[0] = color[0];
                        colorReference[1] = color[1];
                        colorReference[2] = color[2];
                        colorReference[3] = color[3];
                        ImGui::OpenPopup(colorLabel.c_str());
                        *popupAlpha = {};
                    }
                    const StyleVar styleVar2[] = {
                        {ImGuiStyleVar_::ImGuiStyleVar_Alpha,
                         std::sqrtf(*popupAlpha) * style.Alpha}
                    };
                    ImGui::SetNextWindowSize(
                        ImVec2 {308, 256} * style.Alpha,
                        ImGuiCond_::ImGuiCond_Always
                    );
                    if (ImGui::BeginPopup(
                            colorLabel.c_str(),
                            ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar
                        )) {
                        ImGui::ColorPicker4(
                            colorLabel.c_str(),
                            color,
                            ImGuiColorEditFlags_::ImGuiColorEditFlags_NoLabel
                                | ImGuiColorEditFlags_::
                                    ImGuiColorEditFlags_AlphaBar
                                | ImGuiColorEditFlags_::
                                    ImGuiColorEditFlags_AlphaPreview,
                            colorReference
                        );
                        ImGui::EndPopup();
                        *popupAlpha = std::clamp(
                            *popupAlpha + ImGui::GetIO().DeltaTime * 4,
                            0.f,
                            1.f
                        );
                    }
                }

                if (ImGui::TableSetColumnIndex(0)) {
                    ImGui::SetCursorPos(
                        ImGui::GetCursorPos()
                        + ImVec2 {0, (ImGui::GetFrameHeight() - fontHeight) * .5f - (color ? textPositionVerticalOffset : 0)}
                    );
                    ImGui::TextColored(
                        ImLerp(
                            ImVec4 {.564705f, .615686f, .647058f, 1},
                            ImVec4 {.90196f, .90196f, .90196f, 1},
                            ratio
                        ),
                        name
                    );
                }
            }
        }

        template<stb::fixed_string str>
        constexpr auto Toggle(bool& value) noexcept {
            return Toggle<str>(value, nullptr, nullptr, nullptr);
        }

        template<stb::fixed_string str, stb::fixed_string items>
        auto Combo(int& value) noexcept {
            static float popupAlpha;

            utilities::String<str> name;
            utilities::String<items> item;

            constexpr auto hash = utilities::Fnv1a<str>::value;
            constexpr auto fontHeight {14.00f};
            constexpr auto textPositionVerticalOffset {2.00f};
            constexpr auto framePadding {4.00f};

            const Gui::PushFont font {
                orion.get_gui().get_fonts().factory,
                (fontHeight / 15.f)
            };

            m_count++;

            ImGui::TableNextRow();

            if (ImGui::TableSetColumnIndex(1)) {
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                const StyleVar styleVar[] = {
                    {ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha,
                     std::powf(popupAlpha, 2) * ImGui::GetStyle().Alpha},
                    {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FramePadding,
                     ImVec2 {framePadding, framePadding}},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1},
                    {ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2 {8, 8}},
                };
                const StyleColor styleColor[] = {
                    {ImGuiCol_::ImGuiCol_Border,
                     ImVec4 {.0980392f, .0980392f, .0980392f, 1}},
                    {ImGuiCol_::ImGuiCol_Text,
                     ImVec4 {.564705f, .615686f, .647058f, 1}},
                    {ImGuiCol_::ImGuiCol_Header,
                     ImVec4 {.0470588f, .0470588f, .0470588f, .7843137f}},
                    {ImGuiCol_::ImGuiCol_HeaderActive,
                     ImVec4 {.0313725f, .0313725f, .0313725f, .7843137f}},
                    {ImGuiCol_::ImGuiCol_HeaderHovered,
                     ImVec4 {.0627450f, .0627450f, .0627450f, .7843137f}},
                    {ImGuiCol_::ImGuiCol_Button,
                     ImVec4 {.0470588f, .0470588f, .0470588f, 1}},
                    {ImGuiCol_::ImGuiCol_ButtonHovered,
                     ImVec4 {.0823529f, .0823529f, .086274f, 1}},
                    {ImGuiCol_::ImGuiCol_FrameBg,
                     ImVec4 {.0470588f, .0470588f, .0470588f, 1}},
                    {ImGuiCol_::ImGuiCol_FrameBgHovered,
                     ImVec4 {.0823529f, .0823529f, .0823529f, 1}},
                };
                ImGui::Combo(name.c_str(), &value, item);
                bool popup_open = ImGui::IsPopupOpen(
                    ImHashStr(
                        "##ComboPopup",
                        0,
                        ImGui::GetCurrentWindow()->GetID(name)
                    ),
                    ImGuiPopupFlags_::ImGuiPopupFlags_None
                );
                if (popup_open)
                    popupAlpha = std::clamp(
                        ImGui::GetIO().DeltaTime * 2 + popupAlpha,
                        0.f,
                        1.f
                    );
                else
                    popupAlpha = {};
            }

            if (ImGui::TableSetColumnIndex(0)) {
                ImGui::SetCursorPos(
                    ImGui::GetCursorPos()
                    + ImVec2 {0, (ImGui::GetFrameHeight() - fontHeight - framePadding * .5f) * .5f - textPositionVerticalOffset}
                );
                ImGui::TextColored(
                    ImVec4 {.564705f, .615686f, .647058f, 1},
                    name
                );
            }
        }

        template<stb::fixed_string str, stb::fixed_string items>
        auto MultiCombo(bool value[]) noexcept {
            constexpr auto fontHeight {14.00f};
            constexpr auto framePadding {4.00f};
            constexpr auto textPositionVerticalOffset {2.00f};

            static std::string preview;
            static float popupAlpha;

            const Gui::PushFont font {
                orion.get_gui().get_fonts().factory,
                (fontHeight / 15.f)
            };

            utilities::String<str> name;
            utilities::String<items> item;
            std::vector<std::string> list;
            std::vector<std::string> selected;

            m_count++;

            ImGui::TableNextRow();

            if (ImGui::TableSetColumnIndex(1)) {
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);

                const StyleVar styleVar[] = {
                    {ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha,
                     std::powf(popupAlpha, 2) * ImGui::GetStyle().Alpha},
                    {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FramePadding,
                     ImVec2 {framePadding, framePadding}},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1},
                    {ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2 {8, 8}},
                };
                const StyleColor styleColor[] = {
                    {ImGuiCol_::ImGuiCol_Border,
                     ImVec4 {.0980392f, .0980392f, .0980392f, 1}},
                    {ImGuiCol_::ImGuiCol_Text,
                     ImVec4 {.564705f, .615686f, .647058f, 1}},
                    {ImGuiCol_::ImGuiCol_Header,
                     ImVec4 {.0470588f, .0470588f, .0470588f, .7843137f}},
                    {ImGuiCol_::ImGuiCol_HeaderActive,
                     ImVec4 {.0313725f, .0313725f, .0313725f, .7843137f}},
                    {ImGuiCol_::ImGuiCol_HeaderHovered,
                     ImVec4 {.0627450f, .0627450f, .0627450f, .7843137f}},
                    {ImGuiCol_::ImGuiCol_Button,
                     ImVec4 {.0470588f, .0470588f, .0470588f, 1}},
                    {ImGuiCol_::ImGuiCol_ButtonHovered,
                     ImVec4 {.0823529f, .0823529f, .086274f, 1}},
                    {ImGuiCol_::ImGuiCol_FrameBg,
                     ImVec4 {.0470588f, .0470588f, .0470588f, 1}},
                    {ImGuiCol_::ImGuiCol_FrameBgHovered,
                     ImVec4 {.0823529f, .0823529f, .0823529f, 1}},
                };

                if (ImGui::BeginCombo(
                        std::string {std::string {"##"} + name.c_str()}.c_str(),
                        preview.c_str()
                    )) {
                    auto p {item.c_str()};
                    while (*p) {
                        list.emplace_back(p);
                        p += list.back().length() + 1;
                    }

                    for (std::size_t i {}; i < list.size(); ++i) {
                        ImGui::Selectable(
                            list[i].c_str(),
                            &value[i],
                            ImGuiSelectableFlags_::
                                ImGuiSelectableFlags_DontClosePopups
                        );
                        if (value[i])
                            selected.emplace_back(list[i]);
                    }

                    ImGui::EndCombo();

                    popupAlpha = std::clamp(
                        ImGui::GetIO().DeltaTime * 2 + popupAlpha,
                        0.f,
                        1.f
                    );
                } else {
                    popupAlpha = {};

                    auto p {item.c_str()};
                    while (*p) {
                        list.emplace_back(p);
                        p += list.back().length() + 1;
                    }

                    for (std::size_t i {}; i < list.size(); ++i)
                        if (value[i])
                            selected.emplace_back(list[i]);
                }
                preview = {};
                for (std::size_t i {}; i < selected.size(); ++i)
                    i == selected.size() - 1 ? preview += selected[i]
                                             : preview += selected[i] + ", ";
            }

            if (ImGui::TableSetColumnIndex(0)) {
                ImGui::SetCursorPos(
                    ImGui::GetCursorPos()
                    + ImVec2 {0, (ImGui::GetFrameHeight() - fontHeight - framePadding * .5f) * .5f - textPositionVerticalOffset}
                );
                ImGui::TextColored(
                    ImVec4 {.564705f, .615686f, .647058f, 1},
                    name
                );
            }
        }

        template<
            stb::fixed_string str,
            stb::fixed_string fmt,
            float min,
            float max>
        auto Slider(float& value) noexcept {
            constexpr auto fontHeight {14.00f};
            constexpr auto framePadding {3.00f};
            constexpr auto inputTextWidth {28.00f};
            constexpr auto textPositionVerticalOffset {1.00f};

            const Gui::PushFont font {
                orion.get_gui().get_fonts().factory,
                fontHeight / 15.f
            };
            const auto& style = ImGui::GetStyle();

            utilities::String<str> name;
            utilities::String<fmt> format;

            m_count++;

            ImGui::TableNextRow();

            if (ImGui::TableSetColumnIndex(1)) {
                const auto frameHeight = ImGui::GetFrameHeight();
                const auto pos {
                    ImGui::GetCursorPos()
                    + ImVec2 {0, (frameHeight - frameHeight * .8f) * .5f}
                };

                const StyleVar styleVar[] = {
                    {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1},
                };
                const StyleColor styleColor[] = {
                    {ImGuiCol_::ImGuiCol_FrameBgActive,
                     ImVec4 {.0823529f, .2666666f, .3764705f, 1}},
                    {ImGuiCol_::ImGuiCol_FrameBgHovered,
                     ImVec4 {.0745098f, .2313725f, .3254901f, 1}},
                    {ImGuiCol_::ImGuiCol_Border,
                     ImVec4 {.0980392f, .0980392f, .0980392f, 1}},
                    {ImGuiCol_::ImGuiCol_Text,
                     ImVec4 {.564705f, .615686f, .647058f, 1}},
                    {ImGuiCol_::ImGuiCol_TextSelectedBg,
                     ImVec4 {.2509803f, .2509803f, .2509803f, .7686274f}},
                };

                {
                    const Gui::PushFont font {
                        orion.get_gui().get_fonts().factory,
                        (fontHeight - 1) / 15.f
                    };
                    const StyleColor styleColor2[] = {
                        {ImGuiCol_::ImGuiCol_FrameBg,
                         ImVec4 {.0470588f, .0470588f, .0470588f, 1}},
                    };
                    ImGui::SetCursorPos(
                        pos
                        + ImVec2 {
                            ImGui::GetContentRegionAvail().x - inputTextWidth
                                - style.CellPadding.x,
                            0});
                    ImGui::SetNextItemWidth(inputTextWidth);
                    if (ImGui::InputFloat(
                            std::string {std::string {"##"} + name.c_str()}
                                .c_str(),
                            &value,
                            0.f,
                            0.f,
                            format,
                            ImGuiInputTextFlags_::
                                ImGuiInputTextFlags_AutoSelectAll
                        ))
                        value = std::clamp(value, min, max);
                }

                const StyleColor styleColor2[] = {
                    {ImGuiCol_::ImGuiCol_FrameBg,
                     ImVec4 {.0666666f, .2117647f, .301960f, 1}},
                    {ImGuiCol_::ImGuiCol_BorderShadow,
                     ImVec4 {.0117647f, .0549019f, .06666f, 1}},
                };
                ImGui::SetCursorPos(pos);
                ImGui::SetNextItemWidth(
                    ImGui::GetContentRegionAvail().x - inputTextWidth
                    - style.CellPadding.x - 8
                );
                ImGui::SliderFloat5(
                    std::string {std::string {"###"} + name.c_str()}.c_str(),
                    value,
                    min,
                    max,
                    ImGui::GetFrameHeight() * .35f,
                    IM_COL32(32, 32, 32, static_cast<int>(style.Alpha * 255)),
                    format,
                    ImGuiSliderFlags_::ImGuiSliderFlags_NoInput
                );
            }

            if (ImGui::TableSetColumnIndex(0)) {
                ImGui::SetCursorPos(
                    ImGui::GetCursorPos()
                    + ImVec2 {0, (ImGui::GetFrameHeight() - fontHeight - framePadding * .5f) * .5f - textPositionVerticalOffset}
                );
                ImGui::TextColored(
                    ImVec4 {.564705f, .615686f, .647058f, 1},
                    name
                );
            }
        }

    private:
        int m_count = {};
    };
}  // namespace orion

auto orion::Gui::builder() noexcept -> void {
    if (GuiBuilder::Header header {}) {
        if (GuiBuilder::Header::Nav nav {}) {
            if (GuiBuilder::Header::Nav::Items items {}) {
                items.text<"Aimbot">();
                items.button<"Ragebot">(
                    FontAwesome::get<FontAwesome::Type::Crosshairs>()
                );
                items.button<"Anti Aim">(
                    FontAwesome::get<FontAwesome::Type::RotateLeft>()
                );
                items.button<"Legitbot">(
                    FontAwesome::get<FontAwesome::Type::ComputerMouse>()
                );
                items.text<"Visuals">();
                items.button<"Players">(
                    FontAwesome::get<FontAwesome::Type::User>()
                );
                items.button<"Weapons">(
                    FontAwesome::get<FontAwesome::Type::Gun>()
                );
                items.button<"Grenades">(
                    FontAwesome::get<FontAwesome::Type::Bomb>()
                );
                items.button<"World">(
                    FontAwesome::get<FontAwesome::Type::GlobeAsia>()
                );
                items.button<"View">(
                    FontAwesome::get<FontAwesome::Type::Binoculars>()
                );
                items.text<"Miscellaneous">();
                items.button<"Main">(
                    FontAwesome::get<FontAwesome::Type::ScrewdriverWrench>()
                );
                items.button<"Inventory">(
                    FontAwesome::get<FontAwesome::Type::Backpack>()
                );
                items.button<"Scripts">(
                    FontAwesome::get<FontAwesome::Type::Code>()
                );
                items.button<"Configs">(
                    FontAwesome::get<FontAwesome::Type::Gear>()
                );
            }
        }
    }
    if (GuiBuilder::Body body {}) {
        if (GuiBuilder::Body::Head head {}) {
            head.save();
            if (Menu::Tab tab {utilities::Fnv1a<"Configs">::value}) {
                if (head.combo<"Name\0Date Modified\0">(
                        orion.get_config().get_sort()
                    ))
                    orion.get_config().update();
                head.create();
            }
        }
        if (GuiBuilder::Body::Content content {}) {
            if (GuiBuilder::Body::Content::Panel panel {
                    utilities::Fnv1a<"Configs">::value
                }) {
                GuiBuilder::Body::Content::Panel::Config config {};
            }

            else if (GuiBuilder::Body::Content::Panel panel {
                         utilities::Fnv1a<"Main">::value
                     }) {
                if (GuiBuilder::Body::Content::Panel::Table table {}) {
                    if (GuiBuilder::Body::Content::Panel::Table::
                            Group<"General", true> group {}) {
                        if (Menu::Body::Content::Main::Panel::Table::Widget
                                widget {}) {
                            widget.Toggle<"Unlimited Blade">(
                                orion.get_config().get_data().hitbox[0],
                                orion.get_config().get_data().color,
                                m_colorReference,
                                &m_popupAlpha
                            );
                            widget.Toggle<"Unlimited Works">(
                                orion.get_config().get_data().hitbox[1]
                            );
                            widget.Combo<
                                "Hitbox",
                                "Head\0Neck\0Body\0Legs\0Arms\0">(
                                orion.get_config().get_data().target
                            );
                            widget.Combo<
                                "Hitbox2",
                                "Head\0Neck\0Body\0Legs\0Arms\0">(
                                orion.get_config().get_data().target
                            );
                            widget.MultiCombo<
                                "Hitbox",
                                "Head\0Neck\0Body\0Legs\0">(
                                orion.get_config().get_data().hitbox
                            );
                            widget.MultiCombo<
                                "Hitbox2",
                                "Head\0Neck\0Body\0Legs\0">(
                                orion.get_config().get_data().hitbox
                            );
                        }
                    }
                    if (GuiBuilder::Body::Content::Panel::Table::
                            Group<"Movement", true> group {}) {
                        if (Menu::Body::Content::Main::Panel::Table::Widget
                                widget {}) {
                            widget.Toggle<"Unlimited Blade">(
                                orion.get_config().get_data().hitbox[0],
                                orion.get_config().get_data().color,
                                m_colorReference,
                                &m_popupAlpha
                            );
                            widget.Slider<"Unlimited Works", "%.1f", 0.f, 1.f>(
                                orion.get_config().get_data().color[0]
                            );
                        }
                    }
                }
            }
        }
    }
}
