#pragma once

#include <array>
#include <cassert>
#include <cstddef>
#include <cstdint>

#include "dependency/minhook/include/MinHook.h"
#include "source/utility/retspoof.h"

namespace orion::utility {

    template<std::size_t Size>
    class MinHook final {
    private:
        std::uintptr_t gadget_address = {};
        std::array<std::uintptr_t, Size> originals {};

    public:
        constexpr MinHook() noexcept = default;

        MinHook(MinHook &&) = delete;
        MinHook &operator=(MinHook &&) = delete;

        MinHook(const MinHook &) = delete;
        MinHook &operator=(const MinHook &) = delete;

        constexpr auto set_gadget_address(const std::uintptr_t new_gadget_address
        ) noexcept -> void {
            assert(gadget_address == 0);
            gadget_address = new_gadget_address;
        }

        template<std::size_t Index>
            requires((Index < Size) && (Index >= 0))
        [[nodiscard]] constexpr auto hook_at(
            const std::uintptr_t target_address,
            const std::uintptr_t function_address
        ) noexcept -> bool {
            assert(originals[Index] == 0);
            return MH_CreateHook(
                       (LPVOID)(target_address),
                       (LPVOID)(function_address),
                       (LPVOID *)(&originals[Index])
                   )
                == MH_OK;
        }

        template<std::size_t Index, typename ReturnType, typename... Args>
            requires((Index < Size) && (Index >= 0))
        [[nodiscard]] constexpr auto fastcall(Args... args) const noexcept -> ReturnType {
            const auto ret_spoof = RetSpoof<ReturnType(__fastcall *)(Args...)> {
                originals[Index],
            };
            return ret_spoof(gadget_address, args...);
        }

        template<std::size_t Index, typename ReturnType, typename... Args>
            requires((Index < Size) && (Index >= 0))
        [[nodiscard]] constexpr auto thiscall(Args... args) const noexcept -> ReturnType {
            const auto ret_spoof = RetSpoof<ReturnType(__thiscall *)(Args...)> {
                originals[Index],
            };
            return ret_spoof(gadget_address, args...);
        }

        template<std::size_t Index, typename ReturnType, typename... Args>
            requires((Index < Size) && (Index >= 0))
        [[nodiscard]] constexpr auto stdcall(Args... args) const noexcept -> ReturnType {
            const auto ret_spoof = RetSpoof<ReturnType(__stdcall *)(Args...)> {
                originals[Index],
            };
            return ret_spoof(gadget_address, args...);
        }

        template<std::size_t Index, typename ReturnType, typename... Args>
            requires((Index < Size) && (Index >= 0))
        [[nodiscard]] constexpr auto cdeclcall(Args... args) const noexcept -> ReturnType {
            const auto ret_spoof = RetSpoof<ReturnType(__cdecl *)(Args...)> {
                originals[Index],
            };
            return ret_spoof(gadget_address, args...);
        }
    };

}  // namespace orion::utility
