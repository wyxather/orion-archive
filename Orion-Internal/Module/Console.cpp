#include "Console.h"
#include "Utility.h"

Orion::Module::Console::Console(const Application& app) noexcept :
	m_app{ app }
{
	LI_FN(AllocConsole)();
	LI_FN(EnumWindows)(reinterpret_cast<WNDENUMPROC>(&Console::enumerate), reinterpret_cast<LPARAM>(this));

	String<"CONOUT$"> fileName;
	String<"w"> mode;

	freopen_s(&m_stream, fileName.get(), mode.get(), stdout);
	LI_FN(SetWindowLongPtr)(m_handle, GWL_STYLE, LI_FN(GetWindowLongPtr)(m_handle, GWL_STYLE) & ~WS_SYSMENU);
}

Orion::Module::Console::~Console() noexcept
{
	fclose(m_stream);
	LI_FN(FreeConsole)();

	m_handle = {};
	m_stream = {};
}

#include "Orion.h"

BOOL Orion::Module::Console::enumerate(HWND handle, Console* console) noexcept
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