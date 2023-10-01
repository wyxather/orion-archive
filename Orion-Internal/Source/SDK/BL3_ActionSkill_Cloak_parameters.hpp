#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Cloak_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod4Effect
struct UActionSkill_Cloak_C_TryMod4Effect_Params
{
};

// Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod1Effect
struct UActionSkill_Cloak_C_TryMod1Effect_Params
{
};

// Function ActionSkill_Cloak.ActionSkill_Cloak_C.GetMaxDurationModifier
struct UActionSkill_Cloak_C_GetMaxDurationModifier_Params
{
	EGbxAttributeModifierType                          ModifierType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStartActionAbility
struct UActionSkill_Cloak_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStopActionAbility
struct UActionSkill_Cloak_C_OnStopActionAbility_Params
{
};

// Function ActionSkill_Cloak.ActionSkill_Cloak_C.ExecuteUbergraph_ActionSkill_Cloak
struct UActionSkill_Cloak_C_ExecuteUbergraph_ActionSkill_Cloak_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
