#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_DLC1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Siren_ClassMod_DLC1.OakAbility_Siren_ClassMod_DLC1_C
// 0x0048 (0x0140 - 0x00F8)
class UOakAbility_Siren_ClassMod_DLC1_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_ClassMod_DLC1;// 0x0100(0x0028)
	struct FDataTableValueHandle                       BonusDuration;                                            // 0x0128(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_DLC1.OakAbility_Siren_ClassMod_DLC1_C");
		return ptr;
	}


	void IsNotStatusEffectDamage(class UDamageType* DamageType, bool* res);
	void OnActivated();
	void SirenDLC1ClassMod_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_OakAbility_Siren_ClassMod_DLC1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
