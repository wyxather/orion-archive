#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeSlam1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.GbxAsyncRequest_Hit_11117E0B4C3CBCBEB6C434B346B833D5
struct UA_PsychoMale_BadassRunning_MeleeSlam1_C_GbxAsyncRequest_Hit_11117E0B4C3CBCBEB6C434B346B833D5_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.OnBegin
struct UA_PsychoMale_BadassRunning_MeleeSlam1_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.OnEnd
struct UA_PsychoMale_BadassRunning_MeleeSlam1_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.MeleeStrike
struct UA_PsychoMale_BadassRunning_MeleeSlam1_C_MeleeStrike_Params
{
};

// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.LockRotation
struct UA_PsychoMale_BadassRunning_MeleeSlam1_C_LockRotation_Params
{
};

// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam1
struct UA_PsychoMale_BadassRunning_MeleeSlam1_C_ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
