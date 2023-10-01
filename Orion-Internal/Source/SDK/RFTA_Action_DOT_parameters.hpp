#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DOT.Action_DOT_C.ShouldDoDamageScaling
struct UAction_DOT_C_ShouldDoDamageScaling_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_DOT.Action_DOT_C.CanDoDamage
struct UAction_DOT_C_CanDoDamage_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_DOT.Action_DOT_C.GetLevelScalar
struct UAction_DOT_C_GetLevelScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DOT.Action_DOT_C.GetDamageScalar
struct UAction_DOT_C_GetDamageScalar_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DOT.Action_DOT_C.IsImmune
struct UAction_DOT_C_IsImmune_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_DOT.Action_DOT_C.DoDamage
struct UAction_DOT_C_DoDamage_Params
{
};

// Function Action_DOT.Action_DOT_C.SetDamage
struct UAction_DOT_C_SetDamage_Params
{
	float*                                             TotalDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              ApplyLevelScaling;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_DOT.Action_DOT_C.OnActionStart
struct UAction_DOT_C_OnActionStart_Params
{
};

// Function Action_DOT.Action_DOT_C.OnDOT
struct UAction_DOT_C_OnDOT_Params
{
};

// Function Action_DOT.Action_DOT_C.OnDead_Event_1
struct UAction_DOT_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_DOT.Action_DOT_C.OnActionStop
struct UAction_DOT_C_OnActionStop_Params
{
};

// Function Action_DOT.Action_DOT_C.ExecuteUbergraph_Action_DOT
struct UAction_DOT_C_ExecuteUbergraph_Action_DOT_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
