#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Apply_Root_Rot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.Clear Timer
struct UAction_Apply_Root_Rot_C_Clear_Timer_Params
{
};

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.Get Owners Transform
struct UAction_Apply_Root_Rot_C_Get_Owners_Transform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnActionStart
struct UAction_Apply_Root_Rot_C_OnActionStart_Params
{
};

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnActionStop
struct UAction_Apply_Root_Rot_C_OnActionStop_Params
{
};

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.ApplyCough
struct UAction_Apply_Root_Rot_C_ApplyCough_Params
{
};

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnRestore
struct UAction_Apply_Root_Rot_C_OnRestore_Params
{
};

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnDead_Event_1
struct UAction_Apply_Root_Rot_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.ExecuteUbergraph_Action_Apply_Root_Rot
struct UAction_Apply_Root_Rot_C_ExecuteUbergraph_Action_Apply_Root_Rot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
