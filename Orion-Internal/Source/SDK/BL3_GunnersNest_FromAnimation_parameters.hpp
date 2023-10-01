#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GunnersNest_FromAnimation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.Update
struct UGunnersNest_FromAnimation_C_Update_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraState**                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.ExecuteUbergraph_GunnersNest_FromAnimation
struct UGunnersNest_FromAnimation_C_ExecuteUbergraph_GunnersNest_FromAnimation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
