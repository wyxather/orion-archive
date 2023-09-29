#pragma once

#include <memory>

#include "Hooks.h"

namespace orion::hooks {
    class MinHook final {
    public:
        explicit MinHook(std::size_t size) noexcept;
        explicit MinHook(void* vmt_address) noexcept;
        explicit MinHook(void** class_address) noexcept;

        MinHook(MinHook&&) = delete;
        MinHook& operator=(MinHook&&) = delete;

        MinHook(const MinHook&) = delete;
        MinHook& operator=(const MinHook&) = delete;

        [[nodiscard]] constexpr auto&& operator[](const std::size_t index
        ) const noexcept {
            return MinHook::originals[index];
        }

        [[nodiscard]] constexpr auto&& size() const noexcept {
            return MinHook::count;
        }

        template<
            const std::size_t _Index,
            typename _ReturnType,
            const CallingConv _CallingConv = CallingConv::THISCALL,
            typename... _Args>
        [[nodiscard]] constexpr auto get(_Args... _Arg) const noexcept {
            switch (_CallingConv) {
                default:
                    return static_cast<_ReturnType(__thiscall*)(_Args...
                    )>(MinHook::originals[_Index])(_Arg...);
                case CallingConv::STDCALL:
                    return static_cast<_ReturnType(__stdcall*)(_Args...
                    )>(MinHook::originals[_Index])(_Arg...);
                case CallingConv::FASTCALL:
                    return static_cast<_ReturnType(__fastcall*)(_Args...
                    )>(MinHook::originals[_Index])(_Arg...);
                case CallingConv::VECTORCALL:
                    return static_cast<_ReturnType(__vectorcall*)(_Args...
                    )>(MinHook::originals[_Index])(_Arg...);
            }
        }

        template<
            const std::size_t _Index,
            typename _ReturnType,
            const CallingConv _CallingConv = CallingConv::THISCALL,
            typename... _Args>
        [[nodiscard]] constexpr auto call(_Args... Arg) const noexcept {
            return MinHook::get<_Index, _ReturnType, _CallingConv>(
                MinHook::base,
                Arg...
            );
        }

        auto hook_at(std::size_t index, void* function) const noexcept -> void;
        auto
        hook_at(std::size_t index, void* target, void* function) const noexcept
            -> void;

        constexpr auto restore() const noexcept
            -> void { /*MH_DisableHook(MH_ALL_HOOKS)*/
        }

    private:
        void* base;
        std::size_t count;
        std::unique_ptr<void*[]> originals;
    };
}  // namespace orion::Hooks
