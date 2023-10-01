#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkLoot_Announce1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.OnServerBegin
struct UA_TinkLoot_Announce1_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.OnServerEnd
struct UA_TinkLoot_Announce1_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.ExecuteUbergraph_A_TinkLoot_Announce1
struct UA_TinkLoot_Announce1_C_ExecuteUbergraph_A_TinkLoot_Announce1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
