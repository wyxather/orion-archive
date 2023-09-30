#include "source/entry_point.h"

using orion::EntryPoint;

auto APIENTRY DllEntryPoint(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) -> BOOL {
    return EntryPoint::process(module_handle, reason_for_call, reserved);
}
