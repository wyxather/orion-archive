#include "source/context.h"

orion::core::Input::Input( [[maybe_unused]] const HMODULE          orionHandle,
                           [[maybe_unused]] const imports::User32& user32 ) noexcept
{
    const auto enumerator = LI_MOD( "dinput8.dll" )::enumerator();
    if ( ( enumerator.value != enumerator.head ) && ( enumerator.value->DllBase != nullptr ) )
    {
        switch ( getUserInput( xorstr_( "DirectInput8" ), xorstr_( "Input" ) ) )
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

void orion::core::Input::hook() noexcept
{
    if ( ldr == nullptr )
    {
        return;
    }
    if ( _wcsicmp( ldr->BaseDllName.Buffer, xorstr_( L"dinput8.dll" ) ) == 0 )
    {
        return hookDirectInput8();
    }
}

void orion::core::Input::unhook() noexcept
{
}

int orion::core::Input::getUserInput( const char* text, const char* caption ) noexcept
{
    return context.getUser32().messageBoxA(
        context.getUser32().gadgetAddress, nullptr, text, caption, MB_YESNOCANCEL | MB_ICONQUESTION );
}

HRESULT STDMETHODCALLTYPE orion::core::Input::directInputDevice8GetDeviceState(
    CONST LPDIRECTINPUTDEVICE8 directInputDevice8, CONST DWORD dataSizeInBytes, CONST LPVOID data ) noexcept
{
    const auto result = context.getInput().hooks->stdcall<0, HRESULT>( directInputDevice8, dataSizeInBytes, data );
    if ( result != DI_OK ) [[unlikely]]
    {
        return result;
    }
    if ( !context.getGui().isOpen() ) [[likely]]
    {
        return result;
    }

    switch ( dataSizeInBytes )
    {
    case sizeof( DIMOUSESTATE ):
    {
        DIMOUSESTATE& mouseState( *LPDIMOUSESTATE( data ) );

        const auto isButtonSwapped =
            ( context.getUser32().getSystemMetrics( context.getUser32().gadgetAddress, SM_SWAPBUTTON ) != 0 );

        for ( const auto [buttonIndex, isButtonDown] : mouseState.rgbButtons | std::views::enumerate )
        {
            if ( buttonIndex > ImGuiMouseButton_Right )
            {
                break;
            }

            ImGuiMouseButton mouseButton;
            if ( isButtonSwapped )
            {
                if ( buttonIndex == ImGuiMouseButton_Left )
                {
                    mouseButton = ImGuiMouseButton_Right;
                }
                else if ( buttonIndex == ImGuiMouseButton_Right )
                {
                    mouseButton = ImGuiMouseButton_Left;
                }
                else
                {
                    mouseButton = buttonIndex;
                }
            }
            else
            {
                mouseButton = buttonIndex;
            }

            const auto isMouseDown = ( isButtonDown & 0x80 );
            isButtonDown &= ~0x80;

            if ( isMouseDown )
            {
                if ( !ImGui::IsMouseDown( mouseButton ) )
                {
                    UINT   msg;
                    WPARAM wParam;
                    switch ( mouseButton )
                    {
                    case ImGuiMouseButton_Left:
                        msg    = WM_LBUTTONDOWN;
                        wParam = VK_LBUTTON;
                        break;
                    case ImGuiMouseButton_Right:
                        msg    = WM_RBUTTONDOWN;
                        wParam = VK_RBUTTON;
                        break;
                    default:
                        msg    = {};
                        wParam = {};
                        break;
                    }

                    POINT point;
                    std::ignore = context.getUser32().getCursorPos( context.getUser32().gadgetAddress, &point );

                    std::ignore = context.getUser32().postMessage( context.getUser32().gadgetAddress,
                                                                   context.getPlatform().getWindow().getHandle(),
                                                                   msg,
                                                                   wParam,
                                                                   MAKELPARAM( point.x, point.y ) );
                }
            }
            else
            {
                if ( ImGui::IsMouseDown( mouseButton ) && !ImGui::IsMouseReleased( mouseButton ) )
                {
                    UINT   msg;
                    WPARAM wParam;
                    switch ( mouseButton )
                    {
                    case ImGuiMouseButton_Left:
                        msg    = WM_LBUTTONUP;
                        wParam = VK_LBUTTON;
                        break;
                    case ImGuiMouseButton_Right:
                        msg    = WM_RBUTTONUP;
                        wParam = VK_RBUTTON;
                        break;
                    default:
                        msg    = {};
                        wParam = {};
                        break;
                    }

                    POINT point;
                    std::ignore = context.getUser32().getCursorPos( context.getUser32().gadgetAddress, &point );

                    std::ignore = context.getUser32().postMessage( context.getUser32().gadgetAddress,
                                                                   context.getPlatform().getWindow().getHandle(),
                                                                   msg,
                                                                   wParam,
                                                                   MAKELPARAM( point.x, point.y ) );
                }
            }
        }
        break;
    }
    case sizeof( DIMOUSESTATE2 ):
    {
        DIMOUSESTATE2& mouseState( *LPDIMOUSESTATE2( data ) );

        const auto isButtonSwapped =
            ( context.getUser32().getSystemMetrics( context.getUser32().gadgetAddress, SM_SWAPBUTTON ) != 0 );

        for ( const auto [buttonIndex, isButtonDown] : mouseState.rgbButtons | std::views::enumerate )
        {
            if ( buttonIndex > ImGuiMouseButton_Right )
            {
                break;
            }

            ImGuiMouseButton mouseButton;
            if ( isButtonSwapped )
            {
                if ( buttonIndex == ImGuiMouseButton_Left )
                {
                    mouseButton = ImGuiMouseButton_Right;
                }
                else if ( buttonIndex == ImGuiMouseButton_Right )
                {
                    mouseButton = ImGuiMouseButton_Left;
                }
                else
                {
                    mouseButton = buttonIndex;
                }
            }
            else
            {
                mouseButton = buttonIndex;
            }

            const auto isMouseDown = ( isButtonDown & 0x80 );
            isButtonDown &= ~0x80;

            if ( isMouseDown )
            {
                if ( !ImGui::IsMouseDown( mouseButton ) )
                {
                    UINT   msg;
                    WPARAM wParam;
                    switch ( mouseButton )
                    {
                    case ImGuiMouseButton_Left:
                        msg    = WM_LBUTTONDOWN;
                        wParam = VK_LBUTTON;
                        break;
                    case ImGuiMouseButton_Right:
                        msg    = WM_RBUTTONDOWN;
                        wParam = VK_RBUTTON;
                        break;
                    default:
                        msg    = {};
                        wParam = {};
                        break;
                    }

                    POINT point;
                    std::ignore = context.getUser32().getCursorPos( context.getUser32().gadgetAddress, &point );

                    std::ignore = context.getUser32().postMessage( context.getUser32().gadgetAddress,
                                                                   context.getPlatform().getWindow().getHandle(),
                                                                   msg,
                                                                   wParam,
                                                                   MAKELPARAM( point.x, point.y ) );
                }
            }
            else
            {
                if ( ImGui::IsMouseDown( mouseButton ) && !ImGui::IsMouseReleased( mouseButton ) )
                {
                    UINT   msg;
                    WPARAM wParam;
                    switch ( mouseButton )
                    {
                    case ImGuiMouseButton_Left:
                        msg    = WM_LBUTTONUP;
                        wParam = VK_LBUTTON;
                        break;
                    case ImGuiMouseButton_Right:
                        msg    = WM_RBUTTONUP;
                        wParam = VK_RBUTTON;
                        break;
                    default:
                        msg    = {};
                        wParam = {};
                        break;
                    }

                    POINT point;
                    std::ignore = context.getUser32().getCursorPos( context.getUser32().gadgetAddress, &point );

                    std::ignore = context.getUser32().postMessage( context.getUser32().gadgetAddress,
                                                                   context.getPlatform().getWindow().getHandle(),
                                                                   msg,
                                                                   wParam,
                                                                   MAKELPARAM( point.x, point.y ) );
                }
            }
        }
        break;
    }
    default:
        break;
    }

    return result;
}

HRESULT STDMETHODCALLTYPE
    orion::core::Input::directInputDevice8GetDeviceData( CONST LPDIRECTINPUTDEVICE8 directInputDevice8,
                                                         CONST DWORD                dataSizeInBytes,
                                                         CONST LPDIDEVICEOBJECTDATA data,
                                                         CONST LPDWORD              dataCount,
                                                         CONST DWORD                dataFlags ) noexcept
{
    return context.getInput().hooks->stdcall<1, HRESULT>(
        directInputDevice8, dataSizeInBytes, data, dataCount, dataFlags );
}

void orion::core::Input::hookDirectInput8() noexcept
{
    const auto gadget = utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldr ) );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for DirectInput8." ) );
        return;
    }
    const auto directInput8Create = LI_FUNC(
        DirectInput8Create )::in_safe<utilities::RetSpoofInvoker<decltype( &DirectInput8Create )>>( ldr->DllBase );
    if ( directInput8Create == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find DirectInput8Create." ) );
        return;
    }
    IDirectInput8* directInput8 {};
    if ( directInput8Create( gadget,
                             context.getHandle(),
                             DIRECTINPUT_VERSION,
                             IID_IDirectInput8,
                             (LPVOID*)( &directInput8 ),
                             nullptr ) != DI_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirectInput8." ) );
        return;
    }
    IDirectInputDevice8* directInputDevice8;
    if ( directInput8->CreateDevice( GUID_SysMouse, &directInputDevice8, nullptr ) != DI_OK ) [[unlikely]]
    {
        directInput8->Release();
        log::error( xorstr_( "Failed to create IDirectInputDevice8." ) );
        return;
    }
    const auto virtualMethod = *(void***)( directInputDevice8 );
    hooks.emplace( gadget );
    if ( !hooks->hookAt( 0, virtualMethod[9], &directInputDevice8GetDeviceState ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirectInputDevice8::GetDeviceState." ) );
    }
    if ( !hooks->hookAt( 1, virtualMethod[10], &directInputDevice8GetDeviceData ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirectInputDevice8::GetDeviceData." ) );
    }
    directInputDevice8->Release();
    directInput8->Release();
}

void orion::core::to_json( nlohmann::json& json, const Input& input ) noexcept
{
    json = {
        { xorstr_( "ldr" ), ( std::uintptr_t )( input.ldr ) },
        { xorstr_( "hooks" ), input.hooks },
    };
}
