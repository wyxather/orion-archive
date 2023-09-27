#pragma once

auto APIENTRY DllEntryPoint(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) -> BOOL;

namespace orion {

    class EntryPoint final {
        NON_CONSTRUCTIBLE(EntryPoint)

        friend auto APIENTRY ::DllEntryPoint(
            const HMODULE module_handle,
            const DWORD reason_for_call,
            const LPVOID reserved
        ) -> BOOL;

        _NODISCARD static auto process(
            const HMODULE module_handle,
            const DWORD reason_for_call,
            const LPVOID reserved
        ) noexcept -> BOOL;
    };

}  // namespace orion
