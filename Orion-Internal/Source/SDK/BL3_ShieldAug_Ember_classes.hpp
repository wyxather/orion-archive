#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Ember_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_Ember.ShieldAug_Ember_C
// 0x0000 (0x02B0 - 0x02B0)
class UShieldAug_Ember_C : public UShieldAugment_Damage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Ember.ShieldAug_Ember_C");
		return ptr;
	}


	void K2_NativeDelayCallback(class AShield** Shield, struct FName* DelayName, struct FAugmentData* StackData);
	void K2_OnShieldBeginPlay(class AShield** Shield, struct FAugmentData* StackData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
