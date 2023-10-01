#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Bp_DialogueStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bp_DialogueStage.Bp_DialogueStage_C.StageCameraTargetMatches
struct ABp_DialogueStage_C_StageCameraTargetMatches_Params
{
	struct FEventTreeStage*                            Stage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Matches;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.ExitAnimatedCamera
struct ABp_DialogueStage_C_ExitAnimatedCamera_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.ShowDialog
struct ABp_DialogueStage_C_ShowDialog_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.SetActive
struct ABp_DialogueStage_C_SetActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.CacheEventRegion
struct ABp_DialogueStage_C_CacheEventRegion_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupCamera
struct ABp_DialogueStage_C_SetupCamera_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.IsLocalPlayerInEventRegion
struct ABp_DialogueStage_C_IsLocalPlayerInEventRegion_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.OrientNPCToPlayer
struct ABp_DialogueStage_C_OrientNPCToPlayer_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupShouldViewStage
struct ABp_DialogueStage_C_SetupShouldViewStage_Params
{
	bool*                                              DoView;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.CleanupCharacters
struct ABp_DialogueStage_C_CleanupCharacters_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupCharacters
struct ABp_DialogueStage_C_SetupCharacters_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupAnimatedCamera
struct ABp_DialogueStage_C_SetupAnimatedCamera_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupStage
struct ABp_DialogueStage_C_SetupStage_Params
{
	struct FEventTreeStage*                            Stage;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.Begin
struct ABp_DialogueStage_C_Begin_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.End
struct ABp_DialogueStage_C_End_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.OnSpectateTargetChanged_Event_1
struct ABp_DialogueStage_C_OnSpectateTargetChanged_Event_1_Params
{
	class AActor**                                     SpectateTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.OnUpdateActiveState_Event_1
struct ABp_DialogueStage_C_OnUpdateActiveState_Event_1_Params
{
};

// Function Bp_DialogueStage.Bp_DialogueStage_C.ExecuteUbergraph_Bp_DialogueStage
struct ABp_DialogueStage_C_ExecuteUbergraph_Bp_DialogueStage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
