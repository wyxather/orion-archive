#include "orion.h"

#include "core/console.h"
#include "dependencies/minhook/include/MinHook.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

auto orion::EntryPoint::process(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) noexcept -> BOOL {
    const auto crt_init_result =
        _CRT_INIT(module_handle, reason_for_call, reserved);
    if (crt_init_result == TRUE && reason_for_call == DLL_PROCESS_ATTACH) {
        orion.handle = module_handle;
        core::console.emplace();
        orion.platform.emplace(std::nullopt, std::nullopt);
        orion.renderer.emplace(Renderer::Enumerate::MANUAL);
        orion.input.emplace(Input::Enumerate::MANUAL);
        orion.platform->hook();
    }
    return crt_init_result;
}

auto orion::Application::setup() noexcept -> void {
    orion.config.emplace();
    orion.gui.emplace();
    orion.game.emplace();
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_Initialize();
    }
    orion.game->hook();
    orion.input->hook();
    orion.renderer->hook();
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_EnableHook(MH_ALL_HOOKS);
    }
}

[[noreturn]] static auto WINAPI unload(LPCVOID) noexcept -> void {
    IMPORT(Sleep)(500);
    const auto orion_handle = orion::orion.get_handle();
    _CRT_INIT(orion_handle, DLL_PROCESS_DETACH, nullptr);
    IMPORT(FreeLibraryAndExitThread)(orion_handle, EXIT_SUCCESS);
}

auto orion::Application::exit() noexcept -> void {
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_DisableHook(MH_ALL_HOOKS);
    }
    orion.game->unhook();
    orion.input->unhook();
    orion.renderer->unhook();
    orion.platform->unhook();
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

orion::Orion::~Orion() noexcept {
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
        MH_Uninitialize();
    }
    core::console.reset();
}
