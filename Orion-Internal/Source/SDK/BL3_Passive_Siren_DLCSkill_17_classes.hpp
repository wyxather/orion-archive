#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_17_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DLCSkill_17.Passive_Siren_DLCSkill_16_C
// 0x0048 (0x01F8 - 0x01B0)
class UPassive_Siren_DLCSkill_16_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_17;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       ThreatDuration;                                           // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_17.Passive_Siren_DLCSkill_16_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill16_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void DLCSkill16_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_Passive_Siren_DLCSkill_17(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
