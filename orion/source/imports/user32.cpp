#include "source/imports/user32.h"

orion::imports::User32::User32( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& user32 ) noexcept
{
    gadgetAddress            = utilities::Memory::Pattern<"FF 23">::find( user32 );
    callWindowProc           = LI_FUNC( CallWindowProc )::in( user32.DllBase );
    createWindowExA          = LI_FUNC( CreateWindowExA )::in( user32.DllBase );
    destroyWindow            = LI_FUNC( DestroyWindow )::in( user32.DllBase );
    enumWindows              = LI_FUNC( EnumWindows )::in( user32.DllBase );
    getClassNameA            = LI_FUNC( GetClassNameA )::in( user32.DllBase );
    getWindowLongPtr         = LI_FUNC( GetWindowLongPtr )::in( user32.DllBase );
    getWindowTextA           = LI_FUNC( GetWindowTextA )::in( user32.DllBase );
    getWindowTextLengthA     = LI_FUNC( GetWindowTextLengthA )::in( user32.DllBase );
    getWindowThreadProcessId = LI_FUNC( GetWindowThreadProcessId )::in( user32.DllBase );
    isWindowVisible          = LI_FUNC( IsWindowVisible )::in( user32.DllBase );
    messageBoxA              = LI_FUNC( MessageBoxA )::in( user32.DllBase );
    registerClassExA         = LI_FUNC( RegisterClassExA )::in( user32.DllBase );
    setWindowLongPtr         = LI_FUNC( SetWindowLongPtr )::in( user32.DllBase );
    unregisterClassA         = LI_FUNC( UnregisterClassA )::in( user32.DllBase );
}

void orion::imports::to_json( nlohmann::json& json, const User32& user32 ) noexcept
{
    json = {
        { xorstr_( "gadgetAddress" ), reinterpret_cast<std::uintptr_t>( user32.gadgetAddress ) },
        { xorstr_( "callWindowProc" ), user32.callWindowProc },
        { xorstr_( "createWindowExA" ), user32.createWindowExA },
        { xorstr_( "destroyWindow" ), user32.destroyWindow },
        { xorstr_( "enumWindows" ), user32.enumWindows },
        { xorstr_( "getClassNameA" ), user32.getClassNameA },
        { xorstr_( "getWindowLongPtr" ), user32.getWindowLongPtr },
        { xorstr_( "getWindowTextA" ), user32.getWindowTextA },
        { xorstr_( "getWindowTextLengthA" ), user32.getWindowTextLengthA },
        { xorstr_( "getWindowThreadProcessId" ), user32.getWindowThreadProcessId },
        { xorstr_( "isWindowVisible" ), user32.isWindowVisible },
        { xorstr_( "messageBoxA" ), user32.messageBoxA },
        { xorstr_( "registerClassExA" ), user32.registerClassExA },
        { xorstr_( "setWindowLongPtr" ), user32.setWindowLongPtr },
        { xorstr_( "unregisterClassA" ), user32.unregisterClassA },
    };
}
