#include "kernel32.h"

using orion::modules::Kernel32;

Kernel32::Kernel32() noexcept {
    const auto kernel32 = LI_MOD("kernel32.dll")::get();
    close_handle = LI_FUNC(CloseHandle)::in(kernel32);
    create_thread = LI_FUNC(CreateThread)::in(kernel32);
    free_library_and_exit_thread =
        LI_FUNC(FreeLibraryAndExitThread)::in(kernel32);

    sleep = LI_FUNC(Sleep)::in(kernel32);
}

Kernel32::~Kernel32() noexcept {
    close_handle = nullptr;
    create_thread = nullptr;
    free_library_and_exit_thread = nullptr;
    sleep = nullptr;
}
