#include "orion.h"

using orion::modules::User32;
using orion::utilities::String;

User32::User32() noexcept :
    handle {LI_MOD("user32.dll")::safe<decltype(handle)>()} {
    if (handle == nullptr) {
        handle = orion.get_kernel32().load_library_a(String<"user32.dll">());
    }
    call_window_proc = LI_FUNC(CallWindowProc)::in(handle);
    create_window_ex = LI_FUNC(CreateWindowEx)::in(handle);
    destroy_window = LI_FUNC(DestroyWindow)::in(handle);
    enum_windows = LI_FUNC(EnumWindows)::in(handle);
    get_class_name_a = LI_FUNC(GetClassNameA)::in(handle);
    get_cursor_pos = LI_FUNC(GetCursorPos)::in(handle);
    get_window_long_ptr = LI_FUNC(GetWindowLongPtr)::in(handle);
    get_window_text_a = LI_FUNC(GetWindowTextA)::in(handle);
    get_window_text_length_a = LI_FUNC(GetWindowTextLengthA)::in(handle);
    get_window_thread_process_id =
        LI_FUNC(GetWindowThreadProcessId)::in(handle);
    is_window_visible = LI_FUNC(IsWindowVisible)::in(handle);
    message_box_a = LI_FUNC(MessageBoxA)::in(handle);
    post_message = LI_FUNC(PostMessage)::in(handle);
    register_class_ex = LI_FUNC(RegisterClassEx)::in(handle);
    set_window_long_ptr = LI_FUNC(SetWindowLongPtr)::in(handle);
    unregister_class = LI_FUNC(UnregisterClass)::in(handle);
}

User32::~User32() noexcept {
    if (handle != nullptr) {
        orion.get_kernel32().free_library(handle);
        handle = nullptr;
    }
    call_window_proc = nullptr;
    create_window_ex = nullptr;
    destroy_window = nullptr;
    enum_windows = nullptr;
    get_class_name_a = nullptr;
    get_cursor_pos = nullptr;
    get_window_long_ptr = nullptr;
    get_window_text_a = nullptr;
    get_window_text_length_a = nullptr;
    get_window_thread_process_id = nullptr;
    is_window_visible = nullptr;
    message_box_a = nullptr;
    post_message = nullptr;
    register_class_ex = nullptr;
    set_window_long_ptr = nullptr;
    unregister_class = nullptr;
}
