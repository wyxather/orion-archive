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
            ldrDataTableEntry = enumerator.value;
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
    if ( ldrDataTableEntry == nullptr )
    {
        return;
    }
    if ( _wcsicmp( ldrDataTableEntry->BaseDllName.Buffer, xorstr_( L"dinput8.dll" ) ) == 0 )
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
    return context.getInput().hooks->stdcall<0, HRESULT>( directInputDevice8, dataSizeInBytes, data );
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
    const auto gadget =
        utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldrDataTableEntry ) );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for DirectInput8." ) );
        return;
    }
    const auto directInput8Create =
        LI_FUNC( DirectInput8Create )::in_safe<utilities::RetSpoofInvoker<decltype( &DirectInput8Create )>>(
            ldrDataTableEntry->DllBase );
    if ( directInput8Create == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find DirectInput8Create." ) );
        return;
    }
    Microsoft::WRL::ComPtr<IDirectInput8> directInput8;
    if ( directInput8Create( gadget,
                             context.getHandle(),
                             DIRECTINPUT_VERSION,
                             IID_IDirectInput8,
                             reinterpret_cast<LPVOID*>( directInput8.GetAddressOf() ),
                             nullptr ) != DI_OK ) [[unlikely]]
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
    const auto virtualMethod = *reinterpret_cast<void***>( directInputDevice8.Get() );
    hooks.emplace( gadget );
    if ( !hooks->hookAt( 0, virtualMethod[9], &directInputDevice8GetDeviceState ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirectInputDevice8::GetDeviceState." ) );
    }
    if ( !hooks->hookAt( 1, virtualMethod[10], &directInputDevice8GetDeviceData ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirectInputDevice8::GetDeviceData." ) );
    }
}

void orion::core::to_json( nlohmann::json& json, const Input& input ) noexcept
{
    json = {
        { xorstr_( "ldrDataTableEntry" ), reinterpret_cast<std::uintptr_t>( input.ldrDataTableEntry ) },
        { xorstr_( "hooks" ), input.hooks },
    };
}
