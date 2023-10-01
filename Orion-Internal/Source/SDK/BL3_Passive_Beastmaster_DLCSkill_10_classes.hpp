#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_10_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C
// 0x0069 (0x0219 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_9_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_10;// 0x01B8(0x0028)
	class ABPChar_Beastmaster_C*                       Beastmaster;                                              // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               Pet;                                                      // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Passive_Beastmaster_DLCSkill_10;// 0x01F0(0x0028)
	bool                                               BonusDamageReadied;                                       // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C");
		return ptr;
	}


	void GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining);
	void SetupPetDamageEvent();
	void RemovePetDamageEvent();
	void DLCSkill9_OnBeastPetSpawned(class AOakCharacter* Pet);
	void DLCSkill9_OnBeastmasterPetReleased(class AOakCharacter* Pet);
	void DLCSkill9_Pet_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void DLCSkill9_Player_OnWeaponUsed(class AWeapon* EventWeapon);
	void OnActivated();
	void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
