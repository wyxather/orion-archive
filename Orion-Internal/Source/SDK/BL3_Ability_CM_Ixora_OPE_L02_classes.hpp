#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_OPE_L02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CM_Ixora_OPE_L02.Ability_CM_Ixora_OPE_L02_C
// 0x0048 (0x0140 - 0x00F8)
class UAbility_CM_Ixora_OPE_L02_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_CM_Ixora_OPE_L01;// 0x0100(0x0028)
	struct FDataTableValueHandle                       Chance;                                                   // 0x0128(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora_OPE_L02.Ability_CM_Ixora_OPE_L02_C");
		return ptr;
	}


	void OnActivated();
	void OperativeIxoraCM_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_CM_Ixora_OPE_L02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
