#include "Console.h"
#if !NDEBUG
#include "Orion.h"
#include <chrono>
#endif

Console::Console() noexcept
{
#if !NDEBUG
	LI_FN(AllocConsole)();
	LI_FN(EnumWindows)(reinterpret_cast<WNDENUMPROC>(&Console::enumerate), reinterpret_cast<LPARAM>(this));
	LI_FN(SetWindowLongPtr)(handle, GWL_STYLE, LI_FN(GetWindowLongPtr)(handle, GWL_STYLE) & ~WS_SYSMENU);

	Orion::String<"CONOUT$"> name;
	Orion::String<"w"> mode;

	freopen_s(&stream, name.get(), mode.get(), stdout);
	output = LI_FN(GetStdHandle)(STD_OUTPUT_HANDLE);
#endif
}

Console::~Console() noexcept
{
#if !NDEBUG
	std::fclose(stream);
	LI_FN(FreeConsole)();

	handle = {};
	output = {};
	stream = {};
#endif
}

#if !NDEBUG
auto Console::time(std::array<char, 9>& buffer) noexcept -> void
{
	using std::chrono::system_clock;
	const auto time_t = system_clock::to_time_t(system_clock::now());
	if (tm tm; !localtime_s(&tm, &time_t)) {
		Orion::String<"%H:%M:%S"> fmt;
		std::strftime(buffer.data(), buffer.size(), fmt.get(), &tm);
	}
	else buffer = {};
}

auto __stdcall Console::enumerate(HWND handle, Console* console) noexcept -> BOOL
{
	if (DWORD id; !(LI_FN(GetWindowThreadProcessId)(handle, &id)) || id != app->id)
		return 1;
	if (std::array<char, 260> name; !(LI_FN(GetClassNameA)(handle, name.data(), static_cast<int>(name.size()))) || !Orion::Fnv<"ConsoleWindowClass">::compare(name.data()))
		return 1;
	console->handle = handle;
	return 0;
}

auto Console::color(Color color) const noexcept -> void { LI_FN(SetConsoleTextAttribute).cached()(output, static_cast<WORD>(color)); }
#endif