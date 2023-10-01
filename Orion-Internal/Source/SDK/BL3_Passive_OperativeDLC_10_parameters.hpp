#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_10_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.OnActivated
struct UPassive_OperativeDLC_9_C_OnActivated_Params
{
};

// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ResetGate
struct UPassive_OperativeDLC_9_C_ResetGate_Params
{
};

// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.CustomEvent_1
struct UPassive_OperativeDLC_9_C_CustomEvent_1_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ExecuteUbergraph_Passive_OperativeDLC_10
struct UPassive_OperativeDLC_9_C_ExecuteUbergraph_Passive_OperativeDLC_10_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
