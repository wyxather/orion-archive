#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Remnant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C
// 0x0134 (0x031C - 0x01E8)
class UPassiveSkill_Siren_Remnant_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             FindTarget;                                               // 0x01F0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              TargetList;                                               // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FDataTableValueHandle                       RemnantDamageCalc;                                        // 0x02B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     Projectile;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Remnant;// 0x02D8(0x0028)
	struct FVector                                     SpawnLocation;                                            // 0x0300(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnEndLocation;                                         // 0x030C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RemnantRadius;                                            // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void RemnantOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ResetRemnantGate();
	void ExecuteUbergraph_PassiveSkill_Siren_Remnant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
