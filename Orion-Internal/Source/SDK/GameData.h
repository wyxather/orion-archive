#pragma once

#include "SDK/Struct/Vector3.h"
#include "SDK/Struct/Matrix3x4.h"

class Entity;

struct Matrix4x4;
namespace WeaponIcon { struct Data; }

struct LocalPlayerData
{
	constexpr explicit LocalPlayerData() noexcept = default;

	LocalPlayerData(LocalPlayerData&&) = delete;
	LocalPlayerData(const LocalPlayerData&) = delete;
	LocalPlayerData& operator=(LocalPlayerData&&) = delete;
	LocalPlayerData& operator=(const LocalPlayerData&) = delete;

	auto update() noexcept -> void;

	bool exists = false;
	bool alive = false;
	Vector3 origin;
	Vector3 aimPunch;
};

struct BaseData
{
	explicit BaseData(const Entity& entity) noexcept;

	constexpr BaseData(BaseData&&) noexcept = default;
	constexpr BaseData& operator=(BaseData&&) noexcept = default;

	BaseData(const BaseData&) = delete;
	BaseData& operator=(const BaseData&) = delete;

	auto update(const Entity& entity) noexcept -> void;

	float distanceToLocal;
	Vector3 obbMins, obbMaxs;
	Matrix3x4 coordinateFrame;
};

struct PlayerData : BaseData
{
	explicit PlayerData(const Entity& entity) noexcept;

	constexpr PlayerData(PlayerData&&) noexcept = default;
	constexpr PlayerData& operator=(PlayerData&&) noexcept = default;

	PlayerData(const PlayerData&) = delete;
	PlayerData& operator=(const PlayerData&) = delete;

	auto update(const Entity& entity) noexcept -> void;

	bool dormant;
	bool alive;
	bool enemy;
	bool inViewFrustum;
	int handle;
	int health;
	int maxHealth;
	std::string name;
	Vector3 origin;

	struct Weapon
	{
		std::string name;
		const WeaponIcon::Data* icon;

	} weapon;

	std::vector<std::pair<Vector3, Vector3>> bones;
};

namespace GameData
{
	auto update() noexcept -> void;

	class Lock
	{
	public:
		explicit Lock() noexcept : lock{ mutex } {}
	private:
		static inline std::mutex mutex;
		std::scoped_lock<std::mutex> lock;
	};

	[[nodiscard]] auto toScreenMatrix() noexcept -> const Matrix4x4&;
	[[nodiscard]] auto local() noexcept -> const LocalPlayerData&;
	[[nodiscard]] auto players() noexcept -> const std::vector<PlayerData>&;
}