#pragma once

#include "source/hooks/ret_spoof.h"

namespace orion::hooks
{

template<std::size_t Size>
struct MinHook final
{
    MinHook( MinHook&& )                 = delete;
    MinHook& operator=( MinHook&& )      = delete;
    MinHook( const MinHook& )            = delete;
    MinHook& operator=( const MinHook& ) = delete;

    constexpr explicit MinHook( const std::uintptr_t gadget ) noexcept : gadget( gadget )
    {
    }

    constexpr void hookAt( const std::size_t index, void* const target, void* const function ) noexcept
    {
        [[maybe_unused]] const auto minhookCreated =
            ( MH_CreateHook( target, function, reinterpret_cast<void**>( &( originals[index] ) ) ) == MH_OK );
        assert( minhookCreated );
    }

#ifndef _WIN64
    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType cdeclcall( Args... args ) const noexcept
    {
        return RetSpoof::cdeclcall<ReturnType>( originals[Index], gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType stdcall( Args... args ) const noexcept
    {
        return RetSpoof::stdcall<ReturnType>( originals[Index], gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename Self, typename... Args>
    _NODISCARD constexpr ReturnType thiscall( Self self, Args... args ) const noexcept
    {
        return RetSpoof::thiscall<ReturnType>( self, originals[Index], gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename Self, typename Garbage, typename... Args>
    _NODISCARD constexpr ReturnType fastcall( Self self, Garbage garbage, Args... args ) const noexcept
    {
        return RetSpoof::fastcall<ReturnType>( self, garbage, originals[Index], gadget, args... );
    }
#else
    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType cdeclcall( Args... args ) const noexcept
    {
        const auto fn = reinterpret_cast<ReturnType ( * )( Args... )>( originals[Index] );
        return RetSpoof::call( fn, gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType stdcall( Args... args ) const noexcept
    {
        const auto fn = reinterpret_cast<ReturnType ( * )( Args... )>( originals[Index] );
        return RetSpoof::call( fn, gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType thiscall( Args... args ) const noexcept
    {
        const auto fn = reinterpret_cast<ReturnType ( * )( Args... )>( originals[Index] );
        return RetSpoof::call( fn, gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType fastcall( Args... args ) const noexcept
    {
        const auto fn = reinterpret_cast<ReturnType ( * )( Args... )>( originals[Index] );
        return RetSpoof::call( fn, gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType vectorcall( Args... args ) const noexcept
    {
        const auto fn = reinterpret_cast<ReturnType ( * )( Args... )>( originals[Index] );
        return RetSpoof::call( fn, gadget, args... );
    }
#endif

  private:
    std::uintptr_t                   gadget;
    std::array<std::uintptr_t, Size> originals;
};

} // namespace orion::hooks
