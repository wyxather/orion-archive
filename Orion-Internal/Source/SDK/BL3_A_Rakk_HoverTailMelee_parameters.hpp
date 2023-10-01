#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_HoverTailMelee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Rakk_HoverTailMelee.A_Rakk_HoverTailMelee_C.OnBegin
struct UA_Rakk_HoverTailMelee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_HoverTailMelee.A_Rakk_HoverTailMelee_C.Notify_Melee
struct UA_Rakk_HoverTailMelee_C_Notify_Melee_Params
{
};

// Function A_Rakk_HoverTailMelee.A_Rakk_HoverTailMelee_C.ExecuteUbergraph_A_Rakk_HoverTailMelee
struct UA_Rakk_HoverTailMelee_C_ExecuteUbergraph_A_Rakk_HoverTailMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
