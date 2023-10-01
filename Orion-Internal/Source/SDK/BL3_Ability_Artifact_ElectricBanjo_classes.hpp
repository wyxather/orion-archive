#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_ElectricBanjo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C
// 0x00EE (0x0208 - 0x011A)
class UAbility_Artifact_ElectricBanjo_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ElDragonJr;// 0x0128(0x0028)
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0150(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Artifact_ElectricBanjo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
