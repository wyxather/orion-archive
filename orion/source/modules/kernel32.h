#pragma once

namespace orion::modules {

    class Kernel32 final {
    public:
        NON_COPYABLE(Kernel32)
        NON_MOVEABLE(Kernel32)

        explicit Kernel32() noexcept;

        ~Kernel32() noexcept;

        decltype(&CloseHandle) close_handle = nullptr;
        decltype(&CreateThread) create_thread = nullptr;
        decltype(&FreeLibraryAndExitThread) free_library_and_exit_thread =
            nullptr;
        decltype(&Sleep) sleep = nullptr;
    };

}  // namespace orion::modules
