#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Operative_Miss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnEnd
struct UAction_Melee_Operative_Miss_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBeginBringUpWeapon
struct UAction_Melee_Operative_Miss_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOnOperativeBlades
struct UAction_Melee_Operative_Miss_C_TurnOnOperativeBlades_Params
{
};

// Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOffOperativeBlades
struct UAction_Melee_Operative_Miss_C_TurnOffOperativeBlades_Params
{
};

// Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBegin
struct UAction_Melee_Operative_Miss_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.ExecuteUbergraph_Action_Melee_Operative_Miss
struct UAction_Melee_Operative_Miss_C_ExecuteUbergraph_Action_Melee_Operative_Miss_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
