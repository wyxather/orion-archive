#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeSlam2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.GbxAsyncRequest_Hit_A343E4984F57AA637FF45A9BE50E1813
struct UA_PsychoMale_BadassRunning_MeleeSlam2_C_GbxAsyncRequest_Hit_A343E4984F57AA637FF45A9BE50E1813_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.OnBegin
struct UA_PsychoMale_BadassRunning_MeleeSlam2_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.OnEnd
struct UA_PsychoMale_BadassRunning_MeleeSlam2_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.MeleeStrike
struct UA_PsychoMale_BadassRunning_MeleeSlam2_C_MeleeStrike_Params
{
};

// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.LockRotation
struct UA_PsychoMale_BadassRunning_MeleeSlam2_C_LockRotation_Params
{
};

// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam2
struct UA_PsychoMale_BadassRunning_MeleeSlam2_C_ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
