#include "user32.h"

using orion::modules::User32;

User32::User32(void* const module_address) noexcept {
    enum_windows = LI_FUNC(EnumWindows)::in(module_address);
}

User32::~User32() noexcept {
    enum_windows = nullptr;
}
