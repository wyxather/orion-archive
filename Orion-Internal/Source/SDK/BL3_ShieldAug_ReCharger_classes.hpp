#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_ReCharger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_ReCharger.ShieldAug_ReCharger_C
// 0x0000 (0x0108 - 0x0108)
class UShieldAug_ReCharger_C : public UShieldAugment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_ReCharger.ShieldAug_ReCharger_C");
		return ptr;
	}


	void K2_OnBarrierEnd(class AActor** BarrierActor, class AShield** Shield, struct FAugmentData* StackData);
	void RestoreShield(class AOakCharacter* Character);
	void K2_OnShieldUnequipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData);
	void K2_NativeDelayCallback(class AShield** Shield, struct FName* DelayName, struct FAugmentData* StackData);
	void K2_OnShieldDepleted(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
