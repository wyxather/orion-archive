#pragma once

#ifndef _WIN64

namespace orion::hooks
{

class RetSpoof;

namespace detail
{

class Context final
{
    NON_COPYABLE(Context)
    NON_MOVEABLE(Context)

    friend RetSpoof;

    constexpr explicit Context() noexcept = default;

    const void* const ebx_backup = nullptr;
    const void* const address_to_jump_to_in_gadget = nullptr;
    const void* const invoker_return_address = nullptr;
};

template <typename ReturnType, typename... Args>
NODISCARD __declspec(naked) constexpr auto __fastcall invoke_fastcall(
    const void* const /*ecx*/, const void* const /*edx*/, const void* const /*function_address*/,
    const Context* const /*context*/, const void* const /*gadget_address*/, Args... /*args*/
    ) noexcept -> ReturnType
{
    __asm {
                mov eax, [esp + 8] // load a pointer to context into eax
                mov [eax], ebx // save ebx in context.ebx_backup
                lea ebx, return_here_from_gadget // load the address of the label we want the gadget to jump to
                mov [eax + 4], ebx // save the address of 'return_here_from_gadget' in context.address_to_jump_to_in_gadget
                pop dword ptr [eax + 8] // pop return address from stack into context.invoker_return_address
                lea ebx, [eax + 4] // load the address of context.address_to_jump_to_in_gadget to ebx
                ret 4     // pop 'function_address' from stack and jump to it, skip 'context' on stack; esp will point to the
              // spoofed return address (gadget_address)
             return_here_from_gadget:
                push [ebx + 4] // restore context.invoker_return_address as a return address
                mov ebx, [ebx - 4] // restore ebx from context.ebx_backup 
                ret
    }
}

template <typename ReturnType, typename... Args>
NODISCARD __declspec(naked) constexpr auto __cdecl invoke_cdecl(const void* const /*function_address*/,
                                                                const Context* const /*context*/,
                                                                const void* const /*gadget_Address*/, Args... /*args*/
                                                                ) noexcept -> ReturnType
{
    __asm {
                mov eax, [esp + 8] // load a pointer to context into eax
                mov [eax], ebx // save ebx in context.ebx_backup
                lea ebx, return_here_from_gadget // load the address of the label we want the gadget to jump to
                mov [eax + 4], ebx // save the address of 'return_here_from_gadget' in context.address_to_jump_to_in_gadget
                pop dword ptr [eax + 8] // pop return address from stack into context.invoker_return_address
                lea ebx, [eax + 4] // load the address of context.invoker_return_address to ebx
                ret 4     // pop 'function_address' from stack and jump to it, skip 'context' on stack; esp will point to the
              // spoofed return address (gadget_address)
             return_here_from_gadget:
                sub esp, 12
                push [ebx + 4] // restore context.invoker_return_address as a return address
                mov ebx, [ebx - 4] // restore ebx from context.ebx_backup 
                ret
    }
}

} // namespace detail

class RetSpoof final
{
  public:
    NON_CONSTRUCTIBLE(RetSpoof)

    template <typename ReturnType, typename... Args>
    NODISCARD static constexpr auto invoke_fastcall(const void* const ecx, const void* const edx,
                                                    const void* const function_address,
                                                    const void* const gadget_address, Args... args) noexcept
        -> ReturnType
    {
        const detail::Context context;
        return detail::invoke_fastcall<ReturnType, Args...>(ecx, edx, function_address, &context, gadget_address,
                                                            args...);
    }

    template <typename ReturnType, typename... Args>
    NODISCARD static constexpr auto invoke_thiscall(const void* const ecx, const void* const function_address,
                                                    const void* const gadget_address, Args... args) noexcept
        -> ReturnType
    {
        return invoke_fastcall<ReturnType, Args...>(ecx, 0, function_address, gadget_address, args...);
    }

    template <typename ReturnType, typename... Args>
    NODISCARD static constexpr auto invoke_stdcall(const void* const function_address, const void* const gadget_address,
                                                   Args... args) noexcept -> ReturnType
    {
        return invoke_thiscall<ReturnType, Args...>(0, function_address, gadget_address, args...);
    }

    template <typename ReturnType, typename... Args>
    NODISCARD static constexpr auto invoke_cdecl(const void* const function_address, const void* const gadget_address,
                                                 Args... args) noexcept -> ReturnType
    {
        const detail::Context context;
        return detail::invoke_cdecl<ReturnType, Args...>(function_address, &context, gadget_address, args...);
    }
};

} // namespace orion::hooks

#endif
