#include "kernel32.h"

using orion::modules::Kernel32;

Kernel32::Kernel32() noexcept {
    const auto kernel32 = LI_MOD("kernel32.dll")::get();
    alloc_console = LI_FUNC(AllocConsole)::in(kernel32);
    close_handle = LI_FUNC(CloseHandle)::in(kernel32);
    create_thread = LI_FUNC(CreateThread)::in(kernel32);
    free_console = LI_FUNC(FreeConsole)::in(kernel32);
    free_library_and_exit_thread =
        LI_FUNC(FreeLibraryAndExitThread)::in(kernel32);
    get_console_window = LI_FUNC(GetConsoleWindow)::in(kernel32);
    get_current_process_id = LI_FUNC(GetCurrentProcessId)::in(kernel32);
    get_std_handle = LI_FUNC(GetStdHandle)::in(kernel32);
    set_console_ctrl_handler = LI_FUNC(SetConsoleCtrlHandler)::in(kernel32);
    set_console_text_attribute = LI_FUNC(SetConsoleTextAttribute)::in(kernel32);
    sleep = LI_FUNC(Sleep)::in(kernel32);
}

Kernel32::~Kernel32() noexcept {
    alloc_console = nullptr;
    close_handle = nullptr;
    create_thread = nullptr;
    free_console = nullptr;
    free_library_and_exit_thread = nullptr;
    get_console_window = nullptr;
    get_current_process_id = nullptr;
    get_std_handle = nullptr;
    set_console_ctrl_handler = nullptr;
    set_console_text_attribute = nullptr;
    sleep = nullptr;
}
