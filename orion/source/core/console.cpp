#include "source/orion.h"

using orion::core::Console;

Console::Console() noexcept {
    const auto& kernel32 = orion.get_kernel32();
    kernel32.alloc_console();
    freopen_s(
        &stream,
        utilities::String<"CONOUT$">(),
        utilities::String<"w">(),
        stdout
    );
    std_output_handle = kernel32.get_std_handle(STD_OUTPUT_HANDLE);
    kernel32.set_console_ctrl_handler(ctrl_handler, TRUE);
    const auto window = kernel32.get_console_window();
    const auto& user32 = orion.get_user32();
    user32.set_window_long_ptr(
        window,
        GWL_STYLE,
        user32.get_window_long_ptr(window, GWL_STYLE) & ~WS_SYSMENU
    );
}

Console::~Console() noexcept {
    std::fclose(stream);
    orion.get_kernel32().free_console();
    std_output_handle = nullptr;
    stream = nullptr;
}

auto Console::set_text_output_color(const WORD color) const noexcept -> void {
    orion.get_kernel32().set_console_text_attribute(std_output_handle, color);
}

auto WINAPI Console::ctrl_handler(const DWORD ctrl_type) noexcept -> BOOL {
    switch (ctrl_type) {
        case CTRL_C_EVENT:
        case CTRL_BREAK_EVENT:
            return TRUE;
        default:
            return FALSE;
    }
}
