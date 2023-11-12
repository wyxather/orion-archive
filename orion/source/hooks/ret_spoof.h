#pragma once

namespace orion::hooks
{

#ifndef _WIN64

namespace detail
{

template<typename ReturnType, typename... Args>
_NODISCARD static __declspec( naked ) constexpr ReturnType
    __fastcall invokeFastcall( [[maybe_unused]] const void* const ecx,
                               [[maybe_unused]] const void* const edx,
                               [[maybe_unused]] const void* const functionAddress,
                               [[maybe_unused]] const void* const retSpoofContext,
                               [[maybe_unused]] const void* const gadgetAddress,
                               [[maybe_unused]] Args... args ) noexcept
{
    __asm
    {
                mov eax, [esp+8] // load a pointer to context into eax.
                mov [eax], ebx // save ebx in retSpoofContext.ebxBackup.
                lea ebx, returnHereFromGadget // load the address of the label we want the gadget to jump to.
                mov [eax+4], ebx // save the address of 'returnHereFromGadget' in retSpoofContext.addressToJumpToInGadget.
                pop dword ptr [eax+8] // pop return address from stack into retSpoofContext.invokerReturnAddress.
                lea ebx, [eax+4] // load the address of retSpoofContext.addressToJumpToInGadget to ebx.
                ret 4   // pop 'functionAddress' from stack and jump to it, skip 'context' on stack; esp will point to the
      // spoofed return address (gadgetAddress).
             returnHereFromGadget:
                push [ebx+4] // restore retSpoofContext.invokerReturnAddress as a return address.
                mov ebx, [ebx-4] // restore ebx from retSpoofContext.ebxBackup. 
                ret
    }
}

template<typename ReturnType, typename... Args>
_NODISCARD static __declspec( naked ) constexpr ReturnType
    __cdecl invokeCdecl( [[maybe_unused]] const void* const functionAddress,
                         [[maybe_unused]] const void* const retSpoofContext,
                         [[maybe_unused]] const void* const gadgetAddress,
                         [[maybe_unused]] Args... args ) noexcept
{
    __asm
    {
                mov eax, [esp+8] // load a pointer to context into eax.
                mov [eax], ebx // save ebx in retSpoofContext.ebxBackup.
                lea ebx, returnHereFromGadget // load the address of the label we want the gadget to jump to.
                mov [eax+4], ebx // save the address of 'returnHereFromGadget' in retSpoofContext.addressToJumpToInGadget.
                pop dword ptr [eax+8] // pop return address from stack into retSpoofContext.invokerReturnAddress.
                lea ebx, [eax+4] // load the address of retSpoofContext.invokerReturnAddress to ebx.
                ret 4   // pop 'functionAddress' from stack and jump to it, skip 'context' on stack; esp will point to the
      // spoofed return address (gadgetAddress).
             returnHereFromGadget:
                sub esp, 12
                push [ebx+4] // restore retSpoofContext.invokerReturnAddress as a return address.
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

        const void* ebxBackup;
        const void* addressToJumpToInGadget;
        const void* invokerReturnAddress;
    };

  public:
    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType fastcall( const void* const functionAddress,
                                                     const void* const gadgetAddress,
                                                     const void* const ecx,
                                                     const void* const edx,
                                                     Args... args ) noexcept
    {
        Context context;
        return detail::invokeFastcall<ReturnType, Args...>(
            ecx, edx, functionAddress, &context, gadgetAddress, args... );
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
        Context context;
        return detail::invokeCdecl<ReturnType, Args...>( functionAddress, &context, gadgetAddress, args... );
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

        const void* const gadgetAddress;
        const void* const functionAddress;
        const void*       rbxBackup;
    };

    template<std::size_t size, typename>
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

    template<std::size_t size>
    struct ArgumentRemapper<size, std::enable_if_t<size <= 4>> final
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
        const Context context { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            &detail::retSpoof, context, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType thiscall( const void* const functionAddress,
                                                     const void* const gadgetAddress,
                                                     Args... args ) noexcept
    {
        const Context context { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            &detail::retSpoof, context, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType stdcall( const void* const functionAddress,
                                                    const void* const gadgetAddress,
                                                    Args... args ) noexcept
    {
        const Context context { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            &detail::retSpoof, context, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType cdeclcall( const void* const functionAddress,
                                                      const void* const gadgetAddress,
                                                      Args... args ) noexcept
    {
        const Context context { gadgetAddress, functionAddress };
        return ArgumentRemapper<sizeof...( Args ), void>::template call<ReturnType, Args...>(
            &detail::retSpoof, context, args... );
    }
};

#endif

} // namespace orion::hooks
