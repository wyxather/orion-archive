#pragma once

namespace orion::imports
{

struct Kernel32 final
{
    Kernel32( Kernel32&& )                 = delete;
    Kernel32& operator=( Kernel32&& )      = delete;
    Kernel32( const Kernel32& )            = delete;
    Kernel32& operator=( const Kernel32& ) = delete;

    explicit Kernel32( void* kernel32 ) noexcept;

    decltype( &AllocConsole )            allocConsole            = nullptr;
    decltype( &FreeConsole )             freeConsole             = nullptr;
    decltype( &GetConsoleWindow )        getConsoleWindow        = nullptr;
    decltype( &GetDateFormatA )          getDateFormatA          = nullptr;
    decltype( &GetLocalTime )            getLocalTime            = nullptr;
    decltype( &GetStdHandle )            getStdHandle            = nullptr;
    decltype( &GetTimeFormatA )          getTimeFormatA          = nullptr;
    decltype( &SetConsoleCtrlHandler )   setConsoleCtrlHandler   = nullptr;
    decltype( &SetConsoleTextAttribute ) setConsoleTextAttribute = nullptr;
    decltype( &WriteConsoleA )           writeConsoleA           = nullptr;
};

} // namespace orion::imports
