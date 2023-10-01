#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Aurelia_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_Aurelia.ShieldAug_Aurelia_C
// 0x0000 (0x02B0 - 0x02B0)
class UShieldAug_Aurelia_C : public UShieldAugment_Damage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Aurelia.ShieldAug_Aurelia_C");
		return ptr;
	}


	void K2_OnCausedDamage(class AShield** Shield, class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
