#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Artifact_Sparkplug_Augment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.UserConstructionScript
struct AProj_Artifact_Sparkplug_Augment_C_UserConstructionScript_Params
{
};

// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
struct AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
struct AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params
{
	class AActor*                                      LeavingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ReceiveDestroyed
struct AProj_Artifact_Sparkplug_Augment_C_ReceiveDestroyed_Params
{
};

// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment
struct AProj_Artifact_Sparkplug_Augment_C_ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
