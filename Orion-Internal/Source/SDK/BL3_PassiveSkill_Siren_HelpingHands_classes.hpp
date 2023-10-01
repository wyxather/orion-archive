#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_HelpingHands_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C
// 0x0030 (0x0218 - 0x01E8)
class UPassiveSkill_Siren_HelpingHands_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_HelpingHands;// 0x01F0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void IsActionSkillActionActive(bool* res);
	void OnActivated();
	void Helping_Hands_on_Take_Any_Damage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnActionAbilityActivated(class UOakActionAbility* Ability);
	void OnResumed();
	void ExecuteUbergraph_PassiveSkill_Siren_HelpingHands(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
