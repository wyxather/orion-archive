#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_ShieldOfThought_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.CalculateAbilityState
struct UPassiveSkill_Siren_ShieldOfThought_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.IsAffectedByActionSkill
struct UPassiveSkill_Siren_ShieldOfThought_C_IsAffectedByActionSkill_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.OnActivated
struct UPassiveSkill_Siren_ShieldOfThought_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.SirenSkillEvent_OnCausedAnyDamage
struct UPassiveSkill_Siren_ShieldOfThought_C_SirenSkillEvent_OnCausedAnyDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C.ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought
struct UPassiveSkill_Siren_ShieldOfThought_C_ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
