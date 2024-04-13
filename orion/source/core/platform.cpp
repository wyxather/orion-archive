#include "source/core/platform.h"

#include <cassert>
#include <tuple>

#include "dependency/imgui/imgui_impl_win32.h"
#include "source/application.h"
#include "source/context.h"
#include "source/core/gui.h"
#include "source/import/kernel32.h"
#include "source/import/user32.h"
#include "source/redirect.h"
#include "source/utility/module/peb.h"
#include "source/utility/string.h"
#include "source/utility/xorstr.h"

using orion::core::Platform;
using orion::utility::String;
using orion::utility::XorStr;
using orion::utility::module::Peb;

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

Platform::Platform(const import::Ntdll &, const import::Kernel32 &, const import::User32 &user32) noexcept {
    std::ignore =
        user32.enum_windows(user32.gadget_address, (WNDENUMPROC)(enum_windows_proc), (LPARAM)(this));
}

auto Platform::hook() noexcept -> void {
    assert(original_window_proc == nullptr);
    original_window_proc = (WNDPROC)(context.user32->set_window_long_ptr(
        context.user32->gadget_address,
        window_handle,
        GWLP_WNDPROC,
        (LONG_PTR)(window_proc)
    ));
}

auto Platform::unhook() const noexcept -> void {
    std::ignore = context.user32->set_window_long_ptr(
        context.user32->gadget_address,
        window_handle,
        GWLP_WNDPROC,
        (LONG_PTR)(original_window_proc)
    );
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
}

auto Platform::get_window_handle() const noexcept -> HWND {
    return window_handle;
}

auto Platform::new_frame() noexcept -> void {
    return ImGui_ImplWin32_NewFrame();
}

auto Platform::enum_windows_proc(const HWND window, Platform &platform) noexcept -> BOOL {
    if ( !is_equal_to_current_process_id(get_window_thread_process_id(window))
         || !is_window_visible(window) ) {
        return TRUE;
    }
    const auto window_class_name = get_window_class_name(window);
    if ( is_console_window(window_class_name.data()) ) [[unlikely]] {
        return TRUE;
    }
    const auto window_text_length = get_window_text_length(window);
    if ( window_text_length == 0 ) {
        return TRUE;
    }
    switch ( get_user_input(
        window_class_name.data(),
        get_window_text(window, window_text_length).data()
    ) ) {
        case IDYES:
            platform.window_handle = window;
            [[fallthrough]];
        case IDCANCEL:
            break;
        default:
            return TRUE;
    }
    return FALSE;
}

auto Platform::window_proc(const HWND window, const UINT message, const WPARAM w_param, const LPARAM l_param) noexcept -> LRESULT {
    if ( ImGui::GetCurrentContext() == nullptr ) [[unlikely]] {
        ImGui::SetAllocatorFunctions(
            Redirect::imgui_alloc,
            Redirect::imgui_free,
            context.kernel32->get_process_heap(context.kernel32->gadget_address)
        );
        ImGui::CreateContext();
        ImGui_ImplWin32_Init(window);
        Application::setup();
    }
    if ( ImGui_ImplWin32_WndProcHandler(window, message, w_param, l_param)
         != LRESULT {} ) [[unlikely]] {
        return TRUE;
    }
    const auto call_window_proc = context.user32->call_window_proc;
    const auto gadget_address = context.user32->gadget_address;
    const auto original_window_proc = context.platform->original_window_proc;
#if NDEBUG
    if ( is_being_debugged() ) [[unlikely]] {
        Application::exit(true);
        return call_window_proc(gadget_address, original_window_proc, window, message, w_param, l_param);
    }
#endif
    switch ( message ) {
        case WM_DESTROY:
            Application::exit(false);
            return call_window_proc(gadget_address, original_window_proc, window, message, w_param, l_param);
        case WM_KEYUP: {
            switch ( w_param ) {
                case VK_END:
                    Application::exit(true);
                    return FALSE;
                case VK_INSERT:
                    context.gui->toggle_open();
                    break;
                default:
                    [[likely]] break;
            }
            break;
        }
        default:
            [[likely]] break;
    }
    if ( context.gui->is_open() ) [[unlikely]] {
        switch ( message ) {
            case WM_LBUTTONDOWN:
            case WM_LBUTTONDBLCLK:
            case WM_RBUTTONDOWN:
            case WM_RBUTTONDBLCLK:
            case WM_MBUTTONDOWN:
            case WM_MBUTTONDBLCLK:
            case WM_XBUTTONDOWN:
            case WM_XBUTTONDBLCLK:
            case WM_LBUTTONUP:
            case WM_RBUTTONUP:
            case WM_MBUTTONUP:
            case WM_XBUTTONUP:
            case WM_MOUSEWHEEL:
            case WM_MOUSEHWHEEL:
            case WM_KEYDOWN:
            case WM_KEYUP:
            case WM_SYSKEYDOWN:
            case WM_SYSKEYUP:
            case WM_CHAR:
                return FALSE;
            default:
                break;
        }
    }
    return call_window_proc(gadget_address, original_window_proc, window, message, w_param, l_param);
}

auto Platform::is_being_debugged() noexcept -> bool {
    return Peb::get().is_being_debugged();
}

auto Platform::get_window_thread_process_id(const HWND window) noexcept -> DWORD {
    auto thread_process_id = DWORD {};
    std::ignore =
        context.user32->get_window_thread_process_id(context.user32->gadget_address, window, &thread_process_id);
    return thread_process_id;
}

auto Platform::is_equal_to_current_process_id(const DWORD process_id) noexcept -> bool {
    const auto current_process_id =
        context.kernel32->get_current_process_id(context.kernel32->gadget_address);
    return current_process_id == process_id;
}

auto Platform::is_window_visible(const HWND window) noexcept -> bool {
    const auto window_is_visible =
        context.user32->is_window_visible(context.user32->gadget_address, window);
    return window_is_visible == TRUE;
}

auto Platform::get_window_class_name(const HWND window) noexcept -> std::array<CHAR, 257> {
    auto class_name = std::array<CHAR, 257> {};
    std::ignore = context.user32->get_class_name_a(
        context.user32->gadget_address,
        window,
        class_name.data(),
        static_cast<int>(class_name.size())
    );
    return class_name;
}

auto Platform::is_console_window(const char *const window_class_name) noexcept -> bool {
    return String<char>::strcmp(XorStr<"ConsoleWindowClass">::access().data(), window_class_name)
        == 0;
}

auto Platform::get_window_text_length(const HWND window) noexcept -> int {
    return context.user32->get_window_text_length_a(context.user32->gadget_address, window);
}

auto Platform::get_window_text(const HWND window, const int window_text_length) noexcept
    -> std::vector<CHAR> {
    auto window_text = std::vector<char>(window_text_length + 1);
    std::ignore = context.user32->get_window_text_a(
        context.user32->gadget_address,
        window,
        window_text.data(),
        static_cast<int>(window_text.size())
    );
    return window_text;
}

auto Platform::get_user_input(const char *const window_class_name, const char *const window_text) noexcept -> int {
    return context.user32->message_box_a(
        context.user32->gadget_address,
        nullptr,
        window_text,
        window_class_name,
        (MB_YESNOCANCEL | MB_ICONQUESTION)
    );
}
