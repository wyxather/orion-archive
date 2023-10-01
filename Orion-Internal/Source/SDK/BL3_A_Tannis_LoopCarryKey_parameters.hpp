#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tannis_LoopCarryKey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Tannis_LoopCarryKey.A_Tannis_LoopCarryKey_C.OnEnd
struct UA_Tannis_LoopCarryKey_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Tannis_LoopCarryKey.A_Tannis_LoopCarryKey_C.ExecuteUbergraph_A_Tannis_LoopCarryKey
struct UA_Tannis_LoopCarryKey_C_ExecuteUbergraph_A_Tannis_LoopCarryKey_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
