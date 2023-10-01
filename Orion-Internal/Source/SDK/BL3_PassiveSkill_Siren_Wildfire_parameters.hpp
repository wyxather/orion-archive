#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Wildfire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OnActivated
struct UPassiveSkill_Siren_Wildfire_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedElementalEffect
struct UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedMaxResource
struct UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedMaxResource_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OpenWildfireGates
struct UPassiveSkill_Siren_Wildfire_C_OpenWildfireGates_Params
{
};

// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.CloseWildfireGates
struct UPassiveSkill_Siren_Wildfire_C_CloseWildfireGates_Params
{
};

// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.ExecuteUbergraph_PassiveSkill_Siren_Wildfire
struct UPassiveSkill_Siren_Wildfire_C_ExecuteUbergraph_PassiveSkill_Siren_Wildfire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
