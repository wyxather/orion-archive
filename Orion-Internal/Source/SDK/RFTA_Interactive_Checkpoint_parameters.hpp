#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Checkpoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ShowPrompt
struct AInteractive_Checkpoint_C_ShowPrompt_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsActorInteracting
struct AInteractive_Checkpoint_C_IsActorInteracting_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsAPlayerAtADifferentCheckpoint
struct AInteractive_Checkpoint_C_IsAPlayerAtADifferentCheckpoint_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsLocalPlayerAtAnyCheckpoint
struct AInteractive_Checkpoint_C_IsLocalPlayerAtAnyCheckpoint_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsAnyoneInteracting
struct AInteractive_Checkpoint_C_IsAnyoneInteracting_Params
{
	bool                                               SomeoneIsInteracting;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveGrabbingPlayer
struct AInteractive_Checkpoint_C_RemoveGrabbingPlayer_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddGrabbingPlayer
struct AInteractive_Checkpoint_C_AddGrabbingPlayer_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ClearAllCheckpointNotifications
struct AInteractive_Checkpoint_C_ClearAllCheckpointNotifications_Params
{
	class ACharacter_Master_Player_C**                 Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerUsingCheckpoint
struct AInteractive_Checkpoint_C_IsPlayerUsingCheckpoint_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerNotInCheckpointMenu
struct AInteractive_Checkpoint_C_IsPlayerNotInCheckpointMenu_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveCheckpointNotification
struct AInteractive_Checkpoint_C_RemoveCheckpointNotification_Params
{
	class ACharacter_Master_Player_C**                 Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddCheckpointNotification
struct AInteractive_Checkpoint_C_AddCheckpointNotification_Params
{
	class ACharacter_Master_Player_C**                 Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DurationOverride;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsCheckpointNotificationActive
struct AInteractive_Checkpoint_C_IsCheckpointNotificationActive_Params
{
	class ACharacter_Master_Player_C**                 Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.Get Local Player
struct AInteractive_Checkpoint_C_Get_Local_Player_Params
{
	class ACharacter_Master_Player_C*                  AsCharacter_Master_Player;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsPlayerInCheckpointMenu
struct AInteractive_Checkpoint_C_IsPlayerInCheckpointMenu_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CanCheckpointActivate
struct AInteractive_Checkpoint_C_CanCheckpointActivate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.AddTutorialPrompts
struct AInteractive_Checkpoint_C_AddTutorialPrompts_Params
{
	class ARemnantCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.RemoveTutorialPrompts
struct AInteractive_Checkpoint_C_RemoveTutorialPrompts_Params
{
	class ARemnantCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ReplenishHealthOnly
struct AInteractive_Checkpoint_C_ReplenishHealthOnly_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.SetAsCurrentWaypoint
struct AInteractive_Checkpoint_C_SetAsCurrentWaypoint_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.TryUpdateLevelScaling
struct AInteractive_Checkpoint_C_TryUpdateLevelScaling_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.IsActive
struct AInteractive_Checkpoint_C_IsActive_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CanUpgrade
struct AInteractive_Checkpoint_C_CanUpgrade_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanUpgrade;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       UpgradeDetails;                                           // (Parm, OutParm)
	class UTexture*                                    Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnUpgrade
struct AInteractive_Checkpoint_C_OnUpgrade_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.TransitionFromMenu
struct AInteractive_Checkpoint_C_TransitionFromMenu_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.TransitionToMenu
struct AInteractive_Checkpoint_C_TransitionToMenu_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.EndUseCheckpoint
struct AInteractive_Checkpoint_C_EndUseCheckpoint_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BeginUseCheckpoint
struct AInteractive_Checkpoint_C_BeginUseCheckpoint_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              WasSummoned;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AInteractive_Checkpoint_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct AInteractive_Checkpoint_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AInteractive_Checkpoint_C_BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct AInteractive_Checkpoint_C_BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnBeginActivation
struct AInteractive_Checkpoint_C_OnBeginActivation_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnActivate
struct AInteractive_Checkpoint_C_OnActivate_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnFinishActivation
struct AInteractive_Checkpoint_C_OnFinishActivation_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.DoActivation
struct AInteractive_Checkpoint_C_DoActivation_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnNewPawn
struct AInteractive_Checkpoint_C_OnNewPawn_Params
{
	class APawn**                                      NewPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn**                                      PreviousPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.DoRedShardActivation
struct AInteractive_Checkpoint_C_DoRedShardActivation_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ReceiveTick
struct AInteractive_Checkpoint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnBeginGrab
struct AInteractive_Checkpoint_C_OnBeginGrab_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnEndGrab
struct AInteractive_Checkpoint_C_OnEndGrab_Params
{
	class ARemnantCharacter**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
struct AInteractive_Checkpoint_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.OnShowPrompt
struct AInteractive_Checkpoint_C_OnShowPrompt_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.ExecuteUbergraph_Interactive_Checkpoint
struct AInteractive_Checkpoint_C_ExecuteUbergraph_Interactive_Checkpoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CustomDepth__DelegateSignature
struct AInteractive_Checkpoint_C_CustomDepth__DelegateSignature_Params
{
};

// Function Interactive_Checkpoint.Interactive_Checkpoint_C.CheckpointUpgraded__DelegateSignature
struct AInteractive_Checkpoint_C_CheckpointUpgraded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
