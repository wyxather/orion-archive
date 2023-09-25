#include "orion.h"

auto APIENTRY DllEntryPoint(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) -> BOOL {
    return orion::entry(module_handle, reason_for_call, reserved);
}
