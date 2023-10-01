#include "post_process.h"

#include "dependencies/imgui/imgui_custom.h"
#include "dependencies/imgui/imgui_impl_dx11.h"
#if _WIN64
    #if NDEBUG  // WIN64 RELEASE
        #include "source/resources/shaders/build/Release/x64/bloom_combine.h"
        #include "source/resources/shaders/build/Release/x64/bloom_extract.h"
        #include "source/resources/shaders/build/Release/x64/blur_x.h"
        #include "source/resources/shaders/build/Release/x64/blur_y.h"
        #include "source/resources/shaders/build/Release/x64/gaussian_blur.h"
    #else  // WIN64 DEBUG
        #include "source/resources/shaders/build/Debug/x64/bloom_combine.h"
        #include "source/resources/shaders/build/Debug/x64/bloom_extract.h"
        #include "source/resources/shaders/build/Debug/x64/blur_x.h"
        #include "source/resources/shaders/build/Debug/x64/blur_y.h"
        #include "source/resources/shaders/build/Debug/x64/gaussian_blur.h"
    #endif
#else
    #if NDEBUG  // WIN32 RELEASE
        #include "source/resources/shaders/build/Release/Win32/bloom_combine.h"
        #include "source/resources/shaders/build/Release/Win32/bloom_extract.h"
        #include "source/resources/shaders/build/Release/Win32/blur_x.h"
        #include "source/resources/shaders/build/Release/Win32/blur_y.h"
        #include "source/resources/shaders/build/Release/Win32/gaussian_blur.h"
    #else  // WIN32 DEBUG
        #include "source/resources/shaders/build/Debug/Win32/bloom_combine.h"
        #include "source/resources/shaders/build/Debug/Win32/bloom_extract.h"
        #include "source/resources/shaders/build/Debug/Win32/blur_x.h"
        #include "source/resources/shaders/build/Debug/Win32/blur_y.h"
        #include "source/resources/shaders/build/Debug/Win32/gaussian_blur.h"
    #endif
#endif

using Microsoft::WRL::ComPtr;
using orion::core::gui::BlurD3D11;
using orion::core::gui::BlurD3D9;

auto BlurD3D9::begin(const ImDrawList*, const ImDrawCmd* const cmd) noexcept
    -> void {
    auto& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    blur.device->GetRenderTarget(0, blur.render_target_backup.GetAddressOf());

    ComPtr<IDirect3DSurface9> back_buffer;
    blur.device->GetBackBuffer(
        0,
        0,
        D3DBACKBUFFER_TYPE::D3DBACKBUFFER_TYPE_MONO,
        back_buffer.GetAddressOf()
    );

    ComPtr<IDirect3DSurface9> surface;
    blur.textures[0]->GetSurfaceLevel(0, surface.GetAddressOf());
    blur.device->StretchRect(
        back_buffer.Get(),
        nullptr,
        surface.Get(),
        nullptr,
        D3DTEXTUREFILTERTYPE::D3DTEXF_LINEAR
    );

    blur.device->SetSamplerState(
        0,
        D3DSAMPLERSTATETYPE::D3DSAMP_ADDRESSU,
        D3DTEXTUREADDRESS::D3DTADDRESS_CLAMP
    );
    blur.device->SetSamplerState(
        0,
        D3DSAMPLERSTATETYPE::D3DSAMP_ADDRESSV,
        D3DTEXTUREADDRESS::D3DTADDRESS_CLAMP
    );
    blur.device->SetRenderState(
        D3DRENDERSTATETYPE::D3DRS_SCISSORTESTENABLE,
        FALSE
    );

    const D3DMATRIX projection {
        {{1.0f,
          0.0f,
          0.0f,
          0.0f,
          0.0f,
          1.0f,
          0.0f,
          0.0f,
          0.0f,
          0.0f,
          1.0f,
          0.0f,
          -1.0f / (blur.size.x * down_sample),
          1.0f / (blur.size.y * down_sample),
          0.0f,
          1.0f}}
    };
    blur.device->SetVertexShaderConstantF(0, &projection.m[0][0], 4);
}

auto BlurD3D9::first_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    std::array<float, 4> parms {1.0f / (blur.size.x * down_sample)};
    blur.device->SetPixelShader(blur.shaders[0].Get());
    blur.device->SetPixelShaderConstantF(0, parms.data(), 1);

    ComPtr<IDirect3DSurface9> surface;
    blur.textures[1]->GetSurfaceLevel(0, surface.GetAddressOf());
    blur.device->SetRenderTarget(0, surface.Get());
}

auto BlurD3D9::second_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    std::array<float, 4> parms {1.0f / (blur.size.y * down_sample)};
    blur.device->SetPixelShader(blur.shaders[1].Get());
    blur.device->SetPixelShaderConstantF(0, parms.data(), 1);

    ComPtr<IDirect3DSurface9> surface;
    blur.textures[0]->GetSurfaceLevel(0, surface.GetAddressOf());
    blur.device->SetRenderTarget(0, surface.Get());
}

auto BlurD3D9::end(const ImDrawList*, const ImDrawCmd* const cmd) noexcept
    -> void {
    auto& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    blur.device->SetRenderTarget(0, blur.render_target_backup.Get());
    blur.render_target_backup.Reset();

    blur.device->SetPixelShader(nullptr);
    blur.device->SetRenderState(
        D3DRENDERSTATETYPE::D3DRS_SCISSORTESTENABLE,
        TRUE
    );
}

auto BlurD3D9::on_resize() noexcept -> void {
    const auto& display_size = ImGui::GetIO().DisplaySize;
    if (display_size.x != size.x || display_size.y != size.y) {
        invalidate();
        size = display_size;
        validate();
    }
}

BlurD3D9::BlurD3D9() noexcept {
    validate();
}

BlurD3D9::~BlurD3D9() noexcept {
    device.Reset();
    render_target_backup.Reset();
    invalidate();
}

void BlurD3D9::draw(
    const ImVec2& min,
    const ImVec2& max,
    const float rounding
) noexcept {
    on_resize();

    auto& draw_list = *ImGui::GetWindowDrawList();

    draw_list.AddCallback(&begin, this);
    for (auto i = 0; i < 8; ++i) {
        draw_list.AddCallback(&first_pass, this);
        draw_list.AddImage(
            static_cast<ImTextureID>(textures[0].Get()),
            ImVec2 {-1.0f, -1.0f},
            ImVec2 {1.0f, 1.0f}
        );
        draw_list.AddCallback(&second_pass, this);
        draw_list.AddImage(
            static_cast<ImTextureID>(textures[1].Get()),
            ImVec2 {-1.0f, -1.0f},
            ImVec2 {1.0f, 1.0f}
        );
    }
    draw_list.AddCallback(&end, this);
    draw_list.AddCallback(ImDrawCallback_ResetRenderState, nullptr);
    draw_list.AddImageRounded(
        static_cast<ImTextureID>(textures[0].Get()),
        min,
        max,
        min / size,
        max / size,
        IM_COL32_WHITE,
        rounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
}

void BlurD3D9::validate() noexcept {
    for (auto& texture : textures) {
        device->CreateTexture(
            static_cast<UINT>(size.x * down_sample),
            static_cast<UINT>(size.y * down_sample),
            1,
            D3DUSAGE_RENDERTARGET,
            D3DFORMAT::D3DFMT_X8R8G8B8,
            D3DPOOL::D3DPOOL_DEFAULT,
            texture.GetAddressOf(),
            nullptr
        );
    }
    device->CreatePixelShader(
        reinterpret_cast<const DWORD*>(blur_x),
        shaders[0].GetAddressOf()
    );
    device->CreatePixelShader(
        reinterpret_cast<const DWORD*>(blur_y),
        shaders[1].GetAddressOf()
    );
}

void BlurD3D9::invalidate() noexcept {
    for (auto& texture : textures) {
        texture.Reset();
    }
    for (auto& shader : shaders) {
        shader.Reset();
    }
}

auto BlurD3D11::DeviceResource::validate(
    ID3D11DeviceContext& device_context,
    ID3D11RenderTargetView& render_target_view
) noexcept -> void {
    device_context.OMGetRenderTargets(
        1,
        this->render_target_view.GetAddressOf(),
        depth_stencil_view.GetAddressOf()
    );
    if (this->render_target_view == nullptr) {
        this->render_target_view.Attach(&render_target_view);
    }
    this->render_target_view->GetResource(
        reinterpret_cast<ID3D11Resource**>(render_target.GetAddressOf())
    );
}

auto BlurD3D11::DeviceResource::invalidate() noexcept -> void {
    render_target.Reset();
    render_target_view.Reset();
    depth_stencil_view.Reset();
}

auto BlurD3D11::RenderTexture::validate(
    ID3D11Device& device,
    const DeviceResource& resource
) noexcept -> void {
    D3D11_TEXTURE2D_DESC desc;
    resource.get_render_target()->GetDesc(&desc);

    size.x = static_cast<float>(desc.Width);
    size.y = static_cast<float>(desc.Height);

    desc = CD3D11_TEXTURE2D_DESC {
        resolve_format(desc.Format),
        desc.Width,
        desc.Height,
        desc.ArraySize,
        desc.MipLevels,
        desc.BindFlags | D3D11_BIND_FLAG::D3D11_BIND_RENDER_TARGET
            | D3D11_BIND_FLAG::D3D11_BIND_SHADER_RESOURCE,
        desc.Usage,
        desc.CPUAccessFlags,
        desc.MiscFlags
            | D3D11_RESOURCE_MISC_FLAG::D3D11_RESOURCE_MISC_GENERATE_MIPS
    };

    return create_texture(device, desc);
}

auto BlurD3D11::RenderTexture::validate(
    ID3D11Device& device,
    const DeviceResource& resource,
    const ImVec2& texture_size
) noexcept -> void {
    D3D11_TEXTURE2D_DESC desc;
    resource.get_render_target()->GetDesc(&desc);

    size.x = static_cast<float>(desc.Width);
    size.y = static_cast<float>(desc.Height);

    desc = CD3D11_TEXTURE2D_DESC {
        resolve_format(desc.Format),
        static_cast<UINT>(texture_size.x),
        static_cast<UINT>(texture_size.y),
        desc.ArraySize,
        desc.MipLevels,
        desc.BindFlags | D3D11_BIND_FLAG::D3D11_BIND_RENDER_TARGET
            | D3D11_BIND_FLAG::D3D11_BIND_SHADER_RESOURCE,
        desc.Usage,
        desc.CPUAccessFlags,
        desc.MiscFlags
            | D3D11_RESOURCE_MISC_FLAG::D3D11_RESOURCE_MISC_GENERATE_MIPS
    };

    return create_texture(device, desc);
}

auto BlurD3D11::RenderTexture::invalidate() noexcept -> void {
    size = {};
    render_target.Reset();
    render_target_view.Reset();
    shader_resource_view.Reset();
}

auto BlurD3D11::RenderTexture::resolve_format(const DXGI_FORMAT format) noexcept
    -> DXGI_FORMAT {
    if (format == DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_TYPELESS) {
        return DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM;
    }
    return format;
}

auto BlurD3D11::RenderTexture::create_texture(
    ID3D11Device& device,
    const D3D11_TEXTURE2D_DESC& desc
) noexcept -> void {
    CD3D11_RENDER_TARGET_VIEW_DESC rtv_dsc {
        D3D11_RTV_DIMENSION::D3D11_RTV_DIMENSION_TEXTURE2D,
        desc.Format
    };

    CD3D11_SHADER_RESOURCE_VIEW_DESC srv_dsc {
        D3D11_SRV_DIMENSION::D3D11_SRV_DIMENSION_TEXTURE2D,
        desc.Format,
        0,
        desc.MipLevels
    };

    device.CreateTexture2D(&desc, nullptr, render_target.GetAddressOf());
    device.CreateRenderTargetView(
        render_target.Get(),
        &rtv_dsc,
        &(render_target_view)
    );
    device.CreateShaderResourceView(
        render_target.Get(),
        &srv_dsc,
        &(shader_resource_view)
    );
}

auto BlurD3D11::PixelShader::validate(
    ID3D11Device& device,
    const void* const bytes,
    const SIZE_T size
) noexcept -> void {
    device.CreatePixelShader(bytes, size, nullptr, data.GetAddressOf());
}

auto BlurD3D11::PixelShader::invalidate() noexcept -> void {
    data.Reset();
}

auto BlurD3D11::ConstantBuffer::validate(
    ID3D11Device& device,
    const std::size_t size
) noexcept -> void {
    CD3D11_BUFFER_DESC desc {
        static_cast<UINT>(size),
        D3D11_BIND_FLAG::D3D11_BIND_CONSTANT_BUFFER
    };
    device.CreateBuffer(&desc, nullptr, data.GetAddressOf());
}

auto BlurD3D11::ConstantBuffer::validate(
    ID3D11Device& device,
    const std::size_t size,
    const D3D11_SUBRESOURCE_DATA& resource
) noexcept -> void {
    CD3D11_BUFFER_DESC desc {
        static_cast<UINT>(size),
        D3D11_BIND_FLAG::D3D11_BIND_CONSTANT_BUFFER
    };
    device.CreateBuffer(&desc, &resource, data.GetAddressOf());
}

auto BlurD3D11::ConstantBuffer::invalidate() noexcept -> void {
    data.Reset();
}

auto BlurD3D11::on_resize() noexcept -> void {
    const auto& display_size = ImGui::GetIO().DisplaySize;
    const auto& size = render_target[RT_FIRST_PASS].get_size();
    if (display_size.x != size.x || display_size.y != size.y) {
        invalidate();
        validate();
    }
}

BlurD3D11::BlurD3D11() noexcept {
    validate();
}

BlurD3D11::~BlurD3D11() noexcept {
    invalidate();
}

auto BlurD3D11::draw(
    const ImVec2& min,
    const ImVec2& max,
    const float rounding
) noexcept -> void {
    on_resize();

    auto& draw_list = *ImGui::GetWindowDrawList();
    const auto render_target_shader_resource_view =
        render_target[RT_COPY].get_shader_resource_view();

    // scene -> RT1 (downsample)
    draw_list.AddCallback(&begin, this);
    draw_list.AddImage(
        render_target_shader_resource_view,
        ImVec2 {0.0f, 0.0f},
        render_target[RT_FIRST_PASS].get_size()
    );

    // RT1 -> RT2 (blur horizontal)
    draw_list.AddCallback(&first_pass, this);
    draw_list.AddImage(
        render_target[RT_FIRST_PASS].get_shader_resource_view(),
        ImVec2 {0.0f, 0.0f},
        render_target[RT_FIRST_PASS].get_size()
    );

    // RT2 -> RT1 (blur vertical)
    draw_list.AddCallback(&second_pass, this);
    draw_list.AddImage(
        render_target[RT_SECOND_PASS].get_shader_resource_view(),
        ImVec2 {0.0f, 0.0f},
        render_target[RT_SECOND_PASS].get_size()
    );

    // RT1 + scene
    draw_list.AddCallback(&end, this);

    const auto size = render_target[RT_COPY].get_size();
    draw_list.AddImageRounded(
        static_cast<ImTextureID>(render_target_shader_resource_view),
        min,
        max,
        min / size,
        max / size,
        IM_COL32_WHITE,
        rounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );

    draw_list.AddCallback(ImDrawCallback_ResetRenderState, nullptr);
}

auto BlurD3D11::validate() noexcept -> void {
    constexpr size_t SAMPLE_COUNT = 15;

    enum class BloomPresets {
        Default = 0,
        Soft,
        Desaturated,
        Saturated,
        Blurry,
        Subtle,
        None,
        Custom
    };

    constexpr auto selected_bloom_presets = BloomPresets::Custom;

    class VS_BLOOM_PARAMETERS final {
    public:
        NON_COPYABLE(VS_BLOOM_PARAMETERS)
        NON_MOVEABLE(VS_BLOOM_PARAMETERS)

        float bloom_threshold = 0.0f;
        float blur_amount = 0.0f;
        float bloom_intensity = 0.0f;
        float base_intensity = 0.0f;
        float bloom_saturation = 0.0f;
        float base_saturation = 0.0f;
        std::array<std::uint8_t, 8> na = {};

        constexpr explicit VS_BLOOM_PARAMETERS(
            const float bloom_threshold,
            const float blur_amount,
            const float bloom_intensity,
            const float base_intensity,
            const float bloom_saturation,
            const float base_saturation
        ) noexcept :
            bloom_threshold(bloom_threshold),
            blur_amount(blur_amount),
            bloom_intensity(bloom_intensity),
            base_intensity(base_intensity),
            bloom_saturation(bloom_saturation),
            base_saturation(base_saturation) {}
    };

    static_assert(
        !(sizeof(VS_BLOOM_PARAMETERS) % 16),
        "VS_BLOOM_PARAMETERS needs to be 16 bytes aligned"
    );

    class VS_BLUR_PARAMETERS final {
    public:
        NON_COPYABLE(VS_BLUR_PARAMETERS)
        NON_MOVEABLE(VS_BLUR_PARAMETERS)

    private:
        class XMFLOAT4 final {
        public:
            NON_COPYABLE(XMFLOAT4)
            NON_MOVEABLE(XMFLOAT4)

            constexpr explicit XMFLOAT4() noexcept = default;

            float x = 0.0f;
            float y = 0.0f;
            float z = 0.0f;
            float w = 0.0f;
        };

        class XMFLOAT2 final {
        public:
            NON_COPYABLE(XMFLOAT2)
            NON_MOVEABLE(XMFLOAT2)

            constexpr explicit XMFLOAT2() noexcept = default;

            float x = 0.0f;
            float y = 0.0f;

            constexpr explicit XMFLOAT2(float x, float y) noexcept :
                x(x),
                y(y) {}

            constexpr auto operator*=(const float a) noexcept -> auto& {
                x *= a;
                y *= a;
                return *this;
            }
        };

        std::array<XMFLOAT4, SAMPLE_COUNT> sample_offsets;
        std::array<XMFLOAT4, SAMPLE_COUNT> sample_weights;

    public:
        explicit VS_BLUR_PARAMETERS(
            const float dx,
            const float dy,
            const VS_BLOOM_PARAMETERS& params
        ) noexcept {
            sample_weights[0].x = compute_gaussian(0.0f, params.blur_amount);
            sample_offsets[0].x = sample_offsets[0].y = 0.f;

            auto total_weights = sample_weights[0].x;

            // Add pairs of additional sample taps, positioned
            // along a line in both directions from the center.
            for (std::size_t i = 0; i < (SAMPLE_COUNT / 2); ++i) {
                // Store weights for the positive and negative taps.
                const auto weight = compute_gaussian(
                    static_cast<float>(i + 1),
                    params.blur_amount
                );

                sample_weights[i * 2 + 1].x = weight;
                sample_weights[i * 2 + 2].x = weight;

                total_weights += weight * 2.0f;

                // To get the maximum amount of blurring from a limited number of
                // pixel shader samples, we take advantage of the bilinear filtering
                // hardware inside the texture fetch unit. If we position our texture
                // coordinates exactly halfway between two texels, the filtering unit
                // will average them for us, giving two samples for the price of one.
                // This allows us to step in units of two texels per sample, rather
                // than just one at a time. The 1.5 offset kicks things off by
                // positioning us nicely in between two texels.
                XMFLOAT2 delta {dx, dy};
                delta *= static_cast<float>(i) * 2.0f + 1.5f;

                // Store texture coordinate offsets for the positive and negative taps.
                sample_offsets[i * 2 + 1].x = delta.x;
                sample_offsets[i * 2 + 1].y = delta.y;
                sample_offsets[i * 2 + 2].x = -delta.x;
                sample_offsets[i * 2 + 2].y = -delta.y;
            }

            for (std::size_t i = 0; i < SAMPLE_COUNT; ++i) {
                sample_weights[i].x /= total_weights;
            }
        }

    private:
        NODISCARD static auto
        compute_gaussian(const float value, const float theta) noexcept
            -> float {
            constexpr auto number = 2.0f * std::numbers::pi_v<float>;
            return (1.0f / std::sqrtf(number * theta))
                * std::expf(-(value * value) / (2.0f * theta * theta));
        }
    };

    static_assert(
        !(sizeof(VS_BLUR_PARAMETERS) % 16),
        "VS_BLUR_PARAMETERS needs to be 16 bytes aligned"
    );

    constexpr std::array<VS_BLOOM_PARAMETERS, 8> bloom_presets = {
        //					Thresh Blur	Bloom Base BloomSat BaseSat
        VS_BLOOM_PARAMETERS(0.25f, 4.0f, 1.25f, 1.0f, 1.0f, 1.0f),  // Default
        VS_BLOOM_PARAMETERS(0.0f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f),  // Soft
        VS_BLOOM_PARAMETERS(0.5f, 8.0f, 2.0f, 1.0f, 0.0f, 1.0f),  // Desaturated
        VS_BLOOM_PARAMETERS(0.25f, 4.0f, 2.0f, 1.0f, 2.0f, 0.0f),  // Saturated
        VS_BLOOM_PARAMETERS(0.0f, 2.0f, 1.0f, 0.1f, 1.0f, 1.0f),  // Blurry
        VS_BLOOM_PARAMETERS(0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f),  // Subtle
        VS_BLOOM_PARAMETERS(0.25f, 4.0f, 1.25f, 1.0f, 1.0f, 1.0f),  // None
        VS_BLOOM_PARAMETERS(0.0f, 8.0f, 1.0f, 0.1f, 1.0f, 1.0f),  // Custom
    };

    const auto& io = ImGui::GetIO();
    auto& data = *static_cast<ImGui_ImplDX11_Data*>(io.BackendRendererUserData);

    device_resource.validate(
        *data.pd3dDeviceContext,
        *data.pRenderTarget.Get()
    );
    pixel_shader[PS_BLOOM_COMBINE]
        .validate(*data.pd3dDevice, bloom_combine, IM_ARRAYSIZE(bloom_combine));
    pixel_shader[PS_BLOOM_EXTRACT]
        .validate(*data.pd3dDevice, bloom_extract, IM_ARRAYSIZE(bloom_extract));
    pixel_shader[PS_GAUSSIAN_BLUR]
        .validate(*data.pd3dDevice, gaussian_blur, IM_ARRAYSIZE(gaussian_blur));
    render_target[RT_COPY].validate(*data.pd3dDevice, device_resource);
    render_target[RT_FIRST_PASS]
        .validate(*data.pd3dDevice, device_resource, io.DisplaySize);
    render_target[RT_SECOND_PASS]
        .validate(*data.pd3dDevice, device_resource, io.DisplaySize);
    constant_buffer[CB_BLOOM_PARAMS].validate(
        *data.pd3dDevice,
        sizeof(VS_BLOOM_PARAMETERS),
        D3D11_SUBRESOURCE_DATA {
            &bloom_presets[static_cast<int>(selected_bloom_presets)],
            0,
            0
        }
    );
    constant_buffer[CB_BLUR_PARAMS_WIDTH].validate(
        *data.pd3dDevice,
        sizeof(VS_BLUR_PARAMETERS)
    );
    constant_buffer[CB_BLUR_PARAMS_HEIGHT].validate(
        *data.pd3dDevice,
        sizeof(VS_BLUR_PARAMETERS)
    );

    data.pd3dDeviceContext->UpdateSubresource(
        constant_buffer[CB_BLOOM_PARAMS].get_buffer(),
        0,
        nullptr,
        &bloom_presets[static_cast<int>(selected_bloom_presets)],
        0,
        0
    );

    VS_BLUR_PARAMETERS blur_data_width {
        1.0f / (io.DisplaySize.x),
        0.0f,
        bloom_presets[static_cast<int>(selected_bloom_presets)]
    };
    data.pd3dDeviceContext->UpdateSubresource(
        constant_buffer[CB_BLUR_PARAMS_WIDTH].get_buffer(),
        0,
        nullptr,
        &blur_data_width,
        sizeof(VS_BLUR_PARAMETERS),
        0
    );

    VS_BLUR_PARAMETERS blur_data_height {
        0.0f,
        1.0f / (io.DisplaySize.y),
        bloom_presets[static_cast<int>(selected_bloom_presets)]
    };
    data.pd3dDeviceContext->UpdateSubresource(
        constant_buffer[CB_BLUR_PARAMS_HEIGHT].get_buffer(),
        0,
        nullptr,
        &blur_data_height,
        sizeof(VS_BLUR_PARAMETERS),
        0
    );
}

auto BlurD3D11::invalidate() noexcept -> void {
    device_resource.invalidate();
    for (auto i = 0; i < DATA_MAX; i++) {
        render_target[i].invalidate();
        pixel_shader[i].invalidate();
        constant_buffer[i].invalidate();
    }
}

auto BlurD3D11::begin(const ImDrawList*, const ImDrawCmd* const cmd) noexcept
    -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);

    auto& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                ImGui::GetIO().BackendRendererUserData
    )
                                ->pd3dDeviceContext;

    const auto render_target_first_pass_view =
        blur.render_target[RT_FIRST_PASS].get_render_target_view();

    device_context.CopyResource(
        blur.render_target[RT_COPY].get_render_target(),
        blur.device_resource.get_render_target()
    );
    device_context
        .OMSetRenderTargets(1, &render_target_first_pass_view, nullptr);
    device_context.PSSetShader(
        blur.pixel_shader[PS_BLOOM_EXTRACT].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[CB_BLOOM_PARAMS].get_buffer_address()
    );
}

auto BlurD3D11::first_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);

    auto& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                ImGui::GetIO().BackendRendererUserData
    )
                                ->pd3dDeviceContext;

    const auto render_target_second_pass_view =
        blur.render_target[RT_SECOND_PASS].get_render_target_view();

    device_context
        .OMSetRenderTargets(1, &render_target_second_pass_view, nullptr);
    device_context.PSSetShader(
        blur.pixel_shader[PS_GAUSSIAN_BLUR].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[CB_BLUR_PARAMS_WIDTH].get_buffer_address()
    );
}

auto BlurD3D11::second_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);

    auto& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                ImGui::GetIO().BackendRendererUserData
    )
                                ->pd3dDeviceContext;

    const auto render_target_first_pass_view =
        blur.render_target[RT_FIRST_PASS].get_render_target_view();

    device_context
        .OMSetRenderTargets(1, &render_target_first_pass_view, nullptr);
    device_context.PSSetShader(
        blur.pixel_shader[PS_GAUSSIAN_BLUR].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[CB_BLUR_PARAMS_HEIGHT].get_buffer_address()
    );
}

auto BlurD3D11::end(const ImDrawList*, const ImDrawCmd* const cmd) noexcept
    -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);

    auto& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                ImGui::GetIO().BackendRendererUserData
    )
                                ->pd3dDeviceContext;

    const auto render_target_first_pass_shader_resource_view =
        blur.render_target[RT_FIRST_PASS].get_shader_resource_view();

    device_context.OMSetRenderTargets(
        1,
        blur.device_resource.get_render_target_view_address(),
        *blur.device_resource.get_depth_stencil_view_address()
    );
    device_context.PSSetShader(
        blur.pixel_shader[PS_BLOOM_COMBINE].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[CB_BLOOM_PARAMS].get_buffer_address()
    );
    device_context.PSSetShaderResources(
        1,
        1,
        &render_target_first_pass_shader_resource_view
    );
}
