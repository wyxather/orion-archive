#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_Mod4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.PlayFeedback
struct ABPPetEnrageRift_Mod4_C_PlayFeedback_Params
{
	class AActor*                                      InLinkedTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.GetOverlapComponent
struct ABPPetEnrageRift_Mod4_C_GetOverlapComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.UserConstructionScript
struct ABPPetEnrageRift_Mod4_C_UserConstructionScript_Params
{
};

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnShutdownRequested
struct ABPPetEnrageRift_Mod4_C_OnShutdownRequested_Params
{
	bool*                                              bForced;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetAdded
struct ABPPetEnrageRift_Mod4_C_OnLinkedTargetAdded_Params
{
	class AOakCharacter**                              InLinkedTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetRemoved
struct ABPPetEnrageRift_Mod4_C_OnLinkedTargetRemoved_Params
{
	class AOakCharacter**                              InLinkedTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.ExecuteUbergraph_BPPetEnrageRift_Mod4
struct ABPPetEnrageRift_Mod4_C_ExecuteUbergraph_BPPetEnrageRift_Mod4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
