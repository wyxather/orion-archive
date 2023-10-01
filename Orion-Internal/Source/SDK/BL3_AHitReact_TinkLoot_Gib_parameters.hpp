#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_TinkLoot_Gib_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C.OnBegin
struct UAHitReact_TinkLoot_Gib_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_TinkLoot_Gib.AHitReact_TinkLoot_Gib_C.ExecuteUbergraph_AHitReact_TinkLoot_Gib
struct UAHitReact_TinkLoot_Gib_C_ExecuteUbergraph_AHitReact_TinkLoot_Gib_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
