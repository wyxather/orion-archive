#include "source/modules/kernel32.h"

#include "source/modules/modules.h"

using orion::modules::Kernel32;

Kernel32::Kernel32() noexcept
{
    const auto handle = LI_MOD("kernel32.dll")::get();
    alloc_console = LI_FUNC(AllocConsole)::in(handle);
    close_handle = LI_FUNC(CloseHandle)::in(handle);
    create_thread = LI_FUNC(CreateThread)::in(handle);
    free_console = LI_FUNC(FreeConsole)::in(handle);
    free_library = LI_FUNC(FreeLibrary)::in(handle);
    free_library_and_exit_thread = LI_FUNC(FreeLibraryAndExitThread)::in(handle);
    get_console_window = LI_FUNC(GetConsoleWindow)::in(handle);
    get_current_process = LI_FUNC(GetCurrentProcess)::in(handle);
    get_current_process_id = LI_FUNC(GetCurrentProcessId)::in(handle);
    get_module_handle_a = LI_FUNC(GetModuleHandleA)::in(handle);
    get_module_information = LI_FUNC(GetModuleInformation)::in(handle);
    get_proc_address = LI_FUNC(GetProcAddress)::in(handle);
    get_std_handle = LI_FUNC(GetStdHandle)::in(handle);
    load_library_a = LI_FUNC(LoadLibraryA)::in(handle);
    set_console_ctrl_handler = LI_FUNC(SetConsoleCtrlHandler)::in(handle);
    set_console_text_attribute = LI_FUNC(SetConsoleTextAttribute)::in(handle);
    sleep = LI_FUNC(Sleep)::in(handle);
    virtual_query = LI_FUNC(VirtualQuery)::in(handle);
}

Kernel32::~Kernel32() noexcept
{
    alloc_console = nullptr;
    close_handle = nullptr;
    create_thread = nullptr;
    free_console = nullptr;
    free_library = nullptr;
    free_library_and_exit_thread = nullptr;
    get_console_window = nullptr;
    get_current_process = nullptr;
    get_current_process_id = nullptr;
    get_module_handle_a = nullptr;
    get_module_information = nullptr;
    get_proc_address = nullptr;
    get_std_handle = nullptr;
    load_library_a = nullptr;
    set_console_ctrl_handler = nullptr;
    set_console_text_attribute = nullptr;
    sleep = nullptr;
    virtual_query = nullptr;
}
