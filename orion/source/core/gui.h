#pragma once

#include "source/core/gui/post_process.h"

namespace orion::core {

    class Gui final {
    public:
        NON_COPYABLE(Gui)
        NON_MOVEABLE(Gui)

        class PushFont final {
            ImFont* m_font;
            float m_scale;

        public:
            NON_COPYABLE(PushFont)
            NON_MOVEABLE(PushFont)

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
        };

        explicit Gui() noexcept;

        static constexpr float animation_speed = 1.0f;

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

        float popup_alpha = {};
        float colo_reference[4] = {};

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

    public:
        constexpr auto toggle() noexcept -> void {
            open = !open;
        }

        constexpr auto validate() noexcept -> void {
            post_process->validate();
        }

        constexpr auto invalidate() noexcept -> void {
            post_process->invalidate();
        }

        NODISCARD constexpr auto&& is_open() const noexcept {
            return open;
        }

        NODISCARD constexpr auto&& get_fonts() const noexcept {
            return fonts;
        }

        NODISCARD constexpr auto&& get_size() const noexcept {
            return animating == false ? size : size_animated;
        }

        NODISCARD constexpr auto&& get_position() const noexcept {
            return animating == false ? position : position_animated;
        }

        NODISCARD constexpr auto&& get_tabs() noexcept {
            return tabs;
        }

        NODISCARD constexpr auto&& get_last_active_tab() noexcept {
            return last_active_tab;
        }

        NODISCARD constexpr auto&& get_last_active_group() noexcept {
            return last_active_group;
        }

        NODISCARD constexpr auto&& get_tabs() const noexcept {
            return tabs;
        }

        NODISCARD constexpr auto&& get_last_active_tab() const noexcept {
            return last_active_tab;
        }

        NODISCARD constexpr auto&& get_last_active_group() const noexcept {
            return last_active_group;
        }
    };

}  // namespace orion::core
