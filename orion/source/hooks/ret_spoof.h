#pragma once

namespace orion::hooks
{

#ifndef _WIN64

namespace detail
{

struct RetSpoofContext final
{
    RetSpoofContext( RetSpoofContext&& )                 = delete;
    RetSpoofContext& operator=( RetSpoofContext&& )      = delete;
    RetSpoofContext( const RetSpoofContext& )            = delete;
    RetSpoofContext& operator=( const RetSpoofContext& ) = delete;

    constexpr explicit RetSpoofContext() noexcept = default;

    std::uintptr_t ebxBackup;
    std::uintptr_t addressToJumpToInGadget;
    std::uintptr_t invokerReturnAddress;
};

template<typename ReturnType, typename... Args>
_NODISCARD static __declspec( naked ) constexpr ReturnType
    __fastcall invokeFastcall( const std::uintptr_t   ecx,
                               const std::uintptr_t   edx,
                               const std::uintptr_t   functionAddress,
                               const RetSpoofContext& retSpoofContext,
                               const std::uintptr_t   gadgetAddress,
                               Args... args ) noexcept
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
_NODISCARD static __declspec( naked ) constexpr ReturnType __cdecl invokeCdecl( const std::uintptr_t   functionAddress,
                                                                                const RetSpoofContext& retSpoofContext,
                                                                                const std::uintptr_t   gadgetAddress,
                                                                                Args... args ) noexcept
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

  public:
    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType fastcall( const std::uintptr_t ecx,
                                                     const std::uintptr_t edx,
                                                     const std::uintptr_t functionAddress,
                                                     const std::uintptr_t gadgetAddress,
                                                     Args... args ) noexcept
    {
        detail::RetSpoofContext context;
        return detail::invokeFastcall<ReturnType, Args...>(
            ecx, edx, functionAddress, context, gadgetAddress, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType thiscall( const std::uintptr_t ecx,
                                                     const std::uintptr_t functionAddress,
                                                     const std::uintptr_t gadgetAddress,
                                                     Args... args ) noexcept
    {
        return fastcall<ReturnType, Args...>( ecx, 0, functionAddress, gadgetAddress, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType stdcall( const std::uintptr_t functionAddress,
                                                    const std::uintptr_t gadgetAddress,
                                                    Args... args ) noexcept
    {
        return thiscall<ReturnType, Args...>( 0, functionAddress, gadgetAddress, args... );
    }

    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType cdeclcall( const std::uintptr_t functionAddress,
                                                      const std::uintptr_t gadgetAddress,
                                                      Args... args ) noexcept
    {
        detail::RetSpoofContext context;
        return detail::invokeCdecl<ReturnType, Args...>( functionAddress, context, gadgetAddress, args... );
    }
};

#else

namespace detail
{

EXTERN_C LPVOID __cdecl retSpoof();

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
    _NODISCARD static constexpr ReturnType invoker( const std::uintptr_t retSpoofAddress, Args... args ) noexcept
    {
        using Fn            = ReturnType( __cdecl* )( Args... );
        const auto retSpoof = reinterpret_cast<Fn>( retSpoofAddress );
        return retSpoof( args... );
    }

    struct Context final
    {
        Context( Context&& )                 = delete;
        Context& operator=( Context&& )      = delete;
        Context( const Context& )            = delete;
        Context& operator=( const Context& ) = delete;

        constexpr explicit Context( const std::uintptr_t gadgetAddress, const std::uintptr_t functionAddress ) noexcept
            : gadgetAddress { gadgetAddress }, functionAddress { functionAddress }
        {
        }

        const std::uintptr_t gadgetAddress;
        const std::uintptr_t functionAddress;
        std::uintptr_t       rbxBackup;
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
        _NODISCARD static constexpr ReturnType call( const std::uintptr_t retSpoofAddress,
                                                     const Context&       context,
                                                     FirstArg             firstArg,
                                                     SecondArg            secondArg,
                                                     ThirdArg             thirdArg,
                                                     FourthArg            fourthArg,
                                                     Args... args ) noexcept
        {
            return invoker<ReturnType,
                           FirstArg,
                           SecondArg,
                           ThirdArg,
                           FourthArg,
                           const Context&,
                           const std::uintptr_t,
                           Args...>( retSpoofAddress, firstArg, secondArg, thirdArg, fourthArg, context, 0, args... );
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
                 typename FirstArg  = const std::uintptr_t,
                 typename SecondArg = const std::uintptr_t,
                 typename ThirdArg  = const std::uintptr_t,
                 typename FourthArg = const std::uintptr_t>
        _NODISCARD static constexpr ReturnType call( const std::uintptr_t retSpoofAddress,
                                                     const Context&       context,
                                                     FirstArg             firstArg  = {},
                                                     SecondArg            secondArg = {},
                                                     ThirdArg             thirdArg  = {},
                                                     FourthArg            fourthArg = {} ) noexcept
        {
            return invoker<ReturnType, FirstArg, SecondArg, ThirdArg, FourthArg, const Context&, const std::uintptr_t>(
                retSpoofAddress, firstArg, secondArg, thirdArg, fourthArg, context, 0 );
        }
    };

  public:
    template<typename ReturnType, typename... Args>
    _NODISCARD static constexpr ReturnType call( ReturnType           ( *const functionAddress )( Args... ),
                                                 const std::uintptr_t gadgetAddress,
                                                 Args... args ) noexcept
    {
        const Context context { gadgetAddress, reinterpret_cast<std::uintptr_t>( functionAddress ) };
        using ArgRemapper = ArgumentRemapper<sizeof...( Args ), void>;
        return ArgRemapper::template call<ReturnType, Args...>(
            reinterpret_cast<std::uintptr_t>( &detail::retSpoof ), context, args... );
    }
};

#endif

} // namespace orion::hooks
