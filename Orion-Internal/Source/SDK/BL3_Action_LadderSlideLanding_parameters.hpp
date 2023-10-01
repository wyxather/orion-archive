#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_LadderSlideLanding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_LadderSlideLanding.Action_LadderSlideLanding_C.OnBegin
struct UAction_LadderSlideLanding_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_LadderSlideLanding.Action_LadderSlideLanding_C.ExecuteUbergraph_Action_LadderSlideLanding
struct UAction_LadderSlideLanding_C_ExecuteUbergraph_Action_LadderSlideLanding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
