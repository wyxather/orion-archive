#include "source/dllmain.h"

#include "source/context.h"

EXTERN_C BOOL WINAPI _CRT_INIT( HMODULE, DWORD, LPVOID );

BOOL APIENTRY DllEntryPoint( const HMODULE moduleHandle, const DWORD reason, const LPVOID reserved )
{
    const auto crtInitResult = _CRT_INIT( moduleHandle, reason, reserved );
    if ( reason == DLL_PROCESS_ATTACH )
    {
        orion::Main::onAttach( moduleHandle );
    }
    return crtInitResult;
}

void orion::Main::onAttach( const HMODULE moduleHandle ) noexcept
{
    context.handle.emplace( moduleHandle );
    context.kernel32.emplace( LI_MOD( "kernel32.dll" )::get() );
    context.msvcrt.emplace( LI_MOD( "msvcrt.dll" )::get() );
    context.ntdll.emplace( LI_MOD( "ntdll.dll" )::get() );
    context.user32.emplace( LI_MOD( "user32.dll" )::get() );
    context.console.emplace( context.getKernel32(), context.getMsvcrt(), context.getUser32() );
    context.platform.emplace( context.getKernel32(), context.getUser32() );
    context.renderer.emplace( context.getKernel32(), context.getNtdll(), context.getUser32(), context.getPlatform() );
    context.input.emplace( context.getHandle(), context.getUser32(), context.getPlatform() );
    context.platform->window.hook();
}
