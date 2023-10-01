#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_CoolerHeads_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C
// 0x0054 (0x0204 - 0x01B0)
class UPassiveSkill_Operative_CoolerHeads_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       Freeze_Chance;                                            // 0x01B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_ExperimentalBullets;// 0x01D0(0x0028)
	int                                                Attempts;                                                 // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Successes;                                                // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AttemptsSinceLastShot;                                    // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C");
		return ptr;
	}


	void OnActivated();
	void Experimental_Bullets_on_Critial_Hit(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Operative_CoolerHeads(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
