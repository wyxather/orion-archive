#include "source/context.h"
#include "source/utility/windows.h"

using orion::context;

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(const HMODULE module_handle, const DWORD reason_for_call, const LPVOID reserved) {
    const auto crt_init = _CRT_INIT(module_handle, reason_for_call, reserved);
    if ( (reason_for_call == DLL_PROCESS_ATTACH) && (crt_init == TRUE) ) {
        context.handle.emplace(module_handle);
    }
    return crt_init;
}
