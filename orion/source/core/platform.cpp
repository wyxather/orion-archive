#include "dependencies/imgui/imgui_impl_win32.h"
#include "source/application.h"
#include "source/orion.h"

using orion::core::Platform;
using orion::utilities::Fnv1a;

Platform::Platform(const std::optional<const std::uint32_t> window_class,
                   const std::optional<const std::uint32_t> window_text) noexcept
{
    const Window window{*this, orion.get_kernel32().get_current_process_id(), window_class, window_text};
    orion.get_user32().enum_windows(reinterpret_cast<WNDENUMPROC>(Window::enumerate),
                                    reinterpret_cast<LPARAM>(&window));
}

Platform::~Platform() noexcept
{
    if (ImGui::GetCurrentContext() != nullptr)
    {
        if (ImGui::GetIO().BackendPlatformUserData != nullptr)
        {
            ImGui_ImplWin32_Shutdown();
        }
        ImGui::DestroyContext();
    }
    window_handle = nullptr;
    original_window_procedure = nullptr;
}

auto Platform::hook() noexcept -> void
{
    original_window_procedure =
        reinterpret_cast<decltype(original_window_procedure)>(orion.get_user32().set_window_long_ptr(
            window_handle, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&Window::procedure)));
}

auto Platform::unhook() noexcept -> void
{
    orion.get_user32().set_window_long_ptr(window_handle, GWLP_WNDPROC,
                                           reinterpret_cast<LONG_PTR>(original_window_procedure));
}

auto Platform::imgui_new_frame() const noexcept -> void
{
    ImGui_ImplWin32_NewFrame();
}

auto Platform::Window::enumerate(const HWND window_handle, Window& window) noexcept -> BOOL
{
    if (!window.has_same_process_id(window_handle))
    {
        return TRUE;
    }
    const auto& user32 = orion.get_user32();
    if (!user32.is_window_visible(window_handle))
    {
        return TRUE;
    }
    const auto class_name = get_class_name(window_handle);
    if (Fnv1a<"ConsoleWindowClass">::eq(class_name.data()))
    {
        return TRUE;
    }
    if (window.class_name.has_value() && window.class_name.value() != Fnv1a<>::hash(class_name.data()))
    {
        return TRUE;
    }
    const auto window_text = get_window_text(window_handle);
    if (window_text.empty())
    {
        return TRUE;
    }
    if (window.text.has_value() && window.text.value() != Fnv1a<>::hash(window_text.data()))
    {
        return TRUE;
    }
    switch (const auto input = user32.message_box_a(window_handle, window_text.data(), class_name.data(),
                                                    MB_YESNOCANCEL | MB_ICONQUESTION);
            input)
    {
    case IDYES:
        window.platform.window_handle = window_handle;
        [[fallthrough]];
    case IDCANCEL:
        break;
    default:
        return TRUE;
    }
    return FALSE;
}

auto Platform::Window::has_same_process_id(const HWND window_handle) const noexcept -> bool
{
    DWORD window_thread_process_id = 0;
    orion.get_user32().get_window_thread_process_id(window_handle, &window_thread_process_id);
    return window_thread_process_id == process_id;
}

auto Platform::Window::get_class_name(const HWND window_handle) noexcept -> std::array<CHAR, 257>
{
    std::array<CHAR, 257> class_name;
    orion.get_user32().get_class_name_a(window_handle, class_name.data(), static_cast<int>(class_name.size()));
    return class_name;
}

auto Platform::Window::get_window_text(const HWND window_handle) noexcept -> std::vector<CHAR>
{
    const auto& user32 = orion.get_user32();
    const auto window_text_length = user32.get_window_text_length_a(window_handle);

    std::vector<CHAR> window_text(window_text_length);
    user32.get_window_text_a(window_handle, window_text.data(), window_text_length);
    return window_text;
}

IMGUI_IMPL_API
LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

auto CALLBACK Platform::Window::procedure(const HWND window_handle, const UINT message, const WPARAM w_param,
                                          const LPARAM l_param) noexcept -> LRESULT
{
    if (ImGui::GetCurrentContext() != nullptr)
    {
        ImGui_ImplWin32_WndProcHandler(window_handle, message, w_param, l_param);
    }
    else
    {
        ImGui::CreateContext();
        ImGui_ImplWin32_Init(window_handle);
        ImGui_ImplWin32_WndProcHandler(window_handle, message, w_param, l_param);
        Application::setup();
    }
    auto& gui = orion.get_gui();
    if (message == WM_KEYUP)
    {
        switch (w_param)
        {
        case VK_END:
            Application::exit();
            break;
        case VK_INSERT:
            gui.toggle();
            break;
        default:
            break;
        }
    }
    if (gui.is_open())
    {
        switch (message)
        {
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
    return orion.get_user32().call_window_proc(orion.get_platform().original_window_procedure, window_handle, message,
                                               w_param, l_param);
}
