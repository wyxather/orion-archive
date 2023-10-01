#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GunnersNest_Enter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_GunnersNest_Enter.Action_GunnersNest_Enter_C.OnBegin
struct UAction_GunnersNest_Enter_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_GunnersNest_Enter.Action_GunnersNest_Enter_C.ExecuteUbergraph_Action_GunnersNest_Enter
struct UAction_GunnersNest_Enter_C_ExecuteUbergraph_Action_GunnersNest_Enter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
