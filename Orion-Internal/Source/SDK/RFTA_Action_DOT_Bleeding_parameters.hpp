#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_Bleeding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.Get Tag
struct UAction_DOT_Bleeding_C_Get_Tag_Params
{
	struct FName*                                      Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.GetDamageScalar
struct UAction_DOT_Bleeding_C_GetDamageScalar_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.UpdateDamageScalar
struct UAction_DOT_Bleeding_C_UpdateDamageScalar_Params
{
};

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnActionStart
struct UAction_DOT_Bleeding_C_OnActionStart_Params
{
};

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnStateChange_Event_1
struct UAction_DOT_Bleeding_C_OnStateChange_Event_1_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnComputeStats
struct UAction_DOT_Bleeding_C_OnComputeStats_Params
{
};

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.ExecuteUbergraph_Action_DOT_Bleeding
struct UAction_DOT_Bleeding_C_ExecuteUbergraph_Action_DOT_Bleeding_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
