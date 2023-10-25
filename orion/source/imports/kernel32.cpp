#include "source/imports/kernel32.h"

orion::imports::Kernel32::Kernel32( void* const kernel32 ) noexcept
{
    allocConsole             = LI_FUNC( AllocConsole )::in( kernel32 );
    closeHandle              = LI_FUNC( CloseHandle )::in( kernel32 );
    createThread             = LI_FUNC( CreateThread )::in( kernel32 );
    freeConsole              = LI_FUNC( FreeConsole )::in( kernel32 );
    freeLibraryAndExitThread = LI_FUNC( FreeLibraryAndExitThread )::in( kernel32 );
    getConsoleWindow         = LI_FUNC( GetConsoleWindow )::in( kernel32 );
    getCurrentProcessId      = LI_FUNC( GetCurrentProcessId )::in( kernel32 );
    getDateFormatA           = LI_FUNC( GetDateFormatA )::in( kernel32 );
    getLocalTime             = LI_FUNC( GetLocalTime )::in( kernel32 );
    getStdHandle             = LI_FUNC( GetStdHandle )::in( kernel32 );
    getTimeFormatA           = LI_FUNC( GetTimeFormatA )::in( kernel32 );
    setConsoleCtrlHandler    = LI_FUNC( SetConsoleCtrlHandler )::in( kernel32 );
    setConsoleTextAttribute  = LI_FUNC( SetConsoleTextAttribute )::in( kernel32 );
    sleep                    = LI_FUNC( Sleep )::in( kernel32 );
    writeConsoleA            = LI_FUNC( WriteConsoleA )::in( kernel32 );
}

void orion::imports::to_json( nlohmann::json& json, const Kernel32& kernel32 ) noexcept
{
    json = {
        { xorstr_( "allocConsole" ), reinterpret_cast<std::uintptr_t>( kernel32.allocConsole ) },
        { xorstr_( "closeHandle" ), reinterpret_cast<std::uintptr_t>( kernel32.closeHandle ) },
        { xorstr_( "createThread" ), reinterpret_cast<std::uintptr_t>( kernel32.createThread ) },
        { xorstr_( "freeConsole" ), reinterpret_cast<std::uintptr_t>( kernel32.freeConsole ) },
        { xorstr_( "freeLibraryAndExitThread" ),
          reinterpret_cast<std::uintptr_t>( kernel32.freeLibraryAndExitThread ) },
        { xorstr_( "getConsoleWindow" ), reinterpret_cast<std::uintptr_t>( kernel32.getConsoleWindow ) },
        { xorstr_( "getCurrentProcessId" ), reinterpret_cast<std::uintptr_t>( kernel32.getCurrentProcessId ) },
        { xorstr_( "getDateFormatA" ), reinterpret_cast<std::uintptr_t>( kernel32.getDateFormatA ) },
        { xorstr_( "getLocalTime" ), reinterpret_cast<std::uintptr_t>( kernel32.getLocalTime ) },
        { xorstr_( "getStdHandle" ), reinterpret_cast<std::uintptr_t>( kernel32.getStdHandle ) },
        { xorstr_( "getTimeFormatA" ), reinterpret_cast<std::uintptr_t>( kernel32.getTimeFormatA ) },
        { xorstr_( "setConsoleCtrlHandler" ), reinterpret_cast<std::uintptr_t>( kernel32.setConsoleCtrlHandler ) },
        { xorstr_( "setConsoleTextAttribute" ), reinterpret_cast<std::uintptr_t>( kernel32.setConsoleTextAttribute ) },
        { xorstr_( "sleep" ), reinterpret_cast<std::uintptr_t>( kernel32.sleep ) },
        { xorstr_( "writeConsoleA" ), reinterpret_cast<std::uintptr_t>( kernel32.writeConsoleA ) },
    };
}
