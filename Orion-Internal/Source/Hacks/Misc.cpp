#include "Misc.h"
#include "Module/Config.h"
#include "SDK/Class/Entity.h"

bool Misc::unlimitedHealth(Entity& local) noexcept
{
	if (!config->getData().unlimited_health)
		return false;
	local.m_health = 1;
	return true;
}

void Misc::unlimitedShield(Entity& local) noexcept
{
	if (config->getData().unlimited_shield)
		local.m_shield = 1;
}