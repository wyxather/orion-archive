#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_12_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DLCSkill_12.Passive_Siren_DLCSkill_11_C
// 0x0144 (0x02F4 - 0x01B0)
class UPassive_Siren_DLCSkill_11_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_12;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       MaxTargets;                                               // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     SpawnLocation;                                            // 0x01F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FDataTableValueHandle                       DamageCalc;                                               // 0x0208(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x0220(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             EQS_1;                                                    // 0x0238(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CryoThreshold;                                            // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_12.Passive_Siren_DLCSkill_11_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill11_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Passive_Siren_DLCSkill_12(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
