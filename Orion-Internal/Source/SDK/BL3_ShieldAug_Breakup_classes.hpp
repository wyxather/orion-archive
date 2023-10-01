#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Breakup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_Breakup.ShieldAug_Breakup_C
// 0x0000 (0x0108 - 0x0108)
class UShieldAug_Breakup_C : public UShieldAugment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Breakup.ShieldAug_Breakup_C");
		return ptr;
	}


	void K2_OnReplicatedEffectTriggered(class AShield** Shield, class UObject** AdditionalContext, struct FAugmentData* StackData);
	void K2_OnShieldUnequipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData);
	void K2_OnShieldDepleted(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
	void K2_OnShieldEquipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
