#pragma once

#include <memory>

#include "hooks.h"

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

            explicit MinHook(const std::size_t size) noexcept;
            explicit MinHook(void* const vmt_ptr) noexcept;
            explicit MinHook(void** class_ptr) noexcept;

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
            void* base;
            std::size_t count;
            std::unique_ptr<void*[]> originals;

        public:
            NODISCARD constexpr auto size() const noexcept -> auto {
                return count;
            }

            NODISCARD constexpr auto operator[](const std::size_t index
            ) const noexcept -> const auto& {
                return originals[index];
            }

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
        };

    }  // namespace hooks

}  // namespace orion
