#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkLoot_FidgetDig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.OnBegin
struct UA_TinkLoot_FidgetDig_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.OnEnd
struct UA_TinkLoot_FidgetDig_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.ExecuteUbergraph_A_TinkLoot_FidgetDig
struct UA_TinkLoot_FidgetDig_C_ExecuteUbergraph_A_TinkLoot_FidgetDig_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
