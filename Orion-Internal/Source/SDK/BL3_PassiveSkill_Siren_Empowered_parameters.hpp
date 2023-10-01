#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Empowered_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.GetModifier
struct UPassiveSkill_Siren_Empowered_C_GetModifier_Params
{
	class UConditionalDamageTypeModifier*              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.OnActivated
struct UPassiveSkill_Siren_Empowered_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.OnAttunedElementChanged
struct UPassiveSkill_Siren_Empowered_C_OnAttunedElementChanged_Params
{
};

// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.RemoveModifier
struct UPassiveSkill_Siren_Empowered_C_RemoveModifier_Params
{
};

// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.AddModifier
struct UPassiveSkill_Siren_Empowered_C_AddModifier_Params
{
};

// Function PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C.ExecuteUbergraph_PassiveSkill_Siren_Empowered
struct UPassiveSkill_Siren_Empowered_C_ExecuteUbergraph_PassiveSkill_Siren_Empowered_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
