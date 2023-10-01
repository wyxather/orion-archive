#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Torch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_Torch.ShieldAug_Torch_C
// 0x0000 (0x0110 - 0x0110)
class UShieldAug_Torch_C : public UShieldAugment_Triggerable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Torch.ShieldAug_Torch_C");
		return ptr;
	}


	void K2_NativeDelayCallback(class AShield** Shield, struct FName* DelayName, struct FAugmentData* StackData);
	void K2_TriggerEffect(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
