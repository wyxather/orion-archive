#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Beastmaster_DLCSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C
// 0x0032 (0x029A - 0x0268)
class UActionSkill_Beastmaster_DLCSkill_C : public UOakActionAbility_Beastmaster
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_ActionSkill_Beastmaster_DLCSkill;// 0x0270(0x0028)
	bool                                               bTrapEndedEarly;                                          // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTrailFailedToSpawn;                                      // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C");
		return ptr;
	}


	void TrapFailedToSpawn(bool* res);
	void EndTrapEarly(bool* res);
	float GetCooldownRestartPercent();
	void OnActivated();
	void BeastmasterDLCSkill_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnStartActionAbility();
	void ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
