#pragma once

namespace orion::modules {

    class User32 final {
    public:
        NON_COPYABLE(User32)
        NON_MOVEABLE(User32)

        explicit User32(void* const module_address) noexcept;

        ~User32() noexcept;

        decltype(&EnumWindows) enum_windows = nullptr;
        decltype(&GetWindowLongPtr) get_window_long_ptr = nullptr;
        decltype(&SetWindowLongPtr) set_window_long_ptr = nullptr;
    };

}  // namespace orion::modules
