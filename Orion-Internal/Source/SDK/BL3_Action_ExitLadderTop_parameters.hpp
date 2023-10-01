#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_ExitLadderTop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_ExitLadderTop.Action_ExitLadderTop_C.OnBegin
struct UAction_ExitLadderTop_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_ExitLadderTop.Action_ExitLadderTop_C.ExecuteUbergraph_Action_ExitLadderTop
struct UAction_ExitLadderTop_C_ExecuteUbergraph_Action_ExitLadderTop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
