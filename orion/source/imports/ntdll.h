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

    explicit Ntdll( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& ntdll ) noexcept;

    const void* gadgetAddress                                                                          = nullptr;
    LRESULT( WINAPI* ntdllDefWindowProc_A )( HWND window, UINT message, WPARAM wParam, LPARAM lParam ) = nullptr;
};

} // namespace orion::imports
