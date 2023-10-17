#pragma once

#include "dependencies/imgui/imgui_custom.h"
#include "source/orion.h"
#include "source/resources/fonts/fontawesome.h"

using orion::resources::fonts::FontAwesome;
using orion::utilities::Fnv1a;
using orion::utilities::String;

namespace orion::core::gui {

    struct StyleVar final {
        NON_COPYABLE(StyleVar)
        NON_MOVEABLE(StyleVar)

        StyleVar(const ImGuiStyleVar idx, const float val) noexcept;
        StyleVar(const ImGuiStyleVar idx, const ImVec2& val) noexcept;
        ~StyleVar() noexcept;
    };

    struct StyleColor final {
        NON_COPYABLE(StyleColor)
        NON_MOVEABLE(StyleColor)

        StyleColor(const ImGuiCol idx, const ImU32 col) noexcept;
        StyleColor(const ImGuiCol idx, const ImVec4& col) noexcept;
        ~StyleColor() noexcept;
    };

    struct Font final {
        NON_COPYABLE(Font)
        NON_MOVEABLE(Font)

        explicit Font(ImFont& font) noexcept;
        explicit Font(ImFont& font, float scale) noexcept;
        ~Font() noexcept;

    private:
        ImFont& font;
        const float scale = 1.0f;
    };

    struct Header final {
        NON_COPYABLE(Header)
        NON_MOVEABLE(Header)

        struct Nav;

        explicit Header() noexcept;
        ~Header() noexcept;

        NODISCARD constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Header::Nav final {
        NON_COPYABLE(Nav)
        NON_MOVEABLE(Nav)

        struct Items;

        explicit Nav() noexcept;
        ~Nav() noexcept;

        NODISCARD constexpr explicit operator bool() const noexcept {
            return true;
        }

    private:
        static auto watermark() noexcept -> void;
        static auto profile() noexcept -> void;
    };

    struct Header::Nav::Items final {
        NON_COPYABLE(Items)
        NON_MOVEABLE(Items)

        explicit Items() noexcept;
        ~Items() noexcept;

        NODISCARD constexpr explicit operator bool() const noexcept {
            return true;
        }

    private:
        static auto button(
            const char* const str,
            const char* const icon,
            const std::uint32_t hash
        ) noexcept -> void;

        auto text(const char* const str) noexcept -> void;

    public:
        template<stb::fixed_string _Str>
        constexpr auto button(const char* const icon) const noexcept {
            return Items::button(String<_Str>(), icon, Fnv1a<_Str>::value);
        }

        template<stb::fixed_string _Str>
        constexpr auto text() noexcept {
            return Items::text(String<_Str>());
        }

    private:
        bool first_text_call = false;
    };

    struct Body final {
        NON_COPYABLE(Body)
        NON_MOVEABLE(Body)

        struct Head;
        struct Content;

        explicit Body() noexcept;
        ~Body() noexcept;

        NODISCARD constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Body::Head final {
        NON_COPYABLE(Head)
        NON_MOVEABLE(Head)

        struct Content;

        explicit Head() noexcept;
        ~Head() noexcept;

        auto save() const noexcept -> void;
        auto create() const noexcept -> void;

        NODISCARD constexpr explicit operator bool() const noexcept {
            return true;
        }

    private:
        NODISCARD static auto
        combo(const char* const items, int& value) noexcept -> bool;

    public:
        template<stb::fixed_string _Str>
        NODISCARD constexpr auto combo(int& value) const noexcept {
            return Head::combo(String<_Str>(), value);
        }

    private:
        Font font;
    };

    struct Body::Head::Content final {
        NON_COPYABLE(Content)
        NON_MOVEABLE(Content)

        explicit Content(const std::uint32_t hash) noexcept;
        ~Content() noexcept;

    private:
        bool resume = false;

    public:
        NODISCARD constexpr explicit operator bool() const noexcept {
            return resume;
        }
    };

    struct Body::Content final {
        NON_COPYABLE(Content)
        NON_MOVEABLE(Content)

        struct Panel;

        explicit Content() noexcept;
        ~Content() noexcept;

        NODISCARD constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Body::Content::Panel final {
        NON_COPYABLE(Panel)
        NON_MOVEABLE(Panel)

        struct Config;
        struct Table;

        explicit Panel(const std::uint32_t hash) noexcept;
        ~Panel() noexcept;

    private:
        bool resume = false;

    public:
        NODISCARD constexpr explicit operator bool() const noexcept {
            return Panel::resume;
        }
    };

    struct Body::Content::Panel::Config final {
        NON_COPYABLE(Config)
        NON_MOVEABLE(Config)

        explicit Config() noexcept;
        ~Config() noexcept;

    private:
        static auto filter_config_name(ImGuiInputTextCallbackData* const data
        ) noexcept -> int;

        enum class Event { UNDEFINED, SAVE, LOAD, REMOVE, RENAME, INPUT };

        auto draw(
            const std::string_view name,
            const std::string_view time,
            const bool active,
            std::array<char, 260>& input
        ) const noexcept -> Event;
    };

    struct Body::Content::Panel::Table final {
        NON_COPYABLE(Table)
        NON_MOVEABLE(Table)

        template<stb::fixed_string _Str, bool _NextColumn>
        struct Group;
        struct Widget;

        explicit Table() noexcept;
        ~Table() noexcept;

        static auto begin_group(
            const char* const name,
            const std::uint32_t hash,
            const bool next_column
        ) noexcept -> void;

        static auto end_group() noexcept -> void;

    private:
        bool resume = false;

    public:
        NODISCARD constexpr explicit operator bool() const noexcept {
            return Table::resume;
        }
    };

    template<stb::fixed_string _Str, bool _NextColumn>
    struct Body::Content::Panel::Table::Group final {
        NON_COPYABLE(Group)
        NON_MOVEABLE(Group)

        constexpr explicit Group() noexcept {
            Table::begin_group(String<_Str>(), Fnv1a<_Str>::value, _NextColumn);
        }

        constexpr ~Group() noexcept {
            Table::end_group();
        }

        NODISCARD constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Body::Content::Panel::Table::Widget final {
        NON_COPYABLE(Widget)
        NON_MOVEABLE(Widget)

        explicit Widget() noexcept : m_count {0} {
            String<"##Body::Content::Panel::Table::Widget"> name;
            resume = ImGui::BeginTable(name.c_str(), 2);
        }

        NODISCARD constexpr explicit operator bool() const noexcept {
            return Widget::resume;
        }

    private:
        int m_count = 0;
        bool resume = false;

    public:
        ~Widget() noexcept {
            if (resume) {
                ImGui::EndTable();
                orion.get_gui().get_last_active_group()->widget_count = m_count;
            }
        }

        template<stb::fixed_string str, stb::fixed_string tip = "">
        constexpr void toggle(
            bool& value,
            float color[4],
            float colorReference[4],
            float* popupAlpha
        ) noexcept {
            String<str> name;

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

                if constexpr (tip[0] != '\0') {
                    if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled
                        )) {
                        ImGui::SetTooltip(String<tip>());
                    }
                }

                if (color) {
                    constexpr auto itemSpaceWidth {8.00f};
                    constexpr auto colorVerticalOffset {3.00f};

                    const auto colorIcon {
                        FontAwesome::get<FontAwesome::Type::Palette>()
                    };
                    const auto colorLabel {
                        std::string {colorIcon} + name.c_str()
                    };

                    const StyleVar styleVar[] {
                        {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                        {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3}
                    };
                    const StyleColor styleColor[] {
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
                            std::string {colorIcon} + String<"##">().c_str()
                            + name.c_str()
                        }
                                          .c_str())) {
                        colorReference[0] = color[0];
                        colorReference[1] = color[1];
                        colorReference[2] = color[2];
                        colorReference[3] = color[3];
                        ImGui::OpenPopup(colorLabel.c_str());
                        *popupAlpha = {};
                    }
                    const StyleVar styleVar2[] {
                        {ImGuiStyleVar_::ImGuiStyleVar_Alpha, *popupAlpha}
                    };
                    ImGui::SetNextWindowSize(
                        ImVec2 {308, 256}
                            * utilities::math::easing::in_out_quart(*popupAlpha
                            ),
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
                            *popupAlpha + ImGui::GetIO().DeltaTime,
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

        template<stb::fixed_string str, stb::fixed_string tip = "">
        constexpr auto toggle(bool& value) noexcept {
            return toggle<str, tip>(value, nullptr, nullptr, nullptr);
        }

        template<stb::fixed_string str, stb::fixed_string items>
        auto combo(int& value) noexcept {
            String<str> name;
            String<items> item;

            constexpr auto hash = Fnv1a<str>::value;
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
                const StyleVar styleVar[] {
                    {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FramePadding,
                     ImVec2 {framePadding, framePadding}},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1},
                    {ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2 {8, 8}},
                };
                const StyleColor styleColor[] {
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
        auto multi_combo(bool value[]) noexcept {
            constexpr auto fontHeight {14.00f};
            constexpr auto framePadding {4.00f};
            constexpr auto textPositionVerticalOffset {2.00f};

            static std::string preview;

            const Gui::PushFont font {
                orion.get_gui().get_fonts().factory,
                (fontHeight / 15.f)
            };

            String<str> name;
            String<items> item;
            std::vector<std::string> list;
            std::vector<std::string> selected;

            m_count++;

            ImGui::TableNextRow();

            if (ImGui::TableSetColumnIndex(1)) {
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);

                const StyleVar styleVar[] {
                    {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FramePadding,
                     ImVec2 {framePadding, framePadding}},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1},
                    {ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2 {8, 8}},
                };
                const StyleColor styleColor[] {
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
                        std::string {
                            std::string {String<"##">().c_str()} + name.c_str()
                        }
                            .c_str(),
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
                        if (value[i]) {
                            selected.emplace_back(list[i]);
                        }
                    }

                    ImGui::EndCombo();
                } else {
                    auto p {item.c_str()};
                    while (*p) {
                        list.emplace_back(p);
                        p += list.back().length() + 1;
                    }

                    for (std::size_t i {}; i < list.size(); ++i) {
                        if (value[i]) {
                            selected.emplace_back(list[i]);
                        }
                    }
                }
                preview = {};
                for (std::size_t i {}; i < selected.size(); ++i) {
                    i == selected.size() - 1
                        ? preview += selected[i]
                        : preview += selected[i] + String<", ">().c_str();
                }
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
        auto slider(float& value) noexcept {
            constexpr auto fontHeight {14.00f};
            constexpr auto framePadding {3.00f};
            constexpr auto inputTextWidth {28.00f};
            constexpr auto textPositionVerticalOffset {1.00f};

            const Gui::PushFont font {
                orion.get_gui().get_fonts().factory,
                fontHeight / 15.f
            };
            const auto& style = ImGui::GetStyle();

            String<str> name;
            String<fmt> format;

            m_count++;

            ImGui::TableNextRow();

            if (ImGui::TableSetColumnIndex(1)) {
                const auto frameHeight = ImGui::GetFrameHeight();
                const auto pos {
                    ImGui::GetCursorPos()
                    + ImVec2 {0, (frameHeight - frameHeight * .8f) * .5f}
                };

                const StyleVar styleVar[] {
                    {ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3},
                    {ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1},
                };
                const StyleColor styleColor[] {
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
                    const StyleColor styleColor2[] {
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
                            std::string {
                                std::string {String<"##">().c_str()}
                                + name.c_str()
                            }
                                .c_str(),
                            &value,
                            0.f,
                            0.f,
                            format,
                            ImGuiInputTextFlags_::
                                ImGuiInputTextFlags_AutoSelectAll
                        )) {
                        value = std::clamp(value, min, max);
                    }
                }

                const StyleColor styleColor2[] {
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
                    std::string {
                        std::string {String<"###">().c_str()} + name.c_str()
                    }
                        .c_str(),
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
    };

}  // namespace orion::core::gui
