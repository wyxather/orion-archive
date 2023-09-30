#include "post_process.h"

#include "dependencies/imgui/imgui_custom.h"
#include "dependencies/imgui/imgui_impl_dx11.h"
#if _WIN64
    #if NDEBUG  // WIN64 RELEASE
        #include "resources/shaders/build/Release/x64/bloom_combine.h"
        #include "resources/shaders/build/Release/x64/bloom_extract.h"
        #include "resources/shaders/build/Release/x64/blur_x.h"
        #include "resources/shaders/build/Release/x64/blur_y.h"
        #include "resources/shaders/build/Release/x64/gaussian_blur.h"
    #else  // WIN64 DEBUG
        #include "resources/shaders/build/Debug/x64/bloom_combine.h"
        #include "resources/shaders/build/Debug/x64/bloom_extract.h"
        #include "resources/shaders/build/Debug/x64/blur_x.h"
        #include "resources/shaders/build/Debug/x64/blur_y.h"
        #include "resources/shaders/build/Debug/x64/gaussian_blur.h"
    #endif
#else
    #if NDEBUG  // WIN32 RELEASE
        #include "resources/shaders/build/Release/Win32/bloom_combine.h"
        #include "resources/shaders/build/Release/Win32/bloom_extract.h"
        #include "resources/shaders/build/Release/Win32/blur_x.h"
        #include "resources/shaders/build/Release/Win32/blur_y.h"
        #include "resources/shaders/build/Release/Win32/gaussian_blur.h"
    #else  // WIN32 DEBUG
        #include "resources/shaders/build/Debug/Win32/bloom_combine.h"
        #include "resources/shaders/build/Debug/Win32/bloom_extract.h"
        #include "resources/shaders/build/Debug/Win32/blur_x.h"
        #include "resources/shaders/build/Debug/Win32/blur_y.h"
        #include "resources/shaders/build/Debug/Win32/gaussian_blur.h"
    #endif
#endif

auto orion::post_process::BlurD3D9::begin(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    auto&& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    blur.device->GetRenderTarget(0, blur.render_target_backup.GetAddressOf());

    Microsoft::WRL::ComPtr<IDirect3DSurface9> back_buffer;
    blur.device->GetBackBuffer(
        0,
        0,
        D3DBACKBUFFER_TYPE::D3DBACKBUFFER_TYPE_MONO,
        back_buffer.GetAddressOf()
    );

    Microsoft::WRL::ComPtr<IDirect3DSurface9> surface;
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
          -1.0f / (blur.size.x * BlurD3D9::down_sample),
          1.0f / (blur.size.y * BlurD3D9::down_sample),
          0.0f,
          1.0f}}
    };
    blur.device->SetVertexShaderConstantF(0, &projection.m[0][0], 4);
}

auto orion::post_process::BlurD3D9::first_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    std::array<float, 4> parms = {1.0f / (blur.size.x * BlurD3D9::down_sample)};
    blur.device->SetPixelShader(blur.shaders[0].Get());
    blur.device->SetPixelShaderConstantF(0, parms.data(), 1);

    Microsoft::WRL::ComPtr<IDirect3DSurface9> surface;
    blur.textures[1]->GetSurfaceLevel(0, surface.GetAddressOf());
    blur.device->SetRenderTarget(0, surface.Get());
}

auto orion::post_process::BlurD3D9::second_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    std::array<float, 4> parms = {1.0f / (blur.size.y * BlurD3D9::down_sample)};
    blur.device->SetPixelShader(blur.shaders[1].Get());
    blur.device->SetPixelShaderConstantF(0, parms.data(), 1);

    Microsoft::WRL::ComPtr<IDirect3DSurface9> surface;
    blur.textures[0]->GetSurfaceLevel(0, surface.GetAddressOf());
    blur.device->SetRenderTarget(0, surface.Get());
}

auto orion::post_process::BlurD3D9::end(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    auto&& blur = *static_cast<BlurD3D9*>(cmd->UserCallbackData);

    blur.device->SetRenderTarget(0, blur.render_target_backup.Get());
    blur.render_target_backup.Reset();

    blur.device->SetPixelShader(nullptr);
    blur.device->SetRenderState(
        D3DRENDERSTATETYPE::D3DRS_SCISSORTESTENABLE,
        TRUE
    );
}

auto orion::post_process::BlurD3D9::on_resize() noexcept -> void {
    if (const auto& display_size = ImGui::GetIO().DisplaySize;
        display_size.x != BlurD3D9::size.x
        || display_size.y != BlurD3D9::size.y) {
        BlurD3D9::invalidate();
        BlurD3D9::validate();
        BlurD3D9::size = display_size;
    }
}

orion::post_process::BlurD3D9::BlurD3D9() noexcept {
    BlurD3D9::validate();
}

orion::post_process::BlurD3D9::~BlurD3D9() noexcept {
    BlurD3D9::device.Reset();
    BlurD3D9::render_target_backup.Reset();
    BlurD3D9::invalidate();
}

void orion::post_process::BlurD3D9::draw(
    const ImVec2& min,
    const ImVec2& max,
    const float rounding
) noexcept {
    BlurD3D9::on_resize();

    auto&& draw_list = *ImGui::GetWindowDrawList();

    draw_list.AddCallback(&BlurD3D9::begin, this);
    for (auto i = 0; i < 8; ++i) {
        draw_list.AddCallback(&BlurD3D9::first_pass, this);
        draw_list.AddImage(
            static_cast<ImTextureID>(BlurD3D9::textures[0].Get()),
            ImVec2(-1.0f, -1.0f),
            ImVec2(1.0f, 1.0f)
        );
        draw_list.AddCallback(&BlurD3D9::second_pass, this);
        draw_list.AddImage(
            static_cast<ImTextureID>(BlurD3D9::textures[1].Get()),
            ImVec2(-1.0f, -1.0f),
            ImVec2(1.0f, 1.0f)
        );
    }
    draw_list.AddCallback(&BlurD3D9::end, this);
    draw_list.AddCallback(ImDrawCallback_ResetRenderState, nullptr);
    draw_list.AddImageRounded(
        static_cast<ImTextureID>(BlurD3D9::textures[0].Get()),
        min,
        max,
        min / BlurD3D9::size,
        max / BlurD3D9::size,
        IM_COL32_WHITE,
        rounding,
        ImDrawFlags_::ImDrawFlags_RoundCornersAll
    );
}

void orion::post_process::BlurD3D9::validate() noexcept {
    for (auto&& texture : BlurD3D9::textures)
        BlurD3D9::device->CreateTexture(
            static_cast<UINT>(BlurD3D9::size.x * BlurD3D9::down_sample),
            static_cast<UINT>(BlurD3D9::size.y * BlurD3D9::down_sample),
            1,
            D3DUSAGE_RENDERTARGET,
            D3DFORMAT::D3DFMT_X8R8G8B8,
            D3DPOOL::D3DPOOL_DEFAULT,
            texture.GetAddressOf(),
            nullptr
        );
    BlurD3D9::device->CreatePixelShader(
        (const DWORD*)(blur_x),
        BlurD3D9::shaders[0].GetAddressOf()
    );
    BlurD3D9::device->CreatePixelShader(
        (const DWORD*)(blur_y),
        BlurD3D9::shaders[1].GetAddressOf()
    );
}

void orion::post_process::BlurD3D9::invalidate() noexcept {
    for (auto&& texture : BlurD3D9::textures)
        texture.Reset();
    for (auto&& shader : BlurD3D9::shaders)
        shader.Reset();
}

auto orion::post_process::BlurD3D11::DeviceResource::validate(
    ID3D11DeviceContext& device_context
) noexcept -> void {
    device_context.OMGetRenderTargets(
        1,
        DeviceResource::render_target_view.GetAddressOf(),
        DeviceResource::depth_stencil_view.GetAddressOf()
    );
    DeviceResource::render_target_view->GetResource(
        (ID3D11Resource**)(DeviceResource::render_target.GetAddressOf())
    );
}

auto orion::post_process::BlurD3D11::DeviceResource::invalidate() noexcept
    -> void {
    DeviceResource::render_target.Reset();
    DeviceResource::render_target_view.Reset();
    DeviceResource::depth_stencil_view.Reset();
}

auto orion::post_process::BlurD3D11::RenderTexture::validate(
    ID3D11Device& device,
    const DeviceResource& resource
) noexcept -> void {
    D3D11_TEXTURE2D_DESC desc;
    resource.get_render_target()->GetDesc(&desc);

    RenderTexture::size.x = static_cast<float>(desc.Width);
    RenderTexture::size.y = static_cast<float>(desc.Height);

    desc = CD3D11_TEXTURE2D_DESC(
        RenderTexture::resolve_format(desc.Format),
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
    );

    return RenderTexture::create_texture(device, desc);
}

auto orion::post_process::BlurD3D11::RenderTexture::validate(
    ID3D11Device& device,
    const DeviceResource& resource,
    const ImVec2& texture_size
) noexcept -> void {
    D3D11_TEXTURE2D_DESC desc;
    resource.get_render_target()->GetDesc(&desc);

    RenderTexture::size.x = static_cast<float>(desc.Width);
    RenderTexture::size.y = static_cast<float>(desc.Height);

    desc = CD3D11_TEXTURE2D_DESC(
        RenderTexture::resolve_format(desc.Format),
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
    );

    return RenderTexture::create_texture(device, desc);
}

auto orion::post_process::BlurD3D11::RenderTexture::invalidate() noexcept
    -> void {
    RenderTexture::size = {};
    RenderTexture::render_target.Reset();
    RenderTexture::render_target_view.Reset();
    RenderTexture::shader_resource_view.Reset();
}

auto orion::post_process::BlurD3D11::RenderTexture::resolve_format(
    const DXGI_FORMAT format
) noexcept -> DXGI_FORMAT {
    switch (format) {
        default:
            return format;
        case DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_TYPELESS:
            return DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM;
    }
}

auto orion::post_process::BlurD3D11::RenderTexture::create_texture(
    ID3D11Device& device,
    const D3D11_TEXTURE2D_DESC& desc
) noexcept -> void {
    CD3D11_RENDER_TARGET_VIEW_DESC rtvDsc(
        D3D11_RTV_DIMENSION::D3D11_RTV_DIMENSION_TEXTURE2D,
        desc.Format
    );

    CD3D11_SHADER_RESOURCE_VIEW_DESC srvDsc(
        D3D11_SRV_DIMENSION::D3D11_SRV_DIMENSION_TEXTURE2D,
        desc.Format,
        0,
        desc.MipLevels
    );

    device.CreateTexture2D(
        &desc,
        nullptr,
        RenderTexture::render_target.GetAddressOf()
    );
    device.CreateRenderTargetView(
        RenderTexture::render_target.Get(),
        &rtvDsc,
        &(RenderTexture::render_target_view)
    );
    device.CreateShaderResourceView(
        RenderTexture::render_target.Get(),
        &srvDsc,
        &(RenderTexture::shader_resource_view)
    );
}

auto orion::post_process::BlurD3D11::PixelShader::validate(
    ID3D11Device& device,
    const void* const bytes,
    const SIZE_T size
) noexcept -> void {
    device.CreatePixelShader(
        bytes,
        size,
        nullptr,
        PixelShader::data.GetAddressOf()
    );
}

auto orion::post_process::BlurD3D11::PixelShader::invalidate() noexcept -> void {
    PixelShader::data.Reset();
}

auto orion::post_process::BlurD3D11::ConstantBuffer::validate(
    ID3D11Device& device,
    const std::size_t size
) noexcept -> void {
    CD3D11_BUFFER_DESC desc(
        static_cast<UINT>(size),
        D3D11_BIND_FLAG::D3D11_BIND_CONSTANT_BUFFER
    );

    device.CreateBuffer(&desc, nullptr, ConstantBuffer::data.GetAddressOf());
}

auto orion::post_process::BlurD3D11::ConstantBuffer::validate(
    ID3D11Device& device,
    const std::size_t size,
    const D3D11_SUBRESOURCE_DATA& resource
) noexcept -> void {
    CD3D11_BUFFER_DESC desc(
        static_cast<UINT>(size),
        D3D11_BIND_FLAG::D3D11_BIND_CONSTANT_BUFFER
    );

    device.CreateBuffer(&desc, &resource, ConstantBuffer::data.GetAddressOf());
}

auto orion::post_process::BlurD3D11::ConstantBuffer::invalidate() noexcept
    -> void {
    ConstantBuffer::data.Reset();
}

auto orion::post_process::BlurD3D11::on_resize() noexcept -> void {
    const auto& size =
        BlurD3D11::render_target[DataType::RT_FIRST_PASS].get_size();
    if (const auto& display_size = ImGui::GetIO().DisplaySize;
        display_size.x != size.x || display_size.y != size.y) {
        BlurD3D11::invalidate();
        BlurD3D11::validate();
    }
}

orion::post_process::BlurD3D11::BlurD3D11() noexcept {
    BlurD3D11::validate();
}

orion::post_process::BlurD3D11::~BlurD3D11() noexcept {
    BlurD3D11::invalidate();
}

auto orion::post_process::BlurD3D11::draw(
    const ImVec2& min,
    const ImVec2& max,
    const float rounding
) noexcept -> void {
    BlurD3D11::on_resize();

    auto&& draw_list = *ImGui::GetWindowDrawList();
    const auto render_target_shader_resource_view =
        BlurD3D11::render_target[DataType::RT_COPY].get_shader_resource_view();

    // scene -> RT1 (downsample)
    draw_list.AddCallback(&BlurD3D11::begin, this);
    draw_list.AddImage(
        render_target_shader_resource_view,
        ImVec2(0.0f, 0.0f),
        BlurD3D11::render_target[DataType::RT_FIRST_PASS].get_size()
    );

    // RT1 -> RT2 (blur horizontal)
    draw_list.AddCallback(&BlurD3D11::first_pass, this);
    draw_list.AddImage(
        BlurD3D11::render_target[DataType::RT_FIRST_PASS]
            .get_shader_resource_view(),
        ImVec2(0.0f, 0.0f),
        BlurD3D11::render_target[DataType::RT_FIRST_PASS].get_size()
    );

    // RT2 -> RT1 (blur vertical)
    draw_list.AddCallback(&BlurD3D11::second_pass, this);
    draw_list.AddImage(
        BlurD3D11::render_target[DataType::RT_SECOND_PASS]
            .get_shader_resource_view(),
        ImVec2(0.0f, 0.0f),
        BlurD3D11::render_target[DataType::RT_SECOND_PASS].get_size()
    );

    // RT1 + scene
    draw_list.AddCallback(&BlurD3D11::end, this);

    const auto size = BlurD3D11::render_target[DataType::RT_COPY].get_size();
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

auto orion::post_process::BlurD3D11::validate() noexcept -> void {
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
        constexpr VS_BLOOM_PARAMETERS(
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

        VS_BLOOM_PARAMETERS(const VS_BLOOM_PARAMETERS&) = delete;
        VS_BLOOM_PARAMETERS& operator=(const VS_BLOOM_PARAMETERS&) = delete;

        VS_BLOOM_PARAMETERS(VS_BLOOM_PARAMETERS&&) = delete;
        VS_BLOOM_PARAMETERS& operator=(VS_BLOOM_PARAMETERS&&) = delete;

        float bloom_threshold = 0.0f;
        float blur_amount = 0.0f;
        float bloom_intensity = 0.0f;
        float base_intensity = 0.0f;
        float bloom_saturation = 0.0f;
        float base_saturation = 0.0f;
        std::array<std::uint8_t, 8> na = {};
    };

    static_assert(
        !(sizeof(VS_BLOOM_PARAMETERS) % 16),
        "VS_BLOOM_PARAMETERS needs to be 16 bytes aligned"
    );

    class VS_BLUR_PARAMETERS final {
    public:
        class XMFLOAT4 final {
        public:
            constexpr XMFLOAT4() noexcept = default;

            XMFLOAT4(const XMFLOAT4&) = delete;
            XMFLOAT4& operator=(const XMFLOAT4&) = delete;

            XMFLOAT4(XMFLOAT4&&) = delete;
            XMFLOAT4& operator=(XMFLOAT4&&) = delete;

            float x = 0.0f;
            float y = 0.0f;
            float z = 0.0f;
            float w = 0.0f;
        };

        class XMFLOAT2 final {
        public:
            constexpr XMFLOAT2() noexcept = default;

            constexpr explicit XMFLOAT2(float x, float y) noexcept :
                x(x),
                y(y) {}

            XMFLOAT2(const XMFLOAT2&) = delete;
            XMFLOAT2& operator=(const XMFLOAT2&) = delete;

            XMFLOAT2(XMFLOAT2&&) = delete;
            XMFLOAT2& operator=(XMFLOAT2&&) = delete;

            constexpr auto&& operator*=(const float a) noexcept {
                XMFLOAT2::x *= a;
                XMFLOAT2::y *= a;
                return *this;
            }

            float x = 0.0f;
            float y = 0.0f;
        };

        explicit VS_BLUR_PARAMETERS(
            const float dx,
            const float dy,
            const VS_BLOOM_PARAMETERS& params
        ) noexcept {
            VS_BLUR_PARAMETERS::sample_weights[0].x =
                compute_gaussian(0.0f, params.blur_amount);
            VS_BLUR_PARAMETERS::sample_offsets[0].x =
                VS_BLUR_PARAMETERS::sample_offsets[0].y = 0.f;

            auto total_weights = VS_BLUR_PARAMETERS::sample_weights[0].x;

            // Add pairs of additional sample taps, positioned
            // along a line in both directions from the center.
            for (std::size_t i = 0; i < (SAMPLE_COUNT / 2); ++i) {
                // Store weights for the positive and negative taps.
                const auto weight = compute_gaussian(
                    static_cast<float>(i + 1),
                    params.blur_amount
                );

                VS_BLUR_PARAMETERS::sample_weights[i * 2 + 1].x = weight;
                VS_BLUR_PARAMETERS::sample_weights[i * 2 + 2].x = weight;

                total_weights += weight * 2.0f;

                // To get the maximum amount of blurring from a limited number of
                // pixel shader samples, we take advantage of the bilinear filtering
                // hardware inside the texture fetch unit. If we position our texture
                // coordinates exactly halfway between two texels, the filtering unit
                // will average them for us, giving two samples for the price of one.
                // This allows us to step in units of two texels per sample, rather
                // than just one at a time. The 1.5 offset kicks things off by
                // positioning us nicely in between two texels.
                XMFLOAT2 delta(dx, dy);
                delta *= static_cast<float>(i) * 2.0f + 1.5f;

                // Store texture coordinate offsets for the positive and negative taps.
                VS_BLUR_PARAMETERS::sample_offsets[i * 2 + 1].x = delta.x;
                VS_BLUR_PARAMETERS::sample_offsets[i * 2 + 1].y = delta.y;
                VS_BLUR_PARAMETERS::sample_offsets[i * 2 + 2].x = -delta.x;
                VS_BLUR_PARAMETERS::sample_offsets[i * 2 + 2].y = -delta.y;
            }

            for (std::size_t i = 0; i < SAMPLE_COUNT; ++i) {
                VS_BLUR_PARAMETERS::sample_weights[i].x /= total_weights;
            }
        }

        VS_BLUR_PARAMETERS(const VS_BLUR_PARAMETERS&) = delete;
        VS_BLUR_PARAMETERS& operator=(const VS_BLUR_PARAMETERS&) = delete;

        VS_BLUR_PARAMETERS(VS_BLUR_PARAMETERS&&) = delete;
        VS_BLUR_PARAMETERS& operator=(VS_BLUR_PARAMETERS&&) = delete;

        std::array<XMFLOAT4, SAMPLE_COUNT> sample_offsets;
        std::array<XMFLOAT4, SAMPLE_COUNT> sample_weights;

    private:
        [[nodiscard]] static auto
        compute_gaussian(const float value, const float theta) noexcept
            -> float {
            constexpr auto number = 2.0f * std::numbers::pi_v<float>;
            return (1.0f / std::sqrt(number * theta))
                * std::exp(-(value * value) / (2.0f * theta * theta));
        }
    };

    static_assert(
        !(sizeof(VS_BLUR_PARAMETERS) % 16),
        "VS_BLUR_PARAMETERS needs to be 16 bytes aligned"
    );

    constexpr std::array<VS_BLOOM_PARAMETERS, 8> bloom_presets = {
        //					Thresh		Blur		Bloom		Base		BloomSat	BaseSat
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
    auto&& data =
        *static_cast<ImGui_ImplDX11_Data*>(io.BackendRendererUserData);

    BlurD3D11::device_resource.validate(*data.pd3dDeviceContext);
    BlurD3D11::pixel_shader[DataType::PS_BLOOM_COMBINE]
        .validate(*data.pd3dDevice, bloom_combine, IM_ARRAYSIZE(bloom_combine));
    BlurD3D11::pixel_shader[DataType::PS_BLOOM_EXTRACT]
        .validate(*data.pd3dDevice, bloom_extract, IM_ARRAYSIZE(bloom_extract));
    BlurD3D11::pixel_shader[DataType::PS_GAUSSIAN_BLUR]
        .validate(*data.pd3dDevice, gaussian_blur, IM_ARRAYSIZE(gaussian_blur));
    BlurD3D11::render_target[DataType::RT_COPY].validate(
        *data.pd3dDevice,
        BlurD3D11::device_resource
    );
    BlurD3D11::render_target[DataType::RT_FIRST_PASS]
        .validate(*data.pd3dDevice, BlurD3D11::device_resource, io.DisplaySize);
    BlurD3D11::render_target[DataType::RT_SECOND_PASS]
        .validate(*data.pd3dDevice, BlurD3D11::device_resource, io.DisplaySize);
    BlurD3D11::constant_buffer[DataType::CB_BLOOM_PARAMS].validate(
        *data.pd3dDevice,
        sizeof(VS_BLOOM_PARAMETERS),
        D3D11_SUBRESOURCE_DATA(
            &bloom_presets[static_cast<int>(selected_bloom_presets)],
            0,
            0
        )
    );
    BlurD3D11::constant_buffer[DataType::CB_BLUR_PARAMS_WIDTH].validate(
        *data.pd3dDevice,
        sizeof(VS_BLUR_PARAMETERS)
    );
    BlurD3D11::constant_buffer[DataType::CB_BLUR_PARAMS_HEIGHT].validate(
        *data.pd3dDevice,
        sizeof(VS_BLUR_PARAMETERS)
    );

    data.pd3dDeviceContext->UpdateSubresource(
        BlurD3D11::constant_buffer[DataType::CB_BLOOM_PARAMS].get_buffer(),
        0,
        nullptr,
        &bloom_presets[static_cast<int>(selected_bloom_presets)],
        0,
        0
    );

    VS_BLUR_PARAMETERS blurDataWidth(
        1.0f / (io.DisplaySize.x),
        0.0f,
        bloom_presets[static_cast<int>(selected_bloom_presets)]
    );
    data.pd3dDeviceContext->UpdateSubresource(
        BlurD3D11::constant_buffer[DataType::CB_BLUR_PARAMS_WIDTH].get_buffer(),
        0,
        nullptr,
        &blurDataWidth,
        sizeof(VS_BLUR_PARAMETERS),
        0
    );

    VS_BLUR_PARAMETERS blurDataheight(
        0.0f,
        1.0f / (io.DisplaySize.y),
        bloom_presets[static_cast<int>(selected_bloom_presets)]
    );
    data.pd3dDeviceContext->UpdateSubresource(
        BlurD3D11::constant_buffer[DataType::CB_BLUR_PARAMS_HEIGHT].get_buffer(
        ),
        0,
        nullptr,
        &blurDataheight,
        sizeof(VS_BLUR_PARAMETERS),
        0
    );
}

auto orion::post_process::BlurD3D11::invalidate() noexcept -> void {
    BlurD3D11::device_resource.invalidate();
    for (auto i = 0; i < DataType::DATA_MAX; i++) {
        BlurD3D11::render_target[i].invalidate();
        BlurD3D11::pixel_shader[i].invalidate();
        BlurD3D11::constant_buffer[i].invalidate();
    }
}

auto orion::post_process::BlurD3D11::begin(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
    auto&& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                 ImGui::GetIO().BackendRendererUserData
    )
                                 ->pd3dDeviceContext;
    const auto render_target_first_pass_view =
        blur.render_target[DataType::RT_FIRST_PASS].get_render_target_view();
    device_context.CopyResource(
        blur.render_target[DataType::RT_COPY].get_render_target(),
        blur.device_resource.get_render_target()
    );
    device_context
        .OMSetRenderTargets(1, &render_target_first_pass_view, nullptr);
    device_context.PSSetShader(
        blur.pixel_shader[DataType::PS_BLOOM_EXTRACT].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[DataType::CB_BLOOM_PARAMS].get_buffer_address()
    );
}

auto orion::post_process::BlurD3D11::first_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
    auto&& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                 ImGui::GetIO().BackendRendererUserData
    )
                                 ->pd3dDeviceContext;
    const auto render_target_second_pass_view =
        blur.render_target[DataType::RT_SECOND_PASS].get_render_target_view();
    device_context
        .OMSetRenderTargets(1, &render_target_second_pass_view, nullptr);
    device_context.PSSetShader(
        blur.pixel_shader[DataType::PS_GAUSSIAN_BLUR].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[DataType::CB_BLUR_PARAMS_WIDTH].get_buffer_address(
        )
    );
}

auto orion::post_process::BlurD3D11::second_pass(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
    auto&& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                 ImGui::GetIO().BackendRendererUserData
    )
                                 ->pd3dDeviceContext;
    const auto render_target_first_pass_view =
        blur.render_target[DataType::RT_FIRST_PASS].get_render_target_view();
    device_context
        .OMSetRenderTargets(1, &render_target_first_pass_view, nullptr);
    device_context.PSSetShader(
        blur.pixel_shader[DataType::PS_GAUSSIAN_BLUR].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[DataType::CB_BLUR_PARAMS_HEIGHT]
            .get_buffer_address()
    );
}

auto orion::post_process::BlurD3D11::end(
    const ImDrawList*,
    const ImDrawCmd* const cmd
) noexcept -> void {
    const auto& blur = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
    auto&& device_context = *static_cast<ImGui_ImplDX11_Data*>(
                                 ImGui::GetIO().BackendRendererUserData
    )
                                 ->pd3dDeviceContext;
    const auto render_target_first_pass_shader_resource_view =
        blur.render_target[DataType::RT_FIRST_PASS].get_shader_resource_view();
    device_context.OMSetRenderTargets(
        1,
        blur.device_resource.get_render_target_view_address(),
        *blur.device_resource.get_depth_stencil_view_address()
    );
    device_context.PSSetShader(
        blur.pixel_shader[DataType::PS_BLOOM_COMBINE].get_pixel_shader(),
        nullptr,
        0
    );
    device_context.PSSetConstantBuffers(
        0,
        1,
        blur.constant_buffer[DataType::CB_BLOOM_PARAMS].get_buffer_address()
    );
    device_context.PSSetShaderResources(
        1,
        1,
        &render_target_first_pass_shader_resource_view
    );
}
