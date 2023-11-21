#pragma once

#include "source/utilities/ret_spoof.h"

namespace orion::hooks
{

template<std::size_t Size>
struct MinHook final
{
    MinHook( MinHook&& )                 = delete;
    MinHook& operator=( MinHook&& )      = delete;
    MinHook( const MinHook& )            = delete;
    MinHook& operator=( const MinHook& ) = delete;

    constexpr explicit MinHook( const void* const gadget ) noexcept : gadget { gadget }
    {
    }

    _NODISCARD constexpr bool hookAt( const std::size_t index, void* const target, void* const function ) noexcept
    {
        return ( MH_CreateHook( target, function, reinterpret_cast<void**>( &originals[index] ) ) == MH_OK );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType cdeclcall( Args... args ) const noexcept
    {
        return utilities::RetSpoof::cdeclcall<ReturnType>( originals[Index], gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType stdcall( Args... args ) const noexcept
    {
        return utilities::RetSpoof::stdcall<ReturnType>( originals[Index], gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename Self, typename... Args>
    _NODISCARD constexpr ReturnType thiscall( Self self, Args... args ) const noexcept
    {
        return utilities::RetSpoof::thiscall<ReturnType>( originals[Index], gadget, self, args... );
    }

    template<std::size_t Index, typename ReturnType, typename Self, typename Garbage, typename... Args>
    _NODISCARD constexpr ReturnType fastcall( Self self, Garbage garbage, Args... args ) const noexcept
    {
        return utilities::RetSpoof::fastcall<ReturnType>( originals[Index], gadget, self, garbage, args... );
    }

  private:
    const void* const       gadget;
    std::array<void*, Size> originals;
};

} // namespace orion::hooks
