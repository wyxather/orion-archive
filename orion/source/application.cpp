#include "source/application.h"

#include "source/context.h"

EXTERN_C BOOL WINAPI _CRT_INIT( HMODULE, DWORD, LPVOID );

void orion::Application::exit() noexcept
{
    context.getPlatform().window.unhook( context.getUser32() );

    const auto& kernel32     = context.getKernel32();
    const auto  threadHandle = kernel32.createThread(
        nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>( Unload::unload ), nullptr, 0, nullptr );
    if ( threadHandle != nullptr )
    {
        kernel32.closeHandle( threadHandle );
    }
}

void WINAPI orion::Application::Unload::unload( LPVOID ) noexcept
{
    const auto& kernel32 = context.getKernel32();
    kernel32.sleep( 100 );
    const auto orionHandle              = context.getHandle();
    const auto freeLibraryAndExitThread = kernel32.freeLibraryAndExitThread;
    _CRT_INIT( orionHandle, DLL_PROCESS_DETACH, nullptr );
    freeLibraryAndExitThread( orionHandle, EXIT_SUCCESS );
}