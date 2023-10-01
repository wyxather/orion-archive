#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_Weapon_CloudKill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Weapon_CloudKill.Damage_Weapon_CloudKill_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_Weapon_CloudKill_C : public UDamage_WeaponProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Weapon_CloudKill.Damage_Weapon_CloudKill_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
