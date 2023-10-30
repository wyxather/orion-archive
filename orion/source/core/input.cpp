#include "source/context.h"

orion::core::Input::Input( const HMODULE orionHandle, const imports::User32& user32, const Platform& platform ) noexcept
{
    if ( handle = LI_MOD( "dinput8.dll" )::safe<decltype( handle )>(); handle != nullptr )
    {
        switch ( getUserInput( xorstr_( "DirectInput8" ), xorstr_( "Input" ) ) )
        {
        case IDYES:
            type = Type::DirectInput8;
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
    switch ( type )
    {
    case Type::DirectInput8:
        hookDirectInput8();
        break;
    default:
        break;
    }
}

void orion::core::Input::unhook() noexcept
{
}

int orion::core::Input::getUserInput( const char* text, const char* caption ) noexcept
{
    return context.getUser32().messageBoxA(
        context.getPlatform().getWindowHandle(), text, caption, MB_YESNOCANCEL | MB_ICONQUESTION );
}

void orion::core::Input::hookDirectInput8() noexcept
{
    const auto directInput8Create = LI_FUNC( DirectInput8Create )::in_safe<HRESULT( WINAPI* )(
        HINSTANCE, DWORD, REFIID, LPDIRECTINPUT8*, LPUNKNOWN )>( handle );
    if ( directInput8Create == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find DirectInput8Create." ) );
        return;
    }
    Microsoft::WRL::ComPtr<IDirectInput8> directInput8;
    if ( directInput8Create(
             context.getHandle(), DIRECTINPUT_VERSION, IID_IDirectInput8, directInput8.GetAddressOf(), nullptr ) !=
         DI_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirectInput8." ) );
        return;
    }
    Microsoft::WRL::ComPtr<IDirectInputDevice8> directInputDevice8;
    if ( directInput8->CreateDevice( GUID_SysMouse, directInputDevice8.GetAddressOf(), nullptr ) != DI_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirectInputDevice8." ) );
        return;
    }
}

void orion::core::to_json( nlohmann::json& json, const Input& input ) noexcept
{
    json = {
        { xorstr_( "type" ), input.type },
        { xorstr_( "handle" ), reinterpret_cast<std::uintptr_t>( input.handle ) },
    };
}
