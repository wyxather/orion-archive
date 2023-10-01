#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged6_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.OnCausedDeath_Ranged3
struct UPassive_Beastmaster_Ranged6_C_OnCausedDeath_Ranged3_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.ClassModUnique03_KillSkillTrigger
struct UPassive_Beastmaster_Ranged6_C_ClassModUnique03_KillSkillTrigger_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.HandleTriggeredAbility
struct UPassive_Beastmaster_Ranged6_C_HandleTriggeredAbility_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.OnActivated
struct UPassive_Beastmaster_Ranged6_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C.ExecuteUbergraph_Passive_Beastmaster_Ranged6
struct UPassive_Beastmaster_Ranged6_C_ExecuteUbergraph_Passive_Beastmaster_Ranged6_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
