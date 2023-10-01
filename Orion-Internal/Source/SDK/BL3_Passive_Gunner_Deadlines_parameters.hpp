#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_Deadlines_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.OnActivated
struct UPassive_Gunner_Deadlines_C_OnActivated_Params
{
};

// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_OnCausedDeath
struct UPassive_Gunner_Deadlines_C_Deadlines_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_ActionSkillActivated
struct UPassive_Gunner_Deadlines_C_Deadlines_ActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.ExecuteUbergraph_Passive_Gunner_Deadlines
struct UPassive_Gunner_Deadlines_C_ExecuteUbergraph_Passive_Gunner_Deadlines_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
