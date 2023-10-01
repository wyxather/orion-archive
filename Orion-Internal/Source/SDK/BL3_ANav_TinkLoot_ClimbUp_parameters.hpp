#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_TinkLoot_ClimbUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ANav_TinkLoot_ClimbUp.ANav_TinkLoot_ClimbUp_C.OnBegin
struct UANav_TinkLoot_ClimbUp_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_TinkLoot_ClimbUp.ANav_TinkLoot_ClimbUp_C.OnEnd
struct UANav_TinkLoot_ClimbUp_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_TinkLoot_ClimbUp.ANav_TinkLoot_ClimbUp_C.ExecuteUbergraph_ANav_TinkLoot_ClimbUp
struct UANav_TinkLoot_ClimbUp_C_ExecuteUbergraph_ANav_TinkLoot_ClimbUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
