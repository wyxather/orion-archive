#include "source/core/gui.h"

#include "source/resources/fonts/font_awesome_6_pro_solid_900.h"
#include "source/resources/fonts/museo_sans_cyrl_300.h"
#include "source/resources/fonts/museo_sans_cyrl_500.h"
#include "source/resources/fonts/museo_sans_cyrl_700.h"
#include "source/resources/fonts/museo_sans_cyrl_900.h"

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
    auto& imguiIO           = imguiContext.IO;
    imguiIO.IniFilename     = nullptr;
    imguiIO.MouseDrawCursor = open;

    auto& fonts = *imguiIO.Fonts;
    fonts.AddFontFromMemoryCompressedTTF( museo_sans_cyrl_700_compressed_data.data(),
                                          static_cast<int>( museo_sans_cyrl_700_compressed_data.size() ),
                                          16.0f ); // Default
    ImFontConfig museo_sans_cyrl_700_compressed_config;
    museo_sans_cyrl_700_compressed_config.MergeMode = true;
    fonts.AddFontFromMemoryCompressedTTF( font_awesome_6_pro_solid_900_compressed_data.data(),
                                          static_cast<int>( font_awesome_6_pro_solid_900_compressed_data.size() ),
                                          14.0f,
                                          &museo_sans_cyrl_700_compressed_config,
                                          FONT_AWESOME_GLYPH_RANGE.data() );

    fonts.AddFontFromMemoryCompressedTTF( museo_sans_cyrl_900_compressed_data.data(),
                                          static_cast<int>( museo_sans_cyrl_900_compressed_data.size() ),
                                          32.0f ); // Logo, Tab Group

    auto& style              = imguiContext.Style;
    style.WindowPadding      = ImVec2( 0.0f, 0.0f );
    style.WindowRounding     = 10.0f;
    style.WindowBorderSize   = 0.0f;
    style.RoundCornersUseTex = false;
}

void orion::core::Gui::toggleOpen() noexcept
{
    open                           = !open;
    ImGui::GetIO().MouseDrawCursor = open;
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

void orion::core::Gui::draw( const ImGuiWindowFlags windowFlags ) const noexcept
{
    if ( ImGui::BeginChild( ImStrv( xorstr( "Left" ) ),
                            ImVec2( 191.0f, ImGui::GetWindowSize().y ),
                            ImGuiChildFlags_None,
                            windowFlags ) )
    {
        if ( ImGui::BeginChild( ImStrv( xorstr( "Logo" ) ),
                                ImVec2( ImGui::GetContentRegionAvail().x, 70.0f ),
                                ImGuiChildFlags_None,
                                windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled(
                ImGui::GetCursorScreenPos(),
                ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                ImColor( colors.leftBar.x, colors.leftBar.y, colors.leftBar.z, colors.leftBar.w * 0.85f ),
                ImGui::GetStyle().WindowRounding,
                ImDrawFlags_RoundCornersTopLeft );

            ImGui::PushFont( ImGui::GetIO().Fonts->Fonts[1] );
            auto       logo     = xorstr( "ORION" );
            const auto logoSize = ImGui::CalcTextSize( ImStrv( logo.crypt_get(), logo.size() ) );
            const auto logoPos  = ImGui::GetCursorScreenPos() + ( ImGui::GetContentRegionAvail() - logoSize ) * 0.5f;
            ImGui::GetWindowDrawList()->AddText( logoPos - ImVec2( 1.0f, 0.0f ),
                                                 ImGui::GetColorU32( colors.logoShadow ),
                                                 ImStrv( logo.get(), logo.size() ) );
            ImGui::GetWindowDrawList()->AddText(
                logoPos, ImGui::GetColorU32( colors.logo ), ImStrv( logo.get(), logo.size() ) );
            ImGui::PopFont();
        }
        ImGui::EndChild();

        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, ImGui::GetStyle().ItemSpacing.y ) );

        if ( ImGui::BeginChild( ImStrv( xorstr( "Tab" ) ),
                                ImGui::GetContentRegionAvail() - ImVec2( 0.0f, 62.0f ),
                                ImGuiChildFlags_None,
                                windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled(
                ImGui::GetCursorScreenPos(),
                ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                ImColor( colors.leftBar.x, colors.leftBar.y, colors.leftBar.z, colors.leftBar.w * 0.85f ) );

            constexpr auto group = []( const ImVec2& groupPos, const char* const groupText ) noexcept
            {
                ImGui::SetCursorPos( groupPos );
                ImGui::SetWindowFontScale( 14.0f / ImGui::GetIO().Fonts->Fonts[1]->FontSize );
                ImGui::PushFont( ImGui::GetIO().Fonts->Fonts[1] );
                ImGui::TextColored( ImColor( 70, 70, 70 ).Value, groupText );
                ImGui::PopFont();
                ImGui::SetWindowFontScale( 1.0f );
            };

            const auto button = [&]( const ImStrv buttonIcon, const ImStrv buttonLabel ) noexcept
            {
                // constexpr auto   buttonRounding = 5.0f;
                constexpr ImVec2 buttonOffset( 10.0f, 1.0f );
                constexpr ImVec2 buttonSize( 171.0f, 30.0f );
                const auto       buttonIconColor  = ImGui::ColorConvertFloat4ToU32( colors.accent );
                const auto       buttonLabelColor = ImGui::ColorConvertFloat4ToU32( colors.text );
                const auto       buttonLabelSize  = ImGui::CalcTextSize( buttonLabel );
                ImGui::SetCursorPos( ImGui::GetCursorPos() + buttonOffset );
                const auto buttonPos = ImGui::GetCursorScreenPos();
                ImGui::InvisibleButton( buttonLabel, buttonSize );
                const ImVec2 buttonTextPos( buttonPos.x, buttonPos.y + ( buttonSize.y - buttonLabelSize.y ) * 0.5f );
                auto&        drawList = *ImGui::GetWindowDrawList();
                drawList.AddText( buttonTextPos + ImVec2( 13.0, -1.0f ), buttonIconColor, buttonIcon );
                drawList.AddText( buttonTextPos + ImVec2( 40.0f, 0.0f ), buttonLabelColor, buttonLabel );
            };

            group( ImVec2( 20.0f, 1.0f ), xorstr_( "Aimbot" ) );
            button( ImStrv( xorstr( "\xef\x81\x9b" ) ), ImStrv( xorstr( "Ragebot" ) ) );
            button( ImStrv( xorstr( "\xef\x8b\xaa" ) ), ImStrv( xorstr( "Anti Aim" ) ) );
            button( ImStrv( xorstr( "\xef\xa3\x8c" ) ), ImStrv( xorstr( "Legitbot" ) ) );

            group( ImVec2( 20.0f, 140.0f ), xorstr_( "Visuals" ) );
            button( ImStrv( xorstr( "\xef\x80\x87" ) ), ImStrv( xorstr( "Player" ) ) );
            button( ImStrv( xorstr( "\xef\x95\xbe" ) ), ImStrv( xorstr( "World" ) ) );
            button( ImStrv( xorstr( "\xef\xa2\xa9" ) ), ImStrv( xorstr( "View" ) ) );

            group( ImVec2( 20.0f, 279.0f ), xorstr_( "Miscellaneous" ) );
            button( ImStrv( xorstr( "\xef\x9f\x99" ) ), ImStrv( xorstr( "Main" ) ) );
            button( ImStrv( xorstr( "\xef\x97\x94" ) ), ImStrv( xorstr( "Inventory" ) ) );
            button( ImStrv( xorstr( "\xef\x80\x93" ) ), ImStrv( xorstr( "Configs" ) ) );
        }
        ImGui::EndChild();

        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, ImGui::GetStyle().ItemSpacing.y ) );
        ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                   ImGui::GetCursorScreenPos() +
                                                       ImVec2( ImGui::GetContentRegionAvail().x, 2.0f ),
                                                   ImGui::GetColorU32( colors.border ) );
        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() + ImVec2( 0.0f, 2.0f ) );

        if ( ImGui::BeginChild(
                 ImStrv( xorstr( "Watermark" ) ), ImGui::GetContentRegionAvail(), ImGuiChildFlags_None, windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled(
                ImGui::GetCursorScreenPos(),
                ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                ImColor( colors.leftBar.x, colors.leftBar.y, colors.leftBar.z, colors.leftBar.w * 0.85f ),
                ImGui::GetStyle().WindowRounding,
                ImDrawFlags_RoundCornersBottomLeft );
        }
        ImGui::EndChild();
    }
    ImGui::EndChild();

    ImGui::SameLine( 0.0f, 2.0f );
    ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                               ImGui::GetCursorScreenPos() + ImVec2( -2.0f, ImGui::GetWindowSize().y ),
                                               ImGui::GetColorU32( colors.border ) );

    if ( ImGui::BeginChild(
             ImStrv( xorstr( "Right" ) ), ImGui::GetContentRegionAvail(), ImGuiChildFlags_None, windowFlags ) )
    {
        if ( ImGui::BeginChild( ImStrv( xorstr( "Utility" ) ),
                                ImVec2( ImGui::GetContentRegionAvail().x, 70.0f ),
                                ImGuiChildFlags_None,
                                windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled(
                ImGui::GetCursorScreenPos(),
                ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                ImColor( colors.background.x, colors.background.y, colors.background.z, colors.background.w * 0.90f ),
                ImGui::GetStyle().WindowRounding,
                ImDrawFlags_RoundCornersTopRight );
        }
        ImGui::EndChild();

        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, ImGui::GetStyle().ItemSpacing.y ) );
        ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                   ImGui::GetCursorScreenPos() +
                                                       ImVec2( ImGui::GetContentRegionAvail().x, 2.0f ),
                                                   ImGui::GetColorU32( colors.border ) );
        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() + ImVec2( 0.0f, 2.0f ) );

        if ( ImGui::BeginChild(
                 ImStrv( xorstr( "Content" ) ), ImGui::GetContentRegionAvail(), ImGuiChildFlags_None, windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled(
                ImGui::GetCursorScreenPos(),
                ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                ImColor( colors.background.x, colors.background.y, colors.background.z, colors.background.w * 0.97f ),
                ImGui::GetStyle().WindowRounding,
                ImDrawFlags_RoundCornersBottomRight );
        }
        ImGui::EndChild();
    }
    ImGui::EndChild();
}

void orion::core::Gui::editor() noexcept
{
    if ( ImGui::Begin( ImStrv( xorstr( "Editor" ) ) ) )
    {
        ImGui::SliderFloat( ImStrv( xorstr( "size.x" ) ), &size.x, 0.0f, 1000.0f );
        ImGui::SliderFloat( ImStrv( xorstr( "size.y" ) ), &size.y, 0.0f, 1000.0f );

        ImGui::SliderFloat( ImStrv( xorstr( "pos.x" ) ), &pos.x, 0.0f, size.x );
        ImGui::SliderFloat( ImStrv( xorstr( "pos.y" ) ), &pos.y, 0.0f, size.y );
    }
    ImGui::End();
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
