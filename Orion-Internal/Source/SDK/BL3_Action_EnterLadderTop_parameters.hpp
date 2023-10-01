#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_EnterLadderTop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_EnterLadderTop.Action_EnterLadderTop_C.OnBegin
struct UAction_EnterLadderTop_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_EnterLadderTop.Action_EnterLadderTop_C.ExecuteUbergraph_Action_EnterLadderTop
struct UAction_EnterLadderTop_C_ExecuteUbergraph_Action_EnterLadderTop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
