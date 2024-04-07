#pragma once

#include <cstdint>
#include <type_traits>
#include <xtr1common>

#include "source/utility/pointer.h"

namespace orion::utility {

    namespace ret_spoof {
#ifdef _WIN64
        extern "C" auto ret_spoof() noexcept -> void *;
#else
        template<typename ReturnType, typename... Args>
        [[nodiscard]] static __declspec(naked) constexpr auto __fastcall fastcall(
            [[maybe_unused]] const std::uintptr_t ecx,
            [[maybe_unused]] const std::uintptr_t edx,
            [[maybe_unused]] const std::uintptr_t function_address,
            [[maybe_unused]] const std::uintptr_t ret_spoof_context,
            [[maybe_unused]] const std::uintptr_t gadget_address,
            [[maybe_unused]] Args... args
        ) noexcept -> ReturnType {
            __asm {
                mov eax, [esp + 8]  // Load a pointer to ret_spoof_context into eax.
                mov[eax], ebx  // Save ebx in ret_spoof_context.ebx_backup.
                lea ebx, return_here_from_gadget  // Load the address of the label we want the gadget to jump to.
                mov[eax + 4], ebx  // Save the address of 'return_here_from_gadget' in ret_spoof_context.address_to_jump_to_in_gadget.
                pop dword ptr[eax + 8]  // Pop return address from stack into ret_spoof_context.return_address.
                lea ebx, [eax + 4]  // Load the address of ret_spoof_context.address_to_jump_to_in_gadget to ebx.
                ret 4  // Pop 'function_address' from stack and jump to it, skip 'ret_spoof_context' on stack; esp will point to the
                // spoofed return address (gadget_address).
            return_here_from_gadget:
                push[ebx + 4]  // Restore ret_spoof_context.return_address as a return address.
                mov ebx, [ebx - 4]  // Restore ebx from ret_spoof_context.ebx_backup.
                ret
            }
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] static __declspec(naked) constexpr auto __cdecl cdeclcall(
            [[maybe_unused]] const std::uintptr_t function_address,
            [[maybe_unused]] const std::uintptr_t ret_spoof_context,
            [[maybe_unused]] const std::uintptr_t gadget_address,
            [[maybe_unused]] Args... args
        ) noexcept -> ReturnType {
            __asm {
                mov eax, [esp + 8]  // Load a pointer to ret_spoof_context into eax.
                mov[eax], ebx  // Save ebx in ret_spoof_context.ebx_backup.
                lea ebx, return_here_from_gadget  // Load the address of the label we want the gadget to jump to.
                mov[eax + 4], ebx  // Save the address of 'return_here_from_gadget' in ret_spoof_context.address_to_jump_to_in_gadget.
                pop dword ptr[eax + 8]  // Pop return address from stack into ret_spoof_context.return_address.
                lea ebx, [eax + 4]  // Load the address of ret_spoof_context.address_to_jump_to_in_gadget to ebx.
                ret 4  // Pop 'function_address' from stack and jump to it, skip 'ret_spoof_context' on stack; esp will point to the
                // spoofed return address (gadget_address).
            return_here_from_gadget:
                sub esp, 12
                push[ebx + 4]  // Restore ret_spoof_context.return_address as a return address.
                mov ebx, [ebx - 4]  // restore ebx from ret_spoof_context.ebx_backup.
                ret
            }
        }
#endif
    }  // namespace ret_spoof

    template<typename T>
    class RetSpoofBase : public FunctionPointer<T> {
    public:
        using FunctionPointer<T>::FunctionPointer;

    private:
#ifdef _WIN64
        template<typename ReturnType, typename... Args>
        [[nodiscard]] static constexpr auto invoker(
            const std::uintptr_t ret_spoof_address,
            Args... args
        ) noexcept -> ReturnType {
            const auto ret_spoof = (ReturnType(*)(Args...))(ret_spoof_address);
            return ret_spoof(args...);
        }

        class Context final {
        private:
            std::uintptr_t gadget_address;
            std::uintptr_t function_address;
            std::uintptr_t rbx_backup = 0;

        public:
            constexpr explicit Context(const std::uintptr_t gadget_address, const std::uintptr_t function_address) noexcept
                : gadget_address { gadget_address }
                , function_address { function_address } {}

            Context(Context &&) = delete;
            Context &operator=(Context &&) = delete;

            Context(const Context &) = delete;
            Context &operator=(const Context &) = delete;
        };

        template<std::size_t Size>
        class ArgsRemapper final {
        public:
            ArgsRemapper() = delete;

            ArgsRemapper(ArgsRemapper &&) = delete;
            ArgsRemapper &operator=(ArgsRemapper &&) = delete;

            ArgsRemapper(const ArgsRemapper &) = delete;
            ArgsRemapper &operator=(const ArgsRemapper &) = delete;

            template<typename ReturnType, typename FirstArg, typename SecondArg, typename ThirdArg, typename FourthArg, typename... Args>
            [[nodiscard]] static constexpr auto call(
                const std::uintptr_t ret_spoof_address,
                const Context &ret_spoof_context,
                FirstArg first_arg,
                SecondArg second_arg,
                ThirdArg third_arg,
                FourthArg fourth_arg,
                Args... args
            ) noexcept -> ReturnType {
                return invoker<ReturnType, FirstArg, SecondArg, ThirdArg, FourthArg, const Context &, std::uintptr_t, Args...>(
                    ret_spoof_address,
                    first_arg,
                    second_arg,
                    third_arg,
                    fourth_arg,
                    ret_spoof_context,
                    0,
                    args...
                );
            }
        };

        template<std::size_t Size>
            requires(Size <= 4)
        class ArgsRemapper<Size> final {
        public:
            ArgsRemapper() = delete;

            ArgsRemapper(ArgsRemapper &&) = delete;
            ArgsRemapper &operator=(ArgsRemapper &&) = delete;

            ArgsRemapper(const ArgsRemapper &) = delete;
            ArgsRemapper &operator=(const ArgsRemapper &) = delete;

            template<typename ReturnType, typename FirstArg = std::uintptr_t, typename SecondArg = std::uintptr_t, typename ThirdArg = std::uintptr_t, typename FourthArg = std::uintptr_t>
            [[nodiscard]] static constexpr auto call(
                const std::uintptr_t ret_spoof_address,
                const Context &ret_spoof_context,
                FirstArg first_arg = 0,
                SecondArg second_arg = 0,
                ThirdArg third_arg = 0,
                FourthArg fourth_arg = 0
            ) noexcept -> ReturnType {
                return invoker<ReturnType, FirstArg, SecondArg, ThirdArg, FourthArg, const Context &, std::uintptr_t>(
                    ret_spoof_address,
                    first_arg,
                    second_arg,
                    third_arg,
                    fourth_arg,
                    ret_spoof_context,
                    0
                );
            }
        };

    protected:
        template<typename ReturnType, typename... Args>
        [[nodiscard]] static constexpr auto call(
            const std::uintptr_t function_address,
            const std::uintptr_t gadget_address,
            Args... args
        ) noexcept -> ReturnType {
            return ArgsRemapper<sizeof...(Args)>::template call<ReturnType, Args...>(
                Pointer { std::addressof(ret_spoof::ret_spoof) }.value<std::uintptr_t>(),
                Context { gadget_address, function_address },
                args...
            );
        }
#else
        class Context final {
        private:
            std::uintptr_t ebx_backup = 0;
            std::uintptr_t address_to_jump_to_in_gadget = 0;
            std::uintptr_t return_address = 0;

        public:
            constexpr Context() noexcept = default;

            Context(Context &&) = delete;
            Context &operator=(Context &&) = delete;

            Context(const Context &) = delete;
            Context &operator=(const Context &) = delete;
        };

    protected:
        template<typename ReturnType, typename... Args>
        [[nodiscard]] static constexpr auto call_fastcall(
            const std::uintptr_t function_address,
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            const std::uintptr_t edx,
            Args... args
        ) noexcept -> ReturnType {
            const auto ret_spoof_context = Context {};
            return ret_spoof::fastcall<ReturnType, Args...>(
                ecx,
                edx,
                function_address,
                Pointer { ret_spoof_context }.value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] static constexpr auto call_thiscall(
            const std::uintptr_t function_address,
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            Args... args
        ) noexcept -> ReturnType {
            return call_fastcall<ReturnType, Args...>(function_address, gadget_address, ecx, 0, args...);
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] static constexpr auto call_stdcall(
            const std::uintptr_t function_address,
            const std::uintptr_t gadget_address,
            Args... args
        ) noexcept -> ReturnType {
            return call_thiscall<ReturnType, Args...>(function_address, gadget_address, 0, args...);
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] static constexpr auto call_cdeclcall(
            const std::uintptr_t function_address,
            const std::uintptr_t gadget_address,
            Args... args
        ) noexcept -> ReturnType {
            const auto ret_spoof_context = Context {};
            return ret_spoof::cdeclcall<ReturnType, Args...>(
                function_address,
                Pointer { ret_spoof_context }.value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }
#endif
    };

    template<typename T>
    class RetSpoof final : public RetSpoofBase<T> {
    public:
        using RetSpoofBase<T>::RetSpoofBase;
#ifdef _WIN64
        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto operator()(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto fastcall(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto thiscall(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto stdcall(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto cdeclcall(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }
#else
        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto fastcall(
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            const std::uintptr_t edx,
            Args... args
        ) const noexcept -> ReturnType {
            return this->call_fastcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                ecx,
                edx,
                args...
            );
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto thiscall(
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            Args... args
        ) const noexcept -> ReturnType {
            return this->call_thiscall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                ecx,
                args...
            );
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto stdcall(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call_stdcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }

        template<typename ReturnType, typename... Args>
        [[nodiscard]] constexpr auto cdeclcall(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call_cdeclcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }
#endif
    };
#ifndef _WIN64
    template<typename ReturnType, typename... Args>
    class RetSpoof<ReturnType(__fastcall *)(Args...)> final
        : public RetSpoofBase<ReturnType(__fastcall *)(Args...)> {
    public:
        using RetSpoofBase<ReturnType(__fastcall *)(Args...)>::RetSpoofBase;

        [[nodiscard]] constexpr auto operator()(
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            const std::uintptr_t edx,
            Args... args
        ) const noexcept -> ReturnType {
            return this->call_fastcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                ecx,
                edx,
                args...
            );
        }

        [[nodiscard]] constexpr auto fastcall(
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            const std::uintptr_t edx,
            Args... args
        ) const noexcept -> ReturnType {
            return this->call_fastcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                ecx,
                edx,
                args...
            );
        }
    };

    template<typename ReturnType, typename... Args>
    class RetSpoof<ReturnType(__thiscall *)(Args...)> final
        : public RetSpoofBase<ReturnType(__thiscall *)(Args...)> {
    public:
        using RetSpoofBase<ReturnType(__thiscall *)(Args...)>::RetSpoofBase;

        [[nodiscard]] constexpr auto operator()(
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            Args... args
        ) const noexcept -> ReturnType {
            return this->call_thiscall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                ecx,
                args...
            );
        }

        [[nodiscard]] constexpr auto thiscall(
            const std::uintptr_t gadget_address,
            const std::uintptr_t ecx,
            Args... args
        ) const noexcept -> ReturnType {
            return this->call_thiscall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                ecx,
                args...
            );
        }
    };

    template<typename ReturnType, typename... Args>
    class RetSpoof<ReturnType(__stdcall *)(Args...)> final
        : public RetSpoofBase<ReturnType(__stdcall *)(Args...)> {
    public:
        using RetSpoofBase<ReturnType(__stdcall *)(Args...)>::RetSpoofBase;

        [[nodiscard]] constexpr auto operator()(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call_stdcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }

        [[nodiscard]] constexpr auto stdcall(const std::uintptr_t gadget_address, Args... args) const noexcept -> ReturnType {
            return this->call_stdcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }
    };

    template<typename ReturnType, typename... Args>
    class RetSpoof<ReturnType(__cdecl *)(Args...)> final
        : public RetSpoofBase<ReturnType(__cdecl *)(Args...)> {
    public:
        using RetSpoofBase<ReturnType(__cdecl *)(Args...)>::RetSpoofBase;

        [[nodiscard]] constexpr auto operator()(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call_cdeclcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }

        [[nodiscard]] constexpr auto cdeclcall(const std::uintptr_t gadget_address, Args... args) const noexcept -> ReturnType {
            return this->call_cdeclcall<ReturnType, Args...>(
                this->value<std::uintptr_t>(),
                gadget_address,
                args...
            );
        }
    };

    template<typename ReturnType, typename... Args>
    RetSpoof(ReturnType(__fastcall *)(Args...)
    ) -> RetSpoof<ReturnType(__fastcall *)(Args...)>;

    template<typename ReturnType, typename... Args>
    RetSpoof(ReturnType(__thiscall *)(Args...)
    ) -> RetSpoof<ReturnType(__thiscall *)(Args...)>;

    template<typename ReturnType, typename... Args>
    RetSpoof(ReturnType(__stdcall *)(Args...)
    ) -> RetSpoof<ReturnType(__stdcall *)(Args...)>;

    template<typename ReturnType, typename... Args>
    RetSpoof(ReturnType(__cdecl *)(Args...)) -> RetSpoof<ReturnType(__cdecl *)(Args...)>;
#else
    template<typename ReturnType, typename... Args>
    class RetSpoof<ReturnType (*)(Args...)> final
        : public RetSpoofBase<ReturnType (*)(Args...)> {
    public:
        using RetSpoofBase<ReturnType (*)(Args...)>::RetSpoofBase;

        [[nodiscard]] constexpr auto operator()(const std::uintptr_t gadget_address, Args... args)
            const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        [[nodiscard]] constexpr auto fastcall(const std::uintptr_t gadget_address, Args... args) const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        [[nodiscard]] constexpr auto thiscall(const std::uintptr_t gadget_address, Args... args) const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        [[nodiscard]] constexpr auto stdcall(const std::uintptr_t gadget_address, Args... args) const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }

        [[nodiscard]] constexpr auto cdeclcall(const std::uintptr_t gadget_address, Args... args) const noexcept -> ReturnType {
            return this->call<ReturnType, Args...>(this->value<std::uintptr_t>(), gadget_address, args...);
        }
    };

    template<typename ReturnType, typename... Args>
    RetSpoof(ReturnType (*)(Args...)) -> RetSpoof<ReturnType (*)(Args...)>;
#endif
}  // namespace orion::utility
