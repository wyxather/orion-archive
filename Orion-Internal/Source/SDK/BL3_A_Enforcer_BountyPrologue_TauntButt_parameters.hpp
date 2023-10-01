#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Enforcer_BountyPrologue_TauntButt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.OnBegin
struct UA_Enforcer_BountyPrologue_TauntButt_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_Begin
struct UA_Enforcer_BountyPrologue_TauntButt_C_Notify_AllowButtStagger_Begin_Params
{
};

// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_End
struct UA_Enforcer_BountyPrologue_TauntButt_C_Notify_AllowButtStagger_End_Params
{
};

// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_Abort
struct UA_Enforcer_BountyPrologue_TauntButt_C_Notify_AllowButtStagger_Abort_Params
{
};

// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.OnEnd
struct UA_Enforcer_BountyPrologue_TauntButt_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.ExecuteUbergraph_A_Enforcer_BountyPrologue_TauntButt
struct UA_Enforcer_BountyPrologue_TauntButt_C_ExecuteUbergraph_A_Enforcer_BountyPrologue_TauntButt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
