#include "FileSVG.h"
#include "SDK/Class/MemAlloc.h"
#include "Module/Game.h"

FileSVG::FileSVG(std::size_t width, std::size_t height) noexcept
{
	*reinterpret_cast<std::uintptr_t*>(reinterpret_cast<std::uintptr_t>(this) + 0x24) = *reinterpret_cast<std::uintptr_t*>(game->memory.constructImage - 0xC);
	*reinterpret_cast<std::uintptr_t*>(reinterpret_cast<std::uintptr_t>(this) + 0x28) = *reinterpret_cast<std::uintptr_t*>(game->memory.constructImage - 0x4);
	game->memory.constructImageInit(this, (width * height) * sizeof(std::uintptr_t));
}

FileSVG::~FileSVG() noexcept
{
	if (*reinterpret_cast<int*>(reinterpret_cast<std::uintptr_t>(data.data()) + 0x8) >= 0) {
		if (auto& imageData = get(); imageData != nullptr) {
			game->interfaces.memAlloc->free(imageData);
			imageData = nullptr;
		}
		size() = 0;
	}
}

auto FileSVG::parse(const std::uint8_t* const fileData, const std::size_t fileSize, const std::size_t* const width, const std::size_t* const height, const float scale) noexcept -> bool
{
	const auto getImageDataRGBASVG = game->memory.getImageDataRGBASVG;
	bool result;
	__asm {
		push 0
		push scale
		push height
		push width
		push this
		mov ecx, fileData
		mov edx, fileSize
		call getImageDataRGBASVG
		add esp, 0x14
		mov result, al
	}
	return result;
}