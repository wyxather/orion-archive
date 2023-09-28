#include "user32.h"

using orion::modules::User32;

User32::User32() noexcept {
    const auto user32 = LI_MOD("user32.dll")::get();
    enum_windows = LI_FUNC(EnumWindows)::in(user32);
}

User32::~User32() noexcept {
    enum_windows = nullptr;
}
