#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_LeapingMelee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.OnBegin
struct UA_PsychoMale_Shared_LeapingMelee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.OnEnd
struct UA_PsychoMale_Shared_LeapingMelee_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.MeleeStrike
struct UA_PsychoMale_Shared_LeapingMelee_C_MeleeStrike_Params
{
};

// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.ExecuteUbergraph_A_PsychoMale_Shared_LeapingMelee
struct UA_PsychoMale_Shared_LeapingMelee_C_ExecuteUbergraph_A_PsychoMale_Shared_LeapingMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
