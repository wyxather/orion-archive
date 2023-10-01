#pragma once

namespace Visuals
{
	auto esp(SDK::AHUD& hud, SDK::UCanvas& canvas) noexcept -> void;

#if !NDEBUG
	auto debug(SDK::UCanvas& canvas) noexcept -> void;
#endif
}