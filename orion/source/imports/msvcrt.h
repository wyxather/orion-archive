#pragma once

namespace orion::imports
{

struct Msvcrt final
{
    friend void to_json( nlohmann::json& json, const Msvcrt& msvcrt ) noexcept;

    Msvcrt( Msvcrt&& )                 = delete;
    Msvcrt& operator=( Msvcrt&& )      = delete;
    Msvcrt( const Msvcrt& )            = delete;
    Msvcrt& operator=( const Msvcrt& ) = delete;

    explicit Msvcrt( void* msvcrt ) noexcept;

    int( __cdecl* _vsnprintf_s )(
        char* buffer, std::size_t sizeOfBuffer, std::size_t count, const char* format, va_list argptr ) = nullptr;
};

} // namespace orion::imports
