#include "Orion.h"
#include <clocale>

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(HMODULE handle, DWORD reason, LPVOID reserved)
{
    if (!_CRT_INIT(handle, reason, reserved))
        return FALSE;

    if (reason == DLL_PROCESS_ATTACH) {

        Orion::String<".utf8"> locale;
        std::setlocale(LC_CTYPE, locale.get());

        _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
        _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);

        app.emplace(handle).load();
    }

    return TRUE;
}