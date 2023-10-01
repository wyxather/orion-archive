#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_HelpingHands_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.CalculateAbilityState
struct UPassiveSkill_Siren_HelpingHands_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.IsActionSkillActionActive
struct UPassiveSkill_Siren_HelpingHands_C_IsActionSkillActionActive_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.OnActivated
struct UPassiveSkill_Siren_HelpingHands_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.Helping Hands on Take Any Damage
struct UPassiveSkill_Siren_HelpingHands_C_Helping_Hands_on_Take_Any_Damage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.OnActionAbilityActivated
struct UPassiveSkill_Siren_HelpingHands_C_OnActionAbilityActivated_Params
{
	class UOakActionAbility*                           Ability;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.OnResumed
struct UPassiveSkill_Siren_HelpingHands_C_OnResumed_Params
{
};

// Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.ExecuteUbergraph_PassiveSkill_Siren_HelpingHands
struct UPassiveSkill_Siren_HelpingHands_C_ExecuteUbergraph_PassiveSkill_Siren_HelpingHands_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
