#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkLoot_Escape1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.OnServerBegin
struct UA_TinkLoot_Escape1_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.Escaped
struct UA_TinkLoot_Escape1_C_Escaped_Params
{
};

// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.TinkLockHitReact
struct UA_TinkLoot_Escape1_C_TinkLockHitReact_Params
{
};

// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.ExecuteUbergraph_A_TinkLoot_Escape1
struct UA_TinkLoot_Escape1_C_ExecuteUbergraph_A_TinkLoot_Escape1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
