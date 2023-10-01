#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_DoUntoOthers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C
// 0x0070 (0x0258 - 0x01E8)
class UPassiveSkill_Siren_DoUntoOthers_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	float                                              Cooldown_Time;                                            // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	class AActor*                                      Homing_Target;                                            // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       Damage_Per_Rank;                                          // 0x0200(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_DoUntoOthers;// 0x0218(0x0028)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x0240(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C");
		return ptr;
	}


	void IsActionSkillActionActive(bool* res);
	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void Do_Harm_On_Took_Damage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
