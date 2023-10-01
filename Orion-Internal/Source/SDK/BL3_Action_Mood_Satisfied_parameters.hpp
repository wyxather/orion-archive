#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Mood_Satisfied_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mood_Satisfied.Action_Mood_Satisfied_C.OnBegin
struct UAction_Mood_Satisfied_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Mood_Satisfied.Action_Mood_Satisfied_C.ExecuteUbergraph_Action_Mood_Satisfied
struct UAction_Mood_Satisfied_C_ExecuteUbergraph_Action_Mood_Satisfied_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
