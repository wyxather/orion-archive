#include "source/application.h"

#include "source/context.h"
#include "source/core/platform.h"
#include "source/import/kernel32.h"

using orion::Application;

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

auto Application::setup() noexcept -> void {}

auto Application::exit(const bool should_unload) noexcept -> void {
    context.platform->unhook();
    if ( should_unload ) {
        const auto thread_handle = context.kernel32->create_thread(
            context.kernel32->gadget_address,
            nullptr,
            0,
            (LPTHREAD_START_ROUTINE)(unload),
            nullptr,
            0,
            nullptr
        );
        if ( thread_handle != nullptr ) {
            std::ignore =
                context.kernel32->close_handle(context.kernel32->gadget_address, thread_handle);
        }
    } else {
        _CRT_INIT(*context.handle, DLL_PROCESS_DETACH, nullptr);
    }
}

auto WINAPI Application::unload(LPVOID) noexcept -> void {
    const auto gadget_address = context.kernel32->gadget_address;
    context.kernel32->sleep(gadget_address, 100);
    const auto module_handle = *context.handle;
    const auto free_library_and_exit_thread = context.kernel32->free_library_and_exit_thread;
    _CRT_INIT(module_handle, DLL_PROCESS_DETACH, nullptr);
    free_library_and_exit_thread(gadget_address, module_handle, EXIT_SUCCESS);
}
