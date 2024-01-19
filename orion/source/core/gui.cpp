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

bool orion::core::Gui::isOpen() const noexcept
{
    return open;
}

orion::utilities::Option<orion::core::Gui::PostProcess, false>& orion::core::Gui::getPostProcess() noexcept
{
    return postProcess;
}

orion::utilities::Option<orion::core::Gui::PostProcess2, false>& orion::core::Gui::getPostProcess2() noexcept
{
    return postProcess2;
}

void orion::core::to_json( nlohmann::json& json, const Gui& gui ) noexcept
{
    json = {
        { xorstr_( "open" ), gui.open },
    };
}

orion::core::Gui::PostProcess::PostProcess( IDirect3DDevice9& direct3DDevice9 ) noexcept
    : direct3DDevice9( direct3DDevice9 )
{
}

void orion::core::Gui::PostProcess::createDeviceObjects() noexcept
{
    direct3DDevice9.GetBackBuffer( 0, 0, D3DBACKBUFFER_TYPE_MONO, &backBuffer );

    direct3DDevice9.CreatePixelShader( (const DWORD*)( blurX ), &pixelShaderX );
    direct3DDevice9.CreatePixelShader( (const DWORD*)( blurY ), &pixelShaderY );

    direct3DDevice9.GetRenderTarget( 0, &originalRenderTarget );

    textureSize = ImVec2();
}

void orion::core::Gui::PostProcess::invalidateDeviceObjects() noexcept
{
    SAFERELEASE( backBuffer )

    SAFERELEASE( pixelShaderX )
    SAFERELEASE( pixelShaderY )

    SAFERELEASE( texture )
    SAFERELEASE( textureSurface )

    SAFERELEASE( originalRenderTarget )
}

void orion::core::Gui::PostProcess::draw( ImDrawList& drawList ) noexcept
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

    drawList.AddCallback( &begin, this );
    for ( auto i = 0; i < 8; ++i )
    {
        drawList.AddCallback( &firstPass, this );
        drawList.AddImage( texture, ImVec2(), textureSize );
        drawList.AddCallback( &secondPass, this );
        drawList.AddImage( texture, ImVec2(), textureSize );
    }
    drawList.AddCallback( &end, this );
    drawList.AddImageRounded( texture,
                              ImVec2(),
                              textureSize,
                              ImVec2(),
                              ImVec2( 1.0f, 1.0f ),
                              IM_COL32_WHITE,
                              ImGui::GetStyle().WindowRounding );
    drawList.AddCallback( ImDrawCallback_ResetRenderState, nullptr );
}

void orion::core::Gui::PostProcess::begin( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess*>( cmd->UserCallbackData );
    postProcess.direct3DDevice9.StretchRect(
        postProcess.backBuffer, nullptr, postProcess.textureSurface, nullptr, D3DTEXF_NONE );
    postProcess.direct3DDevice9.SetRenderTarget( 0, postProcess.textureSurface );
}

void orion::core::Gui::PostProcess::firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess*>( cmd->UserCallbackData );
    postProcess.direct3DDevice9.SetPixelShader( postProcess.pixelShaderX );
    postProcess.direct3DDevice9.SetPixelShaderConstantF( 0, postProcess.pixeShaderConstX.data(), 1 );
}

void orion::core::Gui::PostProcess::secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess*>( cmd->UserCallbackData );
    postProcess.direct3DDevice9.SetPixelShader( postProcess.pixelShaderY );
    postProcess.direct3DDevice9.SetPixelShaderConstantF( 0, postProcess.pixeShaderConstY.data(), 1 );
}

void orion::core::Gui::PostProcess::end( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess*>( cmd->UserCallbackData );
    postProcess.direct3DDevice9.SetRenderTarget( 0, postProcess.originalRenderTarget );
}

orion::core::Gui::PostProcess2::PostProcess2( IDXGISwapChain&      dXGISwapChain,
                                              ID3D11Device&        d3D11Device,
                                              ID3D11DeviceContext& d3D11DeviceContext ) noexcept
    : dXGISwapChain( dXGISwapChain ), d3D11Device( d3D11Device ), d3D11DeviceContext( d3D11DeviceContext )
{
    textureBox.front = 0;
    textureBox.back  = 1;
}

void orion::core::Gui::PostProcess2::createDeviceObjects() noexcept
{
    d3D11DeviceContext.OMGetRenderTargets( 1, &renderTarget, nullptr );
    if ( renderTarget != nullptr )
    {
        renderTarget->GetResource( (ID3D11Resource**)( &backBuffer ) );
    }
    else
    {
        dXGISwapChain.GetBuffer( 0, IID_PPV_ARGS( &backBuffer ) );
        d3D11Device.CreateRenderTargetView( backBuffer, nullptr, &renderTarget );
    }

    d3D11Device.CreatePixelShader( blur2X, sizeof( blur2X ), nullptr, &pixelShaderX );
    d3D11Device.CreatePixelShader( blur2Y, sizeof( blur2Y ), nullptr, &pixelShaderY );

    D3D11_BUFFER_DESC bufferDesc {};
    bufferDesc.Usage          = D3D11_USAGE_DYNAMIC;
    bufferDesc.ByteWidth      = sizeof( std::array<float, 4> );
    bufferDesc.BindFlags      = D3D11_BIND_CONSTANT_BUFFER;
    bufferDesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    d3D11Device.CreateBuffer( &bufferDesc, nullptr, &pixelShaderConstX );
    d3D11Device.CreateBuffer( &bufferDesc, nullptr, &pixelShaderConstY );

    textureSize = ImVec2();
}

void orion::core::Gui::PostProcess2::invalidateDeviceObjects() noexcept
{
    SAFERELEASE( renderTarget )
    SAFERELEASE( backBuffer )

    SAFERELEASE( pixelShaderX )
    SAFERELEASE( pixelShaderY )

    SAFERELEASE( pixelShaderConstX )
    SAFERELEASE( pixelShaderConstY )

    SAFERELEASE( texture )
    SAFERELEASE( textureView )
}

void orion::core::Gui::PostProcess2::setRenderTarget() const noexcept
{
    return d3D11DeviceContext.OMSetRenderTargets( 1, &renderTarget, nullptr );
}

void orion::core::Gui::PostProcess2::draw( ImDrawList& drawList ) noexcept
{
    CD3D11_TEXTURE2D_DESC backBufferDesc;
    backBuffer->GetDesc( &backBufferDesc );

    if ( ( backBufferDesc.Width != static_cast<UINT>( textureSize.x ) ) ||
         ( backBufferDesc.Height != static_cast<UINT>( textureSize.y ) ) ) [[unlikely]]
    {
        textureSize.x = static_cast<float>( backBufferDesc.Width );
        textureSize.y = static_cast<float>( backBufferDesc.Height );

        SAFERELEASE( texture )
        SAFERELEASE( textureView )

        backBufferDesc.BindFlags |= D3D11_BIND_SHADER_RESOURCE;
        if ( d3D11Device.CreateTexture2D( &backBufferDesc, nullptr, &texture ) == S_OK ) [[likely]]
        {
            CD3D11_SHADER_RESOURCE_VIEW_DESC textureSRVDesc( texture, D3D11_SRV_DIMENSION_TEXTURE2D );
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

    const auto windowSize = ImGui::GetWindowSize();
    const auto windowPos  = ImGui::GetWindowPos();
    textureBox.left       = static_cast<UINT>( std::clamp( windowPos.x, 0.0f, textureSize.x ) );
    textureBox.top        = static_cast<UINT>( std::clamp( windowPos.y, 0.0f, textureSize.y ) );
    textureBox.right      = static_cast<UINT>( std::clamp( windowPos.x + windowSize.x, 0.0f, textureSize.x ) );
    textureBox.bottom     = static_cast<UINT>( std::clamp( windowPos.y + windowSize.y, 0.0f, textureSize.y ) );

    drawList.AddCallback( &begin, this );
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

void orion::core::Gui::PostProcess2::begin( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess2*>( cmd->UserCallbackData );
    postProcess.d3D11DeviceContext.CopyResource( postProcess.texture, postProcess.backBuffer );
}

void orion::core::Gui::PostProcess2::firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess2*>( cmd->UserCallbackData );
    postProcess.d3D11DeviceContext.CopySubresourceRegion( postProcess.texture,
                                                          0,
                                                          postProcess.textureBox.left,
                                                          postProcess.textureBox.top,
                                                          postProcess.textureBox.front,
                                                          postProcess.backBuffer,
                                                          0,
                                                          &postProcess.textureBox );
    postProcess.d3D11DeviceContext.PSSetShader( postProcess.pixelShaderX, nullptr, 0 );
    postProcess.d3D11DeviceContext.PSSetConstantBuffers( 0, 1, &postProcess.pixelShaderConstX );
}

void orion::core::Gui::PostProcess2::secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess2*>( cmd->UserCallbackData );
    postProcess.d3D11DeviceContext.CopySubresourceRegion( postProcess.texture,
                                                          0,
                                                          postProcess.textureBox.left,
                                                          postProcess.textureBox.top,
                                                          postProcess.textureBox.front,
                                                          postProcess.backBuffer,
                                                          0,
                                                          &postProcess.textureBox );
    postProcess.d3D11DeviceContext.PSSetShader( postProcess.pixelShaderY, nullptr, 0 );
    postProcess.d3D11DeviceContext.PSSetConstantBuffers( 0, 1, &postProcess.pixelShaderConstY );
}

#pragma pop_macro( "SAFE_RELEASE" )
