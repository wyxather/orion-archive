#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_HoverBreath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Rakk_HoverBreath.A_Rakk_HoverBreath_C.OnBegin
struct UA_Rakk_HoverBreath_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_HoverBreath.A_Rakk_HoverBreath_C.OnEnd
struct UA_Rakk_HoverBreath_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_HoverBreath.A_Rakk_HoverBreath_C.ExecuteUbergraph_A_Rakk_HoverBreath
struct UA_Rakk_HoverBreath_C_ExecuteUbergraph_A_Rakk_HoverBreath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
