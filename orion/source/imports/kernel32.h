#pragma once

namespace orion::imports
{

struct Kernel32 final
{
    friend void to_json( nlohmann::json& json, const Kernel32& kernel32 ) noexcept;

    Kernel32( Kernel32&& )                 = delete;
    Kernel32& operator=( Kernel32&& )      = delete;
    Kernel32( const Kernel32& )            = delete;
    Kernel32& operator=( const Kernel32& ) = delete;

    explicit Kernel32( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& kernel32 ) noexcept;

    utilities::RetSpoofInvoker<decltype( &AllocConsole )>             allocConsole;
    utilities::RetSpoofInvoker<decltype( &CloseHandle )>              closeHandle;
    utilities::RetSpoofInvoker<decltype( &CreateThread )>             createThread;
    utilities::RetSpoofInvoker<decltype( &FreeConsole )>              freeConsole;
    utilities::RetSpoofInvoker<decltype( &FreeLibraryAndExitThread )> freeLibraryAndExitThread;
    utilities::RetSpoofInvoker<decltype( &GetConsoleWindow )>         getConsoleWindow;
    utilities::RetSpoofInvoker<decltype( &GetCurrentProcessId )>      getCurrentProcessId;
    utilities::RetSpoofInvoker<decltype( &GetDateFormatA )>           getDateFormatA;
    utilities::RetSpoofInvoker<decltype( &GetLocalTime )>             getLocalTime;
    utilities::RetSpoofInvoker<decltype( &GetModuleHandleA )>         getModuleHandleA;
    utilities::RetSpoofInvoker<decltype( &GetStdHandle )>             getStdHandle;
    utilities::RetSpoofInvoker<decltype( &GetTimeFormatA )>           getTimeFormatA;
    utilities::RetSpoofInvoker<decltype( &SetConsoleCtrlHandler )>    setConsoleCtrlHandler;
    utilities::RetSpoofInvoker<decltype( &SetConsoleTextAttribute )>  setConsoleTextAttribute;
    utilities::RetSpoofInvoker<decltype( &Sleep )>                    sleep;
    utilities::RetSpoofInvoker<decltype( &VirtualQuery )>             virtualQuery;
    utilities::RetSpoofInvoker<decltype( &WriteConsoleA )>            writeConsoleA;
};

} // namespace orion::imports
