#include "GameData.h"
#include "SDK/Enum/ObsMode.h"
#include "SDK/Class/Collideable.h"
#include "SDK/Class/Engine.h"
#include "SDK/Class/Entity.h"
#include "SDK/Class/EntityList.h"
#include "SDK/Class/GlobalVars.h"
#include "SDK/Class/Localize.h"
#include "SDK/Class/ModelInfo.h"
#include "SDK/Class/ModelRender.h"
#include "SDK/Class/UtlVector.h"
#include "SDK/Class/WeaponData.h"
#include "SDK/Struct/Matrix4x4.h"
#include "SDK/LocalPlayer.h"
#include "SDK/WeaponIcon.h"
#include "Module/Game.h"

namespace
{
	Matrix4x4 viewMatrix;
	LocalPlayerData localPlayerData;
	std::vector<PlayerData> playerData;

	auto playerByHandleWritable(int handle) noexcept
	{
		const auto it = std::ranges::find(playerData, handle, &PlayerData::handle);
		return it != playerData.cend() ? &(*it) : nullptr;
	}
}

auto GameData::toScreenMatrix() noexcept -> const Matrix4x4& { return viewMatrix; }

auto GameData::local() noexcept -> const LocalPlayerData& { return localPlayerData; }

auto GameData::players() noexcept -> const std::vector<PlayerData>& { return playerData; }

auto GameData::update() noexcept -> void
{
	if (static auto lastFrame = game->memory.globalVars->frameCount; lastFrame == game->memory.globalVars->frameCount)
		return;
	else
		lastFrame = game->memory.globalVars->frameCount;

	Lock lock;

	localPlayerData.update();

	if (!localPlayer) {
		playerData.clear();
		return;
	}

	viewMatrix = game->interfaces.engine->worldToScreenMatrix();

	const auto observerTarget = localPlayer->getObserverMode() == ObsMode::InEye ? localPlayer->getObserverTarget() : nullptr;

	for (auto highestEntityIndex = game->interfaces.entityList->getHighestEntityIndex(), i = 1; i <= highestEntityIndex; ++i) {
		const auto entity = game->interfaces.entityList->getClientEntity(i);
		if (!entity)
			continue;

		if (entity->isPlayer()) {
			if (entity == localPlayer.get() || entity == observerTarget)
				continue;

			if (const auto player = playerByHandleWritable(entity->getRefEHandle()))
				player->update(*entity);
			else
				playerData.emplace_back(*entity);
		}
	}

	std::erase_if(playerData,
		[](const decltype(playerData)::value_type& player) {
			return game->interfaces.entityList->getClientEntityFromHandle(player.handle) == nullptr;
		});

	std::sort(playerData.begin(), playerData.end(),
		[](const decltype(playerData)::value_type& a, const decltype(playerData)::value_type& b) {
			return a.distanceToLocal > b.distanceToLocal;
		});
}

auto LocalPlayerData::update() noexcept -> void
{
	if (!localPlayer) {
		exists = false;
		return;
	}

	exists = true;
	alive = localPlayer->isAlive();
	aimPunch = localPlayer->getEyePosition() + Vector3::fromAngle(game->interfaces.engine->getViewAngles() + localPlayer->getAimPunch()) * 1000.f;

	if (const auto obs = localPlayer->getObserverTarget()) {
		if (const auto obsMode = localPlayer->getObserverMode(); obsMode != ObsMode::Roaming && obsMode != ObsMode::Deathcam)
			origin = obs->getAbsOrigin();
		else
			origin = localPlayer->getAbsOrigin();
	}
	else origin = localPlayer->getAbsOrigin();
}

BaseData::BaseData(const Entity& entity) noexcept { BaseData::update(entity); }

auto BaseData::update(const Entity& entity) noexcept -> void
{
	distanceToLocal = entity.getAbsOrigin().distTo(localPlayerData.origin);
	if (entity.isPlayer()) {
		const auto collideable = entity.getCollideable();
		obbMins = collideable->obbMins();
		obbMaxs = collideable->obbMaxs();
	}
	else if (const auto model = entity.getModel()) {
		obbMins = model->mins;
		obbMaxs = model->maxs;
	}
	else obbMins = obbMaxs = {};
	coordinateFrame = entity.renderableToWorldTransform();
}

PlayerData::PlayerData(const Entity& entity) noexcept : BaseData{ entity }, handle{ entity.getRefEHandle() } { PlayerData::update(entity); }

auto PlayerData::update(const Entity& entity) noexcept -> void
{
	name = entity.getPlayerName();

	dormant = entity.isDormant();
	if (dormant)
		return;

	BaseData::update(entity);

	alive = entity.isAlive();
	enemy = localPlayer->isOtherEnemy(entity);

	health = entity.getHealth();
	maxHealth = entity.getMaxHealth();

	origin = entity.getAbsOrigin();

	inViewFrustum = !game->interfaces.engine->cullBox(obbMins + origin, obbMaxs + origin);

	if (const auto activeWeapon = entity.getActiveWeapon()) {
		if (const auto weaponInfo = activeWeapon->getWeaponInfo()) {
			weapon.name = game->interfaces.localize->findAsUTF8(weaponInfo->szHudName);

			const std::string_view weaponName = weaponInfo->szWeaponName;
			if (const auto pos = weaponName.find_first_of('_'); pos != std::string::npos)
				weapon.icon = WeaponIcon::get(Orion::Fnv<"">::run(weaponName.substr(pos + 1).data()));
		}
	}

	if (alive && inViewFrustum) {
		if (const auto model = entity.getModel()) {
			if (const auto studioModel = game->interfaces.modelInfo->getStudioModel(model)) {
				const auto& boneCache = entity.getBoneCache();

				bones.clear();
				bones.reserve(20);
				
				for (auto i = decltype(studioModel->numBones){}; i < studioModel->numBones; i++) {
					const auto bone = studioModel->getBone(i);

					if (!bone || bone->parent == -1 || !(bone->flags & BONE_USED_BY_HITBOX))
						continue;

					bones.emplace_back(boneCache[i].origin(), boneCache[bone->parent].origin());
				}
			}
		}
	}
}