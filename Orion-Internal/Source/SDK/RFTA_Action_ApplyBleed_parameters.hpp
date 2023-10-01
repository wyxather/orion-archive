#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_ApplyBleed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_ApplyBleed.Action_ApplyBleed_C.NoBleed
struct UAction_ApplyBleed_C_NoBleed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_ApplyBleed.Action_ApplyBleed_C.OnActionStart
struct UAction_ApplyBleed_C_OnActionStart_Params
{
};

// Function Action_ApplyBleed.Action_ApplyBleed_C.ExecuteUbergraph_Action_ApplyBleed
struct UAction_ApplyBleed_C_ExecuteUbergraph_Action_ApplyBleed_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
