#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleGameplayAndNetworkRelevant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ForceTotalDestruction
struct ABP_DestructibleGameplayAndNetworkRelevant_C_ForceTotalDestruction_Params
{
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.TurnOffNavPaint
struct ABP_DestructibleGameplayAndNetworkRelevant_C_TurnOffNavPaint_Params
{
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.AttemptLootableScripting
struct ABP_DestructibleGameplayAndNetworkRelevant_C_AttemptLootableScripting_Params
{
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.UserConstructionScript
struct ABP_DestructibleGameplayAndNetworkRelevant_C_UserConstructionScript_Params
{
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_SkipToDestroyedState
struct ABP_DestructibleGameplayAndNetworkRelevant_C_BPI_SkipToDestroyedState_Params
{
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_SetFracturable
struct ABP_DestructibleGameplayAndNetworkRelevant_C_BPI_SetFracturable_Params
{
	bool                                               Fracturable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.CauseDamageToRandomChunk
struct ABP_DestructibleGameplayAndNetworkRelevant_C_CauseDamageToRandomChunk_Params
{
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ContinueSelfDamageLoop
struct ABP_DestructibleGameplayAndNetworkRelevant_C_ContinueSelfDamageLoop_Params
{
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_ScriptedTotalDestruction
struct ABP_DestructibleGameplayAndNetworkRelevant_C_BPI_ScriptedTotalDestruction_Params
{
	float                                              DamageRadius;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_GbxComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayAndNetworkRelevant
struct ABP_DestructibleGameplayAndNetworkRelevant_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_GbxComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayAndNetworkRelevant_Params
{
	struct FVector                                     FractureCentroid;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              FracturePercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSilentFracture;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ExecuteUbergraph_BP_DestructibleGameplayAndNetworkRelevant
struct ABP_DestructibleGameplayAndNetworkRelevant_C_ExecuteUbergraph_BP_DestructibleGameplayAndNetworkRelevant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
