#include "source/application.h"

#include "source/hooks/hooks.h"
#include "source/orion.h"

using orion::Application;
using orion::Unload;
using orion::hooks::MinHook;

auto Application::setup() noexcept -> void {
    orion.config.emplace();
    orion.gui.emplace();
    orion.game.emplace();
    if constexpr (std::is_same_v<hooks::Type, MinHook>) {
        MinHook::initialize();
    }
    orion.game->hook();
    orion.input->hook();
    orion.renderer->hook();
    if constexpr (std::is_same_v<hooks::Type, MinHook>) {
        MinHook::enable();
    }
}

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

auto WINAPI Unload::unload(LPCVOID) noexcept -> void {
    const auto& kernel32 = orion::orion.get_kernel32();
    kernel32.sleep(100);
    if constexpr (std::is_same_v<orion::hooks::Type, MinHook>) {
        MinHook::uninitialize();
    }
    const auto free_library_and_exit_thread =
        kernel32.free_library_and_exit_thread;
    const auto orion_handle = orion::orion.get_handle();
    _CRT_INIT(orion_handle, DLL_PROCESS_DETACH, nullptr);
    free_library_and_exit_thread(orion_handle, EXIT_SUCCESS);
}

auto Application::exit() noexcept -> void {
    if constexpr (std::is_same_v<hooks::Type, MinHook>) {
        MinHook::disable();
    }
    orion.game->unhook();
    orion.input->unhook();
    orion.renderer->unhook();
    orion.platform->unhook();
    const auto& kernel32 = orion.get_kernel32();
    const auto thread_handle = kernel32.create_thread(
        nullptr,  //lpThreadAttributes
        0,  //dwStackSize
        reinterpret_cast<LPTHREAD_START_ROUTINE>(Unload::unload
        ),  //lpStartAddress
        nullptr,  //lpParameter
        0,  //dwCreationFlags
        nullptr  //lpThreadId
    );
    if (thread_handle) {
        kernel32.close_handle(thread_handle);
    }
}
