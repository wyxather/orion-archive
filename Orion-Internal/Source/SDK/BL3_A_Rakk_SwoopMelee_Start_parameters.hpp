#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_SwoopMelee_Start_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Rakk_SwoopMelee_Start.A_Rakk_SwoopMelee_Start_C.OnBegin
struct UA_Rakk_SwoopMelee_Start_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_SwoopMelee_Start.A_Rakk_SwoopMelee_Start_C.OnEnd
struct UA_Rakk_SwoopMelee_Start_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_SwoopMelee_Start.A_Rakk_SwoopMelee_Start_C.ExecuteUbergraph_A_Rakk_SwoopMelee_Start
struct UA_Rakk_SwoopMelee_Start_C_ExecuteUbergraph_A_Rakk_SwoopMelee_Start_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
