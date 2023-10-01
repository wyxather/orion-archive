#ifndef DIRECTINPUT_VERSION
    #define DIRECTINPUT_VERSION 0x0800
#endif

#include <dinput.h>
#include <wrl/client.h>

#include "source/orion.h"

#pragma comment(lib, "dxguid.lib")

using Microsoft::WRL::ComPtr;
using orion::core::Input;
using orion::hooks::CallConv;
using orion::utilities::Memory;
using orion::utilities::String;

Input::Input(const Type type) noexcept {
    if (type == Type::DirectInput8) {
        if (handle =
                orion.get_kernel32().get_module_handle_a(String<"dinput8.dll">()
                );
            handle != nullptr)
            this->type.emplace(type);
    }
}

Input::Input(const Enumerate enumerate) noexcept {
    const auto& kernel32 = orion.get_kernel32();
    switch (enumerate) {
        case Enumerate::Auto: {
            if (handle = kernel32.get_module_handle_a(String<"dinput8.dll">());
                handle != nullptr) {
                type.emplace(Type::DirectInput8);
            }
            break;
        }
        case Enumerate::Manual: {
            if (handle = kernel32.get_module_handle_a(String<"dinput8.dll">());
                handle != nullptr) {
                const auto& user32 = orion.get_user32();
                const auto input = user32.message_box_a(
                    orion.get_platform().get_window_handle(),
                    String<"DirectInput8">(),
                    String<"Input">(),
                    MB_YESNOCANCEL | MB_ICONQUESTION
                );
                switch (input) {
                    case IDYES:
                        type.emplace(Type::DirectInput8);
                        [[fallthrough]];
                    case IDCANCEL:
                        return;
                    default:
                        break;
                }
            }
            break;
        }
    }
}

auto Input::hook() noexcept -> void {
    if (!type.has_value()) {
        return;
    }
    if (type.value() == Type::DirectInput8) {
        const auto direct_input_8_create = reinterpret_cast<HRESULT(WINAPI*)(
            HMODULE,
            DWORD,
            const IID&,
            LPDIRECTINPUT8*,
            LPUNKNOWN
        )>(orion.get_kernel32()
               .get_proc_address(handle, String<"DirectInput8Create">()));
        if (direct_input_8_create == nullptr) {
            return;
        }
        ComPtr<IDirectInput8> direct_input_8;
        if (direct_input_8_create(
                orion.get_handle(),
                DIRECTINPUT_VERSION,
                IID_IDirectInput8,
                direct_input_8.GetAddressOf(),
                nullptr
            )
            != DI_OK) {
            return;
        }
        ComPtr<IDirectInputDevice8> direct_input_8_device;
        if (direct_input_8->CreateDevice(
                GUID_SysMouse,
                direct_input_8_device.GetAddressOf(),
                nullptr
            )
            != DI_OK) {
            return;
        }
        hooks.emplace(
            reinterpret_cast<void**>(direct_input_8_device.Get()),
            Memory::Pattern<"FF 23">().find(Memory::get_module_bytes(handle))
        );
        hooks->hook_at(9, &DirectInput8::get_device_state);
        hooks->hook_at(10, &DirectInput8::get_device_data);
    }
}

auto Input::unhook() noexcept -> void {
    if (hooks.has_value()) {
        hooks->restore();
    }
}

auto STDMETHODCALLTYPE Input::DirectInput8::get_device_state(
    void* const device,
    const DWORD size,
    const LPVOID data
) noexcept -> HRESULT {
    static std::array<bool, 2> key {};
    const auto result =
        orion.get_input().hooks->stdcall<9, HRESULT>(device, size, data);
    if (!orion.get_gui().is_open() || result != DI_OK) {
        return result;
    }
    switch (size) {
        case sizeof(DIMOUSESTATE): {
            key[0] = LPDIMOUSESTATE(data)->rgbButtons[0];
            LPDIMOUSESTATE(data)->rgbButtons[0] = 0;
            break;
        }
        case sizeof(DIMOUSESTATE2): {
            key[0] = LPDIMOUSESTATE2(data)->rgbButtons[0];
            LPDIMOUSESTATE2(data)->rgbButtons[0] = 0;
            break;
        }
        default:
            break;
    }
    if (key[0] != key[1]) {
        const auto& user32 = orion.get_user32();
        if (POINT pos; user32.get_cursor_pos(&pos)) {
            if (key[0]) {
                user32.post_message(
                    orion.get_platform().get_window_handle(),
                    WM_LBUTTONDOWN,
                    VK_LBUTTON,
                    MAKELPARAM(pos.x, pos.y)
                );
            } else {
                user32.post_message(
                    orion.get_platform().get_window_handle(),
                    WM_LBUTTONUP,
                    NULL,
                    MAKELPARAM(pos.x, pos.y)
                );
            }
        }
        key[1] = key[0];
    }
    return result;
}

auto STDMETHODCALLTYPE Input::DirectInput8::get_device_data(
    void* const device,
    const DWORD size,
    void* const data,
    const LPDWORD count,
    const DWORD flags
) noexcept -> HRESULT {
    const auto result =
        orion.get_input()
            .hooks->stdcall<10, HRESULT>(device, size, data, count, flags);
    if (!orion.get_gui().is_open() || result != DI_OK) {
        return result;
    }
    const auto device_object_data =
        reinterpret_cast<LPDIDEVICEOBJECTDATA>(data);
    for (DWORD i = 0; i < *count; ++i) {
        if (DIMOFS_BUTTON0 != device_object_data[i].dwOfs) {
            continue;
        }
        const auto& user32 = orion.get_user32();
        POINT pos;
        if (user32.get_cursor_pos(&pos) == 0) {
            continue;
        }
        if (device_object_data[i].dwData & 0x80) {
            user32.post_message(
                orion.get_platform().get_window_handle(),
                WM_LBUTTONDOWN,
                VK_LBUTTON,
                MAKELPARAM(pos.x, pos.y)
            );
            device_object_data[i].dwData &= ~0x80;
        } else {
            user32.post_message(
                orion.get_platform().get_window_handle(),
                WM_LBUTTONUP,
                NULL,
                MAKELPARAM(pos.x, pos.y)
            );
        }
    }
    return result;
}
