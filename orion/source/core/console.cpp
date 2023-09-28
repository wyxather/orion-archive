#include "console.h"

#include "source/orion.h"

using orion::core::Console;

Console::Console() noexcept {
    const auto& kernel32 = orion.get_kernel32();
    kernel32.alloc_console();
    const auto window = kernel32.get_console_window();
    if (const auto style = IMPORT(GetWindowLongPtr)(window, GWL_STYLE);
        style != 0)
        IMPORT(SetWindowLongPtr)
    (window, GWL_STYLE, style & ~WS_SYSMENU);
    freopen_s(
        &stream,
        utils::String<"CONOUT$">(),
        utils::String<"w">(),
        stdout
    );
    kernel32.set_console_ctrl_handler(ctrl_handler, TRUE);
    std_output_handle = kernel32.get_std_handle(STD_OUTPUT_HANDLE);
}

Console::~Console() noexcept {
    std::fclose(stream);
    orion.get_kernel32().free_console();
    std_output_handle = nullptr;
    stream = nullptr;
}

auto Console::update_time() noexcept -> void {
    using std::chrono::system_clock;
    const auto time_t = system_clock::to_time_t(system_clock::now());
    localtime_s(&time, &time_t);
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

auto Console::set_color(Color color) const noexcept -> void {
    orion.get_kernel32().set_console_text_attribute(
        std_output_handle,
        static_cast<WORD>(color)
    );
}
