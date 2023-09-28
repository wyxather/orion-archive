#include "user32.h"

using orion::modules::User32;

User32::User32(void* const module_address) noexcept {
    enum_windows = LI_FUNC(EnumWindows)::in(module_address);
    get_window_long_ptr = LI_FUNC(GetWindowLongPtr)::in(module_address);
    set_window_long_ptr = LI_FUNC(SetWindowLongPtr)::in(module_address);
}

User32::~User32() noexcept {
    enum_windows = nullptr;
    get_window_long_ptr = nullptr;
    set_window_long_ptr = nullptr;
}
