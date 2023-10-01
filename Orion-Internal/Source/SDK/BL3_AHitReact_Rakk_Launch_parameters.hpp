#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Rakk_Launch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.OnBegin
struct UAHitReact_Rakk_Launch_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.OnEnd
struct UAHitReact_Rakk_Launch_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.ExecuteUbergraph_AHitReact_Rakk_Launch
struct UAHitReact_Rakk_Launch_C_ExecuteUbergraph_AHitReact_Rakk_Launch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
