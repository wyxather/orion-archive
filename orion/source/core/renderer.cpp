#include "dependencies/imgui/imgui_impl_dx11.h"
#include "dependencies/imgui/imgui_impl_dx9.h"
#include "source/context.h"

orion::core::Renderer::Renderer( [[maybe_unused]] const imports::Ntdll&    ntdll,
                                 [[maybe_unused]] const imports::Kernel32& kernel32,
                                 [[maybe_unused]] const imports::User32&   user32 ) noexcept
{
    auto enumerator = LI_MOD( "d3d11.dll" )::enumerator();
    if ( ( enumerator.value != enumerator.head ) && ( enumerator.value->DllBase != nullptr ) )
    {
        switch ( getUserInput( xorstr_( "DirectX11" ), xorstr_( "Renderer" ) ) )
        {
        case IDYES:
            ldr = enumerator.value;
            [[fallthrough]];
        case IDCANCEL:
            return;
        default:
            break;
        }
    }
    enumerator = LI_MOD( "d3d9.dll" )::enumerator();
    if ( ( enumerator.value != enumerator.head ) && ( enumerator.value->DllBase != nullptr ) )
    {
        switch ( getUserInput( xorstr_( "DirectX9" ), xorstr_( "Renderer" ) ) )
        {
        case IDYES:
            ldr = enumerator.value;
            [[fallthrough]];
        case IDCANCEL:
            return;
        default:
            break;
        }
    }
}

void orion::core::Renderer::hook() noexcept
{
    if ( ldr == nullptr )
    {
        return;
    }
    if ( _wcsicmp( ldr->BaseDllName.Buffer, xorstr_( L"d3d11.dll" ) ) == 0 )
    {
        return hookDirect3D11();
    }
    if ( _wcsicmp( ldr->BaseDllName.Buffer, xorstr_( L"d3d9.dll" ) ) == 0 )
    {
        return hookDirect3D9();
    }
}

void orion::core::Renderer::unhook() noexcept
{
    const auto backendRendererName = ImGui::GetIO().BackendRendererName;
    if ( backendRendererName == nullptr )
    {
        return;
    }
    if ( utilities::String::strcmp( xorstr_( "imgui_impl_dx11" ), backendRendererName ) == 0 )
    {
        ImGui_ImplDX11_Shutdown();
    }
    else if ( utilities::String::strcmp( xorstr_( "imgui_impl_dx9" ), backendRendererName ) == 0 )
    {
        ImGui_ImplDX9_Shutdown();
    }
}

int orion::core::Renderer::getUserInput( const char* text, const char* caption ) noexcept
{
    return context.getUser32().messageBoxA(
        context.getUser32().gadgetAddress, nullptr, text, caption, MB_YESNOCANCEL | MB_ICONQUESTION );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Reset(
    CONST LPDIRECT3DDEVICE9 direct3DDevice9, CONST D3DPRESENT_PARAMETERS* CONST presentationParameters ) noexcept
{
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]]
    {
        return context.getRenderer().hooks->stdcall<0, HRESULT>( direct3DDevice9, presentationParameters );
    }
    ImGui_ImplDX9_InvalidateDeviceObjects();
    const auto result = context.getRenderer().hooks->stdcall<0, HRESULT>( direct3DDevice9, presentationParameters );
    ImGui_ImplDX9_CreateDeviceObjects();
    return result;
}

namespace orion
{

void beginCustomImguiWidgets() noexcept
{
    ImGui::PushStyleVar( ImGuiStyleVar_PopupRounding, 6.0f );
    ImGui::PushStyleVar( ImGuiStyleVar_FramePadding, ImVec2( 20.0f, 20.0f ) );
    ImGui::PushStyleVar( ImGuiStyleVar_FrameRounding, 6.0 );
    ImGui::PushStyleVar( ImGuiStyleVar_FrameBorderSize, 1.0 );
    ImGui::PushStyleVar( ImGuiStyleVar_ItemInnerSpacing, ImVec2( 20.0f, 4.0f ) );
    ImGui::PushStyleVar( ImGuiStyleVar_GrabMinSize, 14.0f );

    ImGui::PushStyleColor( ImGuiCol_Text, IM_COL32( 230, 230, 230, 255 ) );
    ImGui::PushStyleColor( ImGuiCol_TextDisabled, IM_COL32( 161, 161, 161, 255 ) );
    ImGui::PushStyleColor( ImGuiCol_PopupBg, IM_COL32( 55, 54, 54, 238 ) );
    ImGui::PushStyleColor( ImGuiCol_Border, IM_COL32( 56, 56, 56, 221 ) );
    ImGui::PushStyleColor( ImGuiCol_FrameBg, IM_COL32( 50, 51, 52, 138 ) );
    ImGui::PushStyleColor( ImGuiCol_FrameBgActive, IM_COL32( 83, 83, 83, 179 ) );
    ImGui::PushStyleColor( ImGuiCol_FrameBgHovered, IM_COL32( 68, 68, 69, 171 ) );
    ImGui::PushStyleColor( ImGuiCol_CheckMark, IM_COL32( 62, 171, 238, 255 ) );
    ImGui::PushStyleColor( ImGuiCol_SliderGrab, IM_COL32( 74, 74, 74, 255 ) );
    ImGui::PushStyleColor( ImGuiCol_SliderGrabActive, IM_COL32( 32, 192, 255, 255 ) );
    ImGui::PushStyleColor( ImGuiCol_Button, IM_COL32( 69, 69, 69, 102 ) );
    ImGui::PushStyleColor( ImGuiCol_ButtonActive, IM_COL32( 38, 38, 38, 245 ) );
    ImGui::PushStyleColor( ImGuiCol_ButtonHovered, IM_COL32( 75, 75, 75, 213 ) );
}

void endCustomImGuiWidgets() noexcept
{
    ImGui::PopStyleVar( 6 );
    ImGui::PopStyleColor( 13 );
}

/// <summary>
/// Can't be used with ImGui::SameLine() as it use the whole column width.
/// </summary>
/// <param name="label"></param>
/// <param name="value"></param>
_NODISCARD bool button( const ImStrv label, const ImStrv buttonLabel ) noexcept
{
    struct Animation final
    {
        Animation( Animation&& )                 = delete;
        Animation& operator=( Animation&& )      = delete;
        Animation( const Animation& )            = delete;
        Animation& operator=( const Animation& ) = delete;

        constexpr explicit Animation() noexcept = default;

        ImVec4 itemRectColor;
        ImVec4 buttonRectColor;
    };

    static std::map<ImGuiID, Animation> animations;

    const auto& imgui  = *ImGui::GetCurrentContext();
    auto&       window = *ImGui::GetCurrentWindow();
    if ( window.SkipItems )
    {
        return false;
    }

    const auto& style    = ImGui::GetStyle();
    const auto  textSize = ImGui::CalcTextSize( label );

    const ImVec2 buttonMinSize( 100.0f, 20.0f );

    const auto columnWidth  = ImGui::GetColumnWidth();
    const auto columnHeight = style.FramePadding.y + buttonMinSize.y + style.FramePadding.y;

    const auto frameHeight = ImGui::GetFrameHeight();
    const auto frameWidth =
        style.FramePadding.x + textSize.x + style.ItemInnerSpacing.x + buttonMinSize.x + style.FramePadding.x;

    const auto   itemId  = window.GetID( label );
    const auto   itemPos = ImGui::GetCursorScreenPos();
    const ImVec2 itemSize( ( frameWidth < columnWidth ) ? columnWidth : frameWidth,
                           ( frameHeight < columnHeight ) ? columnHeight : frameHeight );
    const ImRect itemRect( itemPos, itemPos + itemSize );
    ImGui::ItemSize( itemSize );
    if ( !ImGui::ItemAdd( itemRect, itemId ) )
    {
        return false;
    }

    const auto   itemRectCenterPos = itemRect.GetCenter();
    const auto   buttonTextSize    = ImGui::CalcTextSize( buttonLabel );
    const ImVec2 buttonSize( ( frameWidth < columnWidth ) ? buttonMinSize.x + ( columnWidth - frameWidth ) * 0.25f
                                                          : buttonMinSize.x,
                             columnHeight * 0.55f );
    const ImVec2 buttonPos( itemRect.Max.x - style.FramePadding.x - buttonSize.x,
                            itemRectCenterPos.y - buttonSize.y * 0.5f );
    const ImRect buttonRect( buttonPos, buttonPos + buttonSize );

    bool       isButtonHovered;
    bool       isButtonHeld;
    const auto isButtonPressed =
        ImGui::ButtonBehavior( buttonRect, itemId, &isButtonHovered, &isButtonHeld, ImGuiButtonFlags_PressedOnClick );

    auto& animation = animations[itemId];

    const auto    isItemHovered = ImGui::IsItemHovered();
    const ImVec4* frameBgColor;
    const ImVec4* buttonColor;
    if ( ( imgui.LastActiveId == itemId ) && ( imgui.LastActiveIdTimer < 0.3f ) )
    {
        frameBgColor = std::addressof( style.Colors[ImGuiCol_FrameBgActive] );
        buttonColor  = std::addressof( style.Colors[ImGuiCol_ButtonActive] );
    }
    else if ( isItemHovered )
    {
        frameBgColor = std::addressof( style.Colors[ImGuiCol_FrameBgHovered] );
        buttonColor  = std::addressof( style.Colors[ImGuiCol_ButtonHovered] );
    }
    else
    {
        frameBgColor = std::addressof( style.Colors[ImGuiCol_FrameBg] );
        buttonColor  = std::addressof( style.Colors[ImGuiCol_Button] );
    }
    animation.itemRectColor   = ImLerp( animation.itemRectColor, *frameBgColor, imgui.IO.DeltaTime * 4.0f );
    animation.buttonRectColor = ImLerp( animation.buttonRectColor, *buttonColor, imgui.IO.DeltaTime * 4.0f );

    const auto itemRectColor   = ImGui::GetColorU32( animation.itemRectColor );
    const auto buttonRectColor = ImGui::GetColorU32( animation.buttonRectColor );

    ImGui::RenderFrame( itemRect.Min, itemRect.Max, itemRectColor, true, style.FrameRounding );
    ImGui::RenderFrame( buttonRect.Min, buttonRect.Max, buttonRectColor, true, style.FrameRounding );
    ImGui::RenderTextClipped( itemRect.Min + ImVec2( style.FramePadding.x, 0.0f ),
                              itemRect.Max,
                              label,
                              &textSize,
                              ImVec2( 0.0f, 0.5f ),
                              &itemRect );
    ImGui::RenderTextClipped(
        buttonRect.Min, buttonRect.Max, buttonLabel, &buttonTextSize, style.ButtonTextAlign, &buttonRect );

    return isButtonPressed;
}

/// <summary>
/// Can't be used with ImGui::SameLine() as it use the whole column width.
/// </summary>
/// <param name="label"></param>
/// <param name="value"></param>
void button( const ImStrv label, bool& value ) noexcept
{
    struct Animation final
    {
        Animation( Animation&& )                 = delete;
        Animation& operator=( Animation&& )      = delete;
        Animation( const Animation& )            = delete;
        Animation& operator=( const Animation& ) = delete;

        constexpr explicit Animation() noexcept = default;

        float  toggleCirclePos = 0.0f;
        ImVec4 itemRectColor;
    };

    static std::map<ImGuiID, Animation> animations;

    const auto& imgui  = *ImGui::GetCurrentContext();
    auto&       window = *ImGui::GetCurrentWindow();
    if ( window.SkipItems )
    {
        return;
    }

    const auto& style    = ImGui::GetStyle();
    const auto  textSize = ImGui::CalcTextSize( label );

    const ImVec2 toggleSize( 40.0f, 20.0f );

    const auto columnWidth  = ImGui::GetColumnWidth();
    const auto columnHeight = style.FramePadding.y + toggleSize.y + style.FramePadding.y;

    const auto frameHeight = ImGui::GetFrameHeight();
    const auto frameWidth =
        style.FramePadding.x + textSize.x + style.ItemInnerSpacing.x + toggleSize.x + style.FramePadding.x;

    const auto   itemId  = window.GetID( &value );
    const auto   itemPos = ImGui::GetCursorScreenPos();
    const ImVec2 itemSize( ( frameWidth < columnWidth ) ? columnWidth : frameWidth,
                           ( frameHeight < columnHeight ) ? columnHeight : frameHeight );
    const ImRect itemRect( itemPos, itemPos + itemSize );
    ImGui::ItemSize( itemSize );
    if ( !ImGui::ItemAdd( itemRect, itemId ) )
    {
        return;
    }

    bool isItemHovered;
    if ( bool isItemHeld;
         ImGui::ButtonBehavior( itemRect, itemId, &isItemHovered, &isItemHeld, ImGuiButtonFlags_PressedOnClick ) )
    {
        value = !value;
        ImGui::MarkItemEdited( itemId );
    }

    auto& animation           = animations[itemId];
    animation.toggleCirclePos = ImLerp( animation.toggleCirclePos, value ? 1.0f : 0.0f, imgui.IO.DeltaTime * 2.0f );
    if ( ( imgui.LastActiveId == itemId ) && ( imgui.LastActiveIdTimer < 0.3f ) )
    {
        animation.itemRectColor =
            ImLerp( animation.itemRectColor, style.Colors[ImGuiCol_FrameBgActive], imgui.IO.DeltaTime * 4.0f );
    }
    else
    {
        animation.itemRectColor =
            ImLerp( animation.itemRectColor,
                    isItemHovered ? style.Colors[ImGuiCol_FrameBgHovered] : style.Colors[ImGuiCol_FrameBg],
                    imgui.IO.DeltaTime * 4.0f );
    }

    const auto     itemRectCenterPos = itemRect.GetCenter();
    const ImVec2   togglePos( itemRect.Max.x - style.FramePadding.x - toggleSize.x,
                            itemRectCenterPos.y - toggleSize.y * 0.5f );
    const ImRect   toggleRect( togglePos, togglePos + toggleSize );
    const auto     toggleRectCenterPos = toggleRect.GetCenter();
    constexpr auto toggleRectRounding  = 12.0f;

    const auto   toggleCircleRadius = toggleSize.y * 0.5f;
    const ImVec2 toggleCirclePos( ImLerp( toggleRect.Min.x + toggleCircleRadius,
                                          toggleRect.Max.x - toggleCircleRadius,
                                          value ? utilities::math::easeOutBounce( animation.toggleCirclePos )
                                                : utilities::math::easeInBounce( animation.toggleCirclePos ) ),
                                  toggleRectCenterPos.y );

    const ImVec2 textPos( itemRect.Min.x + style.FramePadding.x, itemRectCenterPos.y - textSize.y * 0.5f );

    const auto itemRectColor   = ImGui::GetColorU32( animation.itemRectColor );
    const auto toggleRectColor = value ? ImGui::GetColorU32( ImGuiCol_CheckMark ) : ImU32();
    const auto textColor       = ImGui::GetColorU32( ImGuiCol_Text );
    const auto circleColor =
        !value ? ImGui::GetColorU32( ImGuiCol_TextDisabled ) : ImGui::GetColorU32( ImGuiCol_SliderGrab );
    const auto toggleBorderColor = !value ? circleColor : ImU32();

    auto& drawList = *window.DrawList;
    ImGui::RenderFrame( itemRect.Min, itemRect.Max, itemRectColor, true, style.FrameRounding );
    drawList.AddRectFilled( toggleRect.Min, toggleRect.Max, toggleRectColor, toggleRectRounding );
    drawList.AddRect( toggleRect.Min,
                      toggleRect.Max,
                      toggleBorderColor,
                      toggleRectRounding,
                      ImDrawFlags_None,
                      style.FrameBorderSize );
    drawList.AddCircleFilled( toggleCirclePos, toggleCircleRadius - 4.0f, circleColor );
    drawList.AddText( imgui.Font, imgui.FontSize, textPos, textColor, label );
}

/// <summary>
/// Can't be used with ImGui::SameLine() as it use the whole column width.
/// </summary>
/// <param name="label"></param>
/// <param name="value"></param>
void slider( const ImStrv        label,
             const ImGuiDataType valueType,
             void* const         value,
             const void* const   min,
             const void* const   max,
             const char* const   format ) noexcept
{
    constexpr auto grabSizeOriginal = 0.6f;

    struct Animation final
    {
        Animation( Animation&& )                 = delete;
        Animation& operator=( Animation&& )      = delete;
        Animation( const Animation& )            = delete;
        Animation& operator=( const Animation& ) = delete;

        constexpr explicit Animation() noexcept = default;

        ImVec4 itemRectColor;
        float  grabPos            = 0.0f;
        float  grabSize           = grabSizeOriginal;
        float  grabNotActiveTimer = 1.0f;
    };

    static std::map<ImGuiID, Animation> animations;

    const auto& imgui  = *ImGui::GetCurrentContext();
    auto&       window = *ImGui::GetCurrentWindow();
    if ( window.SkipItems )
    {
        return;
    }

    const auto& style    = ImGui::GetStyle();
    const auto  textSize = ImGui::CalcTextSize( label );

    const ImVec2 sliderMinSize( 100.0f, 20.0f );

    const auto columnWidth  = ImGui::GetColumnWidth();
    const auto columnHeight = style.FramePadding.y + sliderMinSize.y + style.FramePadding.y;

    const auto frameHeight = ImGui::GetFrameHeight();
    const auto frameWidth =
        style.FramePadding.x + textSize.x + style.ItemInnerSpacing.x + sliderMinSize.x + style.FramePadding.x;

    const auto   itemId  = window.GetID( value );
    const auto   itemPos = ImGui::GetCursorScreenPos();
    const ImVec2 itemSize( ( frameWidth < columnWidth ) ? columnWidth : frameWidth,
                           ( frameHeight < columnHeight ) ? columnHeight : frameHeight );
    const ImRect itemRect( itemPos, itemPos + itemSize );
    ImGui::ItemSize( itemSize );
    if ( !ImGui::ItemAdd( itemRect, itemId ) )
    {
        return;
    }

    auto& animation = animations[itemId];

    const ImVec2 sliderSize( ( frameWidth < columnWidth ) ? sliderMinSize.x + ( columnWidth - frameWidth ) * 0.5f
                                                          : sliderMinSize.x,
                             sliderMinSize.y );
    const auto   itemRectCenterPos = itemRect.GetCenter();
    const ImVec2 sliderPos( itemRect.Max.x - style.FramePadding.x - sliderSize.x,
                            itemRectCenterPos.y - sliderSize.y * 0.5f );
    const ImRect sliderRect( sliderPos, sliderPos + sliderSize );
    const auto   sliderRectCenter       = sliderRect.GetCenter();
    const auto   sliderRectRenderHeight = 3.0f;

    const auto isSliderHoverable = ImGui::ItemHoverable( sliderRect, itemId, imgui.LastItemData.InFlags );
    if ( !isSliderHoverable )
    {
        ImGui::ItemHoverable( itemRect, itemId, imgui.LastItemData.InFlags );
    }
    else if ( ImGui::IsMouseClicked( ImGuiMouseButton_Left, itemId ) )
    {
        ImGui::SetKeyOwner( ImGuiKey_MouseLeft, itemId );
        ImGui::SetActiveID( itemId, &window );
        ImGui::SetFocusID( itemId, &window );
        ImGui::FocusWindow( &window );
    }

    const auto isItemHovered = ImGui::IsItemHovered();
    animation.itemRectColor  = ImLerp( animation.itemRectColor,
                                      ( imgui.ActiveId == itemId ) ? style.Colors[ImGuiCol_FrameBgActive]
                                       : isItemHovered              ? style.Colors[ImGuiCol_FrameBgHovered]
                                                                    : style.Colors[ImGuiCol_FrameBg],
                                      imgui.IO.DeltaTime * 4.0f );

    ImRect grabRect;
    if ( ImGui::SliderBehavior(
             sliderRect, itemId, valueType, value, min, max, format, ImGuiSliderFlags_NoInput, &grabRect ) )
    {
        ImGui::MarkItemEdited( itemId );
    }
    const auto grabRectWidth  = grabRect.GetWidth();
    const auto grabRadius     = grabRectWidth * 0.5f;
    const auto grabMin        = grabRect.Min.x - sliderRect.Min.x;
    const auto grabMax        = sliderRect.Max.x - grabRectWidth - sliderRect.Min.x;
    animation.grabPos         = ImLerp( animation.grabPos, grabMin / grabMax, imgui.IO.DeltaTime * 12.0f );
    grabRect.Min.x            = ImLerp( sliderRect.Min.x, sliderRect.Max.x - grabRectWidth, animation.grabPos );
    grabRect.Max.x            = ImLerp( sliderRect.Min.x + grabRectWidth, sliderRect.Max.x, animation.grabPos );
    const auto grabRectCenter = grabRect.GetCenter();

    const ImVec2 textPos( itemRect.Min.x + style.FramePadding.x, itemRectCenterPos.y - textSize.y * 0.5f );

    const auto itemRectColor     = ImGui::GetColorU32( animation.itemRectColor );
    const auto textColor         = ImGui::GetColorU32( ImGuiCol_Text );
    const auto sliderRectColor   = ImGui::GetColorU32( ImGuiCol_TextDisabled );
    const auto innerGrabColor    = ImGui::GetColorU32( ImGuiCol_SliderGrabActive );
    const auto outerGrabColor    = ImGui::GetColorU32( ImGuiCol_SliderGrab );
    const auto filledSliderColor = innerGrabColor;

    float grabSize;
    if ( imgui.ActiveId == itemId )
    {
        animation.grabSize           = ImLerp( animation.grabSize, 0.5f, imgui.IO.DeltaTime * 16.0f );
        animation.grabNotActiveTimer = 0.0f;
        grabSize                     = animation.grabSize;
    }
    else if ( isSliderHoverable && imgui.HoveredIdNotActiveTimer > 0.3f )
    {
        animation.grabSize = ImLerp( animation.grabSize, 0.9f, imgui.IO.DeltaTime * 16.0f );
        grabSize           = animation.grabSize;
    }
    else
    {
        animation.grabSize           = ImLerp( animation.grabSize, grabSizeOriginal, imgui.IO.DeltaTime * 16.0f );
        animation.grabNotActiveTimer = ImLerp( animation.grabNotActiveTimer, 1.0f, imgui.IO.DeltaTime );
        grabSize                     = 0.6f * utilities::math::easeOutElastic( animation.grabNotActiveTimer );
    }

    auto& drawList = *window.DrawList;
    ImGui::RenderFrame( itemRect.Min, itemRect.Max, itemRectColor, true, style.FrameRounding );
    drawList.AddRectFilled( ImVec2( sliderRect.Min.x + grabRadius, sliderRectCenter.y - sliderRectRenderHeight * 0.5f ),
                            ImVec2( sliderRect.Max.x - grabRadius, sliderRectCenter.y + sliderRectRenderHeight * 0.5f ),
                            sliderRectColor,
                            12.0f );
    drawList.AddRectFilled( ImVec2( sliderRect.Min.x + grabRadius, sliderRectCenter.y - sliderRectRenderHeight * 0.5f ),
                            ImVec2( grabRect.Min.x + grabRadius, sliderRectCenter.y + sliderRectRenderHeight * 0.5f ),
                            filledSliderColor,
                            12.0f );
    drawList.AddCircleFilled( grabRectCenter, grabRadius * 1.4f, outerGrabColor );
    drawList.AddCircleFilled( grabRectCenter, grabRadius * grabSize, innerGrabColor );
    drawList.AddText( imgui.Font, imgui.FontSize, textPos, textColor, label );
    if ( ( isSliderHoverable && ( imgui.HoveredIdTimer > 0.6f ) ) || ( imgui.ActiveId == itemId ) ||
         ( ( imgui.LastActiveId == itemId ) && ( animation.grabNotActiveTimer < 0.5f ) ) )
    {
        char        valueBuf[64];
        const char* valueBufEnd =
            valueBuf + ImGui::DataTypeFormatString( valueBuf, IM_ARRAYSIZE( valueBuf ), valueType, value, format );
        const ImStrv valueText( valueBuf, valueBufEnd );
        const auto   valueTextSize = ImGui::CalcTextSize( valueText );
        const ImVec2 valueTextPos( grabRectCenter.x - valueTextSize.x * 0.5f,
                                   grabRectCenter.y - valueTextSize.y - style.WindowPadding.y - 10.0f );
        const ImRect valueTextRect( valueTextPos - style.WindowPadding,
                                    valueTextPos + valueTextSize + style.WindowPadding );
        ImGui::RenderFrame(
            valueTextRect.Min, valueTextRect.Max, ImGui::GetColorU32( ImGuiCol_PopupBg ), true, style.PopupRounding );
        drawList.AddText( imgui.Font, imgui.FontSize, valueTextPos, textColor, valueText );
    }
}

/// <summary>
/// Can't be used with ImGui::SameLine() as it use the whole column width.
/// </summary>
/// <param name="label"></param>
/// <param name="value"></param>
void slider( const ImStrv label, float& value, const float min, const float max, const char* const format ) noexcept
{
    return slider( label, ImGuiDataType_Float, &value, &min, &max, format );
}

/// <summary>
/// Can't be used with ImGui::SameLine() as it use the whole column width.
/// </summary>
/// <param name="label"></param>
/// <param name="value"></param>
void slider( const ImStrv label, int& value, const int min, const int max, const char* const format ) noexcept
{
    return slider( label, ImGuiDataType_S32, &value, &min, &max, format );
}

} // namespace orion

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Present( CONST LPDIRECT3DDEVICE9 direct3DDevice9,
                                                                         CONST LPRECT            sourceRect,
                                                                         CONST LPRECT            destRect,
                                                                         CONST HWND              destWindowOverride,
                                                                         CONST LPRGNDATA         dirtyRegion ) noexcept
{
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]]
    {
        ImGui_ImplDX9_Init( direct3DDevice9 );
    }
    ImGui_ImplDX9_NewFrame();
    Platform::newFrame();
    ImGui::NewFrame();
    ImGui::ShowDemoWindow();
    if ( ImGui::Begin( ImStrv( xorstr( "Custom" ) ) ) )
    {
        static std::array<bool, 3> b {};
        static int                 i {};
        static float               f {};
        beginCustomImguiWidgets();
        button( ImStrv( xorstr( "Crash Server" ) ), ImStrv( xorstr( "Execute Script" ) ) );
        button( ImStrv( xorstr( "Unlimited Health" ) ), b[0] );
        button( ImStrv( xorstr( "Unlimited Stamina" ) ), b[1] );
        button( ImStrv( xorstr( "Unlimited Armor" ) ), b[2] );
        slider( ImStrv( xorstr( "Minimum Damage" ) ), i, 0, 100, xorstr_( "%d" ) );
        slider( ImStrv( xorstr( "Maximum Range" ) ), f, 0.0f, 1000.0f, xorstr_( "%.3f" ) );
        endCustomImGuiWidgets();
    }
    ImGui::End();
    ImGui::EndFrame();
    if ( direct3DDevice9->BeginScene() == D3D_OK ) [[likely]]
    {
        ImGui::Render();
        ImGui_ImplDX9_RenderDrawData( ImGui::GetDrawData() );
        direct3DDevice9->EndScene();
    }
    return context.getRenderer().hooks->stdcall<1, HRESULT>(
        direct3DDevice9, sourceRect, destRect, destWindowOverride, dirtyRegion );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainPresent( IDXGISwapChain* CONST dXGISwapChain,
                                                                       CONST UINT            syncInterval,
                                                                       CONST UINT            flags ) noexcept
{
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]]
    {
        if ( Microsoft::WRL::ComPtr<ID3D11Device> d3D11Device;
             dXGISwapChain->GetDevice( IID_ID3D11Device, reinterpret_cast<void**>( d3D11Device.GetAddressOf() ) ) ==
             S_OK ) [[likely]]
        {
            Microsoft::WRL::ComPtr<ID3D11DeviceContext> d3D11DeviceContext;
            d3D11Device->GetImmediateContext( d3D11DeviceContext.GetAddressOf() );
            ImGui_ImplDX11_Init( d3D11Device.Get(), d3D11DeviceContext.Get() );
        }
    }
    ImGui_ImplDX11_NewFrame();
    Platform::newFrame();
    ImGui::NewFrame();
    ImGui::ShowDemoWindow();
    ImGui::Render();
    ImGui_ImplDX11_RenderDrawData( ImGui::GetDrawData() );
    return context.getRenderer().hooks->stdcall<0, HRESULT>( dXGISwapChain, syncInterval, flags );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainResizeBuffers( CONST IDXGISwapChain* CONST dXGISwapChain,
                                                                             CONST UINT                  bufferCount,
                                                                             CONST UINT                  width,
                                                                             CONST UINT                  height,
                                                                             CONST DXGI_FORMAT           newFormat,
                                                                             CONST UINT swapChainFlags ) noexcept
{
    return context.getRenderer().hooks->stdcall<1, HRESULT>(
        dXGISwapChain, bufferCount, width, height, newFormat, swapChainFlags );
}

void orion::core::Renderer::hookDirect3D9() noexcept
{
    const WindowClass windowClass;
    if ( !windowClass.isRegistered() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to register window class." ) );
        return;
    }
    const Window window( windowClass );
    if ( !window.isCreated() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create window." ) );
        return;
    }
    const utilities::RetSpoofInvoker<decltype( &Direct3DCreate9 )> direct3DCreate9 =
        LI_FUNC( Direct3DCreate9 )::in_safe( ldr->DllBase );
    if ( direct3DCreate9 == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find Direct3DCreate9." ) );
        return;
    }
    const auto direct3D9Gadget = utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldr ) );
    if ( direct3D9Gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for DirectX9." ) );
        return;
    }
    const Microsoft::WRL::ComPtr<IDirect3D9> direct3D9 = direct3DCreate9( direct3D9Gadget, D3D_SDK_VERSION );
    if ( direct3D9.Get() == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirect3D9." ) );
        return;
    }
    D3DPRESENT_PARAMETERS d3DPresentParameters {
        0,
        0,
        D3DFORMAT::D3DFMT_UNKNOWN,
        0,
        D3DMULTISAMPLE_TYPE::D3DMULTISAMPLE_NONE,
        0,
        D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD,
        window.handle,
        TRUE,
        FALSE,
        D3DFORMAT::D3DFMT_UNKNOWN,
        0,
        0,
        D3DPRESENT_INTERVAL_ONE,
    };
    Microsoft::WRL::ComPtr<IDirect3DDevice9> direct3DDevice9;
    if ( direct3D9->CreateDevice( D3DADAPTER_DEFAULT,
                                  D3DDEVTYPE::D3DDEVTYPE_NULLREF,
                                  window.handle,
                                  D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT,
                                  &d3DPresentParameters,
                                  direct3DDevice9.GetAddressOf() ) != D3D_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirect3DDevice9." ) );
        return;
    }
    if ( !hookDirect3D9RTSS() )
    {
        const auto virtualMethod = *reinterpret_cast<void***>( direct3DDevice9.Get() );
        hooks.emplace( direct3D9Gadget );
        if ( !hooks->hookAt( 0, virtualMethod[16], &direct3DDevice9Reset ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDirect3DDevice9::Reset." ) );
        }
        if ( !hooks->hookAt( 1, virtualMethod[17], &direct3DDevice9Present ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDirect3DDevice9::Present." ) );
        }
    }
}

bool orion::core::Renderer::hookDirect3D9RTSS() noexcept
{
#ifndef _WIN64
    const auto rttsEnumerator = LI_MOD( "rtsshooks.dll" )::enumerator();
#else
    const auto rttsEnumerator = LI_MOD( "rtsshooks64.dll" )::enumerator();
#endif
    if ( ( rttsEnumerator.value == rttsEnumerator.head ) || ( rttsEnumerator.value->DllBase == nullptr ) )
    {
        return false;
    }
    const auto rttsBytes = utilities::Memory::getModuleBytes( *rttsEnumerator.value );
#ifndef _WIN64
    const auto direct3DDevice9ResetDetour =
        utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 40 D8 45 13 00">::find( rttsBytes );
#else
    const auto direct3DDevice9ResetDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 F0 0F BA 2D E7 D9 45 03 00 48 8B DA">::
        find( rttsBytes );
#endif
    if ( direct3DDevice9ResetDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDirect3DDevice9::Reset (Detour)." ) );
        return false;
    }
#ifndef _WIN64
    const auto direct3DDevice9PresentDetour =
        utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 78 D6 45 13 00">::find( rttsBytes );
#else
    const auto direct3DDevice9PresentDetour =
        utilities::Memory::Pattern<"48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 55 41 56 48 "
                                   "83 EC 30 F0 0F BA 2D DD D9 45 03 00 49 8B E9 4D 8B E0 4C 8B EA">::find( rttsBytes );
#endif
    if ( direct3DDevice9PresentDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDirect3DDevice9::Present (Detour)." ) );
        return false;
    }
    const auto rttsGadget = utilities::Memory::Pattern<"FF 23">::find( rttsBytes );
    if ( rttsGadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDirect3DDevice9 (Detour)." ) );
        return false;
    }
    hooks.emplace( rttsGadget );
    if ( !hooks->hookAt( 0, direct3DDevice9ResetDetour, &direct3DDevice9Reset ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Reset (Detour)." ) );
    }
    if ( !hooks->hookAt( 1, direct3DDevice9PresentDetour, &direct3DDevice9Present ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Present (Detour)." ) );
    }
    return true;
}

void orion::core::Renderer::hookDirect3D11() noexcept
{
    const WindowClass windowClass;
    if ( !windowClass.isRegistered() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to register window class." ) );
        return;
    }
    const Window window( windowClass );
    if ( !window.isCreated() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create window." ) );
        return;
    }
    const auto d3D11CreateDeviceAndSwapChain = LI_FUNC( D3D11CreateDeviceAndSwapChain )::in_safe<
        utilities::RetSpoofInvoker<decltype( &D3D11CreateDeviceAndSwapChain )>>( ldr->DllBase );
    if ( d3D11CreateDeviceAndSwapChain == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find D3D11CreateDeviceAndSwapChain." ) );
        return;
    }
    const auto direct3D11 = utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldr ) );
    if ( direct3D11 == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for DirectX11." ) );
        return;
    }
    D3D_FEATURE_LEVEL          d3DFeatureLevel;
    const DXGI_SWAP_CHAIN_DESC dXGISwapChainDesc {
        DXGI_MODE_DESC {
            100,
            100,
            DXGI_RATIONAL { 60, 1 },
            DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM,
            DXGI_MODE_SCANLINE_ORDER::DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED,
            DXGI_MODE_SCALING::DXGI_MODE_SCALING_UNSPECIFIED,
        },
        DXGI_SAMPLE_DESC { 1, 0 },
        DXGI_USAGE_RENDER_TARGET_OUTPUT,
        1,
        window.handle,
        TRUE,
        DXGI_SWAP_EFFECT::DXGI_SWAP_EFFECT_DISCARD,
        DXGI_SWAP_CHAIN_FLAG::DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH,
    };
    Microsoft::WRL::ComPtr<IDXGISwapChain>      dXGISwapChain;
    Microsoft::WRL::ComPtr<ID3D11Device>        d3D11Device;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> d3D11DeviceContext;
    if ( d3D11CreateDeviceAndSwapChain( direct3D11,
                                        nullptr,
                                        D3D_DRIVER_TYPE::D3D_DRIVER_TYPE_HARDWARE,
                                        nullptr,
                                        0,
                                        std::array<D3D_FEATURE_LEVEL, 2> { D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_10_1,
                                                                           D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_11_0 }
                                            .data(),
                                        2,
                                        D3D11_SDK_VERSION,
                                        &dXGISwapChainDesc,
                                        dXGISwapChain.GetAddressOf(),
                                        d3D11Device.GetAddressOf(),
                                        &d3DFeatureLevel,
                                        d3D11DeviceContext.GetAddressOf() ) != S_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create ID3D11Device & IDXGISwapChain." ) );
        return;
    }
    if ( !hookDirect3D11RTTS() )
    {
        const auto virtualMethod = *reinterpret_cast<void***>( dXGISwapChain.Get() );
        hooks.emplace( direct3D11 );
        if ( !hooks->hookAt( 0, virtualMethod[8], &dXGISwapChainPresent ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDXGISwapChain::Present." ) );
        }
        if ( !hooks->hookAt( 1, virtualMethod[13], &dXGISwapChainResizeBuffers ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDXGISwapChain::ResizeBuffers." ) );
        }
    }
}

bool orion::core::Renderer::hookDirect3D11RTTS() noexcept
{
#ifndef _WIN64
    const auto rttsEnumerator = LI_MOD( "rtsshooks.dll" )::enumerator();
#else
    const auto rttsEnumerator = LI_MOD( "rtsshooks64.dll" )::enumerator();
#endif
    if ( ( rttsEnumerator.value == rttsEnumerator.head ) || ( rttsEnumerator.value->DllBase == nullptr ) )
    {
        return false;
    }
    const auto rttsBytes = utilities::Memory::getModuleBytes( *rttsEnumerator.value );
#ifndef _WIN64
    const auto dXGISwapChainPresentDetour = utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 38">::find( rttsBytes );
#else
    const auto dXGISwapChainPresentDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 48 83 EC 20 F0 0F BA 2D B1 D6">::
        find( rttsBytes );
#endif
    if ( dXGISwapChainPresentDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDXGISwapChain::Present (Detour)." ) );
        return false;
    }
#ifndef _WIN64
    const auto dXGISwapChainResizeBuffersDetour = utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 00">::find( rttsBytes );
#else
    const auto dXGISwapChainResizeBuffersDetour =
        utilities::Memory::Pattern<"48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 54 41 55 41 56 41 57 48 83 EC "
                                   "30 F0 0F BA 2D AF D3 45 03 00 4D 8B E1 4D 8B E8 4C 8B F2 4C 8B">::find( rttsBytes );
#endif
    if ( dXGISwapChainResizeBuffersDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDXGISwapChain::ResizeBuffers (Detour)." ) );
        return false;
    }
    const auto rttsGadget = utilities::Memory::Pattern<"FF 23">::find( rttsBytes );
    if ( rttsGadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDXGISwapChain (Detour)." ) );
        return false;
    }
    hooks.emplace( rttsGadget );
    if ( !hooks->hookAt( 0, dXGISwapChainPresentDetour, &dXGISwapChainPresent ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::Present (Detour)." ) );
    }
    if ( !hooks->hookAt( 1, dXGISwapChainResizeBuffersDetour, &dXGISwapChainResizeBuffers ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::ResizeBuffers (Detour)." ) );
    }
    return true;
}

void orion::core::to_json( nlohmann::json& json, const Renderer& renderer ) noexcept
{
    json = {
        { xorstr_( "ldr" ), reinterpret_cast<std::uintptr_t>( renderer.ldr ) },
        { xorstr_( "hooks" ), renderer.hooks },
    };
}

orion::core::Renderer::WindowClass::WindowClass() noexcept
    :  value {
          sizeof( value ),
          CS_HREDRAW | CS_VREDRAW,
          context.getNtdll().ntdllDefWindowProc_A,
          0,
          0,
          context.getKernel32().getModuleHandleA( context.getNtdll().gadgetAddress, nullptr ),
          nullptr,
          nullptr,
          nullptr,
          nullptr,
          xorstr_( "     " ),
          nullptr,
      },
      atom( context.getUser32().registerClassExA( context.getUser32().gadgetAddress, &value ) )
{
}

orion::core::Renderer::WindowClass::~WindowClass() noexcept
{
    if ( isRegistered() ) [[likely]]
    {
        if ( context.getUser32().unregisterClassA(
                 context.getUser32().gadgetAddress, reinterpret_cast<LPCSTR>( LOWORD( atom ) ), value.hInstance ) == 0 )
            [[unlikely]]
        {
            log::error( xorstr_( "Failed to unregister window class." ) );
        }
    }
}

bool orion::core::Renderer::WindowClass::isRegistered() const noexcept
{
    return ( atom != 0 );
}

orion::core::Renderer::Window::Window( const WindowClass& windowClass ) noexcept
    : handle { context.getUser32().createWindowExA( context.getUser32().gadgetAddress,
                                                    0,
                                                    reinterpret_cast<LPCSTR>( LOWORD( windowClass.atom ) ),
                                                    nullptr,
                                                    WS_OVERLAPPEDWINDOW,
                                                    0,
                                                    0,
                                                    100,
                                                    100,
                                                    nullptr,
                                                    nullptr,
                                                    windowClass.value.hInstance,
                                                    nullptr ) }
{
}

orion::core::Renderer::Window::~Window() noexcept
{
    if ( isCreated() ) [[likely]]
    {
        if ( context.getUser32().destroyWindow( context.getUser32().gadgetAddress, handle ) == 0 ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to destroy window." ) );
        }
    }
}

bool orion::core::Renderer::Window::isCreated() const noexcept
{
    return ( handle != nullptr );
}
