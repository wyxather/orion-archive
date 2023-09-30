#pragma once

#include "source/hooks/hooks.h"

namespace orion {

    class Application;
    class Unload;

    namespace hooks {

        class MinHook final {
            friend Application;
            friend Unload;

            static auto initialize() noexcept -> void;
            static auto uninitialize() noexcept -> void;

            static auto enable() noexcept -> void;
            static auto disable() noexcept -> void;

        public:
            NON_COPYABLE(MinHook);
            NON_MOVEABLE(MinHook);

            explicit MinHook(
                const std::size_t size,
                void* const gadget = nullptr
            ) noexcept;

            explicit MinHook(
                void* const vmt_ptr,
                void* const gadget = nullptr
            ) noexcept;

            explicit MinHook(
                void** class_ptr,
                void* const gadget = nullptr
            ) noexcept;

            auto hook_at(
                const std::size_t index,
                void* const target,
                void* const function
            ) const noexcept -> void;

            auto hook_at(const std::size_t index, void* const function)
                const noexcept -> void;

            constexpr auto restore() const noexcept -> void {
                /*MH_DisableHook(MH_ALL_HOOKS)*/
            }

        private:
            void* gadget;
            void* base;
            std::unique_ptr<void*[]> originals;

        public:
            template<
                std::size_t index,
                typename ReturnType,
                CallConv calling_conv,
                typename... Args>
            NODISCARD constexpr auto call(Args... args) const noexcept
                -> ReturnType {
                using enum orion::hooks::CallConv;
                switch (calling_conv) {
                    case StdCall:
                        return static_cast<ReturnType(__stdcall*)(Args...
                        )>(originals[index])(args...);
                    case ThisCall:
                        return static_cast<ReturnType(__thiscall*)(Args...
                        )>(originals[index])(args...);
                    case FastCall:
                        return static_cast<ReturnType(__fastcall*)(Args...
                        )>(originals[index])(args...);
                    case VectorCall:
                        return static_cast<ReturnType(__vectorcall*)(Args...
                        )>(originals[index])(args...);
                    default:
                        return static_cast<ReturnType(__stdcall*)(Args...
                        )>(originals[index])(args...);
                }
            }

#ifndef _WIN64
            template<std::size_t index, typename ReturnType, typename... Args>
            NODISCARD constexpr auto cdeclcall(Args... args) const noexcept
                -> ReturnType {
                return RetSpoof::invoke_cdecl<ReturnType>(
                    static_cast<std::uintptr_t>(originals[index]),
                    static_cast<std::uintptr_t>(gadget),
                    args...
                );
            }

            template<std::size_t index, typename ReturnType, typename... Args>
            NODISCARD constexpr auto stdcall(Args... args) const noexcept
                -> ReturnType {
                return RetSpoof::invoke_stdcall<ReturnType>(
                    static_cast<std::uintptr_t>(originals[index]),
                    static_cast<std::uintptr_t>(gadget),
                    args...
                );
            }

            template<
                std::size_t index,
                typename ReturnType,
                typename Self,
                typename... Args>
            NODISCARD constexpr auto
            thiscall(Self self, Args... args) const noexcept -> ReturnType {
                return RetSpoof::invoke_thiscall<ReturnType>(
                    static_cast<std::uintptr_t>(self),
                    static_cast<std::uintptr_t>(originals[index]),
                    static_cast<std::uintptr_t>(gadget),
                    args...
                );
            }

            template<
                std::size_t index,
                typename ReturnType,
                typename Self,
                typename Garbage,
                typename... Args>
            NODISCARD constexpr auto
            fastcall(Self self, Garbage garbage, Args... args) const noexcept
                -> ReturnType {
                return RetSpoof::invoke_fastcall<ReturnType>(
                    static_cast<std::uintptr_t>(self),
                    static_cast<std::uintptr_t>(garbage),
                    static_cast<std::uintptr_t>(originals[index]),
                    static_cast<std::uintptr_t>(gadget),
                    args...
                );
            }
#else
            template<std::size_t index, typename ReturnType, typename... Args>
            NODISCARD constexpr auto cdeclcall(Args... args) const noexcept
                -> ReturnType {
                using Fn = ReturnType(__cdecl*)(Args...);
                return RetSpoof64::call(
                    gadget,
                    static_cast<Fn>(originals[index]),
                    args...
                );
            }

            template<std::size_t index, typename ReturnType, typename... Args>
            NODISCARD constexpr auto stdcall(Args... args) const noexcept
                -> ReturnType {
                using Fn = ReturnType(__stdcall*)(Args...);
                return RetSpoof64::call(
                    gadget,
                    static_cast<Fn>(originals[index]),
                    args...
                );
            }

            template<std::size_t index, typename ReturnType, typename... Args>
            NODISCARD constexpr auto thiscall(Args... args) const noexcept
                -> ReturnType {
                using Fn = ReturnType(__thiscall*)(Args...);
                return RetSpoof64::call(
                    gadget,
                    static_cast<Fn>(originals[index]),
                    args...
                );
            }

            template<std::size_t index, typename ReturnType, typename... Args>
            NODISCARD constexpr auto fastcall(Args... args) const noexcept
                -> ReturnType {
                using Fn = ReturnType(__fastcall*)(Args...);
                return RetSpoof64::call(
                    gadget,
                    static_cast<Fn>(originals[index]),
                    args...
                );
            }

            template<std::size_t index, typename ReturnType, typename... Args>
            NODISCARD constexpr auto vectorcall(Args... args) const noexcept
                -> ReturnType {
                using Fn = ReturnType(__vectorcall*)(Args...);
                return RetSpoof64::call(
                    gadget,
                    static_cast<Fn>(originals[index]),
                    args...
                );
            }
#endif
        };

    }  // namespace hooks

}  // namespace orion
