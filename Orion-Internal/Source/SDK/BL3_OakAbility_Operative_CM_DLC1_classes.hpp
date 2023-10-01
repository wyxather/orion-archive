#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_CM_DLC1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Operative_CM_DLC1.OakAbility_Operative_CM_DLC1_C
// 0x0050 (0x0148 - 0x00F8)
class UOakAbility_Operative_CM_DLC1_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Operative_ClassMod_Unique_05;// 0x0100(0x0028)
	struct FDataTableValueHandle                       KillSkillChance;                                          // 0x0128(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBPEventHub_Operative_C*                     OperativeEventHub;                                        // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Operative_CM_DLC1.OakAbility_Operative_CM_DLC1_C");
		return ptr;
	}


	void OnActivated();
	void OperativeCMDLC1_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_OakAbility_Operative_CM_DLC1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
