#pragma once

#include "source/core/gui/post_process.h"

namespace orion {
    class Gui final {
    public:
        struct PushFont final {
            explicit PushFont(ImFont* font) noexcept :
                m_font {font},
                m_scale {font->Scale} {
                ImGui::PushFont(font);
            }

            explicit PushFont(ImFont* font, float scale) noexcept :
                m_font {font},
                m_scale {font->Scale} {
                font->Scale = scale;
                ImGui::PushFont(font);
            }

            ~PushFont() noexcept {
                m_font->Scale = m_scale;
                ImGui::PopFont();
            }

        private:
            ImFont* m_font;
            float m_scale;
        };

        Gui() noexcept;

        Gui(Gui&&) = delete;
        Gui& operator=(Gui&&) = delete;

        Gui(const Gui&) = delete;
        Gui& operator=(const Gui&) = delete;

        static constexpr float animation_speed = 1.0f;

        constexpr auto toggle() noexcept -> void {
            Gui::open = !Gui::open;
        }

        constexpr auto validate() noexcept -> void {
            Gui::post_process->validate();
        }

        constexpr auto invalidate() noexcept -> void {
            Gui::post_process->invalidate();
        }

        [[nodiscard]] constexpr auto&& is_open() const noexcept {
            return Gui::open;
        }

        [[nodiscard]] constexpr auto&& get_fonts() const noexcept {
            return Gui::fonts;
        }

        [[nodiscard]] constexpr auto&& get_size() const noexcept {
            return Gui::animating == false ? Gui::size : Gui::size_animated;
        }

        [[nodiscard]] constexpr auto&& get_position() const noexcept {
            return Gui::animating == false ? Gui::position
                                           : Gui::position_animated;
        }

        [[nodiscard]] constexpr auto&& get_tabs() noexcept {
            return Gui::tabs;
        }

        [[nodiscard]] constexpr auto&& get_last_active_tab() noexcept {
            return Gui::last_active_tab;
        }

        [[nodiscard]] constexpr auto&& get_last_active_group() noexcept {
            return Gui::last_active_group;
        }

        [[nodiscard]] constexpr auto&& get_tabs() const noexcept {
            return Gui::tabs;
        }

        [[nodiscard]] constexpr auto&& get_last_active_tab() const noexcept {
            return Gui::last_active_tab;
        }

        [[nodiscard]] constexpr auto&& get_last_active_group() const noexcept {
            return Gui::last_active_group;
        }

        auto init() noexcept -> void;
        auto draw() noexcept -> void;

    private:
        auto setup_io() const noexcept -> void;
        auto setup_style() const noexcept -> void;
        auto setup_fonts() noexcept -> void;

        auto animate_alpha() noexcept -> void;
        auto on_close() const noexcept -> void;
        auto on_animating() noexcept -> void;
        auto on_open() noexcept -> void;

        auto begin() const noexcept -> void;
        auto end() const noexcept -> void;

        auto update_position() noexcept -> void;

        auto builder() noexcept -> void;

        bool open = true;
        bool animating = false;

        float alpha = 1.0f;
        float alpha_animated = alpha;

        ImVec2 position = {};
        ImVec2 position_animated = {};

        static constexpr ImVec2 size = {800.0f, 656.0f};
        ImVec2 size_animated = size;

        static constexpr auto rounding = 12.0f;

        struct {
            ImFont* factory = nullptr;
            ImFont* navbar = nullptr;
            ImFont* profile = nullptr;
            ImFont* watermark = nullptr;
            ImFont* head = nullptr;
        } fonts;

        std::unique_ptr<core::gui::PostProcess> post_process;

        float m_popupAlpha = {};
        float m_colorReference[4] = {};

        struct TabData {
            struct GroupData {
                std::size_t widget_count = 0;
            };

            bool active = false;
            float alpha = 0.0f;
            float alpha_animated = alpha;
            utilities::HashMap<GroupData> groups;
        };

        utilities::HashMap<TabData> tabs;
        TabData* last_active_tab = nullptr;
        TabData::GroupData* last_active_group = nullptr;
    };
}  // namespace orion
