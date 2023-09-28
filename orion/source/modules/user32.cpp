#include "user32.h"

using orion::modules::User32;

User32::User32(void* const module_address) noexcept {
    call_window_proc = LI_FUNC(CallWindowProc)::in(module_address);
    enum_windows = LI_FUNC(EnumWindows)::in(module_address);
    get_class_name_a = LI_FUNC(GetClassNameA)::in(module_address);
    get_window_long_ptr = LI_FUNC(GetWindowLongPtr)::in(module_address);
    get_window_text_a = LI_FUNC(GetWindowTextA)::in(module_address);
    get_window_text_length_a =
        LI_FUNC(GetWindowTextLengthA)::in(module_address);
    get_window_thread_process_id =
        LI_FUNC(GetWindowThreadProcessId)::in(module_address);
    is_window_visible = LI_FUNC(IsWindowVisible)::in(module_address);
    message_box_a = LI_FUNC(MessageBoxA)::in(module_address);
    set_window_long_ptr = LI_FUNC(SetWindowLongPtr)::in(module_address);
}

User32::~User32() noexcept {
    call_window_proc = nullptr;
    enum_windows = nullptr;
    get_class_name_a = nullptr;
    get_window_long_ptr = nullptr;
    get_window_text_a = nullptr;
    get_window_text_length_a = nullptr;
    get_window_thread_process_id = nullptr;
    is_window_visible = nullptr;
    message_box_a = nullptr;
    set_window_long_ptr = nullptr;
}
