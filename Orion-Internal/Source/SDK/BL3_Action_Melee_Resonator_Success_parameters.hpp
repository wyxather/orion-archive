#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Resonator_Success_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnBeginBringUpWeapon
struct UAction_Melee_Resonator_Success_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnEnd
struct UAction_Melee_Resonator_Success_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Start
struct UAction_Melee_Resonator_Success_C_Resonator_Start_Params
{
};

// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Stop
struct UAction_Melee_Resonator_Success_C_Resonator_Stop_Params
{
};

// Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.ExecuteUbergraph_Action_Melee_Resonator_Success
struct UAction_Melee_Resonator_Success_C_ExecuteUbergraph_Action_Melee_Resonator_Success_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
