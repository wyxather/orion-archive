#pragma once

namespace orion::imports
{

struct Ntdll final
{
    friend void to_json( nlohmann::json& json, const Ntdll& ntdll ) noexcept;

    Ntdll( Ntdll&& )                 = delete;
    Ntdll& operator=( Ntdll&& )      = delete;
    Ntdll( const Ntdll& )            = delete;
    Ntdll& operator=( const Ntdll& ) = delete;

    explicit Ntdll( void* ntdll ) noexcept;

    LRESULT( WINAPI* ntdllDefWindowProc_A )( HWND window, UINT message, WPARAM wParam, LPARAM lParam ) = nullptr;
};

} // namespace orion::imports
