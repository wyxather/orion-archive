#include "Console.h"

#if !NDEBUG
#include <chrono>
#include "Orion.h"
#endif

using namespace Orion::Module;

Console::Console(const Application& app) noexcept :
	m_app{ app }
{
#if !NDEBUG
	LI_FN(AllocConsole)();
	LI_FN(EnumWindows)(reinterpret_cast<WNDENUMPROC>(&Console::enumerate), reinterpret_cast<LPARAM>(this));
	LI_FN(SetWindowLongPtr)(m_handle, GWL_STYLE, LI_FN(GetWindowLongPtr)(m_handle, GWL_STYLE) & ~WS_SYSMENU);

	String<"CONOUT$"> fileName;
	String<"w"> mode;

	freopen_s(&m_stream, fileName.get(), mode.get(), stdout);
	m_output = LI_FN(GetStdHandle)(STD_OUTPUT_HANDLE);
#endif
}

Console::~Console() noexcept
{
#if !NDEBUG
	fclose(m_stream);
	LI_FN(FreeConsole)();

	m_handle = {};
	m_output = {};
	m_stream = {};
#endif
}

#if !NDEBUG
void Console::time(char timeBuffer[9]) noexcept
{
	const auto _time_t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	tm _tm;
	if (localtime_s(&_tm, &_time_t))
		return;

	String<"%H:%M:%S"> timeFormat;
	std::strftime(timeBuffer, 9, timeFormat.get(), &_tm);
}

void Console::color(Color color) noexcept
{
	LI_FN(SetConsoleTextAttribute).cached()(m_output, static_cast<WORD>(color));
}

BOOL Console::enumerate(HWND handle, Console* console) noexcept
{
	DWORD windowThreadProcessId{};
	if (!(LI_FN(GetWindowThreadProcessId)(handle, &windowThreadProcessId)) || console->m_app.getId() != windowThreadProcessId)
		return 1;

	CHAR className[MAX_PATH]{};
	if (!(LI_FN(GetClassNameA)(handle, className, MAX_PATH)))
		return 1;

	if (!Fnv<"ConsoleWindowClass">::compare(className))
		return 1;

	console->m_handle = handle;

	return 0;
}
#endif