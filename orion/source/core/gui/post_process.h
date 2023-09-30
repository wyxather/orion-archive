#pragma once

#include <d3d11.h>
#include <d3d9.h>
#include <wrl/client.h>

namespace orion::post_process {
    struct PostProcess {
        constexpr PostProcess() noexcept = default;
        virtual ~PostProcess() noexcept = default;

        PostProcess(PostProcess&&) = delete;
        PostProcess& operator=(PostProcess&&) = delete;

        PostProcess(const PostProcess&) = delete;
        PostProcess& operator=(const PostProcess&) = delete;

        virtual void
        draw(const ImVec2& min, const ImVec2& max, float rounding) noexcept = 0;
        virtual void validate() noexcept = 0;
        virtual void invalidate() noexcept = 0;
    };

    class BlurD3D9 final: public PostProcess {
        static constexpr auto down_sample = 0.5f;

        ImVec2 size = ImGui::GetIO().DisplaySize;

        Microsoft::WRL::ComPtr<IDirect3DDevice9> device =
            *static_cast<LPDIRECT3DDEVICE9*>(
                ImGui::GetIO().BackendRendererUserData
            );
        Microsoft::WRL::ComPtr<IDirect3DSurface9> render_target_backup;

        std::array<Microsoft::WRL::ComPtr<IDirect3DTexture9>, 2> textures;
        std::array<Microsoft::WRL::ComPtr<IDirect3DPixelShader9>, 2> shaders;

        static auto begin(const ImDrawList*, const ImDrawCmd* cmd) noexcept
            -> void;
        static auto first_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept
            -> void;
        static auto
        second_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
        static auto end(const ImDrawList*, const ImDrawCmd* cmd) noexcept
            -> void;

        auto on_resize() noexcept -> void;

    public:
        BlurD3D9() noexcept;
        ~BlurD3D9() noexcept override;

        BlurD3D9(BlurD3D9&&) = delete;
        BlurD3D9& operator=(BlurD3D9&&) = delete;

        BlurD3D9(const BlurD3D9&) = delete;
        BlurD3D9& operator=(const BlurD3D9&) = delete;

        void draw(const ImVec2& min, const ImVec2& max, float rounding) noexcept
            override;
        void validate() noexcept override;
        void invalidate() noexcept override;
    };

    class BlurD3D11 final: public PostProcess {
        class DeviceResource final {
        public:
            DeviceResource() noexcept = default;

            DeviceResource(DeviceResource&&) = delete;
            DeviceResource& operator=(DeviceResource&&) = delete;

            DeviceResource(const DeviceResource&) = delete;
            DeviceResource& operator=(const DeviceResource&) = delete;

            [[nodiscard]] explicit operator bool() const noexcept {
                return DeviceResource::render_target.Get() != nullptr;
            }

            [[nodiscard]] auto get_render_target() const noexcept {
                return DeviceResource::render_target.Get();
            }

            [[nodiscard]] auto get_render_target_view_address() const noexcept {
                return DeviceResource::render_target_view.GetAddressOf();
            }

            [[nodiscard]] auto get_depth_stencil_view_address() const noexcept {
                return DeviceResource::depth_stencil_view.GetAddressOf();
            }

            auto validate(ID3D11DeviceContext& device_context) noexcept -> void;
            auto invalidate() noexcept -> void;

        private:
            Microsoft::WRL::ComPtr<ID3D11Texture2D> render_target;
            Microsoft::WRL::ComPtr<ID3D11RenderTargetView> render_target_view;
            Microsoft::WRL::ComPtr<ID3D11DepthStencilView> depth_stencil_view;
        };

        class RenderTexture final {
        public:
            RenderTexture() noexcept = default;

            RenderTexture(RenderTexture&&) = delete;
            RenderTexture& operator=(RenderTexture&&) = delete;

            RenderTexture(const RenderTexture&) = delete;
            RenderTexture& operator=(const RenderTexture&) = delete;

            [[nodiscard]] constexpr auto get_size() const noexcept {
                return RenderTexture::size;
            }

            [[nodiscard]] auto get_render_target() const noexcept {
                return RenderTexture::render_target.Get();
            }

            [[nodiscard]] auto get_render_target_view() const noexcept {
                return RenderTexture::render_target_view.Get();
            }

            [[nodiscard]] auto get_shader_resource_view() const noexcept {
                return RenderTexture::shader_resource_view.Get();
            }

            auto validate(
                ID3D11Device& device,
                const DeviceResource& resource
            ) noexcept -> void;
            auto validate(
                ID3D11Device& device,
                const DeviceResource& resource,
                const ImVec2& texture_size
            ) noexcept -> void;
            auto invalidate() noexcept -> void;

        private:
            [[nodiscard]] static auto resolve_format(DXGI_FORMAT format
            ) noexcept -> DXGI_FORMAT;

            auto create_texture(
                ID3D11Device& device,
                const D3D11_TEXTURE2D_DESC& desc
            ) noexcept -> void;

            ImVec2 size;
            Microsoft::WRL::ComPtr<ID3D11Texture2D> render_target;
            Microsoft::WRL::ComPtr<ID3D11RenderTargetView> render_target_view;
            Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>
                shader_resource_view;
        };

        class PixelShader final {
        public:
            PixelShader() noexcept = default;

            PixelShader(PixelShader&&) = delete;
            PixelShader& operator=(PixelShader&&) = delete;

            PixelShader(const PixelShader&) = delete;
            PixelShader& operator=(const PixelShader&) = delete;

            [[nodiscard]] auto get_pixel_shader() const noexcept {
                return PixelShader::data.Get();
            }

            auto validate(
                ID3D11Device& device,
                const void* bytes,
                SIZE_T size
            ) noexcept -> void;
            auto invalidate() noexcept -> void;

        private:
            Microsoft::WRL::ComPtr<ID3D11PixelShader> data;
        };

        class ConstantBuffer final {
        public:
            ConstantBuffer() noexcept = default;

            ConstantBuffer(ConstantBuffer&&) = delete;
            ConstantBuffer& operator=(ConstantBuffer&&) = delete;

            ConstantBuffer(const ConstantBuffer&) = delete;
            ConstantBuffer& operator=(const ConstantBuffer&) = delete;

            [[nodiscard]] auto get_buffer() const noexcept {
                return ConstantBuffer::data.Get();
            }

            [[nodiscard]] auto get_buffer_address() const noexcept {
                return ConstantBuffer::data.GetAddressOf();
            }

            auto validate(ID3D11Device& device, std::size_t size) noexcept
                -> void;
            auto validate(
                ID3D11Device& device,
                std::size_t size,
                const D3D11_SUBRESOURCE_DATA& resource
            ) noexcept -> void;
            auto invalidate() noexcept -> void;

        private:
            Microsoft::WRL::ComPtr<ID3D11Buffer> data;
        };

        enum DataType {
            PS_BLOOM_COMBINE = 0,
            PS_BLOOM_EXTRACT = 1,
            PS_GAUSSIAN_BLUR = 2,

            CB_BLOOM_PARAMS = 0,
            CB_BLUR_PARAMS_WIDTH = 1,
            CB_BLUR_PARAMS_HEIGHT = 2,

            RT_COPY = 0,
            RT_FIRST_PASS = 1,
            RT_SECOND_PASS = 2,

            DATA_MAX = 3
        };

        auto on_resize() noexcept -> void;

        DeviceResource device_resource;
        std::array<RenderTexture, DATA_MAX> render_target;
        std::array<PixelShader, DATA_MAX> pixel_shader;
        std::array<ConstantBuffer, DATA_MAX> constant_buffer;

    public:
        BlurD3D11() noexcept;
        ~BlurD3D11() noexcept override;

        BlurD3D11(BlurD3D11&&) = delete;
        BlurD3D11& operator=(BlurD3D11&&) = delete;

        BlurD3D11(const BlurD3D11&) = delete;
        BlurD3D11& operator=(const BlurD3D11&) = delete;

        static auto begin(const ImDrawList*, const ImDrawCmd* cmd) noexcept
            -> void;
        static auto first_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept
            -> void;
        static auto
        second_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
        static auto end(const ImDrawList*, const ImDrawCmd* cmd) noexcept
            -> void;

        void draw(const ImVec2& min, const ImVec2& max, float rounding) noexcept
            override;
        void validate() noexcept override;
        void invalidate() noexcept override;
    };
}  // namespace orion::post_process
