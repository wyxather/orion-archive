#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_AttackCmd_TerrorFireDMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C
// 0x0060 (0x0158 - 0x00F8)
class UAbility_Beast_AttackCmd_TerrorFireDMG_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0100(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Beast_BonusRadiationDamage;// 0x0128(0x0028)
	class ABPChar_Player_C*                            Player;                                                   // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void AttackCommandGiven(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
