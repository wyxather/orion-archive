#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkPsycho_Fidget8_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_TinkPsycho_Fidget8.A_TinkPsycho_Fidget8_C.OnBegin
struct UA_TinkPsycho_Fidget8_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkPsycho_Fidget8.A_TinkPsycho_Fidget8_C.OnEnd
struct UA_TinkPsycho_Fidget8_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_TinkPsycho_Fidget8.A_TinkPsycho_Fidget8_C.ExecuteUbergraph_A_TinkPsycho_Fidget8
struct UA_TinkPsycho_Fidget8_C_ExecuteUbergraph_A_TinkPsycho_Fidget8_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
