#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_VAMP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_VAMP.ShieldAug_VAMP_C
// 0x0000 (0x0128 - 0x0128)
class UShieldAug_VAMP_C : public UShieldAugment_Amp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_VAMP.ShieldAug_VAMP_C");
		return ptr;
	}


	void K2_OnWeaponShotModified(class AShield** Shield, class AWeapon** Weapon, struct FWeaponShotModifierData* Data, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
