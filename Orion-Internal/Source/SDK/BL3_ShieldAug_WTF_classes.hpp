#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_WTF_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_WTF.ShieldAug_WTF_C
// 0x0000 (0x0110 - 0x0110)
class UShieldAug_WTF_C : public UShieldAugment_Triggerable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_WTF.ShieldAug_WTF_C");
		return ptr;
	}


	void K2_TriggerEffect(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_UntriggerEffect(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_OnDamageTaken(class AShield** Shield, class UDamageComponent** DamageReceiver, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AController** InstigatedBy, class UDamageCauserComponent** DamageCauser, struct FReceivedDamageDetails* Details, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
