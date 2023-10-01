#pragma once

namespace orion::modules {

    class Kernel32 final {
    public:
        NON_COPYABLE(Kernel32)
        NON_MOVEABLE(Kernel32)

        explicit Kernel32() noexcept;

        ~Kernel32() noexcept;

        decltype(&AllocConsole) alloc_console = nullptr;
        decltype(&CloseHandle) close_handle = nullptr;
        decltype(&CreateThread) create_thread = nullptr;
        decltype(&FreeConsole) free_console = nullptr;
        decltype(&FreeLibrary) free_library = nullptr;
        decltype(&FreeLibraryAndExitThread) free_library_and_exit_thread =
            nullptr;
        decltype(&GetConsoleWindow) get_console_window = nullptr;
        decltype(&GetCurrentProcess) get_current_process = nullptr;
        decltype(&GetCurrentProcessId) get_current_process_id = nullptr;
        decltype(&GetModuleHandleA) get_module_handle_a = nullptr;
        decltype(&GetModuleInformation) get_module_information = nullptr;
        decltype(&GetProcAddress) get_proc_address = nullptr;
        decltype(&GetStdHandle) get_std_handle = nullptr;
        decltype(&LoadLibraryA) load_library_a = nullptr;
        decltype(&SetConsoleCtrlHandler) set_console_ctrl_handler = nullptr;
        decltype(&SetConsoleTextAttribute) set_console_text_attribute = nullptr;
        decltype(&Sleep) sleep = nullptr;
        decltype(&VirtualQuery) virtual_query = nullptr;
    };

}  // namespace orion::modules
