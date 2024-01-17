#include "source/core/gui.h"

#if _WIN64
#if NDEBUG // WIN64 RELEASE
#include "source/resources/shaders/output/Release/x64/blur2_x.h"
#include "source/resources/shaders/output/Release/x64/blur2_y.h"
#include "source/resources/shaders/output/Release/x64/blur_x.h"
#include "source/resources/shaders/output/Release/x64/blur_y.h"
#else // WIN64 DEBUG
#include "source/resources/shaders/output/Debug/x64/blur2_x.h"
#include "source/resources/shaders/output/Debug/x64/blur2_y.h"
#include "source/resources/shaders/output/Debug/x64/blur_x.h"
#include "source/resources/shaders/output/Debug/x64/blur_y.h"
#endif
#else
#if NDEBUG // WIN32 RELEASE
#include "source/resources/shaders/output/Release/Win32/blur2_x.h"
#include "source/resources/shaders/output/Release/Win32/blur2_y.h"
#include "source/resources/shaders/output/Release/Win32/blur_x.h"
#include "source/resources/shaders/output/Release/Win32/blur_y.h"
#else // WIN32 DEBUG
#include "source/resources/shaders/output/Debug/Win32/blur2_x.h"
#include "source/resources/shaders/output/Debug/Win32/blur2_y.h"
#include "source/resources/shaders/output/Debug/Win32/blur_x.h"
#include "source/resources/shaders/output/Debug/Win32/blur_y.h"
#endif
#endif

#pragma push_macro( "SAFE_RELEASE" )
#define SAFERELEASE( v )                                                                                               \
    if ( v != nullptr )                                                                                                \
    {                                                                                                                  \
        v->Release();                                                                                                  \
        v = nullptr;                                                                                                   \
    }

// https://github.com/wyxather/imgui-neverlose/blob/master/imgui.cpp#L5794
// https://github.com/wyxather/orion/blob/backup/game/octopath_traveler_2/orion/source/core/gui.cpp

orion::core::Gui::Gui( [[maybe_unused]] const Platform& platform, ImGuiContext& imguiContext ) noexcept
{
    auto& imguiIO       = imguiContext.IO;
    imguiIO.IniFilename = nullptr;

    auto& style            = imguiContext.Style;
    style.WindowRounding   = 10.0f;
    style.WindowBorderSize = 0.0f;

    auto colors              = style.Colors;
    colors[ImGuiCol_ChildBg] = ImColor( 8, 8, 8, 255 );
    colors[ImGuiCol_Border]  = ImColor( 26, 26, 26, 255 );
}

void orion::core::Gui::toggleOpen() noexcept
{
    open = !open;
}

void orion::core::to_json( nlohmann::json& json, const Gui& gui ) noexcept
{
    json = {
        { xorstr_( "open" ), gui.open },
    };
}

orion::core::Gui::Blur::Blur( IDirect3DDevice9& direct3DDevice9 ) noexcept : direct3DDevice9( direct3DDevice9 )
{
}

void orion::core::Gui::Blur::createDeviceObjects() noexcept
{
    direct3DDevice9.GetBackBuffer( 0, 0, D3DBACKBUFFER_TYPE_MONO, &backBuffer );

    direct3DDevice9.CreatePixelShader( (const DWORD*)( blurX ), &pixelShaderX );
    direct3DDevice9.CreatePixelShader( (const DWORD*)( blurY ), &pixelShaderY );

    direct3DDevice9.GetRenderTarget( 0, &originalRenderTarget );
}

void orion::core::Gui::Blur::invalidateDeviceObjects() noexcept
{
    SAFERELEASE( backBuffer )

    SAFERELEASE( pixelShaderX )
    SAFERELEASE( pixelShaderY )

    SAFERELEASE( texture )
    SAFERELEASE( textureSurface )

    SAFERELEASE( originalRenderTarget )
}

void orion::core::Gui::Blur::draw( ImDrawList& drawList ) noexcept
{
    if ( D3DSURFACE_DESC backBufferDesc; backBuffer->GetDesc( &backBufferDesc ) == D3D_OK ) [[likely]]
    {
        if ( ( backBufferDesc.Width != static_cast<UINT>( textureSize.x ) ) ||
             ( backBufferDesc.Height != static_cast<UINT>( textureSize.y ) ) ) [[unlikely]]
        {
            textureSize.x = static_cast<float>( backBufferDesc.Width );
            textureSize.y = static_cast<float>( backBufferDesc.Height );

            SAFERELEASE( texture )
            SAFERELEASE( textureSurface )

            direct3DDevice9.CreateTexture( backBufferDesc.Width,
                                           backBufferDesc.Height,
                                           1,
                                           D3DUSAGE_RENDERTARGET,
                                           D3DFMT_A8R8G8B8,
                                           D3DPOOL_DEFAULT,
                                           &texture,
                                           nullptr );
            texture->GetSurfaceLevel( 0, &textureSurface );

            pixeShaderConstX = { 1.0f / textureSize.x };
            pixeShaderConstY = { 1.0f / textureSize.y };
        }
    }

    drawList.AddCallback( &beginBlur, this );
    for ( auto i = 0; i < 8; ++i )
    {
        drawList.AddCallback( &firstPass, this );
        drawList.AddImage( texture, ImVec2(), textureSize );
        drawList.AddCallback( &secondPass, this );
        drawList.AddImage( texture, ImVec2(), textureSize );
    }
    drawList.AddCallback( &endBlur, this );
    drawList.AddImageRounded( texture,
                              ImVec2(),
                              textureSize,
                              ImVec2(),
                              ImVec2( 1.0f, 1.0f ),
                              IM_COL32_WHITE,
                              ImGui::GetStyle().WindowRounding );
    drawList.AddCallback( ImDrawCallback_ResetRenderState, nullptr );
}

void orion::core::Gui::Blur::beginBlur( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& blur = *static_cast<Blur*>( cmd->UserCallbackData );
    blur.direct3DDevice9.StretchRect( blur.backBuffer, nullptr, blur.textureSurface, nullptr, D3DTEXF_NONE );
    blur.direct3DDevice9.SetRenderTarget( 0, blur.textureSurface );
}

void orion::core::Gui::Blur::firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& blur = *static_cast<Blur*>( cmd->UserCallbackData );
    blur.direct3DDevice9.SetPixelShader( blur.pixelShaderX );
    blur.direct3DDevice9.SetPixelShaderConstantF( 0, blur.pixeShaderConstX.data(), 1 );
}

void orion::core::Gui::Blur::secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& blur = *static_cast<Blur*>( cmd->UserCallbackData );
    blur.direct3DDevice9.SetPixelShader( blur.pixelShaderY );
    blur.direct3DDevice9.SetPixelShaderConstantF( 0, blur.pixeShaderConstY.data(), 1 );
}

void orion::core::Gui::Blur::endBlur( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& blur = *static_cast<Blur*>( cmd->UserCallbackData );
    blur.direct3DDevice9.SetRenderTarget( 0, blur.originalRenderTarget );
}

orion::core::Gui::Blur2::Blur2( IDXGISwapChain&      dXGISwapChain,
                                ID3D11Device&        d3D11Device,
                                ID3D11DeviceContext& d3D11DeviceContext ) noexcept
    : dXGISwapChain( dXGISwapChain ), d3D11Device( d3D11Device ), d3D11DeviceContext( d3D11DeviceContext )
{
}

void orion::core::Gui::Blur2::createDeviceObjects() noexcept
{
    dXGISwapChain.GetBuffer( 0, IID_ID3D11Texture2D, (void**)&backBuffer );

    d3D11Device.CreatePixelShader( blur2X, sizeof( blur2X ), nullptr, &pixelShaderX );
    d3D11Device.CreatePixelShader( blur2Y, sizeof( blur2Y ), nullptr, &pixelShaderY );

    D3D11_BUFFER_DESC bufferDesc {};
    bufferDesc.Usage          = D3D11_USAGE_DYNAMIC;
    bufferDesc.ByteWidth      = sizeof( std::array<float, 4> );
    bufferDesc.BindFlags      = D3D11_BIND_CONSTANT_BUFFER;
    bufferDesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    d3D11Device.CreateBuffer( &bufferDesc, nullptr, &pixelShaderConstX );
    d3D11Device.CreateBuffer( &bufferDesc, nullptr, &pixelShaderConstY );
}

void orion::core::Gui::Blur2::invalidateDeviceObjects() noexcept
{
    SAFERELEASE( backBuffer )

    SAFERELEASE( pixelShaderX )
    SAFERELEASE( pixelShaderY )

    SAFERELEASE( pixelShaderConstX )
    SAFERELEASE( pixelShaderConstY )

    SAFERELEASE( texture )
    SAFERELEASE( textureView )
}

void orion::core::Gui::Blur2::draw( ImDrawList& drawList ) noexcept
{
    D3D11_TEXTURE2D_DESC backBufferDesc;
    backBuffer->GetDesc( &backBufferDesc );

    if ( ( backBufferDesc.Width != static_cast<UINT>( textureSize.x ) ) ||
         ( backBufferDesc.Height != static_cast<UINT>( textureSize.y ) ) ) [[unlikely]]
    {
        textureSize.x = static_cast<float>( backBufferDesc.Width );
        textureSize.y = static_cast<float>( backBufferDesc.Height );

        SAFERELEASE( texture )
        SAFERELEASE( textureView )

        D3D11_TEXTURE2D_DESC textureDesc {};
        textureDesc.Width            = backBufferDesc.Width;
        textureDesc.Height           = backBufferDesc.Height;
        textureDesc.MipLevels        = 1;
        textureDesc.ArraySize        = 1;
        textureDesc.Format           = DXGI_FORMAT_R8G8B8A8_UNORM;
        textureDesc.SampleDesc.Count = 1;
        textureDesc.Usage            = D3D11_USAGE_DEFAULT;
        textureDesc.BindFlags        = D3D11_BIND_SHADER_RESOURCE;
        textureDesc.CPUAccessFlags   = 0;
        if ( d3D11Device.CreateTexture2D( &textureDesc, nullptr, &texture ) == S_OK ) [[likely]]
        {
            D3D11_SHADER_RESOURCE_VIEW_DESC textureSRVDesc {};
            textureSRVDesc.Format                    = DXGI_FORMAT_R8G8B8A8_UNORM;
            textureSRVDesc.ViewDimension             = D3D11_SRV_DIMENSION_TEXTURE2D;
            textureSRVDesc.Texture2D.MipLevels       = textureDesc.MipLevels;
            textureSRVDesc.Texture2D.MostDetailedMip = 0;
            d3D11Device.CreateShaderResourceView( texture, &textureSRVDesc, &textureView );
        }

        D3D11_MAPPED_SUBRESOURCE mappedResource;
        if ( d3D11DeviceContext.Map( pixelShaderConstX, 0, D3D11_MAP_WRITE_DISCARD, 0, &mappedResource ) == S_OK )
            [[likely]]
        {
            const std::array<float, 4> v { 1.0f / textureSize.x };
            std::memcpy( mappedResource.pData, &v, sizeof( v ) );
            d3D11DeviceContext.Unmap( pixelShaderConstX, 0 );
        }
        if ( d3D11DeviceContext.Map( pixelShaderConstY, 0, D3D11_MAP_WRITE_DISCARD, 0, &mappedResource ) == S_OK )
            [[likely]]
        {
            const std::array<float, 4> v { 1.0f / textureSize.y };
            std::memcpy( mappedResource.pData, &v, sizeof( v ) );
            d3D11DeviceContext.Unmap( pixelShaderConstY, 0 );
        }
    }

    for ( auto i = 0; i < 8; ++i )
    {
        drawList.AddCallback( &firstPass, this );
        drawList.AddImage( textureView, ImVec2(), textureSize );
        drawList.AddCallback( &secondPass, this );
        drawList.AddImage( textureView, ImVec2(), textureSize );
    }
    drawList.AddImageRounded( textureView,
                              ImVec2(),
                              textureSize,
                              ImVec2(),
                              ImVec2( 1.0f, 1.0f ),
                              IM_COL32_WHITE,
                              ImGui::GetStyle().WindowRounding );
    drawList.AddCallback( ImDrawCallback_ResetRenderState, nullptr );
}

void orion::core::Gui::Blur2::beginBlur( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& blur = *static_cast<Blur2*>( cmd->UserCallbackData );
    blur.d3D11DeviceContext.PSSetShaderResources( 0, 1, &blur.textureView );
}

void orion::core::Gui::Blur2::firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& blur = *static_cast<Blur2*>( cmd->UserCallbackData );
    blur.d3D11DeviceContext.CopyResource( blur.texture, blur.backBuffer );
    blur.d3D11DeviceContext.PSSetShader( blur.pixelShaderX, nullptr, 0 );
    blur.d3D11DeviceContext.PSSetConstantBuffers( 0, 1, &blur.pixelShaderConstX );
}

void orion::core::Gui::Blur2::secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& blur = *static_cast<Blur2*>( cmd->UserCallbackData );
    blur.d3D11DeviceContext.CopyResource( blur.texture, blur.backBuffer );
    blur.d3D11DeviceContext.PSSetShader( blur.pixelShaderY, nullptr, 0 );
    blur.d3D11DeviceContext.PSSetConstantBuffers( 0, 1, &blur.pixelShaderConstY );
}

#pragma pop_macro( "SAFE_RELEASE" )
