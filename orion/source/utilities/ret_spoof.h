#pragma once

namespace orion::utilities
{

struct RetSpoofInvokerBase
{
    friend void to_json( nlohmann::json& json, const RetSpoofInvokerBase& retSpoofInvoker ) noexcept
    {
        json = {
            { xorstr_( "functionAddress" ), reinterpret_cast<std::uintptr_t>( retSpoofInvoker.functionAddress ) },
        };
    }

    constexpr explicit RetSpoofInvokerBase() noexcept                               = default;
    constexpr RetSpoofInvokerBase( RetSpoofInvokerBase&& ) noexcept                 = default;
    constexpr RetSpoofInvokerBase& operator=( RetSpoofInvokerBase&& ) noexcept      = default;
    constexpr RetSpoofInvokerBase( const RetSpoofInvokerBase& ) noexcept            = default;
    constexpr RetSpoofInvokerBase& operator=( const RetSpoofInvokerBase& ) noexcept = default;

    constexpr explicit( false ) RetSpoofInvokerBase( const void* const functionAddress ) noexcept
        : functionAddress { functionAddress }
    {
    }

  protected:
    const void* functionAddress = nullptr;
};

template<typename Fn>
struct RetSpoofInvoker final
{
};

#ifndef _WIN64

namespace detail
{

template<typename ReturnType, typename... Args>
_NODISCARD static __declspec( naked ) constexpr ReturnType
    __fastcall retSpoofFastCall( [[maybe_unused]] const void* const ecx,
                                 [[maybe_unused]] const void* const edx,
                                 [[maybe_unused]] const void* const functionAddress,
                                 [[maybe_unused]] const void* const retSpoofContext,
                                 [[maybe_unused]] const void* const gadgetAddress,
                                 [[maybe_unused]] Args... args ) noexcept
{
    __asm
    {
        mov eax, [esp+8] // load a pointer to retSpoofContext into eax.
        mov [eax], ebx // save ebx in retSpoofContext.ebxBackup.
        lea ebx, returnHereFromGadget // load the address of the label we want the gadget to jump to.
        mov [eax+4], ebx // save the address of 'returnHereFromGadget' in retSpoofContext.addressToJumpToInGadget.
        pop dword ptr [eax+8] // pop return address from stack into retSpoofContext.returnAddress.
        lea ebx, [eax+4] // load the address of retSpoofContext.addressToJumpToInGadget to ebx.
        ret 4   // pop 'functionAddress' from stack and jump to it, skip 'retSpoofContext' on stack; esp will point to the
            // spoofed return address (gadgetAddress).
    returnHereFromGadget:
        push [ebx+4] // restore retSpoofContext.returnAddress as a return address.
        mov ebx, [ebx-4] // restore ebx from retSpoofContext.ebxBackup. 
        ret
    }
}

template<typename ReturnType, typename... Args>
_NODISCARD static __declspec( naked ) constexpr ReturnType
    __cdecl retSpoofCdeclCall( [[maybe_unused]] const void* const functionAddress,
                               [[maybe_unused]] const void* const retSpoofContext,
                               [[maybe_unused]] const void* const gadgetAddress,
                               [[maybe_unused]] Args... args ) noexcept
{
    __asm
    {
        mov eax, [esp+8] // load a pointer to retSpoofContext into eax.
        mov [eax], ebx // save ebx in retSpoofContext.ebxBackup.
        lea ebx, returnHereFromGadget // load the address of the label we want the gadget to jump to.
        mov [eax+4], ebx // save the address of 'returnHereFromGadget' in retSpoofContext.addressToJumpToInGadget.
        pop dword ptr [eax+8] // pop return address from stack into retSpoofContext.returnAddress.
        lea ebx, [eax+4] // load the address of retSpoofContext.addressToJumpToInGadget to ebx.
        ret 4   // pop 'functionAddress' from stack and jump to it, skip 'retSpoofContext' on stack; esp will point to the
            // spoofed return address (gadgetAddress).
    returnHereFromGadget:
        sub esp, 12
        push [ebx+4] // restore retSpoofContext.returnAddress as a return address.
        mov ebx, [ebx-4] // restore ebx from retSpoofContext.ebxBackup.
        ret
    }
}

} // namespace detail

class RetSpoof final
{
    RetSpoof()                             = delete;
    ~RetSpoof()                            = delete;
    RetSpoof( RetSpoof&& )                 = delete;
    RetSpoof& operator=( RetSpoof&& )      = delete;
    RetSpoof( const RetSpoof& )            = delete;
    RetSpoof& operator=( const RetSpoof& ) = delete;

    struct Context final
    {
        Context( Context&& )                 = delete;
        Context& operator=( Context&& )      = delete;
        Context( const Context& )            = delete;
        Context& operator=( const Context& ) = delete;

        constexpr explicit Context() noexcept = default;

        const void* ebxBackup               = nullptr;
        const void* addressToJumpToInGadget = nullptr;
        const void* returnAddress           = nullptr;
    };

  public:
    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType fastcall( const void* const functionAddress,
                                                     const void* const gadgetAddress,
                                                     const void* const ecx,
                                                     const void* const edx,
                                                     Args... args ) noexcept
    {
        Context retSpoofContext;
        return detail::retSpoofFastCall<ReturnType, Args...>(
            ecx, edx, functionAddress, &retSpoofContext, gadgetAddress, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType thiscall( const void* const functionAddress,
                                                     const void* const gadgetAddress,
                                                     const void* const ecx,
                                                     Args... args ) noexcept
    {
        return fastcall<ReturnType, Args...>( functionAddress, gadgetAddress, ecx, nullptr, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType stdcall( const void* const functionAddress,
                                                    const void* const gadgetAddress,
                                                    Args... args ) noexcept
    {
        return thiscall<ReturnType, Args...>( functionAddress, gadgetAddress, nullptr, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType cdeclcall( const void* const functionAddress,
                                                      const void* const gadgetAddress,
                                                      Args... args ) noexcept
    {
        Context retSpoofContext;
        return detail::retSpoofCdeclCall<ReturnType, Args...>(
            functionAddress, &retSpoofContext, gadgetAddress, args... );
    }
};

template<typename ReturnType, typename Self, typename Garbage, typename... Args>
struct RetSpoofInvoker<ReturnType( __fastcall* )( Self, Garbage, Args... )> final : public RetSpoofInvokerBase
{
    using RetSpoofInvokerBase::RetSpoofInvokerBase;

    _NODISCARD constexpr ReturnType operator()( const void* const gadgetAddress,
                                                Self              self,
                                                Garbage           garbage,
                                                Args... args ) const noexcept
    {
        return RetSpoof::fastcall<ReturnType, Args...>( functionAddress, gadgetAddress, self, garbage, args... );
    }

    _NODISCARD constexpr ReturnType fastcall( const void* const gadgetAddress,
                                              Self              self,
                                              Garbage           garbage,
                                              Args... args ) const noexcept
    {
        return RetSpoof::fastcall<ReturnType, Args...>( functionAddress, gadgetAddress, self, garbage, args... );
    }
};

template<typename ReturnType, typename Self, typename... Args>
struct RetSpoofInvoker<ReturnType( __thiscall* )( Self, Args... )> final : public RetSpoofInvokerBase
{
    using RetSpoofInvokerBase::RetSpoofInvokerBase;

    _NODISCARD constexpr ReturnType operator()( const void* const gadgetAddress,
                                                Self              self,
                                                Args... args ) const noexcept
    {
        return RetSpoof::thiscall<ReturnType, Args...>( functionAddress, gadgetAddress, self, args... );
    }

    _NODISCARD constexpr ReturnType thiscall( const void* const gadgetAddress, Self self, Args... args ) const noexcept
    {
        return RetSpoof::thiscall<ReturnType, Args...>( functionAddress, gadgetAddress, self, args... );
    }
};

template<typename ReturnType, typename... Args>
struct RetSpoofInvoker<ReturnType( __stdcall* )( Args... )> final : public RetSpoofInvokerBase
{
    using RetSpoofInvokerBase::RetSpoofInvokerBase;

    _NODISCARD constexpr ReturnType operator()( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::stdcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }

    _NODISCARD constexpr ReturnType stdcall( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::stdcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }
};

template<typename ReturnType, typename... Args>
struct RetSpoofInvoker<ReturnType( __cdecl* )( Args... )> final : public RetSpoofInvokerBase
{
    using RetSpoofInvokerBase::RetSpoofInvokerBase;

    _NODISCARD constexpr ReturnType operator()( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::cdeclcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }

    _NODISCARD constexpr ReturnType cdeclcall( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::cdeclcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }
};

#else

namespace detail
{

EXTERN_C LPVOID retSpoof();

}

class RetSpoof final
{
    RetSpoof()                             = delete;
    ~RetSpoof()                            = delete;
    RetSpoof( RetSpoof&& )                 = delete;
    RetSpoof& operator=( RetSpoof&& )      = delete;
    RetSpoof( const RetSpoof& )            = delete;
    RetSpoof& operator=( const RetSpoof& ) = delete;

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType invoker( const void* const retSpoofAddress, Args... args ) noexcept
    {
        const auto retSpoof = static_cast<ReturnType ( * )( Args... )>( retSpoofAddress );
        return retSpoof( args... );
    }

    struct Context final
    {
        Context( Context&& )                 = delete;
        Context& operator=( Context&& )      = delete;
        Context( const Context& )            = delete;
        Context& operator=( const Context& ) = delete;

        constexpr explicit Context( const void* const gadgetAddress, const void* const functionAddress ) noexcept
            : gadgetAddress { gadgetAddress }, functionAddress { functionAddress }
        {
        }

        const void* gadgetAddress   = nullptr;
        const void* functionAddress = nullptr;
        const void* rbxBackup       = nullptr;
    };

    template<std::size_t Size, typename>
    struct ArgumentRemapper final
    {
        ArgumentRemapper()                                     = delete;
        ~ArgumentRemapper()                                    = delete;
        ArgumentRemapper( ArgumentRemapper&& )                 = delete;
        ArgumentRemapper& operator=( ArgumentRemapper&& )      = delete;
        ArgumentRemapper( const ArgumentRemapper& )            = delete;
        ArgumentRemapper& operator=( const ArgumentRemapper& ) = delete;

        template<typename ReturnType,
                 typename FirstArg,
                 typename SecondArg,
                 typename ThirdArg,
                 typename FourthArg,
                 typename... Args>
        _NODISCARD static constexpr ReturnType call( const void* const retSpoofAddress,
                                                     const Context&    retSpoofContext,
                                                     FirstArg          firstArg,
                                                     SecondArg         secondArg,
                                                     ThirdArg          thirdArg,
                                                     FourthArg         fourthArg,
                                                     Args... args ) noexcept
        {
            return invoker<ReturnType, FirstArg, SecondArg, ThirdArg, FourthArg, const Context&, const void*, Args...>(
                retSpoofAddress, firstArg, secondArg, thirdArg, fourthArg, retSpoofContext, nullptr, args... );
        }
    };

    template<std::size_t Size>
    struct ArgumentRemapper<Size, std::enable_if_t<Size <= 4>> final
    {
        ArgumentRemapper()                                     = delete;
        ~ArgumentRemapper()                                    = delete;
        ArgumentRemapper( ArgumentRemapper&& )                 = delete;
        ArgumentRemapper& operator=( ArgumentRemapper&& )      = delete;
        ArgumentRemapper( const ArgumentRemapper& )            = delete;
        ArgumentRemapper& operator=( const ArgumentRemapper& ) = delete;

        template<typename ReturnType,
                 typename FirstArg  = const void*,
                 typename SecondArg = const void*,
                 typename ThirdArg  = const void*,
                 typename FourthArg = const void*>
        _NODISCARD static constexpr ReturnType call( const void* const retSpoofAddress,
                                                     const Context&    retSpoofContext,
                                                     FirstArg          firstArg  = nullptr,
                                                     SecondArg         secondArg = nullptr,
                                                     ThirdArg          thirdArg  = nullptr,
                                                     FourthArg         fourthArg = nullptr ) noexcept
        {
            return invoker<ReturnType, FirstArg, SecondArg, ThirdArg, FourthArg, const Context&, const void*>(
                retSpoofAddress, firstArg, secondArg, thirdArg, fourthArg, retSpoofContext, nullptr );
        }
    };

  public:
    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType fastcall( const void* const functionAddress,
                                                     const void* const gadgetAddress,
                                                     Args... args ) noexcept
    {
        Context retSpoofContext { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            std::addressof( detail::retSpoof ), retSpoofContext, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType thiscall( const void* const functionAddress,
                                                     const void* const gadgetAddress,
                                                     Args... args ) noexcept
    {
        Context retSpoofContext { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            std::addressof( detail::retSpoof ), retSpoofContext, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType stdcall( const void* const functionAddress,
                                                    const void* const gadgetAddress,
                                                    Args... args ) noexcept
    {
        Context retSpoofContext { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            std::addressof( detail::retSpoof ), retSpoofContext, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType cdeclcall( const void* const functionAddress,
                                                      const void* const gadgetAddress,
                                                      Args... args ) noexcept
    {
        Context retSpoofContext { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            std::addressof( detail::retSpoof ), retSpoofContext, args... );
    }
};

template<typename ReturnType, typename... Args>
struct RetSpoofInvoker<ReturnType ( * )( Args... )> final : public RetSpoofInvokerBase
{
    using RetSpoofInvokerBase::RetSpoofInvokerBase;

    _NODISCARD constexpr ReturnType operator()( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::fastcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }

    _NODISCARD constexpr ReturnType fastcall( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::fastcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }

    _NODISCARD constexpr ReturnType thiscall( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::thiscall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }

    _NODISCARD constexpr ReturnType stdcall( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::stdcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }

    _NODISCARD constexpr ReturnType cdeclcall( const void* const gadgetAddress, Args... args ) const noexcept
    {
        return RetSpoof::cdeclcall<ReturnType, Args...>( functionAddress, gadgetAddress, args... );
    }
};

#endif

} // namespace orion::utilities
