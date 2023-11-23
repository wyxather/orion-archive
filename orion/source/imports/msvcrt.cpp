#include "source/imports/msvcrt.h"

orion::imports::Msvcrt::Msvcrt( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& msvcrt ) noexcept
{
    _vsnprintf_s = LI_FUNC( _vsnprintf_s )::in<decltype( _vsnprintf_s )>( msvcrt.DllBase );
}

void orion::imports::to_json( nlohmann::json& json, const Msvcrt& msvcrt ) noexcept
{
    json = {
        { xorstr_( "_vsnprintf_s" ), msvcrt._vsnprintf_s },
    };
}
