#pragma once

#include "Class.h"
#include "SDK/Netvars.h"

struct Vector3;

class IPlayerResource
{
public:
    INCONSTRUCTIBLE(IPlayerResource);

    enum __vftable
    {
        IsAlive = 5,
        GetPlayerName = 8,
        GetPlayerHealth = 14
    };

    VIRTUAL_METHOD(__vftable::IsAlive, isAlive, __stdcall, bool, (int index), (this, index));
    VIRTUAL_METHOD(__vftable::GetPlayerName, getPlayerName, __stdcall, const char*, (int index), (this, index));
    VIRTUAL_METHOD(__vftable::GetPlayerHealth, getPlayerHealth, __stdcall, int, (int index), (this, index));
};

class PlayerResource
{
public:
    INCONSTRUCTIBLE(PlayerResource);

    NETVAR("CCSPlayerResource", m_bombsiteCenterA, Vector3);
    NETVAR("CCSPlayerResource", m_bombsiteCenterB, Vector3);
    NETVAR("CCSPlayerResource", m_nMusicID, int[65]);
    NETVAR("CCSPlayerResource", m_nActiveCoinRank, int[65]);

    [[nodiscard]] constexpr auto getIPlayerResource() const noexcept
    {
        return reinterpret_cast<IPlayerResource*>(reinterpret_cast<std::uintptr_t>(this) + 0x9D8);
    }
};