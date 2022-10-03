#include "Hooks.h"
#include "../Dependencies/MinHook/include/MinHook.h"

Hooks::Hooks() noexcept { MH_Initialize(); }

Hooks::~Hooks() noexcept { MH_Uninitialize(); }

auto Hooks::calculateVmtLength(void* address) noexcept -> std::size_t
{
	std::size_t length = 0;
	MEMORY_BASIC_INFORMATION mbi;
	while (LI_FN(VirtualQuery)(static_cast<void**>(address)[length], &mbi, sizeof(mbi)) && mbi.Protect & (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY))
		length++;
	return length;
}

auto Hooks::enable() noexcept -> void { MH_EnableHook(MH_ALL_HOOKS); }

auto Hooks::disable() noexcept -> void { MH_DisableHook(MH_ALL_HOOKS); }

MinHook::MinHook() noexcept : base{ nullptr }, size{ 0 } {}

MinHook::~MinHook() noexcept
{
	base = {};
	size = {};
	data.reset();
}

auto MinHook::init(void* address) noexcept -> void
{
	base = address;
	return init(Hooks::calculateVmtLength(*static_cast<void**>(address)));
}

auto MinHook::init(std::size_t size) noexcept -> void
{
	this->size = size;
	data = std::make_unique<decltype(data)::element_type[]>(size);
}

auto MinHook::hookAt(std::size_t index, void* function, bool enable) noexcept -> void
{
	return hookAt(index, (*static_cast<void***>(base))[index], function, enable);
}

auto MinHook::hookAt(std::size_t index, void* target, void* function, bool enable) noexcept -> void
{
	if (auto&& hook = data[index]; MH_CreateHook(target, function, &hook.second) == MH_OK) {
		hook.first = target;
		if (enable)
			MH_EnableHook(target);
	}
}

auto MinHook::restore() noexcept -> void
{
	for (std::size_t i = 0; i < size; i++) {
		if (auto&& hook = data[i]; hook.first) {
			MH_DisableHook(hook.first);
			MH_RemoveHook(hook.first);
		}
	}
}