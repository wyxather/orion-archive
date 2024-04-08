#include "source/import/kernel32.h"

#include "source/utility/module.h"
#include "source/utility/pointer.h"
#include "source/utility/xorpat.h"
#include "source/utility/xorstr.h"

#define macro_to_string(func) #func
#define resolve_macro(func) macro_to_string(func)

using orion::import::Kernel32;
using orion::utility::Pointer;
using orion::utility::XorPat;
using orion::utility::XorStr;

static constexpr auto jmp_rbx = XorPat<"FF 23", 0> {};

Kernel32::Kernel32(const utility::Module &kernel32) noexcept {
    gadget_address =
        Pointer { decltype(jmp_rbx)::find(kernel32.get_code_section()) }.value<std::uintptr_t>();
    alloc_console = decltype(alloc_console) {
        kernel32.get_export_function(XorStr<"AllocConsole">::access().data()),
    };
    free_console = decltype(free_console) {
        kernel32.get_export_function(XorStr<"FreeConsole">::access().data()),
    };
    set_console_ctrl_handler = decltype(set_console_ctrl_handler) {
        kernel32.get_export_function(XorStr<"SetConsoleCtrlHandler">::access().data()),
    };
    get_std_handle = decltype(get_std_handle) {
        kernel32.get_export_function(XorStr<"GetStdHandle">::access().data()),
    };
    get_console_window = decltype(get_console_window) {
        kernel32.get_export_function(XorStr<"GetConsoleWindow">::access().data()),
    };
    set_console_text_attribute = decltype(set_console_text_attribute) {
        kernel32.get_export_function(XorStr<"SetConsoleTextAttribute">::access().data()),
    };
    write_console_a = decltype(write_console_a) {
        kernel32.get_export_function(XorStr<"WriteConsoleA">::access().data()),
    };
    write_console_w = decltype(write_console_w) {
        kernel32.get_export_function(XorStr<"WriteConsoleW">::access().data()),
    };
    get_local_time = decltype(get_local_time) {
        kernel32.get_export_function(XorStr<"GetLocalTime">::access().data()),
    };
    get_time_format_a = decltype(get_time_format_a) {
        kernel32.get_export_function(XorStr<"GetTimeFormatA">::access().data()),
    };
    get_time_format_w = decltype(get_time_format_w) {
        kernel32.get_export_function(XorStr<"GetTimeFormatW">::access().data()),
    };
    get_date_format_a = decltype(get_date_format_a) {
        kernel32.get_export_function(XorStr<"GetDateFormatA">::access().data()),
    };
    get_date_format_w = decltype(get_date_format_w) {
        kernel32.get_export_function(XorStr<"GetDateFormatW">::access().data()),
    };
}
