#include "orion.h"

#include "core/console.h"
#include "dependencies/minhook/include/MinHook.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

namespace {

    HMODULE orion_handle = nullptr;

    [[noreturn]] auto WINAPI unload(const HMODULE module_handle) noexcept
        -> void {
        IMPORT(Sleep)(500);
        _CRT_INIT(module_handle, DLL_PROCESS_DETACH, nullptr);
        IMPORT(FreeLibraryAndExitThread)(module_handle, EXIT_SUCCESS);
    }

}  // namespace

orion::Orion::~Orion() noexcept {
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>)
        MH_Uninitialize();
    core::console.reset();
}

namespace orion {

    auto get_handle() noexcept -> HMODULE {
        return orion_handle;
    }

    auto EntryPoint::process(
        const HMODULE module_handle,
        const DWORD reason_for_call,
        const LPVOID reserved
    ) noexcept -> BOOL {
        const auto crt_init_result =
            _CRT_INIT(module_handle, reason_for_call, reserved);
        if (crt_init_result == TRUE && reason_for_call == DLL_PROCESS_ATTACH) {
            orion_handle = module_handle;
            core::console.emplace();
            orion.emplace();
            orion->platform.emplace(std::nullopt, std::nullopt);
            orion->renderer.emplace(Renderer::Enumerate::MANUAL);
            orion->input.emplace(Input::Enumerate::MANUAL);
            orion->platform->hook();
        }
        return crt_init_result;
    }

    auto Application::setup() noexcept -> void {
        orion->config.emplace();
        orion->gui.emplace();
        orion->game.emplace();
        if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
            MH_Initialize();
        }
        orion->game->hook();
        orion->input->hook();
        orion->renderer->hook();
        if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
            MH_EnableHook(MH_ALL_HOOKS);
        }
    }

    auto Application::exit() noexcept -> void {
        if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>) {
            MH_DisableHook(MH_ALL_HOOKS);
        }
        orion->game->unhook();
        orion->input->unhook();
        orion->renderer->unhook();
        orion->platform->unhook();
        const auto thread_handle = IMPORT(CreateThread)(
            nullptr,
            0,
            reinterpret_cast<LPTHREAD_START_ROUTINE>(unload),
            orion_handle,
            0,
            nullptr
        );
        if (thread_handle) {
            IMPORT(CloseHandle)(thread_handle);
        }
    }

}  // namespace orion
