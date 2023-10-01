#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Mus_Recruitment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.SetAudioComponentLocationOverride
struct ABP_Mus_Recruitment_C_SetAudioComponentLocationOverride_Params
{
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.PopulateSpeakerLocations
struct ABP_Mus_Recruitment_C_PopulateSpeakerLocations_Params
{
	TArray<class UObject*>                             Speaker_Proxies;                                          // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.UserConstructionScript
struct ABP_Mus_Recruitment_C_UserConstructionScript_Params
{
};

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ReceiveBeginPlay
struct ABP_Mus_Recruitment_C_ReceiveBeginPlay_Params
{
};

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ReceiveEndPlay
struct ABP_Mus_Recruitment_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BP_Mus_Recruitment
struct ABP_Mus_Recruitment_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BP_Mus_Recruitment_Params
{
};

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_BP_Mus_Recruitment
struct ABP_Mus_Recruitment_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_BP_Mus_Recruitment_Params
{
	struct FMissionObjectiveReference                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ExecuteUbergraph_BP_Mus_Recruitment
struct ABP_Mus_Recruitment_C_ExecuteUbergraph_BP_Mus_Recruitment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
