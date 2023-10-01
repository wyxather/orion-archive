#pragma once

class Entity;

namespace Misc
{
	[[nodiscard]] bool unlimitedHealth(Entity& local) noexcept;
	void unlimitedShield(Entity& local) noexcept;
}