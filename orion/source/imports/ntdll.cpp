#include "source/imports/ntdll.h"

orion::imports::Ntdll::Ntdll( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& ntdll ) noexcept
{
    gadgetAddress        = utilities::Memory::Pattern<"FF 23">::find( ntdll );
    ntdllDefWindowProc_A = LI_FUNC( ntdllDefWindowProc_A )::in<decltype( ntdllDefWindowProc_A )>( ntdll.DllBase );
    rtlAllocateHeap      = LI_FUNC( rtlAllocateHeap )::in( ntdll.DllBase );
    rtlFreeHeap          = LI_FUNC( rtlFreeHeap )::in( ntdll.DllBase );
}

void orion::imports::to_json( nlohmann::json& json, const Ntdll& ntdll ) noexcept
{
    json = {
        { xorstr_( "gadgetAddress" ), reinterpret_cast<std::uintptr_t>( ntdll.gadgetAddress ) },
        { xorstr_( "ntdllDefWindowProc_A" ), reinterpret_cast<std::uintptr_t>( ntdll.ntdllDefWindowProc_A ) },
        { xorstr_( "rtlAllocateHeap" ), ntdll.rtlAllocateHeap },
        { xorstr_( "rtlFreeHeap" ), ntdll.rtlFreeHeap },
    };
}
