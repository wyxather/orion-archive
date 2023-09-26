#include "Platform.h"

#include "Dependencies/ImGui/imgui_impl_win32.h"
#include "Orion.h"

auto orion::Platform::Enumerator::match(const HWND handle) noexcept -> bool {
    DWORD id {};
    IMPORT(GetWindowThreadProcessId)(handle, &id);
    return id == IMPORT(GetCurrentProcessId)();
}

auto CALLBACK
orion::Platform::Enumerator::enumerate(const HWND handle, Data& data) noexcept
    -> BOOL {
    if (!Enumerator::match(handle))
        return TRUE;

    if (data.window_class.has_value()) {
        if (std::array<CHAR, 257> name {};
            IMPORT(GetClassNameA)(
                handle,
                name.data(),
                static_cast<int>(name.size())
            ) == 0
            || data.window_class.value() != utils::Fnv1a<>::hash(name.data()))
            return TRUE;
    } else if (data.window_text.has_value()) {
        if (std::array<CHAR, 257> name {};
            IMPORT(GetWindowTextA)(
                handle,
                name.data(),
                static_cast<int>(name.size())
            ) == 0
            || data.window_text.value() != utils::Fnv1a<>::hash(name.data()))
            return TRUE;
    } else {
        if (std::array<std::array<CHAR, 257>, 2> name {};
            IMPORT(GetClassNameA)(
                handle,
                name[0].data(),
                static_cast<int>(name[0].size())
            ) == 0
            || utils::Fnv1a<"ConsoleWindowClass">::match(name[0].data())
            || IMPORT(GetWindowTextA)(
                   handle,
                   name[1].data(),
                   static_cast<int>(name[1].size())
               ) == 0
            || IMPORT(MessageBoxA)(
                   nullptr,
                   name[1].data(),
                   name[0].data(),
                   MB_YESNO | MB_ICONINFORMATION
               ) != IDYES) {
            return TRUE;
        }
    }

    data.enumerator.handle = handle;

    return FALSE;
}

orion::Platform::~Platform() noexcept {
    if (ImGui::GetCurrentContext() == nullptr)
        return;

    if (ImGui::GetIO().BackendPlatformUserData != nullptr)
        ImGui_ImplWin32_Shutdown();

    ImGui::DestroyContext();
}

auto orion::Platform::new_frame() const noexcept -> void {
    return ImGui_ImplWin32_NewFrame();
}

namespace orion::Window {
    auto CALLBACK procedure(
        HWND handle,
        UINT message,
        WPARAM w_param,
        LPARAM l_param
    ) noexcept -> LRESULT;
}

auto orion::Platform::hook() noexcept -> void {
    if (Platform::enumerator.handle == nullptr)
        return;

    if (Platform::original != nullptr)
        return;

    Platform::original =
        reinterpret_cast<decltype(Platform::original)>(IMPORT(SetWindowLongPtr)(
            Platform::enumerator.handle,
            GWLP_WNDPROC,
            reinterpret_cast<LPARAM>(&Window::procedure)
        ));
}

auto orion::Platform::unhook() const noexcept -> void {
    if (Platform::original != nullptr)
        IMPORT(SetWindowLongPtr)
    (Platform::enumerator.handle, GWLP_WNDPROC, LPARAM(Platform::original));
}

IMGUI_IMPL_API
LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

auto CALLBACK orion::Platform::Window::procedure(
    const HWND window_handle,
    const UINT message,
    const WPARAM w_param,
    const LPARAM l_param
) noexcept -> LRESULT {
    if (ImGui::GetCurrentContext() != nullptr) {
        ImGui_ImplWin32_WndProcHandler(
            window_handle,
            message,
            w_param,
            l_param
        );
    } else {
        ImGui::CreateContext();
        ImGui_ImplWin32_Init(window_handle);
        ImGui_ImplWin32_WndProcHandler(
            window_handle,
            message,
            w_param,
            l_param
        );
        orion::Application::setup();
    }
    if (message == WM_KEYUP) {
        switch (w_param) {
            case VK_END:
                orion::Application::exit();
                break;
            case VK_INSERT:
                orion.get_gui().toggle();
                break;
            default:
                break;
        }
    }
    if (orion.get_gui().is_open()) {
        switch (message) {
            default:
                break;
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
        }
    }
    return IMPORT(CallWindowProc)
        .cached()(
            orion.get_platform().get_original(),
            window_handle,
            message,
            w_param,
            l_param
        );
}
