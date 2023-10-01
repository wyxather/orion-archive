#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Weapon_HeavyWeapon_SecondWind_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Weapon_HeavyWeapon_SecondWind.Challenge_Weapon_HeavyWeapon_SecondWind_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Weapon_HeavyWeapon_SecondWind_C : public UChallenge_WeaponSecondWind_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Weapon_HeavyWeapon_SecondWind.Challenge_Weapon_HeavyWeapon_SecondWind_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
