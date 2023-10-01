#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond5_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.OnActivated
struct UPassive_Beastmaster_Bond5_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.CausedDeath_Bond5
struct UPassive_Beastmaster_Bond5_C_CausedDeath_Bond5_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.ClassModUnique03_KillSkillTrigger
struct UPassive_Beastmaster_Bond5_C_ClassModUnique03_KillSkillTrigger_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.ExecuteUbergraph_Passive_Beastmaster_Bond5
struct UPassive_Beastmaster_Bond5_C_ExecuteUbergraph_Passive_Beastmaster_Bond5_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
