#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Slam_WeaponDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Siren_Slam_WeaponDamage.Ability_Siren_Slam_WeaponDamage_C
// 0x0000 (0x020D - 0x020D)
class UAbility_Siren_Slam_WeaponDamage_C : public UAbility_AnointParent_Siren_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Slam_WeaponDamage.Ability_Siren_Slam_WeaponDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
