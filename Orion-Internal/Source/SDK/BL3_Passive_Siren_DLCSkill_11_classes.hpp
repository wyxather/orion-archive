#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_11_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C
// 0x0088 (0x0238 - 0x01B0)
class UPassive_Siren_DLCSkill_10_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_11;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       EffectDuration;                                           // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       DamageCalc;                                               // 0x01F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AttunedElement;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              ExplosionData;                                            // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       SplashRadius;                                             // 0x0220(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void DLCSkill10_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void DLCSkill10_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void SetupData();
	void ExecuteUbergraph_Passive_Siren_DLCSkill_11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
