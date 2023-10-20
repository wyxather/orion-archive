#pragma once

namespace orion::core::gui
{

class PostProcess
{
  public:
    NON_COPYABLE(PostProcess)
    NON_MOVEABLE(PostProcess)

    constexpr explicit PostProcess() noexcept = default;

    virtual ~PostProcess() noexcept = default;

    virtual void draw(const ImVec2& min, const ImVec2& max, float rounding) noexcept = 0;

    virtual void validate() noexcept = 0;
    virtual void invalidate() noexcept = 0;
};

class BlurD3D9 final : public PostProcess
{
  public:
    NON_COPYABLE(BlurD3D9)
    NON_MOVEABLE(BlurD3D9)

    explicit BlurD3D9() noexcept;

    ~BlurD3D9() noexcept override;

    void draw(const ImVec2& min, const ImVec2& max, float rounding) noexcept override;

    void validate() noexcept override;
    void invalidate() noexcept override;

  private:
    static auto begin(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
    static auto first_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
    static auto second_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
    static auto end(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;

    auto on_resize() noexcept -> void;

    static constexpr auto down_sample = 0.5f;

    ImVec2 size = ImGui::GetIO().DisplaySize;
    Microsoft::WRL::ComPtr<IDirect3DDevice9> device =
        *static_cast<LPDIRECT3DDEVICE9*>(ImGui::GetIO().BackendRendererUserData);
    Microsoft::WRL::ComPtr<IDirect3DSurface9> render_target_backup;
    std::array<Microsoft::WRL::ComPtr<IDirect3DTexture9>, 2> textures;
    std::array<Microsoft::WRL::ComPtr<IDirect3DPixelShader9>, 2> shaders;
};

class BlurD3D11 final : public PostProcess
{
  public:
    NON_COPYABLE(BlurD3D11)
    NON_MOVEABLE(BlurD3D11)

    explicit BlurD3D11() noexcept;

    ~BlurD3D11() noexcept override;

    void draw(const ImVec2& min, const ImVec2& max, float rounding) noexcept override;

    void validate() noexcept override;
    void invalidate() noexcept override;

  private:
    static auto begin(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
    static auto first_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
    static auto second_pass(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;
    static auto end(const ImDrawList*, const ImDrawCmd* cmd) noexcept -> void;

    class DeviceResource final
    {
      public:
        NON_COPYABLE(DeviceResource)
        NON_MOVEABLE(DeviceResource)

        explicit DeviceResource() noexcept = default;

        auto validate(ID3D11DeviceContext& device_context, ID3D11RenderTargetView& render_target_view) noexcept -> void;

        auto invalidate() noexcept -> void;

      private:
        Microsoft::WRL::ComPtr<ID3D11Texture2D> render_target;
        Microsoft::WRL::ComPtr<ID3D11RenderTargetView> render_target_view;
        Microsoft::WRL::ComPtr<ID3D11DepthStencilView> depth_stencil_view;

      public:
        NODISCARD explicit operator bool() const noexcept
        {
            return render_target.Get() != nullptr;
        }

        NODISCARD auto get_render_target() const noexcept
        {
            return render_target.Get();
        }

        NODISCARD auto get_render_target_view_address() const noexcept
        {
            return render_target_view.GetAddressOf();
        }

        NODISCARD auto get_depth_stencil_view_address() const noexcept
        {
            return depth_stencil_view.GetAddressOf();
        }
    };

    class RenderTexture final
    {
      public:
        NON_COPYABLE(RenderTexture)
        NON_MOVEABLE(RenderTexture)

        explicit RenderTexture() noexcept = default;

        auto validate(ID3D11Device& device, const DeviceResource& resource) noexcept -> void;

        auto validate(ID3D11Device& device, const DeviceResource& resource, const ImVec2& texture_size) noexcept
            -> void;

        auto invalidate() noexcept -> void;

      private:
        NODISCARD static auto resolve_format(DXGI_FORMAT format) noexcept -> DXGI_FORMAT;

        auto create_texture(ID3D11Device& device, const D3D11_TEXTURE2D_DESC& desc) noexcept -> void;

        ImVec2 size;
        Microsoft::WRL::ComPtr<ID3D11Texture2D> render_target;
        Microsoft::WRL::ComPtr<ID3D11RenderTargetView> render_target_view;
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> shader_resource_view;

      public:
        NODISCARD constexpr auto get_size() const noexcept
        {
            return size;
        }

        NODISCARD auto get_render_target() const noexcept
        {
            return render_target.Get();
        }

        NODISCARD auto get_render_target_view() const noexcept
        {
            return render_target_view.Get();
        }

        NODISCARD auto get_shader_resource_view() const noexcept
        {
            return shader_resource_view.Get();
        }
    };

    class PixelShader final
    {
      public:
        NON_COPYABLE(PixelShader)
        NON_MOVEABLE(PixelShader)

        explicit PixelShader() noexcept = default;

        auto validate(ID3D11Device& device, const void* bytes, SIZE_T size) noexcept -> void;

        auto invalidate() noexcept -> void;

      private:
        Microsoft::WRL::ComPtr<ID3D11PixelShader> data;

      public:
        NODISCARD auto get_pixel_shader() const noexcept
        {
            return data.Get();
        }
    };

    class ConstantBuffer final
    {
      public:
        NON_COPYABLE(ConstantBuffer)
        NON_MOVEABLE(ConstantBuffer)

        explicit ConstantBuffer() noexcept = default;

        auto validate(ID3D11Device& device, std::size_t size) noexcept -> void;

        auto validate(ID3D11Device& device, std::size_t size, const D3D11_SUBRESOURCE_DATA& resource) noexcept -> void;

        auto invalidate() noexcept -> void;

      private:
        Microsoft::WRL::ComPtr<ID3D11Buffer> data;

      public:
        NODISCARD auto get_buffer() const noexcept
        {
            return data.Get();
        }

        NODISCARD auto get_buffer_address() const noexcept
        {
            return data.GetAddressOf();
        }
    };

    enum DataType
    {
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
};

} // namespace orion::core::gui
