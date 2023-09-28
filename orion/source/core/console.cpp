#include "console.h"
#ifndef NDEBUG
    #include "source/orion.h"

orion::core::Console::Console() noexcept {
    if (!Console::allocator)
        return;

    Console::enumerator.emplace();

    if (!(*Console::enumerator))
        return;

    if (const auto style =
            IMPORT(GetWindowLongPtr)(Console::enumerator->handle, GWL_STYLE);
        style != 0)
        IMPORT(SetWindowLongPtr)
    (Console::enumerator->handle, GWL_STYLE, style & ~WS_SYSMENU);

    Console::stream.emplace();

    if (!(*Console::stream))
        return;

    Console::output.emplace();
}

auto orion::core::Console::Enumerator::match(const HWND handle) noexcept
    -> bool {
    DWORD id {};
    IMPORT(GetWindowThreadProcessId)(handle, &id);
    return id == IMPORT(GetCurrentProcessId)();
}

auto CALLBACK orion::core::Console::Enumerator::enumerate(
    const HWND handle,
    Enumerator& enumerator
) noexcept -> BOOL {
    if (!Console::Enumerator::match(handle))
        return TRUE;
    if (std::array<CHAR, 257> name {};
        IMPORT(GetClassNameA)(
            handle,
            name.data(),
            static_cast<int>(name.size())
        ) == FALSE
        || !utils::Fnv1a<"ConsoleWindowClass">::match(name.data()))
        return TRUE;
    enumerator.handle = handle;
    return FALSE;
}

auto orion::core::Console::update_time() noexcept -> void {
    using std::chrono::system_clock;
    const auto time_t = system_clock::to_time_t(system_clock::now());
    localtime_s(&time, &time_t);
}
#endif
