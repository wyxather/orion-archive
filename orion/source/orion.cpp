#include "orion.h"

#include "core/console.h"
#include "dependencies/minhook/include/MinHook.h"

auto orion::Application::setup() noexcept -> void {
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
    IMPORT(Sleep)(500);
    const auto orion_handle = orion::context.get_handle();
    _CRT_INIT(orion_handle, DLL_PROCESS_DETACH, nullptr);
    IMPORT(FreeLibraryAndExitThread)(orion_handle, EXIT_SUCCESS);
}

auto orion::Application::exit() noexcept -> void {
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_DisableHook(MH_ALL_HOOKS);
    }
    context.game->unhook();
    context.input->unhook();
    context.renderer->unhook();
    context.platform->unhook();
    const auto thread_handle = IMPORT(CreateThread)(
        nullptr,
        0,
        reinterpret_cast<LPTHREAD_START_ROUTINE>(unload),
        nullptr,
        0,
        nullptr
    );
    if (thread_handle) {
        IMPORT(CloseHandle)(thread_handle);
    }
}

orion::Context::~Context() noexcept {
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_Uninitialize();
    }
}
