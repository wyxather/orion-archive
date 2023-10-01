#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_Reload_M3B1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_SR_JAK_Reload_M3B1.Action_SR_JAK_Reload_M3B1_C.OnEnd
struct UAction_SR_JAK_Reload_M3B1_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_SR_JAK_Reload_M3B1.Action_SR_JAK_Reload_M3B1_C.ExecuteUbergraph_Action_SR_JAK_Reload_M3B1
struct UAction_SR_JAK_Reload_M3B1_C_ExecuteUbergraph_Action_SR_JAK_Reload_M3B1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
