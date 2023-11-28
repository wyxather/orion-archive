#pragma once

namespace orion::utilities
{

template<std::size_t Size>
struct MinHook final
{
    friend constexpr void to_json( nlohmann::json& json, const MinHook<Size>& minhook ) noexcept
    {
        json = {
            { xorstr_( "gadget" ), reinterpret_cast<std::uintptr_t>( minhook.gadget ) },
            { xorstr_( "originals" ),
              *reinterpret_cast<const std::array<std::uintptr_t, Size>*>( &minhook.originals ) },
        };
    }

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
    _NODISCARD constexpr ReturnType fastcall( Args... args ) const noexcept
    {
        utilities::RetSpoofInvoker<ReturnType( __fastcall* )( Args... )> invoker { originals[Index] };
        return invoker( gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType thiscall( Args... args ) const noexcept
    {
        utilities::RetSpoofInvoker<ReturnType( __thiscall* )( Args... )> invoker { originals[Index] };
        return invoker( gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType stdcall( Args... args ) const noexcept
    {
        utilities::RetSpoofInvoker<ReturnType( __stdcall* )( Args... )> invoker { originals[Index] };
        return invoker( gadget, args... );
    }

    template<std::size_t Index, typename ReturnType, typename... Args>
    _NODISCARD constexpr ReturnType cdeclcall( Args... args ) const noexcept
    {
        utilities::RetSpoofInvoker<ReturnType( __cdecl* )( Args... )> invoker { originals[Index] };
        return invoker( gadget, args... );
    }

  private:
    const void* const       gadget;
    std::array<void*, Size> originals {};
};

} // namespace orion::utilities
