#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_WantVsNeed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_WantVsNeed.PassiveSkill_Operative_WantVsNeed_C
// 0x0048 (0x0228 - 0x01E0)
class UPassiveSkill_Operative_WantVsNeed_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       Scalar;                                                   // 0x01E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Operative_WantVsNeed;// 0x0200(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_WantVsNeed.PassiveSkill_Operative_WantVsNeed_C");
		return ptr;
	}


	void OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy);
	void OnActivated();
	void ExecuteUbergraph_PassiveSkill_Operative_WantVsNeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
