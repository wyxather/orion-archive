#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_7_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_7.Passive_Siren_DLCSkill_6_C.OnActivated
struct UPassive_Siren_DLCSkill_6_C_OnActivated_Params
{
};

// Function Passive_Siren_DLCSkill_7.Passive_Siren_DLCSkill_6_C.DLCSkill6_OnCausedDeath
struct UPassive_Siren_DLCSkill_6_C_DLCSkill6_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Siren_DLCSkill_7.Passive_Siren_DLCSkill_6_C.ExecuteUbergraph_Passive_Siren_DLCSkill_7
struct UPassive_Siren_DLCSkill_6_C_ExecuteUbergraph_Passive_Siren_DLCSkill_7_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
