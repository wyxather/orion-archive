#pragma once

#include <initguid.h>
//
#include <dinput.h>

#include "source/utility/minhook.h"
#include "source/utility/windows.h"

namespace orion {

    namespace utility {

        class Module;

    }

    namespace import {

        class User32;

    }

    namespace core {

        class Input final {
        private:
            const utility::Module *module = nullptr;
            utility::MinHook<2> minhook;

        public:
            explicit Input(HMODULE module_handle, const import::User32 &user32) noexcept;

            Input(Input &&) = delete;
            Input &operator=(Input &&) = delete;

            Input(const Input &) = delete;
            Input &operator=(const Input &) = delete;

            auto hook() noexcept -> void;
            auto unhook() const noexcept -> void;

        private:
            auto hook_dinput8() noexcept -> void;

            [[nodiscard]] static auto get_user_input(
                const wchar_t *module_full_name,
                const wchar_t *module_name
            ) noexcept -> int;

            static auto STDMETHODCALLTYPE directinputdevice8_getdevicestate(
                LPDIRECTINPUTDEVICE8 directinputdevice8,
                DWORD data_size_in_bytes,
                LPVOID data
            ) noexcept -> HRESULT;

            static auto STDMETHODCALLTYPE directinputdevice8_getdevicedata(
                LPDIRECTINPUTDEVICE8 directinputdevice8,
                DWORD data_size_in_bytes,
                LPDIDEVICEOBJECTDATA data,
                LPDWORD data_count,
                DWORD data_flags
            ) noexcept -> HRESULT;

        };  // namespace core

    }  // namespace core

}  // namespace orion
