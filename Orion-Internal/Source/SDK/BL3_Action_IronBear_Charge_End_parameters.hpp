#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_Charge_End_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnAnimEnd_B40E293946052D568378BF989B320782
struct UAction_IronBear_Charge_End_C_OnAnimEnd_B40E293946052D568378BF989B320782_Params
{
};

// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd_B40E293946052D568378BF989B320782
struct UAction_IronBear_Charge_End_C_OnEnd_B40E293946052D568378BF989B320782_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnBegin
struct UAction_IronBear_Charge_End_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd
struct UAction_IronBear_Charge_End_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.ExecuteUbergraph_Action_IronBear_Charge_End
struct UAction_IronBear_Charge_End_C_ExecuteUbergraph_Action_IronBear_Charge_End_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
