#pragma once

namespace orion::modules {

    class Kernel32 final {
    public:
        NON_COPYABLE(Kernel32)
        NON_MOVEABLE(Kernel32)

        explicit Kernel32(void* const module_address) noexcept;

        ~Kernel32() noexcept;

        decltype(&AllocConsole) alloc_console = nullptr;
        decltype(&CloseHandle) close_handle = nullptr;
        decltype(&CreateThread) create_thread = nullptr;
        decltype(&FreeConsole) free_console = nullptr;
        decltype(&FreeLibraryAndExitThread) free_library_and_exit_thread =
            nullptr;
        decltype(&GetConsoleWindow) get_console_window = nullptr;
        decltype(&GetCurrentProcessId) get_current_process_id = nullptr;
        decltype(&GetStdHandle) get_std_handle = nullptr;
        decltype(&SetConsoleCtrlHandler) set_console_ctrl_handler = nullptr;
        decltype(&SetConsoleTextAttribute) set_console_text_attribute = nullptr;
        decltype(&Sleep) sleep = nullptr;
    };

}  // namespace orion::modules