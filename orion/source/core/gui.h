#pragma once

#include <d3d11.h>
#include <d3d9.h>

#include <array>
#include <concepts>
#include <cstdint>
#include <type_traits>

#pragma push_macro("log")
#undef log
#include "source/utility/math.h"
#pragma pop_macro("log")
#include "source/utility/xorstr.h"

namespace orion::core {

    class Platform;

    class Gui final {
    private:
        class BlurParams final {
        private:
            class alignas(16) Float final {
            public:
                float value = 0.0f;

                constexpr auto operator=(const float other) noexcept -> void {
                    value = other;
                }

                constexpr auto operator/=(const float other) noexcept -> void {
                    value /= other;
                }
            };

            std::array<Float, 15> sample_offsets = {};
            std::array<Float, 15> sample_weights = {};

        public:
            constexpr BlurParams() noexcept = default;

            explicit(false) BlurParams(float texel_size, float blur_amount) noexcept;

            constexpr BlurParams(BlurParams &&) noexcept = default;
            constexpr BlurParams &operator=(BlurParams &&) noexcept = default;

            constexpr BlurParams(const BlurParams &) noexcept = default;
            constexpr BlurParams &operator=(const BlurParams &) noexcept = default;
        };

        class PostProcessDX9 final {
        private:
            LPDIRECT3DDEVICE9 device = nullptr;

            LPDIRECT3DSURFACE9 backbuffer = nullptr;
            LPDIRECT3DSURFACE9 original_rendertarget = nullptr;

            std::array<LPDIRECT3DPIXELSHADER9, 2> pixelshader {};
            std::array<BlurParams, 2> pixelshader_const {};

            LPDIRECT3DTEXTURE9 texture = nullptr;
            LPDIRECT3DSURFACE9 texture_surface = nullptr;
            ImVec2 texture_size {};

        public:
            constexpr PostProcessDX9() noexcept = default;

            PostProcessDX9(PostProcessDX9 &&) = delete;
            PostProcessDX9 &operator=(PostProcessDX9 &&) = delete;

            PostProcessDX9(const PostProcessDX9 &) = delete;
            PostProcessDX9 &operator=(const PostProcessDX9 &) = delete;

            auto initialize(IDirect3DDevice9 &direct3ddevice9) noexcept -> void;

            auto create_device_objects() noexcept -> void;
            auto invalidate_device_objects() noexcept -> void;

            auto draw(ImDrawList &drawlist) noexcept -> void;

        private:
            static auto begin(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
            static auto first_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
            static auto second_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
            static auto end(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
        };

        class PostProcessDX11 final {
        private:
            IDXGISwapChain *swapchain = nullptr;
            ID3D11Device *device = nullptr;
            ID3D11DeviceContext *device_context = nullptr;

            ID3D11Texture2D *backbuffer = nullptr;
            ID3D11RenderTargetView *backbuffer_rtv = nullptr;

            std::array<ID3D11PixelShader *, 2> pixelshader {};
            std::array<ID3D11Buffer *, 2> pixelshader_const {};

            std::array<ID3D11Texture2D *, 2> texture {};
            std::array<ID3D11RenderTargetView *, 2> texture_rtv {};
            std::array<ID3D11ShaderResourceView *, 2> texture_srv {};
            ImVec2 texture_size {};
            CD3D11_BOX texture_box {};

        public:
            PostProcessDX11() noexcept = default;

            PostProcessDX11(PostProcessDX11 &&) = delete;
            PostProcessDX11 &operator=(PostProcessDX11 &&) = delete;

            PostProcessDX11(const PostProcessDX11 &) = delete;
            PostProcessDX11 &operator=(const PostProcessDX11 &) = delete;

            auto initialize(
                IDXGISwapChain &dxgiswapchain,
                ID3D11Device &d3d11device,
                ID3D11DeviceContext &d3d11devicecontext
            ) noexcept -> void;

            auto create_device_objects() noexcept -> void;
            auto invalidate_device_objects() noexcept -> void;

            void set_rendertarget() const noexcept;
            auto draw(ImDrawList &draw_list) noexcept -> void;

        private:
            static auto begin(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
            static auto first_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
            static auto second_pass(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
            static auto end(const ImDrawList *, const ImDrawCmd *cmd) noexcept -> void;
        };

        static constexpr std::array<ImWchar, 3> font_awesome_glyph_range = { 0xe000, 0xf8ff, 0x0 };
        static constexpr auto window_name = utility::XorStr<"ORION"> {};
        static constexpr auto window_size = ImVec2 { 820.0f, 585.0f };
        static constexpr auto window_flags =
            (ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoScrollWithMouse
             | ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoSavedSettings);

        bool open = true;
        std::uint8_t active_tab = 0;

    public:
        PostProcessDX9 post_process_dx9;
        PostProcessDX11 post_process_dx11;

        explicit Gui(const Platform &platform, ImGuiContext &imgui_context) noexcept;

        Gui(Gui &&) = delete;
        Gui &operator=(Gui &&) = delete;

        Gui(const Gui &) = delete;
        Gui &operator=(const Gui &) = delete;

        auto toggle_open() noexcept -> void;
        [[nodiscard]] auto is_open() const noexcept -> bool;

        constexpr auto draw(std::invocable auto post_process) noexcept -> void {
            if ( !is_open() ) {
                return;
            }
            ImGui::SetNextWindowSize(window_size);
            if ( ImGui::Begin(ImStrv { decltype(window_name)::access() }, nullptr, window_flags) )
                [[likely]] {
                std::invoke(post_process);
                draw();
            }
            ImGui::End();
        }

    private:
        template<typename = void>
        class Animation final {
        private:
            Animation() = delete;

            Animation(Animation &&) = delete;
            Animation &operator=(Animation &&) = delete;

            Animation(const Animation &) = delete;
            Animation &operator=(const Animation &) = delete;

        public:
            class Color final : public std::array<int, 4> {
            public:
                consteval explicit Color(const int r, const int g, const int b, const int a) noexcept
                    : std::array<int, 4> { r, g, b, a } {}

                consteval Color(Color &&) noexcept = default;
                consteval Color &operator=(Color &&) noexcept = default;

                consteval Color(const Color &) noexcept = default;
                consteval Color &operator=(const Color &) noexcept = default;
            };
        };

        template<>
        class Animation<bool> final {
        private:
            float lerp = 0.0f;

            template<int disabled, int enabled>
            [[nodiscard]] constexpr auto calc_lerp() const noexcept -> int {
                if constexpr ( disabled == enabled ) {
                    return disabled;
                } else {
                    return ImLerp(
                        disabled,
                        enabled,
                        lerp * utility::math::ease_in_expo(ImGui::GetStyle().Alpha)
                    );
                }
            }

        public:
            constexpr Animation() noexcept = default;

            Animation(Animation &&) = delete;
            Animation &operator=(Animation &&) = delete;

            Animation(const Animation &) = delete;
            Animation &operator=(const Animation &) = delete;

            auto animate(const float delta_time, const bool value) noexcept -> void {
                lerp = ImLerp(lerp, value ? 1.0f : 0.0f, delta_time * 8.0f);
            }

            [[nodiscard]] constexpr auto get_lerp() const noexcept -> auto {
                return lerp * utility::math::ease_in_expo(ImGui::GetStyle().Alpha);
            }

            template<Animation<>::Color disabled, Animation<>::Color enabled>
            [[nodiscard]] constexpr auto get_lerp() const noexcept -> ImU32 {
                const auto r = calc_lerp<disabled[0], enabled[0]>();
                const auto g = calc_lerp<disabled[1], enabled[1]>();
                const auto b = calc_lerp<disabled[2], enabled[2]>();
                const auto a = calc_lerp<disabled[3], enabled[3]>();
                return IM_COL32(r, g, b, a);
            }
        };

        template<>
        class Animation<float> final {
        private:
            float lerp = 0.0f;

        public:
            constexpr Animation() noexcept = default;

            Animation(Animation &&) = delete;
            Animation &operator=(Animation &&) = delete;

            Animation(const Animation &) = delete;
            Animation &operator=(const Animation &) = delete;

            auto animate(const float delta_time, const float value, const float min, const float max) noexcept -> void {
                const auto ratio = (value - min) / (max - min);
                lerp = ImLerp(lerp, ratio, delta_time * 8.0f);
            }

            [[nodiscard]] constexpr auto get_lerp() const noexcept -> auto {
                return lerp * utility::math::ease_in_expo(ImGui::GetStyle().Alpha);
            }
        };

        template<>
        class Animation<int> final {
        private:
            float lerp = 0.0f;

        public:
            constexpr Animation() noexcept = default;

            Animation(Animation &&) = delete;
            Animation &operator=(Animation &&) = delete;

            Animation(const Animation &) = delete;
            Animation &operator=(const Animation &) = delete;

            auto animate(const float delta_time, const int value, const int min, const int max) noexcept -> void {
                const auto ratio =
                    static_cast<float>(value - min) / static_cast<float>(max - min);
                lerp = ImLerp(lerp, ratio, delta_time * 8.0f);
            }

            [[nodiscard]] constexpr auto get_lerp() const noexcept -> auto {
                return lerp * utility::math::ease_in_expo(ImGui::GetStyle().Alpha);
            }
        };

        auto draw() noexcept -> void;
        auto draw_tabs(
            const ImGuiContext &imgui_context,
            ImGuiStyle &imgui_style,
            const ImVector<ImFont *> &imgui_fonts,
            ImDrawList &window_drawlist
        ) noexcept -> void;
        auto draw_tabs_group(
            const ImVector<ImFont *> &imgui_fonts,
            ImDrawList &window_drawlist,
            const ImVec2 &group_pos,
            ImStrv group_text
        ) const noexcept -> void;
        auto draw_tabs_button(
            const ImGuiContext &imgui_context,
            ImGuiStyle &imgui_style,
            ImDrawList &window_drawlist,
            ImStrv button_icon,
            ImStrv button_label,
            std::uint8_t index
        ) noexcept -> void;
        auto draw_content(const ImGuiStyle &imgui_style, const ImRect &window_rect) const noexcept -> void;
        auto draw_content_group(const ImVec2 &content_size) const noexcept -> void;

        static auto draw_tabs_background(
            const ImGuiStyle &imgui_style,
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_tabs_and_watermark_seperator(
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_watermark_background(
            const ImGuiStyle &imgui_style,
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_tabs_watermark_and_utility_content_seperator(
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_utility_background(
            const ImGuiStyle &imgui_style,
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_utility_and_background_seperator(
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_content_background(
            const ImGuiStyle &imgui_style,
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_logo(
            const ImVector<ImFont *> &imgui_fonts,
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_watermark(
            const ImVector<ImFont *> &imgui_fonts,
            ImDrawList &window_drawlist,
            const ImRect &window_rect
        ) noexcept -> void;
        static auto draw_utility_save_button(
            const ImVector<ImFont *> &imgui_fonts,
            ImDrawList &window_drawlist
        ) noexcept -> void;
        static auto draw_feature(ImStrv name, bool &value) -> void;
        static auto draw_feature(ImStrv name, float &value, float min, float max, ImStrv format) -> void;
        static auto draw_feature(ImStrv name, int &value, int min, int max, ImStrv format) -> void;
        static auto draw_feature(ImStrv name, int &value, std::initializer_list<ImStrv> items) noexcept -> void;
        static auto draw_feature(ImStrv name, bool value[], std::initializer_list<ImStrv> items) noexcept -> void;
    };

}  // namespace orion::core
