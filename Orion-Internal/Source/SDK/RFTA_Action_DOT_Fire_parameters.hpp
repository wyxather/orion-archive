#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_Fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStart
struct UAction_DOT_Fire_C_OnActionStart_Params
{
};

// Function Action_DOT_Fire.Action_DOT_Fire_C.OnCharacterEvent
struct UAction_DOT_Fire_C_OnCharacterEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStop
struct UAction_DOT_Fire_C_OnActionStop_Params
{
};

// Function Action_DOT_Fire.Action_DOT_Fire_C.ExecuteUbergraph_Action_DOT_Fire
struct UAction_DOT_Fire_C_ExecuteUbergraph_Action_DOT_Fire_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
