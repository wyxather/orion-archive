#pragma once

BOOL APIENTRY DllEntryPoint( HMODULE moduleHandle, DWORD reasonForCall, LPVOID reserved );

namespace orion
{

class Main final
{
    friend BOOL APIENTRY ::DllEntryPoint( HMODULE, DWORD, LPVOID );

    Main()                         = delete;
    ~Main()                        = delete;
    Main( Main&& )                 = delete;
    Main& operator=( Main&& )      = delete;
    Main( const Main& )            = delete;
    Main& operator=( const Main& ) = delete;

    static void onAttach( HMODULE moduleHandle ) noexcept;
};

} // namespace orion
