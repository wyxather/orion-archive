#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldAug_Roid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldAug_Roid.BP_ShieldAug_Roid_C
// 0x0000 (0x0198 - 0x0198)
class UBP_ShieldAug_Roid_C : public UShieldAugment_Attribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldAug_Roid.BP_ShieldAug_Roid_C");
		return ptr;
	}


	void K2_OnShieldDepleted(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_OnShieldFilled(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_OnShieldUnequipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData);
	void K2_OnShieldEquipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData);
	void K2_OnCausedDamage(class AShield** Shield, class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
