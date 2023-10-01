#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Salvage_Effect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.UserConstructionScript
struct ABP_Salvage_Effect_C_UserConstructionScript_Params
{
};

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.ReceiveBeginPlay
struct ABP_Salvage_Effect_C_ReceiveBeginPlay_Params
{
};

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.ChallengeCompleted
struct ABP_Salvage_Effect_C_ChallengeCompleted_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengeClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.EvaulateState
struct ABP_Salvage_Effect_C_EvaulateState_Params
{
};

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.__UserState_ClaptrapState_1
struct ABP_Salvage_Effect_C___UserState_ClaptrapState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.__UserState_ClaptrapState_2
struct ABP_Salvage_Effect_C___UserState_ClaptrapState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.ExecuteUbergraph_BP_Salvage_Effect
struct ABP_Salvage_Effect_C_ExecuteUbergraph_BP_Salvage_Effect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
