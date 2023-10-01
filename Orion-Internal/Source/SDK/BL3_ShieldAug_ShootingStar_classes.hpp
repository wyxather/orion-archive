#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_ShootingStar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_ShootingStar.ShieldAug_ShootingStar_C
// 0x0000 (0x0110 - 0x0110)
class UShieldAug_ShootingStar_C : public UShieldAugment_Triggerable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_ShootingStar.ShieldAug_ShootingStar_C");
		return ptr;
	}


	void K2_UntriggerEffect(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_TriggerEffect(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_OnCausedDamage(class AShield** Shield, class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
