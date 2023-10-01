#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Weapon_SMG_CritHits_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Weapon_SMG_CritHits.Challenge_Weapon_SMG_CritHits_C
// 0x0000 (0x0288 - 0x0288)
class UChallenge_Weapon_SMG_CritHits_C : public UChallenge_WeaponDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Weapon_SMG_CritHits.Challenge_Weapon_SMG_CritHits_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
