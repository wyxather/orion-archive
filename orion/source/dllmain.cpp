#include "source/dllmain.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(const HMODULE moduleHandle, const DWORD reason, const LPVOID reserved)
{
    const auto crtInitResult = _CRT_INIT(moduleHandle, reason, reserved);
    return crtInitResult;
}

void orion::Main::onAttach(const HMODULE moduleHandle) noexcept
{
}
