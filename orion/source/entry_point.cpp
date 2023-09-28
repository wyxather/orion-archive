#include "entry_point.h"

#include "source/modules/modules.h"
#include "source/orion.h"

using orion::EntryPoint;

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
        orion.kernel32.emplace(LI_MOD("kernel32.dll")::get());
        orion.user32.emplace(LI_MOD("user32.dll")::get());
        orion.console.emplace();
        orion.platform.emplace(std::nullopt, std::nullopt);
        orion.renderer.emplace(Renderer::Enumerate::MANUAL);
        orion.input.emplace(Input::Enumerate::MANUAL);
        orion.platform->hook();
    }
    return crt_init_result;
}
