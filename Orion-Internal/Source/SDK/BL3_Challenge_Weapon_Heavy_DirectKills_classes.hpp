#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Weapon_Heavy_DirectKills_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Weapon_Heavy_DirectKills.Challenge_Weapon_Heavy_DirectKills_C
// 0x0000 (0x0298 - 0x0298)
class UChallenge_Weapon_Heavy_DirectKills_C : public UChallenge_WeaponKill_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Weapon_Heavy_DirectKills.Challenge_Weapon_Heavy_DirectKills_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
