#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Flop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamageScalar
struct UAction_AOE_Flop_C_GetDamageScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamage
struct UAction_AOE_Flop_C_GetDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Flop.Action_AOE_Flop_C.OnActionStart
struct UAction_AOE_Flop_C_OnActionStart_Params
{
};

// Function Action_AOE_Flop.Action_AOE_Flop_C.ExecuteUbergraph_Action_AOE_Flop
struct UAction_AOE_Flop_C_ExecuteUbergraph_Action_AOE_Flop_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
