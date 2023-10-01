#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_14_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C
// 0x0008 (0x01E8 - 0x01E0)
class UPassive_Gunner_DLCSkill_13_C : public UPassive_Gunner_CausedElementalEffectParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void GunnerCausedElementalEffect(class AActor** Causer, struct FStatusEffectSpec* Spec);
	void ExecuteUbergraph_Passive_Gunner_DLCSkill_14(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
