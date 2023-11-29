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

    const void*                                        gadgetAddress        = nullptr;
    decltype( &DefWindowProcA )                        ntdllDefWindowProc_A = nullptr;
    utilities::RetSpoofInvoker<decltype( &HeapAlloc )> rtlAllocateHeap;
    utilities::RetSpoofInvoker<decltype( &HeapFree )>  rtlFreeHeap;
};

} // namespace orion::imports
