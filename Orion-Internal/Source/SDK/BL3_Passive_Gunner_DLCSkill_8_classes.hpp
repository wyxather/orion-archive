#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_8_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_DLCSkill_8.Passive_Gunner_DLCSkill_7_C
// 0x0008 (0x01E8 - 0x01E0)
class UPassive_Gunner_DLCSkill_7_C : public UPassive_Gunner_CausedElementalEffectParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_DLCSkill_8.Passive_Gunner_DLCSkill_7_C");
		return ptr;
	}


	void GunnerCausedElementalEffect(class AActor** Causer, struct FStatusEffectSpec* Spec);
	void ExecuteUbergraph_Passive_Gunner_DLCSkill_8(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
