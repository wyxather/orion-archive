#include "Hooks.h"
#include "Dependencies/MinHook/include/MinHook.h"

Orion::Module::Hooks::Hooks(const Application& app) noexcept :
	m_app{ app }
{
	MH_Initialize();
}

Orion::Module::Hooks::~Hooks() noexcept
{
	MH_Uninitialize();
}