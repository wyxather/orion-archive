#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunnerner_Grizzled_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C
// 0x0034 (0x01E4 - 0x01B0)
class UPassiveSkill_Gunnerner_Grizzled_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunnerner_Grizzled;// 0x01B8(0x0028)
	float                                              DiminishingReturns;                                       // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C");
		return ptr;
	}


	void MozeKilledEvent(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnActivated();
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
