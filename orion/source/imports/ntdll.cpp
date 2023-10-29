#include "source/imports/ntdll.h"

orion::imports::Ntdll::Ntdll( void* ntdll ) noexcept
{
    ntdllDefWindowProc_A = LI_FUNC( ntdllDefWindowProc_A )::in<decltype( ntdllDefWindowProc_A )>( ntdll );
}

void orion::imports::to_json( nlohmann::json& json, const Ntdll& ntdll ) noexcept
{
    json = {
        { xorstr_( "ntdllDefWindowProc_A" ), reinterpret_cast<std::uintptr_t>( ntdll.ntdllDefWindowProc_A ) },
    };
}
