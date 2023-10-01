#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkPsycho_Fidget7_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_TinkPsycho_Fidget7.A_TinkPsycho_Fidget7_C.OnBegin
struct UA_TinkPsycho_Fidget7_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkPsycho_Fidget7.A_TinkPsycho_Fidget7_C.OnEnd
struct UA_TinkPsycho_Fidget7_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkPsycho_Fidget7.A_TinkPsycho_Fidget7_C.ExecuteUbergraph_A_TinkPsycho_Fidget7
struct UA_TinkPsycho_Fidget7_C_ExecuteUbergraph_A_TinkPsycho_Fidget7_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
