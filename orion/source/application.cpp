#include "source/application.h"

#include "source/context.h"

EXTERN_C BOOL WINAPI _CRT_INIT( HMODULE, DWORD, LPVOID );

void orion::Application::setup() noexcept
{
    [[maybe_unused]] const auto minhookInitialized = ( MH_Initialize() == MH_OK );
    assert( minhookInitialized );
    context.renderer->hook();
    context.input->hook();
    [[maybe_unused]] const auto minhookEnabled = ( MH_EnableHook( MH_ALL_HOOKS ) == MH_OK );
    assert( minhookEnabled );
}

void orion::Application::exit( const bool shouldUnload ) noexcept
{
    context.input->unhook();
    context.renderer->unhook();
    context.getPlatform().window.unhook();
    [[maybe_unused]] const auto minhookUninitialized = ( MH_Uninitialize() == MH_OK );
    assert( minhookUninitialized );
    if ( shouldUnload )
    {
        const auto& kernel32     = context.getKernel32();
        const auto  threadHandle = kernel32.createThread(
            nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>( Unload::unload ), nullptr, 0, nullptr );
        if ( threadHandle != nullptr )
        {
            kernel32.closeHandle( threadHandle );
        }
    }
    else
    {
        _CRT_INIT( context.getHandle(), DLL_PROCESS_DETACH, nullptr );
    }
}

void WINAPI orion::Unload::unload( LPVOID ) noexcept
{
    const auto& kernel32 = context.getKernel32();
    kernel32.sleep( 100 );
    const auto orionHandle              = context.getHandle();
    const auto freeLibraryAndExitThread = kernel32.freeLibraryAndExitThread;
    _CRT_INIT( orionHandle, DLL_PROCESS_DETACH, nullptr );
    freeLibraryAndExitThread( orionHandle, EXIT_SUCCESS );
}
