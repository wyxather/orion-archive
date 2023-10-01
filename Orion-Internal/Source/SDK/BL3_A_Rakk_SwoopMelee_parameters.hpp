#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_SwoopMelee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.OnBegin
struct UA_Rakk_SwoopMelee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.MeleeAttack
struct UA_Rakk_SwoopMelee_C_MeleeAttack_Params
{
};

// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.OnEnd
struct UA_Rakk_SwoopMelee_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.ExecuteUbergraph_A_Rakk_SwoopMelee
struct UA_Rakk_SwoopMelee_C_ExecuteUbergraph_A_Rakk_SwoopMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
