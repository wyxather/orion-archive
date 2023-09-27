#include "entry_point.h"

auto APIENTRY DllEntryPoint(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) -> BOOL {
    return orion::EntryPoint::process(module_handle, reason_for_call, reserved);
}
