#include "source/dllmain.h"

#include "source/orion.h"

using orion::EntryPoint;
using orion::core::Input;
using orion::core::Renderer;

auto EntryPoint::on_attach(const HMODULE module_handle) noexcept -> void {
    orion.handle = module_handle;
    orion.kernel32.emplace();
    orion.user32.emplace();
    orion.shell32.emplace();
    orion.combase.emplace();
    orion.console.emplace();
    orion.platform.emplace(std::nullopt, std::nullopt);
    orion.renderer.emplace(Renderer::Enumerate::Manual);
    orion.input.emplace(Input::Enumerate::Manual);
    orion.platform->hook();
}

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

auto APIENTRY DllEntryPoint(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) -> BOOL {
    const auto crt_init_result =
        _CRT_INIT(module_handle, reason_for_call, reserved);
    if (reason_for_call == DLL_PROCESS_ATTACH && crt_init_result == TRUE) {
        EntryPoint::on_attach(module_handle);
    }
    return crt_init_result;
}
