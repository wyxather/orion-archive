#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_JAK_Reload_03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PS_JAK_Reload_03.Action_PS_JAK_Reload_03_C.OnEnd
struct UAction_PS_JAK_Reload_03_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PS_JAK_Reload_03.Action_PS_JAK_Reload_03_C.OnAnimEnd
struct UAction_PS_JAK_Reload_03_C_OnAnimEnd_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PS_JAK_Reload_03.Action_PS_JAK_Reload_03_C.ExecuteUbergraph_Action_PS_JAK_Reload_03
struct UAction_PS_JAK_Reload_03_C_ExecuteUbergraph_Action_PS_JAK_Reload_03_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
