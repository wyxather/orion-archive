#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_PlayerInPlayerBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.OnTick
struct UAction_PlayerInPlayerBase_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.ExecuteUbergraph_Action_PlayerInPlayerBase
struct UAction_PlayerInPlayerBase_C_ExecuteUbergraph_Action_PlayerInPlayerBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
