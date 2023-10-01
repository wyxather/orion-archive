#pragma once

#include "Class.h"

class Entity
{
public:
	INCONSTRUCTIBLE(Entity);

	char pad_0000[184]; //0x0000
	size_t m_unk1; //0x00B8
	char pad_00BC[4]; //0x00BC
	size_t m_unk2; //0x00C0
	char pad_00C4[28]; //0x00C4
	float m_health; //0x00E0
	float m_shield; //0x00E4
	char pad_00E8[566]; //0x00E8
	uint8_t m_fragGrenades; //0x031E
	uint8_t m_plasmaGrenades; //0x031F
	char pad_0320[36]; //0x0320
	float m_flashlight; //0x0344

	[[nodiscard]] constexpr bool isLocalPlayer() const noexcept
	{
		return m_unk1 == 0xFFFF0001 && m_unk2 == 0xEC700000;
	}

}; //Size: 0x0348
static_assert(sizeof(Entity) == 0x348);