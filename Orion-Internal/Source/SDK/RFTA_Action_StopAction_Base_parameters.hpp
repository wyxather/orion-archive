#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StopAction_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_StopAction_Base.Action_StopAction_Base_C.Stop Action
struct UAction_StopAction_Base_C_Stop_Action_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StopAction_Base.Action_StopAction_Base_C.OnActionStart
struct UAction_StopAction_Base_C_OnActionStart_Params
{
};

// Function Action_StopAction_Base.Action_StopAction_Base_C.ExecuteUbergraph_Action_StopAction_Base
struct UAction_StopAction_Base_C_ExecuteUbergraph_Action_StopAction_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
