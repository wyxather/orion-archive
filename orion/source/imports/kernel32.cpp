#include "source/imports/kernel32.h"

orion::imports::Kernel32::Kernel32( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& kernel32 ) noexcept
{
    allocConsole             = LI_FUNC( AllocConsole )::in( kernel32.DllBase );
    closeHandle              = LI_FUNC( CloseHandle )::in( kernel32.DllBase );
    createThread             = LI_FUNC( CreateThread )::in( kernel32.DllBase );
    freeConsole              = LI_FUNC( FreeConsole )::in( kernel32.DllBase );
    freeLibraryAndExitThread = LI_FUNC( FreeLibraryAndExitThread )::in( kernel32.DllBase );
    getConsoleWindow         = LI_FUNC( GetConsoleWindow )::in( kernel32.DllBase );
    getCurrentProcessId      = LI_FUNC( GetCurrentProcessId )::in( kernel32.DllBase );
    getDateFormatA           = LI_FUNC( GetDateFormatA )::in( kernel32.DllBase );
    getLocalTime             = LI_FUNC( GetLocalTime )::in( kernel32.DllBase );
    getModuleHandleA         = LI_FUNC( GetModuleHandleA )::in( kernel32.DllBase );
    getStdHandle             = LI_FUNC( GetStdHandle )::in( kernel32.DllBase );
    getTimeFormatA           = LI_FUNC( GetTimeFormatA )::in( kernel32.DllBase );
    setConsoleCtrlHandler    = LI_FUNC( SetConsoleCtrlHandler )::in( kernel32.DllBase );
    setConsoleTextAttribute  = LI_FUNC( SetConsoleTextAttribute )::in( kernel32.DllBase );
    sleep                    = LI_FUNC( Sleep )::in( kernel32.DllBase );
    virtualQuery             = LI_FUNC( VirtualQuery )::in( kernel32.DllBase );
    writeConsoleA            = LI_FUNC( WriteConsoleA )::in( kernel32.DllBase );
}

void orion::imports::to_json( nlohmann::json& json, const Kernel32& kernel32 ) noexcept
{
    json = {
        { xorstr_( "allocConsole" ), kernel32.allocConsole },
        { xorstr_( "closeHandle" ), kernel32.closeHandle },
        { xorstr_( "createThread" ), kernel32.createThread },
        { xorstr_( "freeConsole" ), kernel32.freeConsole },
        { xorstr_( "freeLibraryAndExitThread" ), kernel32.freeLibraryAndExitThread },
        { xorstr_( "getConsoleWindow" ), kernel32.getConsoleWindow },
        { xorstr_( "getCurrentProcessId" ), kernel32.getCurrentProcessId },
        { xorstr_( "getDateFormatA" ), kernel32.getDateFormatA },
        { xorstr_( "getLocalTime" ), kernel32.getLocalTime },
        { xorstr_( "getModuleHandleA" ), kernel32.getModuleHandleA },
        { xorstr_( "getStdHandle" ), kernel32.getStdHandle },
        { xorstr_( "getTimeFormatA" ), kernel32.getTimeFormatA },
        { xorstr_( "setConsoleCtrlHandler" ), kernel32.setConsoleCtrlHandler },
        { xorstr_( "setConsoleTextAttribute" ), kernel32.setConsoleTextAttribute },
        { xorstr_( "sleep" ), kernel32.sleep },
        { xorstr_( "virtualQuery" ), kernel32.virtualQuery },
        { xorstr_( "writeConsoleA" ), kernel32.writeConsoleA },
    };
}
