#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Varkid_Death_Pod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.Notify_PodBurst
struct UAHitReact_Varkid_Death_Pod_C_Notify_PodBurst_Params
{
};

// Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.OnBegin
struct UAHitReact_Varkid_Death_Pod_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.ExecuteUbergraph_AHitReact_Varkid_Death_Pod
struct UAHitReact_Varkid_Death_Pod_C_ExecuteUbergraph_AHitReact_Varkid_Death_Pod_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
