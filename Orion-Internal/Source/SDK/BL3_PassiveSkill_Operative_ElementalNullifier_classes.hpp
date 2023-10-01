#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_ElementalNullifier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C
// 0x0010 (0x01F0 - 0x01E0)
class UPassiveSkill_Operative_ElementalNullifier_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      DigicloneRef;                                             // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C");
		return ptr;
	}


	void OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
