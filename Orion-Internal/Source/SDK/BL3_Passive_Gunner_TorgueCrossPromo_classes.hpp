#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_TorgueCrossPromo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C
// 0x0014 (0x01C4 - 0x01B0)
class UPassive_Gunner_TorgueCrossPromo_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FRandomStream                               RandStream_TorgueCrossPromo;                              // 0x01B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              NewChance;                                                // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C");
		return ptr;
	}


	void OnActivated();
	void OnResumed();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void OnGradeChanged();
	void DetermineNewChance();
	void ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
