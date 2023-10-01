#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseTranceSingularity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetIgnoredActors
struct ABP_PhaseTranceSingularity_C_GetIgnoredActors_Params
{
	TArray<class AActor*>                              res;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetSingularityDuration
struct ABP_PhaseTranceSingularity_C_GetSingularityDuration_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.UserConstructionScript
struct ABP_PhaseTranceSingularity_C_UserConstructionScript_Params
{
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReceiveBeginPlay
struct ABP_PhaseTranceSingularity_C_ReceiveBeginPlay_Params
{
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ConfigureSingularity
struct ABP_PhaseTranceSingularity_C_ConfigureSingularity_Params
{
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.OnShutdownRequested
struct ABP_PhaseTranceSingularity_C_OnShutdownRequested_Params
{
	bool*                                              bForced;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.CleanShutdownMulticast
struct ABP_PhaseTranceSingularity_C_CleanShutdownMulticast_Params
{
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReleaseParticleSystem
struct ABP_PhaseTranceSingularity_C_ReleaseParticleSystem_Params
{
};

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ExecuteUbergraph_BP_PhaseTranceSingularity
struct ABP_PhaseTranceSingularity_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
