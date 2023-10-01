#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_10_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_DLCSkill_10.Passive_Gunner_DLCSkill_9_C
// 0x0024 (0x0204 - 0x01E0)
class UPassive_Gunner_DLCSkill_9_C : public UPassive_Gunner_CausedElementalEffectParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       FuelReturnAmount;                                         // 0x01E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DiminishingReturns;                                       // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_DLCSkill_10.Passive_Gunner_DLCSkill_9_C");
		return ptr;
	}


	void GunnerCausedElementalEffect(class AActor** Causer, struct FStatusEffectSpec* Spec);
	void Gunner_IronBearEnteredAndReady(class AOakCharacter_IronBear** IronBear);
	void ExecuteUbergraph_Passive_Gunner_DLCSkill_10(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
