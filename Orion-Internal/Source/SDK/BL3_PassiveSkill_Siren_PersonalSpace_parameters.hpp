#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_PersonalSpace_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.CalculateAbilityState
struct UPassiveSkill_Siren_PersonalSpace_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.OnActivated
struct UPassiveSkill_Siren_PersonalSpace_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace
struct UPassiveSkill_Siren_PersonalSpace_C_ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
