#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_GuardianAngel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C
// 0x0068 (0x0250 - 0x01E8)
class UPassiveSkill_Siren_GuardianAngel_C : public UPassiveSkill_Siren_WIthNova_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	bool                                               GuardianAngelReadied;                                     // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_GuardianAngel;// 0x01F8(0x0028)
	struct FDataTableValueHandle                       HealthRestore;                                            // 0x0220(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x0238(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C");
		return ptr;
	}


	void GetNovaDamage(float* res);
	void OnDownStateStart();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ActiveGuardianAngel();
	void GuardianAngel_OnKilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
