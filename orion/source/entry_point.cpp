#include "source/entry_point.h"

#include "source/orion.h"

using orion::EntryPoint;
using orion::core::Input;
using orion::core::Renderer;

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

auto EntryPoint::process(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) noexcept -> BOOL {
    const auto crt_init_result =
        _CRT_INIT(module_handle, reason_for_call, reserved);
    if (crt_init_result == TRUE && reason_for_call == DLL_PROCESS_ATTACH) {
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
    return crt_init_result;
}
