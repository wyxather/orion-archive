#include "source/imports/kernel32.h"

orion::imports::Kernel32::Kernel32( void* const kernel32 ) noexcept
{
    allocConsole             = LI_FUNC( AllocConsole )::in( kernel32 );
    closeHandle              = LI_FUNC( CloseHandle )::in( kernel32 );
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
    writeConsoleA            = LI_FUNC( WriteConsoleA )::in( kernel32 );
}
