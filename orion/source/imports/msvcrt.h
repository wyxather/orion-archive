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

    explicit Msvcrt( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& msvcrt ) noexcept;

    utilities::RetSpoofInvoker<int( __cdecl* )(
        char* buffer, std::size_t sizeOfBuffer, std::size_t count, const char* format, va_list argPtr )>
        _vsnprintf_s;
};

} // namespace orion::imports
