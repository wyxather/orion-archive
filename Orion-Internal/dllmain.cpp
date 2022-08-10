#include <clocale>
#include "Orion.h"
#include "Utility.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(HMODULE moduleHandle, DWORD reason, LPVOID reserved)
{
    using namespace Orion;

    if (!_CRT_INIT(moduleHandle, reason, reserved))
        return FALSE;

    if (reason == DLL_PROCESS_ATTACH) {

        String<".utf8"> locale;
        std::setlocale(LC_CTYPE, locale.get());

        _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
        _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);

        instance.emplace(moduleHandle).load();
    }

    return TRUE;
}