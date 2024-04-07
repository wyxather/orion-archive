#include "source/utility/windows.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(const HMODULE module_handle, const DWORD reason_for_call, const LPVOID reserved) {
    return _CRT_INIT(module_handle, reason_for_call, reserved);
}
