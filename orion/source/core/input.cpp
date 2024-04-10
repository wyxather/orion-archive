#include "source/core/input.h"

#include <cstdint>
#include <string_view>

#include "source/context.h"
#include "source/import/user32.h"
#include "source/utility/module.h"
#include "source/utility/pointer.h"
#include "source/utility/retspoof.h"
#include "source/utility/xorpat.h"
#include "source/utility/xorstr.h"

using orion::core::Input;
using orion::utility::Module;
using orion::utility::Pointer;
using orion::utility::RetSpoof;
using orion::utility::XorPat;
using orion::utility::XorStr;

static constexpr auto dinput8 = XorStr<"dinput8"> {};
static constexpr auto jmp_rbx = XorPat<"FF 23", 0> {};

Input::Input(const HMODULE, const import::User32 &) noexcept {
    auto found_module = Module::find_module(std::string_view {
        decltype(dinput8)::access().data(),
        decltype(dinput8)::size(),
    });
    if ( found_module != nullptr ) {
        switch ( get_user_input(
            found_module->get_full_name().Buffer,
            found_module->get_name().Buffer
        ) ) {
            case IDYES:
                module = found_module;
                [[fallthrough]];
            case IDCANCEL:
                return;
            default:
                break;
        }
    }
}

auto Input::hook() noexcept -> void {
    if ( module == nullptr ) {
        return;
    }
    if ( module->has_same_name_case_insensitive(std::string_view {
             decltype(dinput8)::access().data(),
             decltype(dinput8)::size(),
         }) ) {
        return hook_dinput8();
    }
}

auto Input::unhook() const noexcept -> void {}

auto Input::hook_dinput8() noexcept -> void {
    const auto dinput8_gadget =
        Pointer { decltype(jmp_rbx)::find(module->get_code_section()) }.value<std::uintptr_t>();
    if ( dinput8_gadget == 0 ) [[unlikely]] {
        log::error(XorStr<"Failed to find gadget for DirectInput8.">::access().data());
        return;
    }
    const auto directinput8create = RetSpoof<decltype(&DirectInput8Create)> {
        module->get_export_function(XorStr<"DirectInput8Create">::access().data())
    };
    if ( directinput8create.value() == nullptr ) [[unlikely]] {
        log::error(XorStr<"Failed to find DirectInput8Create.">::access().data());
        return;
    }
    IDirectInput8 *directinput8 {};
    if ( directinput8create(
             dinput8_gadget,
             *context.handle,
             DIRECTINPUT_VERSION,
             IID_IDirectInput8,
             (LPVOID *)(&directinput8),
             nullptr
         )
         != DI_OK ) [[unlikely]] {
        log::error(XorStr<"Failed to create IDirectInput8.">::access().data());
        return;
    }
    IDirectInputDevice8 *directinputdevice8 {};
    if ( directinput8->CreateDevice(GUID_SysMouse, &directinputdevice8, nullptr) != DI_OK )
        [[unlikely]] {
        directinput8->Release();
        log::error(XorStr<"Failed to create IDirectInputDevice8.">::access().data());
        return;
    }
    const auto vmt = *(std::uintptr_t **)(directinputdevice8);
    minhook.set_gadget_address(dinput8_gadget);
    if ( !minhook.hook_at<0>(
             vmt[9],
             Pointer { directinputdevice8_getdevicestate }.value<std::uintptr_t>()
         ) ) [[unlikely]] {
        log::error(XorStr<"Failed to hook IDirectInputDevice8::GetDeviceState.">::access()
                       .data());
    }
    if ( !minhook.hook_at<1>(
             vmt[10],
             Pointer { directinputdevice8_getdevicedata }.value<std::uintptr_t>()
         ) ) [[unlikely]] {
        log::error(XorStr<"Failed to hook IDirectInputDevice8::GetDeviceData.">::access()
                       .data());
    }
    directinputdevice8->Release();
    directinput8->Release();
}

auto Input::get_user_input(const wchar_t *const module_full_name, const wchar_t *const module_name) noexcept -> int {
    return context.user32->message_box_w(
        context.user32->gadget_address,
        nullptr,
        module_full_name,
        module_name,
        (MB_YESNOCANCEL | MB_ICONQUESTION)
    );
}

auto STDMETHODCALLTYPE Input::directinputdevice8_getdevicestate(
    const LPDIRECTINPUTDEVICE8 directinputdevice8,
    const DWORD data_size_in_bytes,
    const LPVOID data
) noexcept -> HRESULT {
    const auto result =
        context.input->minhook.stdcall<0, HRESULT>(directinputdevice8, data_size_in_bytes, data);
    if ( result != DI_OK ) [[unlikely]] {
        return result;
    }
    switch ( data_size_in_bytes ) {
        case sizeof(DIMOUSESTATE): {
            auto &mouse_state = *(LPDIMOUSESTATE)(data);
            const auto is_button_swapped =
                (context.user32->get_system_metrics(context.user32->gadget_address, SM_SWAPBUTTON)
                 != 0);
            for ( const auto [button_index, is_button_down] :
                  mouse_state.rgbButtons | std::views::enumerate ) {
                if ( button_index > ImGuiMouseButton_Right ) {
                    break;
                }
                auto mouse_button = ImGuiMouseButton {};
                if ( is_button_swapped ) {
                    if ( button_index == ImGuiMouseButton_Left ) {
                        mouse_button = ImGuiMouseButton_Right;
                    } else if ( button_index == ImGuiMouseButton_Right ) {
                        mouse_button = ImGuiMouseButton_Left;
                    } else {
                        mouse_button = static_cast<ImGuiMouseButton>(button_index);
                    }
                } else {
                    mouse_button = static_cast<ImGuiMouseButton>(button_index);
                }
                const auto is_mouse_down = (is_button_down & 0x80);
                is_button_down &= ~0x80;
                if ( is_mouse_down ) {
                    if ( !ImGui::IsMouseDown(mouse_button) ) {
                        auto msg = UINT {};
                        auto w_param = WPARAM {};
                        switch ( mouse_button ) {
                            case ImGuiMouseButton_Left:
                                msg = WM_LBUTTONDOWN;
                                w_param = VK_LBUTTON;
                                break;
                            case ImGuiMouseButton_Right:
                                msg = WM_RBUTTONDOWN;
                                w_param = VK_RBUTTON;
                                break;
                            default:
                                msg = {};
                                w_param = {};
                                break;
                        }
                        auto point = POINT {};
                        std::ignore =
                            context.user32->get_cursor_pos(context.user32->gadget_address, &point);
                        std::ignore = context.user32->post_message(
                            context.user32->gadget_address,
                            context.platform->get_window_handle(),
                            msg,
                            w_param,
                            MAKELPARAM(point.x, point.y)
                        );
                    }
                } else {
                    if ( ImGui::IsMouseDown(mouse_button)
                         && !ImGui::IsMouseReleased(mouse_button) ) {
                        auto msg = UINT {};
                        auto w_param = WPARAM {};
                        switch ( mouse_button ) {
                            case ImGuiMouseButton_Left:
                                msg = WM_LBUTTONUP;
                                w_param = VK_LBUTTON;
                                break;
                            case ImGuiMouseButton_Right:
                                msg = WM_RBUTTONUP;
                                w_param = VK_RBUTTON;
                                break;
                            default:
                                msg = {};
                                w_param = {};
                                break;
                        }
                        auto point = POINT {};
                        std::ignore =
                            context.user32->get_cursor_pos(context.user32->gadget_address, &point);
                        std::ignore = context.user32->post_message(
                            context.user32->gadget_address,
                            context.platform->get_window_handle(),
                            msg,
                            w_param,
                            MAKELPARAM(point.x, point.y)
                        );
                    }
                }
            }
            break;
        }
        case sizeof(DIMOUSESTATE2): {
            auto &mouse_state = *(LPDIMOUSESTATE2)(data);
            const auto is_button_swapped =
                (context.user32->get_system_metrics(context.user32->gadget_address, SM_SWAPBUTTON)
                 != 0);
            for ( const auto [button_index, is_button_down] :
                  mouse_state.rgbButtons | std::views::enumerate ) {
                if ( button_index > ImGuiMouseButton_Right ) {
                    break;
                }
                auto mouse_button = ImGuiMouseButton {};
                if ( is_button_swapped ) {
                    if ( button_index == ImGuiMouseButton_Left ) {
                        mouse_button = ImGuiMouseButton_Right;
                    } else if ( button_index == ImGuiMouseButton_Right ) {
                        mouse_button = ImGuiMouseButton_Left;
                    } else {
                        mouse_button = static_cast<ImGuiMouseButton>(button_index);
                    }
                } else {
                    mouse_button = static_cast<ImGuiMouseButton>(button_index);
                }
                const auto is_mouse_down = (is_button_down & 0x80);
                is_button_down &= ~0x80;
                if ( is_mouse_down ) {
                    if ( !ImGui::IsMouseDown(mouse_button) ) {
                        auto msg = UINT {};
                        auto w_param = WPARAM {};
                        switch ( mouse_button ) {
                            case ImGuiMouseButton_Left:
                                msg = WM_LBUTTONDOWN;
                                w_param = VK_LBUTTON;
                                break;
                            case ImGuiMouseButton_Right:
                                msg = WM_RBUTTONDOWN;
                                w_param = VK_RBUTTON;
                                break;
                            default:
                                msg = {};
                                w_param = {};
                                break;
                        }
                        auto point = POINT {};
                        std::ignore =
                            context.user32->get_cursor_pos(context.user32->gadget_address, &point);
                        std::ignore = context.user32->post_message(
                            context.user32->gadget_address,
                            context.platform->get_window_handle(),
                            msg,
                            w_param,
                            MAKELPARAM(point.x, point.y)
                        );
                    }
                } else {
                    if ( ImGui::IsMouseDown(mouse_button)
                         && !ImGui::IsMouseReleased(mouse_button) ) {
                        auto msg = UINT {};
                        auto w_param = WPARAM {};
                        switch ( mouse_button ) {
                            case ImGuiMouseButton_Left:
                                msg = WM_LBUTTONUP;
                                w_param = VK_LBUTTON;
                                break;
                            case ImGuiMouseButton_Right:
                                msg = WM_RBUTTONUP;
                                w_param = VK_RBUTTON;
                                break;
                            default:
                                msg = {};
                                w_param = {};
                                break;
                        }
                        auto point = POINT {};
                        std::ignore =
                            context.user32->get_cursor_pos(context.user32->gadget_address, &point);
                        std::ignore = context.user32->post_message(
                            context.user32->gadget_address,
                            context.platform->get_window_handle(),
                            msg,
                            w_param,
                            MAKELPARAM(point.x, point.y)
                        );
                    }
                }
            }
            break;
        }
        default:
            break;
    }
    return result;
}

auto STDMETHODCALLTYPE Input::directinputdevice8_getdevicedata(
    const LPDIRECTINPUTDEVICE8 directinputdevice8,
    const DWORD data_size_in_bytes,
    const LPDIDEVICEOBJECTDATA data,
    const LPDWORD data_count,
    const DWORD data_flags
) noexcept -> HRESULT {
    return context.input->minhook
        .stdcall<1, HRESULT>(directinputdevice8, data_size_in_bytes, data, data_count, data_flags);
}
