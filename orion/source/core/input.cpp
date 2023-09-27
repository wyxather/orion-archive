#include "Input.h"

#include "Orion.h"
#ifndef DIRECTINPUT_VERSION
    #define DIRECTINPUT_VERSION 0x0800
#endif
#include <dinput.h>
#include <wrl/client.h>
#pragma comment(lib, "Dinput8.lib")
#pragma comment(lib, "Dxguid.lib")

namespace orion::DINPUT8 {
    auto CALLBACK get_device_state(
        const LPDIRECTINPUTDEVICE8 device,
        const DWORD size,
        const LPVOID data
    ) noexcept -> HRESULT {
        static std::array<bool, 2> key {};

        const auto result = context.get_input()
                                .get_hooks()
                                .get<9, HRESULT, Hooks::CallingConv::STDCALL>(
                                    device,
                                    size,
                                    data
                                );

        if (!context.get_gui().is_open() || result != DI_OK)
            return result;

        switch (size) {
            default:
                break;
            case (sizeof(DIMOUSESTATE)): {
                key[0] = LPDIMOUSESTATE(data)->rgbButtons[0];
                LPDIMOUSESTATE(data)->rgbButtons[0] = 0;
                break;
            }
            case (sizeof(DIMOUSESTATE2)): {
                key[0] = LPDIMOUSESTATE2(data)->rgbButtons[0];
                LPDIMOUSESTATE2(data)->rgbButtons[0] = 0;
                break;
            }
        }

        if (key[0] != key[1]) {
            if (POINT pos; IMPORT(GetCursorPos).cached()(&pos)) {
                key[0] ? IMPORT(PostMessage)
                             .cached()(
                                 context.get_platform().get_handle(),
                                 WM_LBUTTONDOWN,
                                 VK_LBUTTON,
                                 MAKELPARAM(pos.x, pos.y)
                             )
                       : IMPORT(PostMessage)
                             .cached()(
                                 context.get_platform().get_handle(),
                                 WM_LBUTTONUP,
                                 NULL,
                                 MAKELPARAM(pos.x, pos.y)
                             );
            }
            key[1] = key[0];
        }
        return result;
    }

    auto CALLBACK get_device_data(
        const LPDIRECTINPUTDEVICE8 device,
        const DWORD size,
        const LPDIDEVICEOBJECTDATA data,
        const LPDWORD count,
        const DWORD flags
    ) noexcept -> HRESULT {
        const auto result = context.get_input()
                                .get_hooks()
                                .get<10, HRESULT, Hooks::CallingConv::STDCALL>(
                                    device,
                                    size,
                                    data,
                                    count,
                                    flags
                                );

        if (!context.get_gui().is_open() || result != DI_OK)
            return result;

        for (DWORD i = 0; i < *count; ++i) {
            if (data[i].dwData & 0x80) {
                if (DIMOFS_BUTTON0 == data[i].dwOfs) {
                    if (POINT pos {}; IMPORT(GetCursorPos).cached()(&pos)) {
                        IMPORT(PostMessage)
                            .cached()(
                                context.get_platform().get_handle(),
                                WM_LBUTTONDOWN,
                                VK_LBUTTON,
                                MAKELPARAM(pos.x, pos.y)
                            );
                        data[i].dwData &= ~0x80;
                    }
                }
            } else {
                if (DIMOFS_BUTTON0 == data[i].dwOfs) {
                    if (POINT pos {}; IMPORT(GetCursorPos).cached()(&pos)) {
                        IMPORT(PostMessage)
                            .cached()(
                                context.get_platform().get_handle(),
                                WM_LBUTTONUP,
                                NULL,
                                MAKELPARAM(pos.x, pos.y)
                            );
                    }
                }
            }
        }
        return result;
    }
}  // namespace orion::DINPUT8

orion::Input::Input(const Type type) noexcept {
    if (Type::DINPUT8 == type) {
        if (Input::handle =
                IMPORT(GetModuleHandleA)(utils::String<"dinput8.dll">());
            Input::handle != nullptr)
            Input::type.emplace(type);
    }
}

orion::Input::Input(const Enumerate enumerate) noexcept {
    switch (enumerate) {
        case Enumerate::AUTO: {
            if (Input::handle =
                    IMPORT(GetModuleHandleA)(utils::String<"dinput8.dll">());
                Input::handle != nullptr) {
                Input::type.emplace(Input::Type::DINPUT8);
                break;
            }
            break;
        }
        case Enumerate::MANUAL: {
            if (Input::handle =
                    IMPORT(GetModuleHandleA)(utils::String<"dinput8.dll">());
                Input::handle != nullptr
                && IMPORT(MessageBoxA)(
                       nullptr,
                       utils::String<"DINPUT8">(),
                       utils::String<"Input">(),
                       MB_YESNO | MB_ICONINFORMATION
                   ) == IDYES) {
                Input::type.emplace(Input::Type::DINPUT8);
                break;
            }
            break;
        }
    }
}

auto orion::Input::hook() noexcept -> void {
    if (!Input::type.has_value())
        return;

    if (Type::DINPUT8 == Input::type.value()) {
        const auto direct_input_8_create =
            (HRESULT(WINAPI*)(HMODULE, DWORD, const IID&, LPDIRECTINPUT8*, LPUNKNOWN))(
                IMPORT(GetProcAddress)(
                    Input::handle,
                    utils::String<"DirectInput8Create">()
                )
            );
        if (direct_input_8_create == nullptr)
            return;

        Microsoft::WRL::ComPtr<IDirectInput8> direct_input_8;
        if (direct_input_8_create(
                context.get_handle(),
                DIRECTINPUT_VERSION,
                IID_IDirectInput8,
                direct_input_8.GetAddressOf(),
                nullptr
            )
            != DI_OK)
            return;

        Microsoft::WRL::ComPtr<IDirectInputDevice8> direct_input_8_device;
        if (direct_input_8->CreateDevice(
                GUID_SysMouse,
                direct_input_8_device.GetAddressOf(),
                nullptr
            )
            != DI_OK)
            return;

        Input::hooks.emplace((void**)(direct_input_8_device.Get()));
        Input::hooks->hook_at(9, &DINPUT8::get_device_state);
        Input::hooks->hook_at(10, &DINPUT8::get_device_data);
    }
}
