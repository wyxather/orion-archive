#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_PhalanxDoctrine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.OnActivated
struct UPassive_Gunner_PhalanxDoctrine_C_OnActivated_Params
{
};

// Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.CausedDeath_PhalanxDoctrine
struct UPassive_Gunner_PhalanxDoctrine_C_CausedDeath_PhalanxDoctrine_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine
struct UPassive_Gunner_PhalanxDoctrine_C_ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
