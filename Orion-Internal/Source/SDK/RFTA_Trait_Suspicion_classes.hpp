#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Suspicion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trait_Suspicion.Trait_Suspicion_C
// 0x000B (0x00FC - 0x00F1)
class UTrait_Suspicion_C : public UBP_RemnantTrait_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              DamageMod;                                                // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageModInc;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_Suspicion.Trait_Suspicion_C");
		return ptr;
	}


	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void ModifyInspectInfo(class AActor** Actor, int* InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void GetDamageMod(float* Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
