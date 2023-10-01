#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Raid1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C
// 0x0040 (0x0138 - 0x00F8)
class UOakAbility_Gunner_CM_Raid1_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_Player*                        PlayerCharacterOwner;                                     // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Gunner_CM_Raid1;// 0x0108(0x0028)
	class AOakCharacter_IronBear*                      IronBear;                                                 // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C");
		return ptr;
	}


	void CMRaid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void CMRaid1_IronBear_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void CMRaid1_IronBear_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_OakAbility_Gunner_CM_Raid1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
