#include "Hooks.h"
#include "Dependencies/MinHook/include/MinHook.h"

using namespace Orion::Module;

std::size_t Hooks::calculateVmtLength(void* address) noexcept
{
	std::size_t length{};
	MEMORY_BASIC_INFORMATION mbi{};
	while (LI_FN(VirtualQuery)(static_cast<void**>(address)[length], &mbi, sizeof mbi) &&
		mbi.Protect & (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY))
		length++;
	return length;
}

void Hooks::enable() noexcept
{
	MH_EnableHook(MH_ALL_HOOKS);
}

Hooks::Hooks(const Application& app) noexcept :
	m_app{ app }
{
	MH_Initialize();
}

Hooks::~Hooks() noexcept
{
	MH_DisableHook(MH_ALL_HOOKS);
	MH_Uninitialize();
}

Hooks::MinHook& Hooks::operator[](const std::uint32_t key) noexcept
{
	return m_data[key];
}

Hooks::MinHook::~MinHook() noexcept
{
	m_base = {};
	m_size = {};
	m_data.reset();
}

void Hooks::MinHook::init(void* address) noexcept
{
	m_base = address;
	m_size = Hooks::calculateVmtLength(*static_cast<void**>(address));
	m_data = std::make_unique<decltype(m_data)::element_type[]>(m_size);
}

void Hooks::MinHook::hookAt(std::size_t index, void* function, bool enable) noexcept
{
	auto&& data = m_data[index];
	data.first = (*static_cast<void***>(m_base))[index];
	MH_CreateHook(data.first, function, &data.second);
	if (enable) MH_EnableHook(data.first);
}

void Hooks::MinHook::restore() noexcept
{
	for (std::size_t i = 0; i < m_size; i++) {

		auto&& data = m_data[i];
		if (!data.first)
			continue;

		MH_DisableHook(data.first);
		MH_RemoveHook(data.first);
	}
}