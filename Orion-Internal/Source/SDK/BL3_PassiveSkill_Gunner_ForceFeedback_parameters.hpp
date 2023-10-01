#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_ForceFeedback_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.OnActivated
struct UPassiveSkill_Gunner_ForceFeedback_C_OnActivated_Params
{
};

// Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.Capacitation On Caused Death
struct UPassiveSkill_Gunner_ForceFeedback_C_Capacitation_On_Caused_Death_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback
struct UPassiveSkill_Gunner_ForceFeedback_C_ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
