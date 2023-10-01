#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PsychoMale_IdleCheer4Loop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PsychoMale_IdleCheer4Loop.Action_PsychoMale_IdleCheer4Loop_C.OnBegin
struct UAction_PsychoMale_IdleCheer4Loop_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PsychoMale_IdleCheer4Loop.Action_PsychoMale_IdleCheer4Loop_C.OnEnd
struct UAction_PsychoMale_IdleCheer4Loop_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PsychoMale_IdleCheer4Loop.Action_PsychoMale_IdleCheer4Loop_C.ExecuteUbergraph_Action_PsychoMale_IdleCheer4Loop
struct UAction_PsychoMale_IdleCheer4Loop_C_ExecuteUbergraph_Action_PsychoMale_IdleCheer4Loop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
