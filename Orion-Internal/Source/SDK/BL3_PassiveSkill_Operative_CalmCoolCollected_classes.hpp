#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_CalmCoolCollected_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Operative_CalmCoolCollected_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_RunUpTheScore;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C");
		return ptr;
	}


	void OnActivated();
	void RunUpTheScore_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
	void RunUpTheScore_ShieldEffect();
	void RunUpTheScore_RegenEffect();
	void RunUpTheScore_ActionSkillEffect();
	void Clone_OnFreezeEnemy();
	void CCC_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void CCC_Clone_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
	void ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
