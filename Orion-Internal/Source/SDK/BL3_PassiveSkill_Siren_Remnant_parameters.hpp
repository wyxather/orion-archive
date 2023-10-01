#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Remnant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.CalculateAbilityState
struct UPassiveSkill_Siren_Remnant_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.OnActivated
struct UPassiveSkill_Siren_Remnant_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.RemnantOnCausedDeath
struct UPassiveSkill_Siren_Remnant_C_RemnantOnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.ResetRemnantGate
struct UPassiveSkill_Siren_Remnant_C_ResetRemnantGate_Params
{
};

// Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.ExecuteUbergraph_PassiveSkill_Siren_Remnant
struct UPassiveSkill_Siren_Remnant_C_ExecuteUbergraph_PassiveSkill_Siren_Remnant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
