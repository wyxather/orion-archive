#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_SelflessVengeance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C
// 0x0068 (0x0218 - 0x01B0)
class UPassive_Gunner_SelflessVengeance_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_SelflessVengeance;// 0x01B8(0x0028)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Passive_Gunner_SelflessVengeance;// 0x01E0(0x0028)
	TArray<class AOakCharacter_Player*>                ShotModifiedAllies;                                       // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C");
		return ptr;
	}


	void ApplyBonusDamageToTarget(float Damage, class UDamageSource* DmgSource, class AActor* Target);
	void OnActivated();
	void ReloadEnded_SelflessVengeance(class AWeapon* EventWeapon, bool bCompleted);
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Passive_Gunner_SelflessVengeance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
