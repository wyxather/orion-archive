#include "source/imports/msvcrt.h"

orion::imports::Msvcrt::Msvcrt( void* const msvcrt ) noexcept
{
    _vsnprintf_s = LI_FUNC( _vsnprintf_s )::in<decltype( _vsnprintf_s )>( msvcrt );
}

void orion::imports::to_json( nlohmann::json& json, const Msvcrt& msvcrt ) noexcept
{
    json = {
        { xorstr_( "_vsnprintf_s" ), reinterpret_cast<std::uintptr_t>( msvcrt._vsnprintf_s ) },
    };
}
