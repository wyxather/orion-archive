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

// https://github.com/wyxather/imgui-neverlose/blob/master/imgui.cpp#L5794
// https://github.com/wyxather/orion/blob/backup/game/octopath_traveler_2/orion/source/core/gui.cpp

orion::core::Gui::Gui( [[maybe_unused]] const Platform& platform, ImGuiContext& imguiContext ) noexcept
{
    auto& imguiIO           = imguiContext.IO;
    imguiIO.IniFilename     = nullptr;
    imguiIO.MouseDrawCursor = open;

    ImFontConfig font_awesome_6_pro_solid_900_compressed_config;
    font_awesome_6_pro_solid_900_compressed_config.MergeMode = true;

    auto& fonts = *imguiIO.Fonts;
    fonts.AddFontFromMemoryCompressedTTF( museo_sans_cyrl_700_compressed_data.data(),
                                          static_cast<int>( museo_sans_cyrl_700_compressed_data.size() ),
                                          16.0f ); // Default
    fonts.AddFontFromMemoryCompressedTTF( font_awesome_6_pro_solid_900_compressed_data.data(),
                                          static_cast<int>( font_awesome_6_pro_solid_900_compressed_data.size() ),
                                          14.0f,
                                          &font_awesome_6_pro_solid_900_compressed_config,
                                          FONT_AWESOME_GLYPH_RANGE.data() );

    fonts.AddFontFromMemoryCompressedTTF( museo_sans_cyrl_900_compressed_data.data(),
                                          static_cast<int>( museo_sans_cyrl_900_compressed_data.size() ),
                                          32.0f ); // Logo, Tab Group
    fonts.AddFontFromMemoryCompressedTTF( font_awesome_6_pro_solid_900_compressed_data.data(),
                                          static_cast<int>( font_awesome_6_pro_solid_900_compressed_data.size() ),
                                          32.0f,
                                          &font_awesome_6_pro_solid_900_compressed_config,
                                          FONT_AWESOME_GLYPH_RANGE.data() );

    auto& style              = imguiContext.Style;
    style.WindowPadding      = ImVec2( 0.0f, 0.0f );
    style.WindowRounding     = 10.0f;
    style.WindowBorderSize   = 0.0f;
    style.RoundCornersUseTex = false;

    style.Colors[ImGuiCol_WindowShadow] = ImColor( 0, 0, 0, 255 );

    colors.contentBackground  = ImColor( 8, 8, 8, 240 );
    colors.leftBackground     = ImColor( 8, 8, 8, 217 );
    colors.leftGroupText      = ImColor( 70, 70, 70, 255 );
    colors.logo               = ImColor( 255, 255, 248, 255 );
    colors.logoShadow         = ImColor( 65, 186, 217, 255 );
    colors.separator          = ImColor( 15, 15, 15, 214 );
    colors.stamp              = ImColor( 0, 165, 243, 255 );
    colors.text               = ImColor( 255, 255, 255, 255 );
    colors.utilityBackground  = ImColor( 10, 10, 10, 230 );
    colors.utilityFrameBorder = ImColor( 53, 53, 53, 75 );
    colors.utilityText        = ImColor( 186, 202, 203, 176 );
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
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                                                       ImGui::ColorConvertFloat4ToU32( colors.leftBackground ),
                                                       ImGui::GetStyle().WindowRounding,
                                                       ImDrawFlags_RoundCornersTopLeft );

            ImGui::PushFont( ImGui::GetIO().Fonts->Fonts[1] );
            auto       logo     = xorstr( "ORION" );
            const auto logoSize = ImGui::CalcTextSize( ImStrv( logo.crypt_get(), logo.size() ) );
            const auto logoPos  = ImGui::GetCursorScreenPos() + ( ImGui::GetContentRegionAvail() - logoSize ) * 0.5f;
            ImGui::GetWindowDrawList()->AddText( logoPos - ImVec2( 1.0f, 0.0f ),
                                                 ImGui::ColorConvertFloat4ToU32( colors.logoShadow ),
                                                 ImStrv( logo.get(), logo.size() ) );
            ImGui::GetWindowDrawList()->AddText(
                logoPos, ImGui::ColorConvertFloat4ToU32( colors.logo ), ImStrv( logo.get(), logo.size() ) );
            ImGui::PopFont();
        }
        ImGui::EndChild();

        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, ImGui::GetStyle().ItemSpacing.y ) );

        if ( ImGui::BeginChild( ImStrv( xorstr( "Tab" ) ),
                                ImGui::GetContentRegionAvail() - ImVec2( 0.0f, 62.0f ),
                                ImGuiChildFlags_None,
                                windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                                                       ImGui::ColorConvertFloat4ToU32( colors.leftBackground ) );

            const auto group = [&]( const ImVec2& groupPos, const ImStrv groupText ) noexcept
            {
                const auto&    font     = *ImGui::GetIO().Fonts->Fonts[1];
                constexpr auto fontSize = 14.0f;
                ImGui::SetCursorPos( groupPos );
                ImGui::GetWindowDrawList()->AddText( &font,
                                                     fontSize,
                                                     ImGui::GetCursorScreenPos(),
                                                     ImGui::ColorConvertFloat4ToU32( colors.leftGroupText ),
                                                     groupText );
                ImGui::Dummy( font.CalcTextSizeA( fontSize, FLT_MAX, 0.0f, groupText ) );
            };

            const auto buttonIconColor  = ImGui::ColorConvertFloat4ToU32( colors.stamp );
            const auto buttonLabelColor = ImGui::ColorConvertFloat4ToU32( colors.text );
            const auto button           = [&]( const ImStrv buttonIcon, const ImStrv buttonLabel ) noexcept
            {
                constexpr auto   buttonRounding = 5.0f;
                constexpr ImVec2 buttonOffset( 10.0f, 1.0f );
                constexpr ImVec2 buttonSize( 171.0f, 30.0f );
                const auto       buttonLabelSize = ImGui::CalcTextSize( buttonLabel );
                ImGui::SetCursorPos( ImGui::GetCursorPos() + buttonOffset );
                const auto buttonPos = ImGui::GetCursorScreenPos();
                ImGui::InvisibleButton( buttonLabel, buttonSize );
                const ImVec2 buttonTextPos( buttonPos.x, buttonPos.y + ( buttonSize.y - buttonLabelSize.y ) * 0.5f );
                auto&        drawList = *ImGui::GetWindowDrawList();
                drawList.AddText( buttonTextPos + ImVec2( 13.0, -1.0f ), buttonIconColor, buttonIcon );
                drawList.AddText( buttonTextPos + ImVec2( 40.0f, 0.0f ), buttonLabelColor, buttonLabel );
            };

            group( ImVec2( 20.0f, 1.0f ), ImStrv( xorstr( "Aimbot" ) ) );
            button( ImStrv( xorstr( "\xef\x81\x9b" ) ), ImStrv( xorstr( "Ragebot" ) ) );
            button( ImStrv( xorstr( "\xef\x8b\xaa" ) ), ImStrv( xorstr( "Anti Aim" ) ) );
            button( ImStrv( xorstr( "\xef\xa3\x8c" ) ), ImStrv( xorstr( "Legitbot" ) ) );

            group( ImVec2( 20.0f, 140.0f ), ImStrv( xorstr( "Visuals" ) ) );
            button( ImStrv( xorstr( "\xef\x80\x87" ) ), ImStrv( xorstr( "Player" ) ) );
            button( ImStrv( xorstr( "\xef\x95\xbe" ) ), ImStrv( xorstr( "World" ) ) );
            button( ImStrv( xorstr( "\xef\xa2\xa9" ) ), ImStrv( xorstr( "View" ) ) );

            group( ImVec2( 20.0f, 279.0f ), ImStrv( xorstr( "Miscellaneous" ) ) );
            button( ImStrv( xorstr( "\xef\x9f\x99" ) ), ImStrv( xorstr( "Main" ) ) );
            button( ImStrv( xorstr( "\xef\x97\x94" ) ), ImStrv( xorstr( "Inventory" ) ) );
            button( ImStrv( xorstr( "\xef\x80\x93" ) ), ImStrv( xorstr( "Configs" ) ) );
        }
        ImGui::EndChild();

        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, ImGui::GetStyle().ItemSpacing.y ) );
        ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                   ImGui::GetCursorScreenPos() +
                                                       ImVec2( ImGui::GetContentRegionAvail().x, 2.0f ),
                                                   ImGui::ColorConvertFloat4ToU32( colors.separator ) );
        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() + ImVec2( 0.0f, 2.0f ) );

        if ( ImGui::BeginChild(
                 ImStrv( xorstr( "Watermark" ) ), ImGui::GetContentRegionAvail(), ImGuiChildFlags_None, windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                                                       ImGui::ColorConvertFloat4ToU32( colors.leftBackground ),
                                                       ImGui::GetStyle().WindowRounding,
                                                       ImDrawFlags_RoundCornersBottomLeft );

            ImGui::GetWindowDrawList()->AddCircleFilled( ImGui::GetCursorScreenPos() + ImVec2( 30.0f, 30.0f ),
                                                         19.0f,
                                                         IM_COL32( 0, 0, 0, 115 * ImGui::GetStyle().Alpha ) );

            ImGui::GetWindowDrawList()->AddText( ImGui::GetIO().Fonts->Fonts[1],
                                                 20.0f,
                                                 ImGui::GetCursorScreenPos() + ImVec2( 21.0f, 19.0f ),
                                                 ImGui::ColorConvertFloat4ToU32( colors.text ),
                                                 ImStrv( xorstr( "\xef\x88\x9b" ) ) );

            ImGui::GetWindowDrawList()->AddText( ImGui::GetFont(),
                                                 15.0f,
                                                 ImGui::GetCursorScreenPos() + ImVec2( 58.0f, 12.0f ),
                                                 ImGui::ColorConvertFloat4ToU32( colors.text ),
                                                 ImStrv( xorstr( "Wyxather" ) ) );

            ImGui::GetWindowDrawList()->AddText( ImGui::GetFont(),
                                                 15.0f,
                                                 ImGui::GetCursorScreenPos() + ImVec2( 58.0f, 32.0f ),
                                                 ImGui::ColorConvertFloat4ToU32( colors.leftGroupText ),
                                                 ImStrv( xorstr( "Build:" ) ) );

            ImGui::GetWindowDrawList()->AddText( ImGui::GetFont(),
                                                 15.0f,
                                                 ImGui::GetCursorScreenPos() + ImVec2( 99.0f, 32.0f ),
                                                 ImGui::ColorConvertFloat4ToU32( colors.stamp ),
                                                 ImStrv( xorstr( __DATE__ ) ) );
        }
        ImGui::EndChild();
    }
    ImGui::EndChild();

    ImGui::SameLine( 0.0f, 2.0f );
    ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                               ImGui::GetCursorScreenPos() + ImVec2( -2.0f, ImGui::GetWindowSize().y ),
                                               ImGui::ColorConvertFloat4ToU32( colors.separator ) );

    if ( ImGui::BeginChild(
             ImStrv( xorstr( "Right" ) ), ImGui::GetContentRegionAvail(), ImGuiChildFlags_None, windowFlags ) )
    {
        if ( ImGui::BeginChild( ImStrv( xorstr( "Utility" ) ),
                                ImVec2( ImGui::GetContentRegionAvail().x, 70.0f ),
                                ImGuiChildFlags_None,
                                windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                                                       ImGui::ColorConvertFloat4ToU32( colors.utilityBackground ),
                                                       ImGui::GetStyle().WindowRounding,
                                                       ImDrawFlags_RoundCornersTopRight );

            const auto   saveButtonPos = ImGui::GetCursorScreenPos() + ImVec2( 20.0f, 21.0f );
            const ImVec2 saveButtonSize( 100.0f, 29.0f );
            ImGui::SetCursorScreenPos( saveButtonPos );
            ImGui::InvisibleButton( ImStrv( xorstr( "Save" ) ), saveButtonSize );
            ImGui::GetWindowDrawList()->AddRect( saveButtonPos,
                                                 saveButtonPos + saveButtonSize,
                                                 ImGui::ColorConvertFloat4ToU32( colors.utilityFrameBorder ),
                                                 4.0f );
            ImGui::GetWindowDrawList()->AddText( ImGui::GetFont(),
                                                 17.0f,
                                                 saveButtonPos + ImVec2( 20.0f, 5.0f ),
                                                 ImGui::ColorConvertFloat4ToU32( colors.utilityText ),
                                                 ImStrv( "\xef\x83\x87" ) );
            ImGui::GetWindowDrawList()->AddText( ImGui::GetIO().Fonts->Fonts[1],
                                                 17.0f,
                                                 saveButtonPos + ImVec2( 49.0f, 6.0f ),
                                                 ImGui::ColorConvertFloat4ToU32( colors.utilityText ),
                                                 ImStrv( "Save" ) );
        }
        ImGui::EndChild();

        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, ImGui::GetStyle().ItemSpacing.y ) );
        ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                   ImGui::GetCursorScreenPos() +
                                                       ImVec2( ImGui::GetContentRegionAvail().x, 2.0f ),
                                                   ImGui::ColorConvertFloat4ToU32( colors.separator ) );
        ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() + ImVec2( 0.0f, 2.0f ) );

        if ( ImGui::BeginChild(
                 ImStrv( xorstr( "Content" ) ), ImGui::GetContentRegionAvail(), ImGuiChildFlags_None, windowFlags ) )
        {
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                                                       ImGui::ColorConvertFloat4ToU32( colors.contentBackground ),
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

        ImGui::SliderFloat( ImStrv( xorstr( "pos.x" ) ), &pos.x, 0.0f, 1000.0f );
        ImGui::SliderFloat( ImStrv( xorstr( "pos.y" ) ), &pos.y, 0.0f, 1000.0f );

        constexpr auto colorEditFlags = ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_AlphaPreview;
        ImGui::ColorEdit4( ImStrv( xorstr( "Content Background" ) ), &colors.contentBackground.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Left Background" ) ), &colors.leftBackground.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Logo" ) ), &colors.logo.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Logo Shadow" ) ), &colors.logoShadow.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Separator" ) ), &colors.separator.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Stamp" ) ), &colors.stamp.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Text" ) ), &colors.text.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Utility Background" ) ), &colors.utilityBackground.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Utility Frame Border" ) ), &colors.utilityFrameBorder.x, colorEditFlags );
        ImGui::ColorEdit4( ImStrv( xorstr( "Utility Frame Text" ) ), &colors.utilityText.x, colorEditFlags );
    }
    ImGui::End();
}

void orion::core::to_json( nlohmann::json& json, const Gui& gui ) noexcept
{
    json = {
        { xorstr_( "open" ), gui.open },
    };
}

#pragma push_macro( "SAFE_RELEASE" )
#define SAFERELEASE( v )                                                                                               \
    if ( v != nullptr )                                                                                                \
    {                                                                                                                  \
        v->Release();                                                                                                  \
        v = nullptr;                                                                                                   \
    }

orion::core::Gui::PostProcess::PostProcess( IDirect3DDevice9& direct3DDevice9 ) noexcept
    : direct3DDevice9( direct3DDevice9 )
{
}

void orion::core::Gui::PostProcess::createDeviceObjects() noexcept
{
    direct3DDevice9.GetBackBuffer( 0, 0, D3DBACKBUFFER_TYPE_MONO, &backBuffer );
    direct3DDevice9.GetRenderTarget( 0, &originalRenderTarget );

    direct3DDevice9.CreatePixelShader( (const DWORD*)( blurX ), &pixelShader[0] );
    direct3DDevice9.CreatePixelShader( (const DWORD*)( blurY ), &pixelShader[1] );

    textureSize = ImVec2();
}

void orion::core::Gui::PostProcess::invalidateDeviceObjects() noexcept
{
    SAFERELEASE( backBuffer )
    SAFERELEASE( originalRenderTarget )

    for ( auto&& pixelS : pixelShader )
    {
        SAFERELEASE( pixelS )
    }

    SAFERELEASE( texture )
    SAFERELEASE( textureSurface )
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

            pixelShaderConst[0] = { 1.0f / textureSize.x, 8.0f };
            pixelShaderConst[1] = { 1.0f / textureSize.y, 8.0f };
        }
    }

    const auto pMin  = ImGui::GetWindowPos();
    const auto pMax  = ImGui::GetWindowSize() + pMin;
    const auto uvMin = pMin / textureSize;
    const auto uvMax = pMax / textureSize;

    drawList.AddCallback( &begin, this );
    for ( auto i = 0; i < 8; ++i )
    {
        drawList.AddCallback( &firstPass, this );
        drawList.AddImage( texture, pMin, pMax, uvMin, uvMax );
        drawList.AddCallback( &secondPass, this );
        drawList.AddImage( texture, pMin, pMax, uvMin, uvMax );
    }
    drawList.AddCallback( &end, this );
    drawList.AddImageRounded( texture, pMin, pMax, uvMin, uvMax, IM_COL32_WHITE, ImGui::GetStyle().WindowRounding );
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
    postProcess.direct3DDevice9.SetPixelShader( postProcess.pixelShader[0] );
    postProcess.direct3DDevice9.SetPixelShaderConstantF(
        0, (const float*)( &postProcess.pixelShaderConst[0] ), ( sizeof( postProcess.pixelShaderConst[0] ) / 16 ) );
}

void orion::core::Gui::PostProcess::secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess*>( cmd->UserCallbackData );
    postProcess.direct3DDevice9.SetPixelShader( postProcess.pixelShader[1] );
    postProcess.direct3DDevice9.SetPixelShaderConstantF(
        0, (const float*)( &postProcess.pixelShaderConst[1] ), ( sizeof( postProcess.pixelShaderConst[1] ) / 16 ) );
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
    d3D11DeviceContext.OMGetRenderTargets( 1, &backBufferRTV, nullptr );
    if ( backBufferRTV != nullptr )
    {
        backBufferRTV->GetResource( (ID3D11Resource**)( &backBuffer ) );
    }
    else
    {
        dXGISwapChain.GetBuffer( 0, IID_PPV_ARGS( &backBuffer ) );
        d3D11Device.CreateRenderTargetView( backBuffer, nullptr, &backBufferRTV );
    }

    d3D11Device.CreatePixelShader( blur2X, sizeof( blur2X ), nullptr, &pixelShader[0] );
    d3D11Device.CreatePixelShader( blur2Y, sizeof( blur2Y ), nullptr, &pixelShader[1] );

    D3D11_BUFFER_DESC bufferDesc {};
    bufferDesc.Usage          = D3D11_USAGE_DYNAMIC;
    bufferDesc.ByteWidth      = sizeof( BlurParams );
    bufferDesc.BindFlags      = D3D11_BIND_CONSTANT_BUFFER;
    bufferDesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    for ( auto&& pixelSC : pixelShaderConst )
    {
        d3D11Device.CreateBuffer( &bufferDesc, nullptr, &pixelSC );
    }

    textureSize = ImVec2();
}

void orion::core::Gui::PostProcess2::invalidateDeviceObjects() noexcept
{
    SAFERELEASE( backBuffer )
    SAFERELEASE( backBufferRTV )

    const auto objects = std::ranges::views::zip( pixelShader, pixelShaderConst, texture, textureRTV, textureSRV );
    for ( auto&& [pixelS, pixelSC, tex, texRTV, texSRV] : objects )
    {
        SAFERELEASE( pixelS );
        SAFERELEASE( pixelSC );
        SAFERELEASE( tex );
        SAFERELEASE( texRTV );
        SAFERELEASE( texSRV );
    }
}

void orion::core::Gui::PostProcess2::setRenderTarget() const noexcept
{
    return d3D11DeviceContext.OMSetRenderTargets( 1, &backBufferRTV, nullptr );
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

        backBufferDesc.BindFlags |= D3D11_BIND_SHADER_RESOURCE | D3D11_BIND_RENDER_TARGET;

        const auto textures = std::ranges::views::zip( texture, textureRTV, textureSRV );
        for ( auto&& [tex, texRTV, texSRV] : textures )
        {
            SAFERELEASE( tex );
            SAFERELEASE( texRTV );
            SAFERELEASE( texSRV );

            if ( d3D11Device.CreateTexture2D( &backBufferDesc, nullptr, &tex ) == S_OK ) [[likely]]
            {
                const CD3D11_RENDER_TARGET_VIEW_DESC textureRTVDesc( tex, D3D11_RTV_DIMENSION_TEXTURE2D );
                d3D11Device.CreateRenderTargetView( tex, &textureRTVDesc, &texRTV );
                const CD3D11_SHADER_RESOURCE_VIEW_DESC textureSRVDesc( tex, D3D11_SRV_DIMENSION_TEXTURE2D );
                d3D11Device.CreateShaderResourceView( tex, &textureSRVDesc, &texSRV );
            }
        }

        D3D11_MAPPED_SUBRESOURCE mappedResource;
        if ( d3D11DeviceContext.Map( pixelShaderConst[0], 0, D3D11_MAP_WRITE_DISCARD, 0, &mappedResource ) == S_OK )
            [[likely]]
        {
            const BlurParams blurParams( 1.0f / textureSize.x, 8.0f );
            std::memcpy( mappedResource.pData, &blurParams, sizeof( blurParams ) );
            d3D11DeviceContext.Unmap( pixelShaderConst[0], 0 );
        }
        if ( d3D11DeviceContext.Map( pixelShaderConst[1], 0, D3D11_MAP_WRITE_DISCARD, 0, &mappedResource ) == S_OK )
            [[likely]]
        {
            const BlurParams blurParams( 1.0f / textureSize.y, 8.0f );
            std::memcpy( mappedResource.pData, &blurParams, sizeof( blurParams ) );
            d3D11DeviceContext.Unmap( pixelShaderConst[1], 0 );
        }
    }

    const auto windowSize = ImGui::GetWindowSize();
    const auto windowPos  = ImGui::GetWindowPos();
    textureBox.left       = static_cast<UINT>( std::clamp( windowPos.x, 0.0f, textureSize.x ) );
    textureBox.top        = static_cast<UINT>( std::clamp( windowPos.y, 0.0f, textureSize.y ) );
    textureBox.right      = static_cast<UINT>( std::clamp( windowPos.x + windowSize.x, 0.0f, textureSize.x ) );
    textureBox.bottom     = static_cast<UINT>( std::clamp( windowPos.y + windowSize.y, 0.0f, textureSize.y ) );

    const auto&  pMin = windowPos;
    const ImVec2 pMax( static_cast<float>( textureBox.right ), static_cast<float>( textureBox.bottom ) );
    const auto   uvMin = pMin / textureSize;
    const auto   uvMax = pMax / textureSize;

    drawList.AddCallback( &begin, this );
    for ( auto i = 0; i < 8; ++i )
    {
        drawList.AddCallback( &firstPass, this );
        drawList.AddImage( textureSRV[0], pMin, pMax, uvMin, uvMax );
        drawList.AddCallback( &secondPass, this );
        drawList.AddImage( textureSRV[1], pMin, pMax, uvMin, uvMax );
    }
    drawList.AddCallback( &end, this );
    drawList.AddImageRounded(
        textureSRV[0], pMin, pMax, uvMin, uvMax, IM_COL32_WHITE, ImGui::GetStyle().WindowRounding );
    drawList.AddCallback( ImDrawCallback_ResetRenderState, nullptr );
}

void orion::core::Gui::PostProcess2::begin( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess2*>( cmd->UserCallbackData );
    postProcess.d3D11DeviceContext.CopyResource( postProcess.texture[0], postProcess.backBuffer );
}

void orion::core::Gui::PostProcess2::firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess2*>( cmd->UserCallbackData );
    postProcess.d3D11DeviceContext.OMSetRenderTargets( 1, &postProcess.textureRTV[1], nullptr );
    postProcess.d3D11DeviceContext.PSSetShader( postProcess.pixelShader[0], nullptr, 0 );
    postProcess.d3D11DeviceContext.PSSetConstantBuffers( 0, 1, &postProcess.pixelShaderConst[0] );
}

void orion::core::Gui::PostProcess2::secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess2*>( cmd->UserCallbackData );
    postProcess.d3D11DeviceContext.OMSetRenderTargets( 1, &postProcess.textureRTV[0], nullptr );
    postProcess.d3D11DeviceContext.PSSetShader( postProcess.pixelShader[1], nullptr, 0 );
    postProcess.d3D11DeviceContext.PSSetConstantBuffers( 0, 1, &postProcess.pixelShaderConst[1] );
}

void orion::core::Gui::PostProcess2::end( const ImDrawList*, const ImDrawCmd* cmd ) noexcept
{
    const auto& postProcess = *static_cast<PostProcess2*>( cmd->UserCallbackData );
    postProcess.d3D11DeviceContext.OMSetRenderTargets( 1, &postProcess.backBufferRTV, nullptr );
}

#pragma pop_macro( "SAFE_RELEASE" )

orion::core::Gui::BlurParams::BlurParams( const float texelSize, const float blurAmount ) noexcept
{
    constexpr auto computeGaussian = []( const float value, const float theta ) noexcept
    {
        constexpr auto v = 2.0f * std::numbers::pi_v<float>;
        return ( 1.0f / std::sqrt( v * theta ) ) * std::exp( -( value * value ) / ( 2.0f * theta * theta ) );
    };

    sampleOffsets[0] = 0.0f;
    sampleWeights[0] = computeGaussian( 0.0f, blurAmount );

    auto totalWeight = sampleWeights[0].value;

    for ( std::size_t i = 0; i < ( 15 / 2 ); ++i )
    {
        const auto offset = texelSize * ( static_cast<float>( i ) * 2.0f + 1.5f );
        const auto weight = computeGaussian( static_cast<float>( i ) + 1.0f, blurAmount );

        sampleOffsets[i * 2 + 1] = offset;
        sampleOffsets[i * 2 + 2] = -offset;

        sampleWeights[i * 2 + 1] = weight;
        sampleWeights[i * 2 + 2] = weight;

        totalWeight += weight * 2.0f;
    }

    for ( auto&& sampleWeight : sampleWeights )
    {
        sampleWeight /= totalWeight;
    }
}

void orion::core::Gui::BlurParams::Float::operator=( const float other ) noexcept
{
    value = other;
}

void orion::core::Gui::BlurParams::Float::operator/=( const float other ) noexcept
{
    value /= other;
}
