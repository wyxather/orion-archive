#include "application.h"

#include "dependencies/minhook/include/MinHook.h"
#include "source/context.h"

using orion::Application;
using orion::context;

auto Application::setup() noexcept -> void {
    context.config.emplace();
    context.gui.emplace();
    context.game.emplace();
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_Initialize();
    }
    context.game->hook();
    context.input->hook();
    context.renderer->hook();
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_EnableHook(MH_ALL_HOOKS);
    }
}

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

[[noreturn]] static auto WINAPI unload(LPCVOID) noexcept -> void {
    const auto& kernel32 = context.get_kernel32();
    kernel32.sleep(100);
    if constexpr (std::is_same_v<orion::Hooks::Type, orion::Hooks::MinHook>) {
        MH_Uninitialize();
    }
    const auto free_library_and_exit_thread =
        kernel32.free_library_and_exit_thread;
    const auto orion_handle = context.get_handle();
    _CRT_INIT(orion_handle, DLL_PROCESS_DETACH, nullptr);
    free_library_and_exit_thread(orion_handle, EXIT_SUCCESS);
}

auto Application::exit() noexcept -> void {
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_DisableHook(MH_ALL_HOOKS);
    }
    context.game->unhook();
    context.input->unhook();
    context.renderer->unhook();
    context.platform->unhook();
    const auto& kernel32 = context.get_kernel32();
    const auto thread_handle = kernel32.create_thread(
        nullptr,  //lpThreadAttributes
        0,  //dwStackSize
        reinterpret_cast<LPTHREAD_START_ROUTINE>(unload),  //lpStartAddress
        nullptr,  //lpParameter
        0,  //dwCreationFlags
        nullptr  //lpThreadId
    );
    if (thread_handle) {
        kernel32.close_handle(thread_handle);
    }
}
