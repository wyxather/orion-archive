#include "source/core/console.h"

#include <tuple>

#include "source/context.h"
#include "source/import/kernel32.h"
#include "source/import/user32.h"

using orion::core::Console;
using orion::utility::String;
using orion::utility::XorStr;

auto Console::get() noexcept -> const Console & {
    return *context.console;
}

auto Console::get_ntdll() noexcept -> const import::Ntdll & {
    return *context.ntdll;
}

auto Console::get_local_time(SYSTEMTIME &local_time) noexcept -> void {
    return context.kernel32->get_local_time(context.kernel32->gadget_address, &local_time);
}

auto Console::get_date_format(
    const SYSTEMTIME &local_time,
    const LPCSTR format,
    const LPSTR buffer,
    const int size
) noexcept -> int {
    return context.kernel32->get_date_format_a(
        context.kernel32->gadget_address,
        LOCALE_USER_DEFAULT,
        0,
        &local_time,
        format,
        buffer,
        size
    );
}

auto Console::get_date_format(
    const SYSTEMTIME &local_time,
    const LPCWSTR format,
    const LPWSTR buffer,
    const int size
) noexcept -> int {
    return context.kernel32->get_date_format_w(
        context.kernel32->gadget_address,
        LOCALE_USER_DEFAULT,
        0,
        &local_time,
        format,
        buffer,
        size
    );
}

auto Console::get_time_format(
    const SYSTEMTIME &local_time,
    const LPCSTR format,
    const LPSTR buffer,
    const int size
) noexcept -> int {
    return context.kernel32->get_time_format_a(
        context.kernel32->gadget_address,
        LOCALE_NAME_USER_DEFAULT,
        0,
        &local_time,
        format,
        buffer,
        size
    );
}

auto Console::get_time_format(
    const SYSTEMTIME &local_time,
    const LPCWSTR format,
    const LPWSTR buffer,
    const int size
) noexcept -> int {
    return context.kernel32->get_time_format_w(
        context.kernel32->gadget_address,
        LOCALE_NAME_USER_DEFAULT,
        0,
        &local_time,
        format,
        buffer,
        size
    );
}

Console::Console(const import::Ntdll &, const import::Kernel32 &kernel32, const import::User32 &user32) noexcept {
    std::ignore = kernel32.alloc_console(kernel32.gadget_address);
    std::ignore =
        kernel32.set_console_ctrl_handler(kernel32.gadget_address, ctrl_handler, TRUE);
    std_output_handle = kernel32.get_std_handle(kernel32.gadget_address, STD_OUTPUT_HANDLE);
    const auto window = kernel32.get_console_window(kernel32.gadget_address);
    std::ignore = user32.set_window_long_ptr(
        user32.gadget_address,
        window,
        GWL_STYLE,
        (user32.get_window_long_ptr(user32.gadget_address, window, GWL_STYLE) & ~WS_SYSMENU)
    );
}

Console::~Console() noexcept {
    std::ignore = context.kernel32->free_console(context.kernel32->gadget_address);
}

auto Console::set_output_color(const WORD color) const noexcept -> void {
    std::ignore =
        context.kernel32->set_console_text_attribute(context.kernel32->gadget_address, std_output_handle, color);
}

auto Console::write(const char *const str, const std::uint32_t length) const noexcept -> void {
    std::ignore = context.kernel32->write_console_a(
        context.kernel32->gadget_address,
        std_output_handle,
        str,
        length,
        nullptr,
        nullptr
    );
}

auto Console::write(const wchar_t *const str, const std::uint32_t length) const noexcept -> void {
    std::ignore = context.kernel32->write_console_w(
        context.kernel32->gadget_address,
        std_output_handle,
        str,
        length,
        nullptr,
        nullptr
    );
}

auto Console::write_prefix(
    const char *const log_level_str,
    const WORD log_level_color,
    const char *const file_name,
    const std::uintmax_t line
) const noexcept -> void {
    auto local_time = SYSTEMTIME {};
    get_local_time(local_time);

    auto buffer = String<char, MAX_PATH> {};
    buffer[0] = '[';
    get_date_format(local_time, XorStr<"yyyy-MMM-dd">::access().data(), &buffer[1], 12);
    buffer[12] = ' ';
    get_time_format(local_time, XorStr<"HH':'mm':'ss">::access().data(), &buffer[13], 9);
    buffer[21] = '.';
    format_str(&buffer[22], 3, XorStr<"%03u">::access().data(), local_time.wMilliseconds);
    buffer[25] = ' ';
    write(buffer.data(), 26);

    format_str(buffer.data(), 6, XorStr<"%-6s">::access().data(), log_level_str);
    set_output_color(log_level_color);
    write(buffer.data(), 6);

    const auto written =
        format_str(buffer.data(), buffer.size(), XorStr<"%s:%zu] ">::access().data(), file_name, line);
    set_output_color(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
    write(buffer.data(), written);
}

auto Console::write_prefix(
    const wchar_t *const log_level_str,
    const WORD log_level_color,
    const wchar_t *const file_name,
    const std::uintmax_t line
) const noexcept -> void {
    auto local_time = SYSTEMTIME {};
    get_local_time(local_time);

    auto buffer = String<wchar_t, MAX_PATH> {};
    buffer[0] = L'[';
    get_date_format(local_time, XorStr<L"yyyy-MMM-dd">::access().data(), &buffer[1], 12);
    buffer[12] = L' ';
    get_time_format(local_time, XorStr<L"HH':'mm':'ss">::access().data(), &buffer[13], 9);
    buffer[21] = L'.';
    format_str(&buffer[22], 3, XorStr<L"%03u">::access().data(), local_time.wMilliseconds);
    buffer[25] = L' ';
    write(buffer.data(), 26);

    format_str(buffer.data(), 6, XorStr<L"%-6s">::access().data(), log_level_str);
    set_output_color(log_level_color);
    write(buffer.data(), 6);

    const auto written =
        format_str(buffer.data(), buffer.size(), XorStr<L"%s:%zu] ">::access().data(), file_name, line);
    set_output_color(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
    write(buffer.data(), written);
}

auto WINAPI Console::ctrl_handler(const DWORD ctrl_type) noexcept -> BOOL {
    switch ( ctrl_type ) {
        case CTRL_C_EVENT:
        case CTRL_BREAK_EVENT:
            return TRUE;
        default:
            return FALSE;
    }
}
