#include "console.h"

#include "source/orion.h"

using orion::core::Console;

Console::Console() noexcept {
    if (!Console::allocator)
        return;
    const auto& kernel32 = orion.get_kernel32();
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
    std_output_handle = kernel32.get_std_handle(STD_OUTPUT_HANDLE);
}

Console::~Console() noexcept {
    std::fclose(stream);
    std_output_handle = nullptr;
    stream = nullptr;
}

auto Console::update_time() noexcept -> void {
    using std::chrono::system_clock;
    const auto time_t = system_clock::to_time_t(system_clock::now());
    localtime_s(&time, &time_t);
}

auto Console::set_color(Color color) const noexcept -> void {
    orion.get_kernel32().set_console_text_attribute(
        std_output_handle,
        static_cast<WORD>(color)
    );
}
