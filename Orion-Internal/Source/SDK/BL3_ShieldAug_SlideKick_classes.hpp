#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_SlideKick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_SlideKick.ShieldAug_SlideKick_C
// 0x0000 (0x0108 - 0x0108)
class UShieldAug_SlideKick_C : public UShieldAugment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_SlideKick.ShieldAug_SlideKick_C");
		return ptr;
	}


	void K2_OnCausedDamage(class AShield** Shield, class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
