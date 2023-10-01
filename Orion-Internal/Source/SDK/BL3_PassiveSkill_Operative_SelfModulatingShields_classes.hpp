#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SelfModulatingShields_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C
// 0x0068 (0x0218 - 0x01B0)
class UPassiveSkill_Operative_SelfModulatingShields_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FStatusEffectInstanceReference              Status_Effect_Modifier;                                   // 0x01B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UStatusEffectData*                           StatusEffectData;                                         // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_SelfModulatingShields;// 0x01D8(0x0028)
	struct FDataTableValueHandle                       RegenDuration;                                            // 0x0200(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C");
		return ptr;
	}


	void Remove_Status_Effect_Modifier();
	void Add_Status_Effect_Modifier();
	void OnActivated();
	void Self_Modulating_Shields_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
