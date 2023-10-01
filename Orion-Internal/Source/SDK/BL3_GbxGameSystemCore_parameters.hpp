#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxGameSystemCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxGameSystemCore.GbxAnimTable.Autofill
struct UGbxAnimTable_Autofill_Params
{
};

// Function GbxGameSystemCore.GbxAction.OnServerEnd
struct UGbxAction_OnServerEnd_Params
{
	EGbxActionEndState                                 ActionEndState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.OnServerBegin
struct UGbxAction_OnServerBegin_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.OnEnd
struct UGbxAction_OnEnd_Params
{
	EGbxActionEndState                                 ActionEndState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.OnBegin
struct UGbxAction_OnBegin_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetVectorRegisterValue
struct UGbxAction_K2_GetVectorRegisterValue_Params
{
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVector;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetTimeRemaining
struct UGbxAction_K2_GetTimeRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetObjectRegisterValue
struct UGbxAction_K2_GetObjectRegisterValue_Params
{
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OutObject;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetNameRegisterValue
struct UGbxAction_K2_GetNameRegisterValue_Params
{
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OutName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetMaxCurrentTime
struct UGbxAction_K2_GetMaxCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetIntRegisterValue
struct UGbxAction_K2_GetIntRegisterValue_Params
{
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutInt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetFloatRegisterValue
struct UGbxAction_K2_GetFloatRegisterValue_Params
{
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutFloat;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetCurrentTime
struct UGbxAction_K2_GetCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetCurrentNormalizedTime
struct UGbxAction_K2_GetCurrentNormalizedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction.K2_GetActor
struct UGbxAction_K2_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.OnAnimEnd
struct UGbxAction_SimpleAnim_OnAnimEnd_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetTickAndRefreshBones
struct UGbxAction_SimpleAnim_K2_SetTickAndRefreshBones_Params
{
	bool                                               bLockResource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetPhysNoneWithRootMotion
struct UGbxAction_SimpleAnim_K2_SetPhysNoneWithRootMotion_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetMovement
struct UGbxAction_SimpleAnim_K2_SetMovement_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetLook
struct UGbxAction_SimpleAnim_K2_SetLook_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHitReactions
struct UGbxAction_SimpleAnim_K2_SetHitReactions_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLookLocked
struct UGbxAction_SimpleAnim_K2_SetHeadLookLocked_Params
{
	bool                                               bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLook
struct UGbxAction_SimpleAnim_K2_SetHeadLook_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetCollision
struct UGbxAction_SimpleAnim_K2_SetCollision_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAvoidance
struct UGbxAction_SimpleAnim_K2_SetAvoidance_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAIThinking
struct UGbxAction_SimpleAnim_K2_SetAIThinking_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAimRotation
struct UGbxAction_SimpleAnim_K2_SetAimRotation_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PreviewComponent.OnBlueprintCompiled
struct UPreviewComponent_OnBlueprintCompiled_Params
{
	class UBlueprint*                                  BP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_SetMantlingBlocked
struct UGbxAction_Anim_K2_SetMantlingBlocked_Params
{
	bool                                               bBlocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_SetGodMode
struct UGbxAction_Anim_K2_SetGodMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_SetFootIK
struct UGbxAction_Anim_K2_SetFootIK_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_SetDemigodMode
struct UGbxAction_Anim_K2_SetDemigodMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_SetCrouchBlocked
struct UGbxAction_Anim_K2_SetCrouchBlocked_Params
{
	bool                                               bBlocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_Resume
struct UGbxAction_Anim_K2_Resume_Params
{
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_RepProceedToNextSection
struct UGbxAction_Anim_K2_RepProceedToNextSection_Params
{
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_RepJumpToNextSection
struct UGbxAction_Anim_K2_RepJumpToNextSection_Params
{
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_ProceedToNextSection
struct UGbxAction_Anim_K2_ProceedToNextSection_Params
{
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_Pause
struct UGbxAction_Anim_K2_Pause_Params
{
};

// Function GbxGameSystemCore.GbxAction_Anim.K2_JumpToNextSection
struct UGbxAction_Anim_K2_JumpToNextSection_Params
{
};

// Function GbxGameSystemCore.TeamComponent.SetTeamToDefault
struct UTeamComponent_SetTeamToDefault_Params
{
};

// Function GbxGameSystemCore.TeamComponent.SetTeamCollision
struct UTeamComponent_SetTeamCollision_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.SetTeam
struct UTeamComponent_SetTeam_Params
{
	class UTeam*                                       NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.SetSourceTeamComponent
struct UTeamComponent_SetSourceTeamComponent_Params
{
	class UTeamComponent*                              NewSourceTeamComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.SetCollidesWithTeam
struct UTeamComponent_SetCollidesWithTeam_Params
{
	bool                                               bCollidesWithTeam;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.OnRep_Team
struct UTeamComponent_OnRep_Team_Params
{
	class UTeam*                                       OldTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.OnRep_bIgnoreCollisionWithTeam
struct UTeamComponent_OnRep_bIgnoreCollisionWithTeam_Params
{
};

// Function GbxGameSystemCore.TeamComponent.IsNeutral
struct UTeamComponent_IsNeutral_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.IsHostile
struct UTeamComponent_IsHostile_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.IsFriendly
struct UTeamComponent_IsFriendly_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.InitializeTeam
struct UTeamComponent_InitializeTeam_Params
{
	class UTeam*                                       NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.GetTeamCollisionChannel
struct UTeamComponent_GetTeamCollisionChannel_Params
{
	ETeamCollisionChannel                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsTeam
struct UTeamComponent_GetTeamAttitudeTowardsTeam_Params
{
	class UTeam*                                       OtherTeam;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsActor
struct UTeamComponent_GetTeamAttitudeTowardsActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.SetTeam
struct AGbxCharacter_SetTeam_Params
{
	class UTeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.SetPlayerMaster
struct AGbxCharacter_SetPlayerMaster_Params
{
	class AGbxCharacter*                               NewPlayerMaster;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.SetCharacterUIName
struct AGbxCharacter_SetCharacterUIName_Params
{
	class UGbxUIName*                                  NewCharacterUIName;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.SetCharacterNameFromString
struct AGbxCharacter_SetCharacterNameFromString_Params
{
	class FString                                      NewCharacterName;                                         // (Parm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxCharacter.SetCharacterName
struct AGbxCharacter_SetCharacterName_Params
{
	struct FText                                       NewCharacterName;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxCharacter.RotateCharacterTo
struct AGbxCharacter_RotateCharacterTo_Params
{
	struct FRotator                                    TargetRotation;                                           // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           Easing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.ReceiveOwnerPlayerControllerChanged
struct AGbxCharacter_ReceiveOwnerPlayerControllerChanged_Params
{
	class AGbxPlayerController*                        NewPlayerControllerOwner;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.OnRep_ReplicatedPawnAttachState
struct AGbxCharacter_OnRep_ReplicatedPawnAttachState_Params
{
};

// Function GbxGameSystemCore.GbxCharacter.OnLandingDataTriggered
struct AGbxCharacter_OnLandingDataTriggered_Params
{
	struct FLandingInfo                                LandingInfo;                                              // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.NetMulticast_TriggerHitReactionSound
struct AGbxCharacter_NetMulticast_TriggerHitReactionSound_Params
{
	class UCharacterSoundTag*                          Tag;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.NetMulticast_PlayLanded
struct AGbxCharacter_NetMulticast_PlayLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              ImpactSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLandFromJump;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandingData*                                LandingDataOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.NetMulticast_PlayJumped
struct AGbxCharacter_NetMulticast_PlayJumped_Params
{
};

// Function GbxGameSystemCore.GbxCharacter.IsZoomed
struct AGbxCharacter_IsZoomed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetTeamComponent
struct AGbxCharacter_GetTeamComponent_Params
{
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetTeam
struct AGbxCharacter_GetTeam_Params
{
	class UTeam*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetTargetingComponent
struct AGbxCharacter_GetTargetingComponent_Params
{
	class UTargetingComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetTargetableComponent
struct AGbxCharacter_GetTargetableComponent_Params
{
	class UTargetableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetPerceptionComponent
struct AGbxCharacter_GetPerceptionComponent_Params
{
	class UGbxPerceptionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachStatus
struct AGbxCharacter_GetPawnAttachStatus_Params
{
	EPawnAttachStatus                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachComponent
struct AGbxCharacter_GetPawnAttachComponent_Params
{
	class UPawnAttachSlotComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachActor
struct AGbxCharacter_GetPawnAttachActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetLookAtLocation
struct AGbxCharacter_GetLookAtLocation_Params
{
	float                                              OutWeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetLookAt
struct AGbxCharacter_GetLookAt_Params
{
	struct FVector                                     HeadLocation;                                             // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     EyeLocation;                                              // (Parm, OutParm, IsPlainOldData)
	float                                              HeadWeight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetFirstPersonMesh
struct AGbxCharacter_GetFirstPersonMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetFirstPersonComponent
struct AGbxCharacter_GetFirstPersonComponent_Params
{
	class UFirstPersonComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetBlackboardComponent
struct AGbxCharacter_GetBlackboardComponent_Params
{
	class UBlackboardComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetBlackboardAsset
struct AGbxCharacter_GetBlackboardAsset_Params
{
	class UBlackboardData*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetAvailableSocketNames
struct AGbxCharacter_GetAvailableSocketNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxCharacter.GetAimVectorStartLocation
struct AGbxCharacter_GetAimVectorStartLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.GetAimOffset
struct AGbxCharacter_GetAimOffset_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.FindFirstPersonComponent
struct AGbxCharacter_FindFirstPersonComponent_Params
{
	class UFirstPersonComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.DetachCharacter
struct AGbxCharacter_DetachCharacter_Params
{
	EDetachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.ClientRotateCharacterTo
struct AGbxCharacter_ClientRotateCharacterTo_Params
{
	struct FRotator                                    TargetRotation;                                           // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           Easing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.CauseEveryoneToForgetMe
struct AGbxCharacter_CauseEveryoneToForgetMe_Params
{
};

// Function GbxGameSystemCore.GbxCharacter.AttachCharacterToComponent
struct AGbxCharacter_AttachCharacterToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacter.AttachCharacterToActor
struct AGbxCharacter_AttachCharacterToActor_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BalanceStateComponent.SetGameStage
struct UBalanceStateComponent_SetGameStage_Params
{
	int                                                NewGameStage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BalanceStateComponent.SetExperienceLevel
struct UBalanceStateComponent_SetExperienceLevel_Params
{
	int                                                NewExperienceLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BalanceStateComponent.OnRep_ExperienceLevel
struct UBalanceStateComponent_OnRep_ExperienceLevel_Params
{
	int                                                OldExperienceLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BalanceStateComponent.OnInheritedBalanceSourceLevelChanged
struct UBalanceStateComponent_OnInheritedBalanceSourceLevelChanged_Params
{
	class UBalanceStateComponent*                      InheritedBalanceStateSource;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OldExperienceLevel;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewExperienceLevel;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BalanceStateComponent.GetGameStage
struct UBalanceStateComponent_GetGameStage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.BalanceStateComponent.GetExperienceLevel
struct UBalanceStateComponent_GetExperienceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.BalanceStateComponent.GetBalanceTableRow
struct UBalanceStateComponent_GetBalanceTableRow_Params
{
	struct FDataTableRowHandle                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxChildActorComponent.SpawnChildActor
struct UGbxChildActorComponent_SpawnChildActor_Params
{
};

// Function GbxGameSystemCore.GbxChildActorComponent.DespawnChildActor
struct UGbxChildActorComponent_DespawnChildActor_Params
{
};

// Function GbxGameSystemCore.GbxAnimInstance.GetAnimTableSequence
struct UGbxAnimInstance_GetAnimTableSequence_Params
{
	class UGbxAnimTable*                               AnimTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAnimInstance.CanUseAnimTable
struct UGbxAnimInstance_CanUseAnimTable_Params
{
	class UGbxAnimTable*                               AnimTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationData.RemoveCustomizationFromActor
struct UGbxCustomizationData_RemoveCustomizationFromActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationData.OnCustomizationAssetLoaded
struct UGbxCustomizationData_OnCustomizationAssetLoaded_Params
{
};

// Function GbxGameSystemCore.GbxCustomizationData.K2_PlayAction
struct UGbxCustomizationData_K2_PlayAction_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActionState_Base                           ActionData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationData.IsLoading
struct UGbxCustomizationData_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationData.IsLoaded
struct UGbxCustomizationData_IsLoaded_Params
{
	int                                                OptionalCustomizationId;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationData.AsyncLoadCustomizationAssets
struct UGbxCustomizationData_AsyncLoadCustomizationAssets_Params
{
	struct FScriptDelegate                             LoadedDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxGameSystemCore.GbxCustomizationData.ApplyCustomizationToActor
struct UGbxCustomizationData_ApplyCustomizationToActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OptionalCustomizationId;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.AttributeValueResolver.SetValueForAttribute
struct UAttributeValueResolver_SetValueForAttribute_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.AttributeValueResolver.GetValueForAttribute
struct UAttributeValueResolver_GetValueForAttribute_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAreaComponent.AreaTest
struct UGbxAreaComponent_AreaTest_Params
{
};

// Function GbxGameSystemCore.EffectCollectionData.StaticGetWwiseEvent
struct UEffectCollectionData_StaticGetWwiseEvent_Params
{
	class UClass*                                      Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffectAndWwiseEvent
struct UEffectCollectionData_StaticGetParticleEffectAndWwiseEvent_Params
{
	class UClass*                                      Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffect
struct UEffectCollectionData_StaticGetParticleEffect_Params
{
	class UClass*                                      Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EffectCollectionData.GetWwiseEvent
struct UEffectCollectionData_GetWwiseEvent_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EffectCollectionData.GetParticleEffectAndWwiseEvent
struct UEffectCollectionData_GetParticleEffectAndWwiseEvent_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.EffectCollectionData.GetParticleEffect
struct UEffectCollectionData_GetParticleEffect_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UsableComponent.SetUsableLocked
struct UUsableComponent_SetUsableLocked_Params
{
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UsableComponent.SetInteractionHeader
struct UUsableComponent_SetInteractionHeader_Params
{
	struct FText                                       NewHeaderName;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.UsableComponent.ResetUseCount
struct UUsableComponent_ResetUseCount_Params
{
};

// Function GbxGameSystemCore.UsableComponent.K2_GetOptionalErrorText
struct UUsableComponent_K2_GetOptionalErrorText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.UsableComponent.K2_CanBeUsed
struct UUsableComponent_K2_CanBeUsed_Params
{
	struct FUsabilityQuery                             Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UsableComponent.GetValidPrimitiveComponentNames
struct UUsableComponent_GetValidPrimitiveComponentNames_Params
{
	TArray<struct FName>                               ComponentNames;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.UsableComponent.GetInteractionHeader
struct UUsableComponent_GetInteractionHeader_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticastImpl
struct AGbxGameState_SpawnEmitterAtLocationMulticastImpl_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ParameterEvaluationContext;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticast
struct AGbxGameState_SpawnEmitterAtLocationMulticast_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ParameterEvaluationContext;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtComponentSocketMulticast
struct AGbxGameState_SpawnEmitterAtComponentSocketMulticast_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ParameterEvaluationContext;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtActorSocketMulticast
struct AGbxGameState_SpawnEmitterAtActorSocketMulticast_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ParameterEvaluationContext;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameState.PlayImpactMulticast
struct AGbxGameState_PlayImpactMulticast_Params
{
	class UImpactData*                                 ImpactData;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ImpactInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FReplicatedImpactHitResult                  HitResult;                                                // (ConstParm, Parm, ReferenceParm)
	struct FImpactResponseParams                       ResponseParams;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxGameState.PlayHitRegionImpactMulticast
struct AGbxGameState_PlayHitRegionImpactMulticast_Params
{
	class UHitRegionData*                              HitRegion;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ImpactInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FReplicatedImpactHitResult                  HitResult;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxGameState.OnRep_StatsManager
struct AGbxGameState_OnRep_StatsManager_Params
{
};

// Function GbxGameSystemCore.GbxGameState.OnRep_HostPlayerState
struct AGbxGameState_OnRep_HostPlayerState_Params
{
};

// Function GbxGameSystemCore.GbxGameState.OnRep_GameInstanceTime
struct AGbxGameState_OnRep_GameInstanceTime_Params
{
};

// Function GbxGameSystemCore.GbxGameState.OnRep_GameInstanceId
struct AGbxGameState_OnRep_GameInstanceId_Params
{
};

// Function GbxGameSystemCore.GbxGameState.OnRep_bPlayersOnly
struct AGbxGameState_OnRep_bPlayersOnly_Params
{
};

// Function GbxGameSystemCore.GbxCharacterAnimInstance.SetDesiredFacialEmoteWeight
struct UGbxCharacterAnimInstance_SetDesiredFacialEmoteWeight_Params
{
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterAnimInstance.OnStanceChanged
struct UGbxCharacterAnimInstance_OnStanceChanged_Params
{
};

// Function GbxGameSystemCore.DamageData.OnKilledEnemy
struct UDamageData_OnKilledEnemy_Params
{
	class AActor*                                      DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageDataEventDetails                     Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.DamageData.OnHitFriendly
struct UDamageData_OnHitFriendly_Params
{
	class AActor*                                      DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageDataEventDetails                     Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.DamageData.OnHitEnemy
struct UDamageData_OnHitEnemy_Params
{
	class AActor*                                      DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageDataEventDetails                     Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.DamageData.OnHitAnyAttitude
struct UDamageData_OnHitAnyAttitude_Params
{
	class AActor*                                      DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageDataEventDetails                     Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.ProjectileHomingComponent.ToggleHoming
struct UProjectileHomingComponent_ToggleHoming_Params
{
};

// Function GbxGameSystemCore.ProjectileHomingComponent.SetHomeIn
struct UProjectileHomingComponent_SetHomeIn_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ProjectileHomingComponent.SetAssociatedProjectileMovement
struct UProjectileHomingComponent_SetAssociatedProjectileMovement_Params
{
	class UProjectileMovementComponent*                ProjectileMovementComponent;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.ProjectileHomingComponent.GetHomingLocation
struct UProjectileHomingComponent_GetHomingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.AttributeContextResolver.GetContextForAttribute
struct UAttributeContextResolver_GetContextForAttribute_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.SpawnPatternData.CalculateSpawnPoint
struct USpawnPatternData_CalculateSpawnPoint_Params
{
	struct FSpawnPatternInputs                         Inputs;                                                   // (Parm)
	struct FSpawnPatternResult                         Result;                                                   // (Parm, OutParm)
};

// Function GbxGameSystemCore.UIStatData.K2_ShouldDisplayStat
struct UUIStatData_K2_ShouldDisplayStat_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UIStatData.K2_GetValueText
struct UUIStatData_K2_GetValueText_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUIStatCollector                            Collector;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.UIStatData.K2_GetComparisonValue
struct UUIStatData_K2_GetComparisonValue_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUIStatCollector                            Collector;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UIStatData.EnumerateSectionNames
struct UUIStatData_EnumerateSectionNames_Params
{
	TArray<struct FName>                               OutSectionNameList;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.UIStatData.ComputeAttributeModification
struct UUIStatData_ComputeAttributeModification_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScale;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIStatCollector                            Collector;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_CoordinatedEffect.SetConstantMaterialVectorParamValue
struct UGbxAction_CoordinatedEffect_SetConstantMaterialVectorParamValue_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Loop.OnStop
struct UGbxAction_Loop_OnStop_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Loop.OnLoop
struct UGbxAction_Loop_OnLoop_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_Loop.K2_StopLooping
struct UGbxAction_Loop_K2_StopLooping_Params
{
};

// Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_GetDynamicBodyState
struct UGbxAction_PhysicalAnim_K2_GetDynamicBodyState_Params
{
	float                                              AngularThreshold;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxPhysicalActionDynamicBodyState                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_FixupDynamicToKinematicIssues
struct UGbxAction_PhysicalAnim_K2_FixupDynamicToKinematicIssues_Params
{
	float                                              AngularThreshold;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.SetTeam
struct AGbxPlayerController_SetTeam_Params
{
	class UTeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ServerRequestPawnSlotDetach
struct AGbxPlayerController_ServerRequestPawnSlotDetach_Params
{
	class APawn*                                       Occupant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ServerCanSplitscreenJoin
struct AGbxPlayerController_ServerCanSplitscreenJoin_Params
{
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.PushCinematicMode
struct AGbxPlayerController_PushCinematicMode_Params
{
	class UCinematicModeData*                          InCinematicMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.PopCinematicMode
struct AGbxPlayerController_PopCinematicMode_Params
{
	class UCinematicModeData*                          InCinematicMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.OnRep_PrimaryCharacter
struct AGbxPlayerController_OnRep_PrimaryCharacter_Params
{
};

// Function GbxGameSystemCore.GbxPlayerController.OnRep_CinematicMode
struct AGbxPlayerController_OnRep_CinematicMode_Params
{
};

// DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPrimaryCharacterChanged__DelegateSignature
struct AGbxPlayerController_OnPrimaryCharacterChanged__DelegateSignature_Params
{
	class AGbxCharacter*                               NewCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPausedChangedDelegate__DelegateSignature
struct AGbxPlayerController_OnPausedChangedDelegate__DelegateSignature_Params
{
	bool                                               bPaused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.IsUsingGamepad
struct AGbxPlayerController_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetTeamComponent
struct AGbxPlayerController_GetTeamComponent_Params
{
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetTeam
struct AGbxPlayerController_GetTeam_Params
{
	class UTeam*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetTargetingComponent
struct AGbxPlayerController_GetTargetingComponent_Params
{
	class UTargetingComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetTargetableComponent
struct AGbxPlayerController_GetTargetableComponent_Params
{
	class UTargetableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetPrimaryCharacter
struct AGbxPlayerController_GetPrimaryCharacter_Params
{
	class AGbxCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportSize
struct AGbxPlayerController_GetPlayerViewportSize_Params
{
	int                                                SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportOffset
struct AGbxPlayerController_GetPlayerViewportOffset_Params
{
	int                                                OffsetX;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OffsetY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetPlayerProfile
struct AGbxPlayerController_GetPlayerProfile_Params
{
	class UGbxProfile*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.GetGbxPerceptionComponent
struct AGbxPlayerController_GetGbxPerceptionComponent_Params
{
	class UGbxPerceptionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.DeprojectViewportPositionToWorld
struct AGbxPlayerController_DeprojectViewportPositionToWorld_Params
{
	float                                              ViewportX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewportY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bUseForegroundProjection;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.DebugCategory
struct AGbxPlayerController_DebugCategory_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ClientStopFeedback
struct AGbxPlayerController_ClientStopFeedback_Params
{
	class UFeedbackData*                               Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ClientPlayWwiseEvent
struct AGbxPlayerController_ClientPlayWwiseEvent_Params
{
	class UWwiseEvent*                                 Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ClientPlayFeedback
struct AGbxPlayerController_ClientPlayFeedback_Params
{
	class UFeedbackData*                               Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedbackAtLocation
struct AGbxPlayerController_ClientPerformFeedbackAtLocation_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // (Parm, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRangedDistanceOverrides                    RangedOverrides;                                          // (Parm)
};

// Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedback
struct AGbxPlayerController_ClientPerformFeedback_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ClientNotifyActivateCheckpoint
struct AGbxPlayerController_ClientNotifyActivateCheckpoint_Params
{
};

// Function GbxGameSystemCore.GbxPlayerController.ClientCanSplitscreenJoin
struct AGbxPlayerController_ClientCanSplitscreenJoin_Params
{
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanJoin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ClientApplyDamageDataPresentation
struct AGbxPlayerController_ClientApplyDamageDataPresentation_Params
{
	class UDamageData*                                 DamageData;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerDamageDataPresentation               PlayerPresentation;                                       // (ConstParm, Parm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxPlayerController.Client_StopGbxFeedback
struct AGbxPlayerController_Client_StopGbxFeedback_Params
{
	class UGbxFeedbackData*                            Data;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.Client_PlayGbxFeedback
struct AGbxPlayerController_Client_PlayGbxFeedback_Params
{
	class UGbxFeedbackData*                            Data;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIs3D;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // (Parm, IsPlainOldData)
	float                                              EffectFalloffMinDistance;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectFalloffMaxDistance;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPlayerController.ClearCinematicMode
struct AGbxPlayerController_ClearCinematicMode_Params
{
};

// Function GbxGameSystemCore.GbxPlayerController.ClearAndSetCinematicMode
struct AGbxPlayerController_ClearAndSetCinematicMode_Params
{
	class UCinematicModeData*                          InCinematicMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.TestForCompleted
struct UChallenge_TestForCompleted_Params
{
	class AGbxPlayerController*                        PlayerToTest;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OtherObject;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              EnumTag;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.SetChallengeProgress
struct UChallenge_SetChallengeProgress_Params
{
	int                                                NewProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.PlayerExitChallengeArea
struct UChallenge_PlayerExitChallengeArea_Params
{
	class UChallengeLevelActorComponent*               LevelActorComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.PlayerEnterChallengeArea
struct UChallenge_PlayerEnterChallengeArea_Params
{
	class UChallengeLevelActorComponent*               LevelActorComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.OnLevelActorRegistered
struct UChallenge_OnLevelActorRegistered_Params
{
	class UChallengeLevelActorComponent*               RegisteredLevelActor;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.OnInitChallengeInstance
struct UChallenge_OnInitChallengeInstance_Params
{
	class UChallengesComponent*                        OwningChallenges;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter*                               AssociatedCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.OnChallengeActivated
struct UChallenge_OnChallengeActivated_Params
{
};

// Function GbxGameSystemCore.Challenge.IsChallengeComplete
struct UChallenge_IsChallengeComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.IsChallengeActive
struct UChallenge_IsChallengeActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.IncrementChallengeProgressByValue
struct UChallenge_IncrementChallengeProgressByValue_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.IncrementChallengeProgress
struct UChallenge_IncrementChallengeProgress_Params
{
};

// Function GbxGameSystemCore.Challenge.GetLevelActorComponents
struct UChallenge_GetLevelActorComponents_Params
{
	TArray<class UChallengeLevelActorComponent*>       LevelActorList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.Challenge.GetChallengeProgressGoalValue
struct UChallenge_GetChallengeProgressGoalValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.GetChallengeProgress
struct UChallenge_GetChallengeProgress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.GetChallengeCompleteInfo
struct UChallenge_GetChallengeCompleteInfo_Params
{
	int                                                NumCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumChallenges;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.CompletedConditional
struct UChallenge_CompletedConditional_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.CompletedChallenge
struct UChallenge_CompletedChallenge_Params
{
	class AGbxPlayerController*                        CompletedPlayer;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Challenge.CompleteChallenge
struct UChallenge_CompleteChallenge_Params
{
};

// Function GbxGameSystemCore.Challenge.ActivateChallenge
struct UChallenge_ActivateChallenge_Params
{
};

// Function GbxGameSystemCore.ChallengeManager.OnStatIncrement
struct AChallengeManager_OnStatIncrement_Params
{
	class AActor*                                      StatContext;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.UnregisterInActivePlayerChallenges
struct UChallengesComponent_UnregisterInActivePlayerChallenges_Params
{
};

// Function GbxGameSystemCore.ChallengesComponent.SetChallengeProgress
struct UChallengesComponent_SetChallengeProgress_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.SetChallengeActive
struct UChallengesComponent_SetChallengeActive_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.IsChallengeComplete
struct UChallengesComponent_IsChallengeComplete_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.IsChallengeActive
struct UChallengesComponent_IsChallengeActive_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.IncrementChallengeProgress
struct UChallengesComponent_IncrementChallengeProgress_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetMaxChallengeTiers
struct UChallengesComponent_GetMaxChallengeTiers_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetLocalChallenges
struct UChallengesComponent_GetLocalChallenges_Params
{
	TArray<struct FChallengeInstanceData>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.ChallengesComponent.GetCompletedChallengeTiers
struct UChallengesComponent_GetCompletedChallengeTiers_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatValue
struct UChallengesComponent_GetChallengeStatValue_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatGoalValue
struct UChallengesComponent_GetChallengeStatGoalValue_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgressGoalValue
struct UChallengesComponent_GetChallengeProgressGoalValue_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgress
struct UChallengesComponent_GetChallengeProgress_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfoForLevels
struct UChallengesComponent_GetChallengeCompleteInfoForLevels_Params
{
	TArray<struct FName>                               LevelsForChallenges;                                      // (Parm, ZeroConstructor)
	class UChallengeCategoryData*                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumActive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreHidden;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfo
struct UChallengesComponent_GetChallengeCompleteInfo_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumChallenges;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.CompleteChallengeIfConditionsMet
struct UChallengesComponent_CompleteChallengeIfConditionsMet_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.CompleteChallenge
struct UChallengesComponent_CompleteChallenge_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.ClientChallengeUpdateProgress
struct UChallengesComponent_ClientChallengeUpdateProgress_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.ClientChallengeCompleted
struct UChallengesComponent_ClientChallengeCompleted_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumTiersComplete;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.ClientActivateChallenge
struct UChallengesComponent_ClientActivateChallenge_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.AreGlobalChallengesRegistered
struct UChallengesComponent_AreGlobalChallengesRegistered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengesComponent.ActivateChallenge
struct UChallengesComponent_ActivateChallenge_Params
{
	class UClass*                                      ChalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopRotateTo
struct UGbxCharacterMovementComponent_StopRotateTo_Params
{
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopMoveTo
struct UGbxCharacterMovementComponent_StopMoveTo_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateStop;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopControlledMove
struct UGbxCharacterMovementComponent_StopControlledMove_Params
{
	class UClass*                                      ControlledMove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartRotateTo
struct UGbxCharacterMovementComponent_StartRotateTo_Params
{
	struct FCharacterRotateToCommand                   RotateToCommand;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartMoveTo
struct UGbxCharacterMovementComponent_StartMoveTo_Params
{
	struct FCharacterMoveToCommand                     MoveToCommand;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartControlledMove
struct UGbxCharacterMovementComponent_StartControlledMove_Params
{
	class UClass*                                      ControlledMove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LaunchAngleOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetPendingRawInputVector
struct UGbxCharacterMovementComponent_SetPendingRawInputVector_Params
{
	struct FVector                                     NewInputVector;                                           // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetNoneWithRootMotionMode
struct UGbxCharacterMovementComponent_SetNoneWithRootMotionMode_Params
{
	bool                                               bAnimationWalking;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetFacingTarget
struct UGbxCharacterMovementComponent_SetFacingTarget_Params
{
	struct FFacingInfo                                 FacingTarget;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	EFacingChannel                                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetAnimationBasedTurning
struct UGbxCharacterMovementComponent_SetAnimationBasedTurning_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerStopMoveTo
struct UGbxCharacterMovementComponent_ServerStopMoveTo_Params
{
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerStartMoveTo
struct UGbxCharacterMovementComponent_ServerStartMoveTo_Params
{
	struct FCharacterMoveToCommand                     MoveToCommand;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerAttemptMantle
struct UGbxCharacterMovementComponent_ServerAttemptMantle_Params
{
	struct FMantleAttemptInfo                          ClientData;                                               // (ConstParm, Parm, ReferenceParm)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnStanceChanged
struct UGbxCharacterMovementComponent_OnStanceChanged_Params
{
	struct FStanceChangedEventArgs                     Args;                                                     // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnRep_ControlledMove
struct UGbxCharacterMovementComponent_OnRep_ControlledMove_Params
{
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnNotifyTurnExit
struct UGbxCharacterMovementComponent_OnNotifyTurnExit_Params
{
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnNotifyTurnEnter
struct UGbxCharacterMovementComponent_OnNotifyTurnEnter_Params
{
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleEndOverlap
struct UGbxCharacterMovementComponent_OnCapsuleEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleBeginOverlap
struct UGbxCharacterMovementComponent_OnCapsuleBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoRotation
struct UGbxCharacterMovementComponent_MakeFacingInfoRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FFacingInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoNone
struct UGbxCharacterMovementComponent_MakeFacingInfoNone_Params
{
	struct FFacingInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoLocation
struct UGbxCharacterMovementComponent_MakeFacingInfoLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FFacingInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoDirection
struct UGbxCharacterMovementComponent_MakeFacingInfoDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	struct FFacingInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoComponent
struct UGbxCharacterMovementComponent_MakeFacingInfoComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFacingInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActorEyes
struct UGbxCharacterMovementComponent_MakeFacingInfoActorEyes_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFacingInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActor
struct UGbxCharacterMovementComponent_MakeFacingInfoActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFacingInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.LeaveNoneWithRootMotionMode
struct UGbxCharacterMovementComponent_LeaveNoneWithRootMotionMode_Params
{
	bool                                               bApplyDefault;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingSpecificControlledMove
struct UGbxCharacterMovementComponent_IsPerformingSpecificControlledMove_Params
{
	class UClass*                                      ControlledMove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingControlledMove
struct UGbxCharacterMovementComponent_IsPerformingControlledMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMovingOnLadder
struct UGbxCharacterMovementComponent_IsMovingOnLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantlingAllowed
struct UGbxCharacterMovementComponent_IsMantlingAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantling
struct UGbxCharacterMovementComponent_IsMantling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsInNoneWithRootMotionMode
struct UGbxCharacterMovementComponent_IsInNoneWithRootMotionMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsHandIkEnabled
struct UGbxCharacterMovementComponent_IsHandIkEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkTracingEnabled
struct UGbxCharacterMovementComponent_IsFootIkTracingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkEnabled
struct UGbxCharacterMovementComponent_IsFootIkEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFacingTargetBP
struct UGbxCharacterMovementComponent_IsFacingTargetBP_Params
{
	float                                              ThresholdDegrees;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EFacingChannel                                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMaxAllowedAimOffset
struct UGbxCharacterMovementComponent_GetMaxAllowedAimOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMantleData
struct UGbxCharacterMovementComponent_GetMantleData_Params
{
	class UMantleData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingRotation
struct UGbxCharacterMovementComponent_GetDesiredFacingRotation_Params
{
	EFacingChannel                                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingLocation
struct UGbxCharacterMovementComponent_GetDesiredFacingLocation_Params
{
	EFacingChannel                                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingRotation
struct UGbxCharacterMovementComponent_GetCurrentFacingRotation_Params
{
	EFacingChannel                                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingOrigin
struct UGbxCharacterMovementComponent_GetCurrentFacingOrigin_Params
{
	EFacingChannel                                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingLocation
struct UGbxCharacterMovementComponent_GetCurrentFacingLocation_Params
{
	EFacingChannel                                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.GbxSetAnimInstanceClass
struct UGbxCharacterMovementComponent_GbxSetAnimInstanceClass_Params
{
	class USkeletalMeshComponent*                      SkelMeshComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      NewClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxGameSystemCore.GbxCharacterMovementComponent.GbxCharacterMovementEvent__DelegateSignature
struct UGbxCharacterMovementComponent_GbxCharacterMovementEvent__DelegateSignature_Params
{
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveOld
struct UGbxCharacterMovementComponent_ControlledServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       OldAccel;                                                 // (Parm)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CMDir;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveDual
struct UGbxCharacterMovementComponent_ControlledServerMoveDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CMDir0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CMDir;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           ClientBodyYaw;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMove
struct UGbxCharacterMovementComponent_ControlledServerMove_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CMDir;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           ClientBodyYaw;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.ClientAdjustControlledMovePosition
struct UGbxCharacterMovementComponent_ClientAdjustControlledMovePosition_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FControlledMoveNetCorrection                ServerCMData;                                             // (Parm)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartPassiveMantle
struct UGbxCharacterMovementComponent_CanStartPassiveMantle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartMantle
struct UGbxCharacterMovementComponent_CanStartMantle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCheatManager.TestGameStage
struct UGbxCheatManager_TestGameStage_Params
{
	int                                                GameStageOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCheatManager.StartPlayerInit
struct UGbxCheatManager_StartPlayerInit_Params
{
};

// Function GbxGameSystemCore.GbxCheatManager.ShowProjectileImpacts
struct UGbxCheatManager_ShowProjectileImpacts_Params
{
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCheatManager.SetDebugActorByName
struct UGbxCheatManager_SetDebugActorByName_Params
{
	class FString                                      ActorName;                                                // (Parm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxCheatManager.SetDebugActor
struct UGbxCheatManager_SetDebugActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCheatManager.Server_TogglePlayersOnly
struct UGbxCheatManager_Server_TogglePlayersOnly_Params
{
};

// Function GbxGameSystemCore.GbxCheatManager.Server_DamageTarget
struct UGbxCheatManager_Server_DamageTarget_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackRangedFromThere
struct UGbxCheatManager_PlayFeedbackRangedFromThere_Params
{
	class FString                                      FeedbackData;                                             // (Parm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackDirectional
struct UGbxCheatManager_PlayFeedbackDirectional_Params
{
	class FString                                      FeedbackData;                                             // (Parm, ZeroConstructor)
	float                                              DirectionAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCheatManager.PlayFeedback
struct UGbxCheatManager_PlayFeedback_Params
{
	class FString                                      FeedbackData;                                             // (Parm, ZeroConstructor)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCheatManager.LogQatalystInfo
struct UGbxCheatManager_LogQatalystInfo_Params
{
};

// Function GbxGameSystemCore.GbxCheatManager.DebugNextAI
struct UGbxCheatManager_DebugNextAI_Params
{
};

// Function GbxGameSystemCore.GbxCheatManager.DamageAreaDebug
struct UGbxCheatManager_DamageAreaDebug_Params
{
};

// Function GbxGameSystemCore.GbxCheatManager.ClearPlayerInit
struct UGbxCheatManager_ClearPlayerInit_Params
{
};

// Function GbxGameSystemCore.ControlledMove.OnTeleported
struct UControlledMove_OnTeleported_Params
{
	float                                              MoveDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PreTeleportLocation;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMove.OnTargetLocationChanged
struct UControlledMove_OnTargetLocationChanged_Params
{
	struct FVector                                     NewTargetLocation;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMove.OnStop
struct UControlledMove_OnStop_Params
{
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMove.OnStart
struct UControlledMove_OnStart_Params
{
	float                                              MoveDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMove.OnServerStop
struct UControlledMove_OnServerStop_Params
{
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMove.OnServerStart
struct UControlledMove_OnServerStart_Params
{
	float                                              MoveDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMove.OnHitWorld
struct UControlledMove_OnHitWorld_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMove.OnHitTargetable
struct UControlledMove_OnHitTargetable_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomizationData
struct UGbxCustomizationComponent_ServerApplyCustomizationData_Params
{
	class UGbxCustomizationData*                       CustomizationToApply;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OptionalCustomizationId;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomColor
struct UGbxCustomizationComponent_ServerApplyCustomColor_Params
{
	int                                                CustomColorIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InAppliedColor;                                           // (Parm, IsPlainOldData)
	struct FVector                                     InSplitColor;                                             // (Parm, IsPlainOldData)
	bool                                               InUseDefaultColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InUseDefaultSplitColor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.RemoveCustomization
struct UGbxCustomizationComponent_RemoveCustomization_Params
{
	class UGbxCustomizationData*                       Customization;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.OnRep_CustomColorSelections
struct UGbxCustomizationComponent_OnRep_CustomColorSelections_Params
{
};

// Function GbxGameSystemCore.GbxCustomizationComponent.LinkToCustomization
struct UGbxCustomizationComponent_LinkToCustomization_Params
{
	class UGbxCustomizationComponent*                  SourceComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationRemoved
struct UGbxCustomizationComponent_LinkedCustomizationRemoved_Params
{
	class UGbxCustomizationData*                       Customization;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationApplied
struct UGbxCustomizationComponent_LinkedCustomizationApplied_Params
{
	class UGbxCustomizationData*                       Customization;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomSplitColor
struct UGbxCustomizationComponent_GetDefaultCustomSplitColor_Params
{
	int                                                SelectionIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultSplitColor;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomColor
struct UGbxCustomizationComponent_GetDefaultCustomColor_Params
{
	int                                                SelectionIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationComponent.CopyFromCustomization
struct UGbxCustomizationComponent_CopyFromCustomization_Params
{
	class UGbxCustomizationComponent*                  SourceComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCustomizationManager.OnCustomizationAssetLoaded
struct AGbxCustomizationManager_OnCustomizationAssetLoaded_Params
{
};

// Function GbxGameSystemCore.DamageCauserComponent.UnregisterConditionalDamageModifier
struct UDamageCauserComponent_UnregisterConditionalDamageModifier_Params
{
	class UConditionalDamageModifier*                  Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageCauserComponent.RegisterConditionalDamageModifier
struct UDamageCauserComponent_RegisterConditionalDamageModifier_Params
{
	class UConditionalDamageModifier*                  Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.UnregisterConditionalDamageModifier
struct UDamageComponent_UnregisterConditionalDamageModifier_Params
{
	class UConditionalDamageModifier*                  Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.SetSelfReflectedDamageType
struct UDamageComponent_SetSelfReflectedDamageType_Params
{
	class UClass*                                      DamageType;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.SetGodMode
struct UDamageComponent_SetGodMode_Params
{
	bool                                               bInGodMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.SetDemiGodMode
struct UDamageComponent_SetDemiGodMode_Params
{
	bool                                               bInDemiGodMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.SetCurrentShield
struct UDamageComponent_SetCurrentShield_Params
{
	float                                              NewCurrentShield;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.SetCurrentHealth
struct UDamageComponent_SetCurrentHealth_Params
{
	float                                              NewCurrentHealth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.RegisterConditionalDamageModifier
struct UDamageComponent_RegisterConditionalDamageModifier_Params
{
	class UConditionalDamageModifier*                  Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.ReceiveHealthDepleted
struct UDamageComponent_ReceiveHealthDepleted_Params
{
	class UDamageCauserComponent*                      DamageCauser;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.ReceiveAnyHealing
struct UDamageComponent_ReceiveAnyHealing_Params
{
	float                                              Healing;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HealInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.ReceiveAnyDamage
struct UDamageComponent_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.DamageComponent.OnRep_HealthInformation
struct UDamageComponent_OnRep_HealthInformation_Params
{
};

// Function GbxGameSystemCore.DamageComponent.OnRep_DeathHitReaction
struct UDamageComponent_OnRep_DeathHitReaction_Params
{
};

// Function GbxGameSystemCore.DamageComponent.OnRep_bCurrentlyDead
struct UDamageComponent_OnRep_bCurrentlyDead_Params
{
};

// Function GbxGameSystemCore.DamageComponent.OnOwnerExperienceLevelChanged
struct UDamageComponent_OnOwnerExperienceLevelChanged_Params
{
	int                                                OldExperienceLevel;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewExperienceLevel;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowNotDepleted
struct UDamageComponent_OnHealthResourceNowNotDepleted_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (Parm)
};

// Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowDepleted
struct UDamageComponent_OnHealthResourceNowDepleted_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (Parm)
};

// Function GbxGameSystemCore.DamageComponent.IsInGodMode
struct UDamageComponent_IsInGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.IsInDemiGodMode
struct UDamageComponent_IsInDemiGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.IsDamageOverkill
struct UDamageComponent_IsDamageOverkill_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverkillThreshold;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.GetValidDamageEventFunctionNames
struct UDamageComponent_GetValidDamageEventFunctionNames_Params
{
	TArray<struct FName>                               Names;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.DamageComponent.GetTotalMaxHealth
struct UDamageComponent_GetTotalMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.GetMaxShield
struct UDamageComponent_GetMaxShield_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.GetMaxHealth
struct UDamageComponent_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.GetCurrentShield
struct UDamageComponent_GetCurrentShield_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.GetCurrentHealthPercent
struct UDamageComponent_GetCurrentHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.GetCurrentHealth
struct UDamageComponent_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageComponent.BroadcastPlayImpactSplatterEffect
struct UDamageComponent_BroadcastPlayImpactSplatterEffect_Params
{
	class UImpactData*                                 ImpactData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      HitLocation;                                              // (Parm)
	struct FVector_NetQuantizeNormal                   HitDirection;                                             // (Parm)
	float                                              DamageSeverity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageModifierComponent.UnregisterConditionalDamageModifier
struct UDamageModifierComponent_UnregisterConditionalDamageModifier_Params
{
	class UConditionalDamageModifier*                  Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageModifierComponent.RegisterConditionalDamageModifier
struct UDamageModifierComponent_RegisterConditionalDamageModifier_Params
{
	class UConditionalDamageModifier*                  Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageOverTimeManager.OnParticleSystemStopped
struct UDamageOverTimeManager_OnParticleSystemStopped_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxDamageType.IsElementalType
struct UGbxDamageType_IsElementalType_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.FirstPersonComponent.SetBaseEyeToWeaponTransform
struct UFirstPersonComponent_SetBaseEyeToWeaponTransform_Params
{
	struct FTransform                                  NewWeaponTransform;                                       // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.FirstPersonComponent.GetFirstPersonComponentByName
struct UFirstPersonComponent_GetFirstPersonComponentByName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameInstance.DebugLoadStartupAssets
struct UGbxGameInstance_DebugLoadStartupAssets_Params
{
};

// Function GbxGameSystemCore.HitRegionComponent.TriggerClientEvent
struct UHitRegionComponent_TriggerClientEvent_Params
{
	struct FDamageReactionEventSummary                 EventSummary;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function GbxGameSystemCore.HitRegionComponent.GetValidDamageEventFunctionNames
struct UHitRegionComponent_GetValidDamageEventFunctionNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.HitRegionComponent.GetValidAssociatedComponentNames
struct UHitRegionComponent_GetValidAssociatedComponentNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionPercentHealth
struct UHitRegionComponent_GetHitRegionPercentHealth_Params
{
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AssociatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionMaxHealth
struct UHitRegionComponent_GetHitRegionMaxHealth_Params
{
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AssociatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionCurrentHealth
struct UHitRegionComponent_GetHitRegionCurrentHealth_Params
{
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AssociatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ActorPartData.EnumeratePossibleExcluders
struct UActorPartData_EnumeratePossibleExcluders_Params
{
	TArray<class UActorPartData*>                      OutPartList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.ActorPartData.EnumeratePossibleDependencies
struct UActorPartData_EnumeratePossibleDependencies_Params
{
	TArray<class UActorPartData*>                      OutPartList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.ActorPartData.EnumerateOtherParts
struct UActorPartData_EnumerateOtherParts_Params
{
	TArray<class UActorPartData*>                      OutPartList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.ActorPartData.EnumerateGestaltMeshPartNames
struct UActorPartData_EnumerateGestaltMeshPartNames_Params
{
	TArray<struct FName>                               OutPartNameList;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.DataTableAttributeValueResolver.GetDataTableColumnNames
struct UDataTableAttributeValueResolver_GetDataTableColumnNames_Params
{
	TArray<class FString>                              ValueNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.DataTableFunctionAttributeValueResolver.GetDataTableRow
struct UDataTableFunctionAttributeValueResolver_GetDataTableRow_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshParts
struct UGbxSkeletalMeshComponent_ShowGestaltMeshParts_Params
{
	TArray<class UGestaltPartData_Mesh*>               Parts;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLocalOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshPart
struct UGbxSkeletalMeshComponent_ShowGestaltMeshPart_Params
{
	class UGestaltPartData_Mesh*                       GestaltMeshPart;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetUpdateOverrideValues
struct UGbxSkeletalMeshComponent_SetUpdateOverrideValues_Params
{
	TArray<float>                                      UpdateRateOverrides;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bEnableOverrideProperties;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetParentAnimationComponent
struct UGbxSkeletalMeshComponent_SetParentAnimationComponent_Params
{
	class USkeletalMeshComponent*                      ParentComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetGestaltPartList
struct UGbxSkeletalMeshComponent_SetGestaltPartList_Params
{
	class UGestaltPartListData*                        NewGestaltPartList;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.RunPoseTest
struct UGbxSkeletalMeshComponent_RunPoseTest_Params
{
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.OnRep_GlobalBoneMod
struct UGbxSkeletalMeshComponent_OnRep_GlobalBoneMod_Params
{
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.OnRep_GestaltMeshParts
struct UGbxSkeletalMeshComponent_OnRep_GestaltMeshParts_Params
{
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstances
struct UGbxSkeletalMeshComponent_LinkSkelMeshAnimInstances_Params
{
	TArray<class USkeletalMeshComponent*>              InLinkedSkelMeshComponents;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstance
struct UGbxSkeletalMeshComponent_LinkSkelMeshAnimInstance_Params
{
	class USkeletalMeshComponent*                      InLinkedSkelMeshComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsGestaltMeshPartVisible
struct UGbxSkeletalMeshComponent_IsGestaltMeshPartVisible_Params
{
	class UGestaltPartData_Mesh*                       GestaltMeshPart;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsCustomizationTargetFor
struct UGbxSkeletalMeshComponent_IsCustomizationTargetFor_Params
{
	class UGbxCustomizationTargetData*                 TargetToTest;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshParts
struct UGbxSkeletalMeshComponent_HideGestaltMeshParts_Params
{
	TArray<class UGestaltPartData_Mesh*>               Parts;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLocalOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshPart
struct UGbxSkeletalMeshComponent_HideGestaltMeshPart_Params
{
	class UGestaltPartData_Mesh*                       GestaltMeshPart;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetUpdateOverrideValues
struct UGbxSkeletalMeshComponent_GetUpdateOverrideValues_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetAvailableBoneNames
struct UGbxSkeletalMeshComponent_GetAvailableBoneNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxSkeletalMeshComponent.CopyGestaltPartList
struct UGbxSkeletalMeshComponent_CopyGestaltPartList_Params
{
	class AActor*                                      GestaltPartListSource;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.SetPersistentAttachSocketName
struct UPawnAttachSlotComponent_SetPersistentAttachSocketName_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.SetDetachabilityLocked
struct UPawnAttachSlotComponent_SetDetachabilityLocked_Params
{
	bool                                               bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.RequestDetachPawn
struct UPawnAttachSlotComponent_RequestDetachPawn_Params
{
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.OnRep_AttachState
struct UPawnAttachSlotComponent_OnRep_AttachState_Params
{
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.ManuallyFinishAttach
struct UPawnAttachSlotComponent_ManuallyFinishAttach_Params
{
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.IsOccupied
struct UPawnAttachSlotComponent_IsOccupied_Params
{
	bool                                               bIncludeDetaching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.HandleActorDestroyed
struct UPawnAttachSlotComponent_HandleActorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.GetPersistentAttachSocketTransform
struct UPawnAttachSlotComponent_GetPersistentAttachSocketTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.GetOccupant
struct UPawnAttachSlotComponent_GetOccupant_Params
{
	bool                                               bIncludeDetaching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.GetAttachStatus
struct UPawnAttachSlotComponent_GetAttachStatus_Params
{
	EPawnAttachStatus                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.DetachPawn
struct UPawnAttachSlotComponent_DetachPawn_Params
{
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipPlacement;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachSlotComponent.AttachPawn
struct UPawnAttachSlotComponent_AttachPawn_Params
{
	class APawn*                                       AttachingPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_StopRadiusEffect
struct ARadiusDamageReplicationManager_Multicast_StopRadiusEffect_Params
{
	class AActor*                                      ContextActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAllForContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_ProcessRadiusRequest
struct ARadiusDamageReplicationManager_Multicast_ProcessRadiusRequest_Params
{
	class AActor*                                      ContextActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UExplosionData*                              ExplosionData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DefaultParticles;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 DefaultAudioEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 DefaultImpactData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxSignificanceEvent                       SignificanceEvent;                                        // (Parm)
	float                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffectInstance
struct UStatusEffectManagerComponent_RemoveStatusEffectInstance_Params
{
	struct FStatusEffectInstanceReference              Reference;                                                // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffect
struct UStatusEffectManagerComponent_RemoveStatusEffect_Params
{
	struct FStatusEffectRemoveSpec                     Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StatusEffectManagerComponent.QueryStatusEffect
struct UStatusEffectManagerComponent_QueryStatusEffect_Params
{
	struct FStatusEffectQuery                          Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FStatusEffectQueryResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.StatusEffectManagerComponent.AddStatusEffect
struct UStatusEffectManagerComponent_AddStatusEffect_Params
{
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FStatusEffectInstanceReference              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffectInstance
struct UStatusEffectsStatics_RemoveStatusEffectInstance_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectInstanceReference              Reference;                                                // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffect
struct UStatusEffectsStatics_RemoveStatusEffect_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectRemoveSpec                     RemoveSpec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StatusEffectsStatics.QueryStatusEffect
struct UStatusEffectsStatics_QueryStatusEffect_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectQuery                          Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FStatusEffectQueryResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.StatusEffectsStatics.AddStatusEffect
struct UStatusEffectsStatics_AddStatusEffect_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FStatusEffectInstanceReference              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.UseComponent.StopUsingCurrentObject
struct UUseComponent_StopUsingCurrentObject_Params
{
	EUsabilityType                                     UseType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.StartUsingCurrentObject
struct UUseComponent_StartUsingCurrentObject_Params
{
	EUsabilityType                                     UseType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.ServerUseObject
struct UUseComponent_ServerUseObject_Params
{
	class UUsableComponent*                            UsableObject;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUsabilityType                                     UseType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHeld;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.ServerStopUsingObject
struct UUseComponent_ServerStopUsingObject_Params
{
	class UUsableComponent*                            UsableObject;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUsabilityType                                     UseType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.ServerStartUsingObject
struct UUseComponent_ServerStartUsingObject_Params
{
	class UUsableComponent*                            UsableObject;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUsabilityType                                     UseType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxGameSystemCore.UseComponent.OnUsableChanged__DelegateSignature
struct UUseComponent_OnUsableChanged__DelegateSignature_Params
{
	class UUsableComponent*                            NewUsableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FUsabilityInfo                              InUsabilityInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     NewUsableComponentImpactPoint;                            // (Parm, IsPlainOldData)
	float                                              NewUsableComponentDistanceAway;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxGameSystemCore.UseComponent.OnUsabilityChanged__DelegateSignature
struct UUseComponent_OnUsabilityChanged__DelegateSignature_Params
{
	class UUsableComponent*                            NewUsableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FUsabilityInfo                              InUsabilityInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction GbxGameSystemCore.UseComponent.OnUnableToAffordUsableObject__DelegateSignature
struct UUseComponent_OnUnableToAffordUsableObject__DelegateSignature_Params
{
	class UUsableComponent*                            Usable;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUsabilityType                                     UseType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHeld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxGameSystemCore.UseComponent.OnImpactDataChanged__DelegateSignature
struct UUseComponent_OnImpactDataChanged__DelegateSignature_Params
{
	class UUsableComponent*                            NewUsableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NewUsableComponentImpactPoint;                            // (Parm, IsPlainOldData)
	float                                              NewUsableComponentDistanceAway;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxGameSystemCore.UseComponent.OnHoldUseStopped__DelegateSignature
struct UUseComponent_OnHoldUseStopped__DelegateSignature_Params
{
};

// Function GbxGameSystemCore.UseComponent.GetCurrentUsable
struct UUseComponent_GetCurrentUsable_Params
{
	class UUsableComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.ForceUsingObject
struct UUseComponent_ForceUsingObject_Params
{
	class UUsableComponent*                            UsableObject;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.ClientNotifyAttemptedUseCouldNotAfford
struct UUseComponent_ClientNotifyAttemptedUseCouldNotAfford_Params
{
	class UUsableComponent*                            Usable;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUsabilityType                                     UseType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHeld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.CanUseCurrentUsable
struct UUseComponent_CanUseCurrentUsable_Params
{
	EUsabilityType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UseComponent.CanInteractWithCurrentUsable
struct UUseComponent_CanInteractWithCurrentUsable_Params
{
	EUsabilityType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ActorPartSetData.EnumeratePartListForPartType
struct UActorPartSetData_EnumeratePartListForPartType_Params
{
	unsigned char                                      PartType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorPartData*>                      OutPartList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.AIDodgeComponent.TriggerZoneDodge
struct UAIDodgeComponent_TriggerZoneDodge_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ZoneLoc;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ZoneVel;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      ActorRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.AIDodgeComponent.TriggerGrenadeDodge
struct UAIDodgeComponent_TriggerGrenadeDodge_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GrenadeLoc;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExtraDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.AIDodgeComponent.TriggerDodge
struct UAIDodgeComponent_TriggerDodge_Params
{
	EAIDodgeType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLoc;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExtraDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.AIDodgeComponent.TriggerBulletDodge
struct UAIDodgeComponent_TriggerBulletDodge_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MuzzleLoc;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BulletVel;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.AISense_Bullet.ReportBulletEvent
struct UAISense_Bullet_ReportBulletEvent_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (Parm, IsPlainOldData)
	bool                                               bFirstEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.AISense_GbxSight.ForceSightEvent
struct UAISense_GbxSight_ForceSightEvent_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SeenActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.AttributeInitializer.EvaluateBalanceFormula
struct UAttributeInitializer_EvaluateBalanceFormula_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.AttributeInitializer.CalculateAttributeInitialValue
struct UAttributeInitializer_CalculateAttributeInitialValue_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneTranslation
struct UBoneModBlueprintLibrary_SetBoneTranslation_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // (ConstParm, Parm, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  InBlendOption;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 InCustomBlendCurve;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale3D
struct UBoneModBlueprintLibrary_SetBoneScale3D_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale3D;                                                  // (ConstParm, Parm, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  InBlendOption;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 InCustomBlendCurve;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale
struct UBoneModBlueprintLibrary_SetBoneScale_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  InBlendOption;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 InCustomBlendCurve;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneRotation
struct UBoneModBlueprintLibrary_SetBoneRotation_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  InBlendOption;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 InCustomBlendCurve;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseTranslation
struct UBoneModBlueprintLibrary_SetBoneModUseTranslation_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTranslation;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseScale
struct UBoneModBlueprintLibrary_SetBoneModUseScale_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScale;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseRotation
struct UBoneModBlueprintLibrary_SetBoneModUseRotation_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRotation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslationSpace
struct UBoneModBlueprintLibrary_SetBoneModTranslationSpace_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslation
struct UBoneModBlueprintLibrary_SetBoneModTranslation_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // (ConstParm, Parm, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTransform
struct UBoneModBlueprintLibrary_SetBoneModTransform_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale3D
struct UBoneModBlueprintLibrary_SetBoneModScale3D_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (ConstParm, Parm, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale
struct UBoneModBlueprintLibrary_SetBoneModScale_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotationSpace
struct UBoneModBlueprintLibrary_SetBoneModRotationSpace_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotation
struct UBoneModBlueprintLibrary_SetBoneModRotation_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceTranslation
struct UBoneModBlueprintLibrary_SetBoneModReplaceTranslation_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceTranslation;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceScale
struct UBoneModBlueprintLibrary_SetBoneModReplaceScale_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceScale;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceRotation
struct UBoneModBlueprintLibrary_SetBoneModReplaceRotation_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceRotation;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModName
struct UBoneModBlueprintLibrary_SetBoneModName_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewBoneModName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfileState
struct UBoneModBlueprintLibrary_SetBoneModifyProfileState_Params
{
	struct FName                                       StateName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfile
struct UBoneModBlueprintLibrary_SetBoneModifyProfile_Params
{
	class UGbxBoneModifyProfile*                       BoneModifyProfile;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBoneName
struct UBoneModBlueprintLibrary_SetBoneModBoneName_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneModBoneName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBlendTime
struct UBoneModBlueprintLibrary_SetBoneModBlendTime_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModAlphaBlend
struct UBoneModBlueprintLibrary_SetBoneModAlphaBlend_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 Blend;                                                    // (ConstParm, Parm)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModActive
struct UBoneModBlueprintLibrary_SetBoneModActive_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneMod
struct UBoneModBlueprintLibrary_SetBoneMod_Params
{
	struct FBoneModInstance                            InBoneMod;                                                // (Parm, OutParm, ReferenceParm)
	struct FName                                       BoneModToSet;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.RemoveBoneMod
struct UBoneModBlueprintLibrary_RemoveBoneMod_Params
{
	struct FName                                       BoneModToRemove;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendOut;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.GetBoneMod
struct UBoneModBlueprintLibrary_GetBoneMod_Params
{
	struct FName                                       BoneModName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBoneModInstance                            BoneMod;                                                  // (Parm, OutParm)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.BoneModBlueprintLibrary.CreateBoneMod
struct UBoneModBlueprintLibrary_CreateBoneMod_Params
{
	struct FName                                       InBoneModName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InBoneName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InTranslation;                                            // (ConstParm, Parm, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     InScale;                                                  // (ConstParm, Parm, IsPlainOldData)
	float                                              InBlendTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  InBlendOption;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 InCustomBlendCurve;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInUseTranslation;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInUseRotation;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInUseScale;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInReplaceTranslation;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInReplaceRotation;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInReplaceScale;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     InTranslationSpace;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     InRotationSpace;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendIn;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelActorComponent.SetIsStationary
struct UChallengeLevelActorComponent_SetIsStationary_Params
{
	bool                                               bInIsStationary;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelActorComponent.SetInWorldIconEnabled
struct UChallengeLevelActorComponent_SetInWorldIconEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_IsStationary
struct UChallengeLevelActorComponent_OnRep_IsStationary_Params
{
	bool                                               bOldIsStationary;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_InWorldIconEnabled
struct UChallengeLevelActorComponent_OnRep_InWorldIconEnabled_Params
{
	bool                                               bOldEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_ChallengeReference
struct UChallengeLevelActorComponent_OnRep_ChallengeReference_Params
{
};

// Function GbxGameSystemCore.ChallengeLevelActorComponent.HandleAttachmentChanged
struct UChallengeLevelActorComponent_HandleAttachmentChanged_Params
{
};

// Function GbxGameSystemCore.ChallengeLevelActorComponent.GetAssociatedActor
struct UChallengeLevelActorComponent_GetAssociatedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActorComponent
struct UChallengeLevelParentComponent_RemoveAssociatedActorComponent_Params
{
	class UChallengeLevelActorComponent*               AssociatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActor
struct UChallengeLevelParentComponent_RemoveAssociatedActor_Params
{
	class AActor*                                      AssociatedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ChallengeLevelParentComponent.ClearAssociatedActors
struct UChallengeLevelParentComponent_ClearAssociatedActors_Params
{
};

// Function GbxGameSystemCore.ChallengeLevelParentComponent.AddAssociatedActor
struct UChallengeLevelParentComponent_AddAssociatedActor_Params
{
	class AActor*                                      AssociatedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PushCinematicMode
struct UCinematicModeBlueprintLibrary_PushCinematicMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCinematicModeData*                          InCinematicMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PopCinematicMode
struct UCinematicModeBlueprintLibrary_PopCinematicMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCinematicModeData*                          InCinematicMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearCinematicMode
struct UCinematicModeBlueprintLibrary_ClearCinematicMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearAndSetCinematicMode
struct UCinematicModeBlueprintLibrary_ClearAndSetCinematicMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCinematicModeData*                          InCinematicMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Beacon.OnBeaconSourceEndPlay
struct ABeacon_OnBeaconSourceEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StopControlledMove
struct UControlledMoveFunctionLibrary_StopControlledMove_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ControlledMove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StartControlledMove
struct UControlledMoveFunctionLibrary_StartControlledMove_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ControlledMove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LaunchAngleOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingSpecificControlledMove
struct UControlledMoveFunctionLibrary_IsPerformingSpecificControlledMove_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ControlledMove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingControlledMove
struct UControlledMoveFunctionLibrary_IsPerformingControlledMove_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.CoordinatedEffectBlueprintLibrary.GetOriginalOverrideMaterialAtIndex
struct UCoordinatedEffectBlueprintLibrary_GetOriginalOverrideMaterialAtIndex_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutActualIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.StopCausingDamageToTarget
struct UDamageStatics_StopCausingDamageToTarget_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.StopCausingDamage
struct UDamageStatics_StopCausingDamage_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.StopCausingAllDamage
struct UDamageStatics_StopCausingAllDamage_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.MakePipelineDamageInput
struct UDamageStatics_MakePipelineDamageInput_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageReceiver;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (Parm, IsPlainOldData)
	struct FVector                                     HitForceDirection;                                        // (Parm, IsPlainOldData)
	struct FForceSelection                             HitForceMagnitude;                                        // (Parm)
	struct FPipelineDamageInput                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.DamageStatics.GetSummary_ForceSelection
struct UDamageStatics_GetSummary_ForceSelection_Params
{
	struct FForceSelection                             ForceSelection;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.DamageStatics.GetDamageTypeFromClass
struct UDamageStatics_GetDamageTypeFromClass_Params
{
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.GetDamageSourceFromClass
struct UDamageStatics_GetDamageSourceFromClass_Params
{
	class UClass*                                      DamageSourceClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.Conv_ForceSelectionToFloat
struct UDamageStatics_Conv_ForceSelectionToFloat_Params
{
	struct FForceSelection                             ForceSelection;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.Conv_FloatToForceSelection
struct UDamageStatics_Conv_FloatToForceSelection_Params
{
	float                                              ForceSelection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.DamageStatics.ApplyDamageInRadius
struct UDamageStatics_ApplyDamageInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             BaseImpactForce;                                          // (Parm)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageModifierComponent*                    DamageModifierComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFeedbackData*                               InstigatorFeedback;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInstigatorRadiusDamageScale;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.ApplyDamageEx
struct UDamageStatics_ApplyDamageEx_Params
{
	struct FPipelineDamageInput                        PipelineInput;                                            // (Parm)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageStatics.ApplyDamage
struct UDamageStatics_ApplyDamage_Params
{
	class AActor*                                      DamageReceiver;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetStrengthMultiplier
struct UDynamicPhysicalAnimationComponent_SetStrengthMultiplier_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetSkeletalMeshComponent
struct UDynamicPhysicalAnimationComponent_SetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      NewSkeletalMeshComponent;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetRootMotionControl
struct UDynamicPhysicalAnimationComponent_SetRootMotionControl_Params
{
	EPhysicalAnimationRootMotionControl                MotionControl;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetHasAnimationPlaying
struct UDynamicPhysicalAnimationComponent_SetHasAnimationPlaying_Params
{
	bool                                               bPlaying;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnableRagdoll
struct UDynamicPhysicalAnimationComponent_SetEnableRagdoll_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnablePhysicalAnimation
struct UDynamicPhysicalAnimationComponent_SetEnablePhysicalAnimation_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BodyName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetActiveProfile
struct UDynamicPhysicalAnimationComponent_SetActiveProfile_Params
{
	class UPhysicalAnimationProfileAsset*              Profile;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.OnRigidBodyOverlap
struct UDynamicPhysicalAnimationComponent_OnRigidBodyOverlap_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetStrengthMultiplier
struct UDynamicPhysicalAnimationComponent_GetStrengthMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetRootMotionControl
struct UDynamicPhysicalAnimationComponent_GetRootMotionControl_Params
{
	EPhysicalAnimationRootMotionControl                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.DetachBodyFromAllExternalRigidBodies
struct UDynamicPhysicalAnimationComponent_DetachBodyFromAllExternalRigidBodies_Params
{
	struct FName                                       BodyName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.AttachBodyTo
struct UDynamicPhysicalAnimationComponent_AttachBodyTo_Params
{
	struct FName                                       BodyName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachToBodyName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySpaceBlend;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BreakForce;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestLocation
struct UEnvQueryParamsExt_RunEnvQueryForBestLocation_Params
{
	class UObject*                                     QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ResultLocation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestActor
struct UEnvQueryParamsExt_RunEnvQueryForBestActor_Params
{
	class UObject*                                     QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ResultActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllLocations
struct UEnvQueryParamsExt_RunEnvQueryForAllLocations_Params
{
	class UObject*                                     QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             ResultLocations;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllActors
struct UEnvQueryParamsExt_RunEnvQueryForAllActors_Params
{
	class UObject*                                     QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              ResultActors;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EnvQueryParamsExt.HasQuery
struct UEnvQueryParamsExt_HasQuery_Params
{
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.EnvQueryParamsExt.GetDescription
struct UEnvQueryParamsExt_GetDescription_Params
{
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.ExplosionBlueprintLibrary.PlayExplosion
struct UExplosionBlueprintLibrary_PlayExplosion_Params
{
	class UExplosionData*                              ExplosionData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExplosionLocation;                                        // (Parm, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetImpactForce
struct UDamageInfoFunctionLibrary_SetImpactForce_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	float                                              InImpactForce;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageType
struct UDamageInfoFunctionLibrary_SetDamageType_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	class UClass*                                      InDamageType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageSource
struct UDamageInfoFunctionLibrary_SetDamageSource_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	class UClass*                                      InDamageSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageRadius
struct UDamageInfoFunctionLibrary_SetDamageRadius_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	float                                              InDamageRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageModifierComponent
struct UDamageInfoFunctionLibrary_SetDamageModifierComponent_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	class UDamageModifierComponent*                    InModifierComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageCauser
struct UDamageInfoFunctionLibrary_SetDamageCauser_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	class AActor*                                      InDamageCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamage
struct UDamageInfoFunctionLibrary_SetDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	float                                              InDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetCriticalHitDamageOverrides
struct UDamageInfoFunctionLibrary_SetCriticalHitDamageOverrides_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	struct FCriticalHitDamageOverrides                 Overrides;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetApplyCriticalHitModsToAoEDamage
struct UDamageInfoFunctionLibrary_SetApplyCriticalHitModsToAoEDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               bApplyCriticalHitModsToAoEDamage;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetImpactForce
struct UDamageInfoFunctionLibrary_GetImpactForce_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageType
struct UDamageInfoFunctionLibrary_GetDamageType_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageSource
struct UDamageInfoFunctionLibrary_GetDamageSource_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageRadius
struct UDamageInfoFunctionLibrary_GetDamageRadius_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageModifierComponent
struct UDamageInfoFunctionLibrary_GetDamageModifierComponent_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDamageModifierComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageCauser
struct UDamageInfoFunctionLibrary_GetDamageCauser_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamage
struct UDamageInfoFunctionLibrary_GetDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetCriticalHitDamageOverrides
struct UDamageInfoFunctionLibrary_GetCriticalHitDamageOverrides_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCriticalHitDamageOverrides                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetApplyCriticalHitModsToAoEDamage
struct UDamageInfoFunctionLibrary_GetApplyCriticalHitModsToAoEDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ExplosionComponent.SetExplosionLocation
struct UExplosionComponent_SetExplosionLocation_Params
{
	struct FVector                                     NewLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ExplosionComponent.Explode
struct UExplosionComponent_Explode_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.ExplosionData.SelectExplosion
struct UExplosionData_SelectExplosion_Params
{
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FExplosionSizeProperties                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.ExplosionSizeSelectionData.GetExplosionPropertiesBySize
struct UExplosionSizeSelectionData_GetExplosionPropertiesBySize_Params
{
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FExplosionSizeProperties                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.FeedbackData.StopFeedbackForAll
struct UFeedbackData_StopFeedbackForAll_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.StopFeedback
struct UFeedbackData_StopFeedback_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.StopDefaultFeedbackForAll
struct UFeedbackData_StopDefaultFeedbackForAll_Params
{
	struct FFeedbackTableRowHandle                     Feedback;                                                 // (Parm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.StopDefaultFeedback
struct UFeedbackData_StopDefaultFeedback_Params
{
	struct FFeedbackTableRowHandle                     Feedback;                                                 // (Parm)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAllAtLocation
struct UFeedbackData_PerformFeedbackForAllAtLocation_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // (Parm, IsPlainOldData)
	struct FRangedDistanceOverrides                    RangedDistanceOverrides;                                  // (ConstParm, Parm)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ControllerToIgnore;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OverrideControllerFeedback;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAll
struct UFeedbackData_PerformFeedbackForAll_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ControllerToIgnore;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OverrideControllerFeedback;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformFeedbackAtLocation
struct UFeedbackData_PerformFeedbackAtLocation_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // (Parm, IsPlainOldData)
	struct FRangedDistanceOverrides                    RangedDistanceOverrides;                                  // (ConstParm, Parm)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ControllerToIgnore;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OverrideControllerFeedback;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformFeedback
struct UFeedbackData_PerformFeedback_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAllAtLocation
struct UFeedbackData_PerformDefaultFeedbackForAllAtLocation_Params
{
	struct FFeedbackTableRowHandle                     Feedback;                                                 // (Parm)
	struct FVector                                     SourceLocation;                                           // (Parm, IsPlainOldData)
	struct FRangedDistanceOverrides                    RangedDistanceOverrides;                                  // (ConstParm, Parm)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ControllerToIgnore;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OverrideControllerFeedback;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAll
struct UFeedbackData_PerformDefaultFeedbackForAll_Params
{
	struct FFeedbackTableRowHandle                     Feedback;                                                 // (Parm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ControllerToIgnore;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OverrideControllerFeedback;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackAtLocation
struct UFeedbackData_PerformDefaultFeedbackAtLocation_Params
{
	struct FFeedbackTableRowHandle                     Feedback;                                                 // (Parm)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // (Parm, IsPlainOldData)
	struct FRangedDistanceOverrides                    RangedDistanceOverrides;                                  // (ConstParm, Parm)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ControllerToIgnore;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               OverrideControllerFeedback;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedback
struct UFeedbackData_PerformDefaultFeedback_Params
{
	struct FFeedbackTableRowHandle                     Feedback;                                                 // (Parm)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.GetFeedbackDuration
struct UFeedbackData_GetFeedbackDuration_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.FeedbackData.GetFeedbackDataRange
struct UFeedbackData_GetFeedbackDataRange_Params
{
	class UFeedbackData*                               FeedbackData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FXVolumeManager.OnVolumeDestroyed
struct UFXVolumeManager_OnVolumeDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FXVolumeManager.OnPlayerDestroyed
struct UFXVolumeManager_OnPlayerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FXVolume.OnActorLeftVolume
struct AFXVolume_OnActorLeftVolume_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.FXVolume.OnActorEnteredVolume
struct AFXVolume_OnActorEnteredVolume_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTagContainerComponent.GetGameplayTagContainerFromActor
struct UGameplayTagContainerComponent_GetGameplayTagContainerFromActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EContainsTagComponent                              Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UGameplayTagContainerComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnLocation
struct UGameplayTask_RunEnvQuery_RunEnvQueryOnLocation_Params
{
	class AActor*                                      QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	class UGameplayTask_RunEnvQuery*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnActor
struct UGameplayTask_RunEnvQuery_RunEnvQueryOnActor_Params
{
	class AActor*                                      QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_RunEnvQuery*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQuery
struct UGameplayTask_RunEnvQuery_RunEnvQuery_Params
{
	class AActor*                                      QueryOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGameplayTask_RunEnvQuery*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocations
struct UGameplayTask_RunEnvQuery_GetResultLocations_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             ResultLocations;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocation
struct UGameplayTask_RunEnvQuery_GetResultLocation_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ResultLocation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActors
struct UGameplayTask_RunEnvQuery_GetResultActors_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              ResultActors;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActor
struct UGameplayTask_RunEnvQuery_GetResultActor_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ResultActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolManagerComponent.RemoveResourcePoolDelegate
struct UGameResourcePoolManagerComponent_RemoveResourcePoolDelegate_Params
{
	class UGameResourceData*                           InResourceData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ScriptDelegate;                                           // (Parm, ZeroConstructor)
};

// Function GbxGameSystemCore.GameResourcePoolManagerComponent.RecalculateAttributeInitializedPoolProperties
struct UGameResourcePoolManagerComponent_RecalculateAttributeInitializedPoolProperties_Params
{
};

// Function GbxGameSystemCore.GameResourcePoolManagerComponent.OnOwnerExperienceLevelChanged
struct UGameResourcePoolManagerComponent_OnOwnerExperienceLevelChanged_Params
{
	int                                                OldExperienceLevel;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolManagerComponent.GetResourcePoolByResource
struct UGameResourcePoolManagerComponent_GetResourcePoolByResource_Params
{
	class UGameResourceData*                           Resource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameResourcePoolReference                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GameResourcePoolManagerComponent.CreatePool
struct UGameResourcePoolManagerComponent_CreatePool_Params
{
	class UGameResourcePoolData*                       PoolData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReinitializeExistingPool;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameResourcePoolReference                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GameResourcePoolManagerComponent.ClearResourcePoolDelegate
struct UGameResourcePoolManagerComponent_ClearResourcePoolDelegate_Params
{
	class UGameResourceData*                           InResourceData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolManagerComponent.AddResourcePoolDelegate
struct UGameResourcePoolManagerComponent_AddResourcePoolDelegate_Params
{
	class UGameResourceData*                           InResourceData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ScriptDelegate;                                           // (Parm, ZeroConstructor)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.SetResourcePoolValue
struct UGameResourcePoolFunctionLibrary_SetResourcePoolValue_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelayByGameResourceData
struct UGameResourcePoolFunctionLibrary_ResetResourcePoolRegenDelayByGameResourceData_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameResourceData*                           Resource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelay
struct UGameResourcePoolFunctionLibrary_ResetResourcePoolRegenDelay_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.RefillResourcePoolByPercentage
struct UGameResourcePoolFunctionLibrary_RefillResourcePoolByPercentage_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPercentage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.IsResourcePoolInState
struct UGameResourcePoolFunctionLibrary_IsResourcePoolInState_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
	EGameResourcePoolState                             InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.GetDelegatePrefixForResourceEvent
struct UGameResourcePoolFunctionLibrary_GetDelegatePrefixForResourceEvent_Params
{
	struct FGameResourceUserEvent                      InResourceUserEvent;                                      // (Parm, OutParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolReference
struct UGameResourcePoolFunctionLibrary_EqualEqual_ResourcePoolReference_Params
{
	struct FGameResourcePoolReference                  A;                                                        // (Parm)
	struct FGameResourcePoolReference                  B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolData
struct UGameResourcePoolFunctionLibrary_EqualEqual_ResourcePoolData_Params
{
	struct FGameResourcePoolReference                  ResourcePoolReference;                                    // (Parm)
	class UGameResourcePoolData*                       ResourcePoolData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourceData
struct UGameResourcePoolFunctionLibrary_EqualEqual_ResourceData_Params
{
	struct FGameResourcePoolReference                  ResourcePoolReference;                                    // (Parm)
	class UGameResourceData*                           ResourceData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DrainResourcePoolByPercentage
struct UGameResourcePoolFunctionLibrary_DrainResourcePoolByPercentage_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinPercentage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DeleteResourcePool
struct UGameResourcePoolFunctionLibrary_DeleteResourcePool_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelayByGameResourceData
struct UGameResourcePoolFunctionLibrary_ClearResourcePoolRegenDelayByGameResourceData_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameResourceData*                           Resource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelay
struct UGameResourcePoolFunctionLibrary_ClearResourcePoolRegenDelay_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.BreakResourcePoolReference
struct UGameResourcePoolFunctionLibrary_BreakResourcePoolReference_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.AdjustResourcePoolValue
struct UGameResourcePoolFunctionLibrary_AdjustResourcePoolValue_Params
{
	struct FGameResourcePoolReference                  InPool;                                                   // (Parm)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameStatsComponent.UpdateStat
struct UGameStatsComponent_UpdateStat_Params
{
	class UGameStatData*                               GameStat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameStatsComponent.IncrementStat
struct UGameStatsComponent_IncrementStat_Params
{
	class UGameStatData*                               GameStat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameStatsComponent.GetStatValue
struct UGameStatsComponent_GetStatValue_Params
{
	class UGameStatData*                               GameStat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GameStatsComponent.GetGameStats
struct UGameStatsComponent_GetGameStats_Params
{
	TArray<struct FGameStat>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GbxGameSystemCore.GameStatsManager.UpdateStat
struct AGameStatsManager_UpdateStat_Params
{
	class AActor*                                      StatContext;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               GameStat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameStatsManager.IncrementStat
struct AGameStatsManager_IncrementStat_Params
{
	class AActor*                                      StatContext;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               GameStat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IncrementAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GameStatsManager.GetStatValue
struct AGameStatsManager_GetStatValue_Params
{
	class AActor*                                      StatContext;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               GameStat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_AICharge.OnStrike
struct UGbxAction_AICharge_OnStrike_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_AICharge.OnStopForFriendly
struct UGbxAction_AICharge_OnStopForFriendly_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_AICharge.OnReachCliff
struct UGbxAction_AICharge_OnReachCliff_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_AICharge.OnMiss
struct UGbxAction_AICharge_OnMiss_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_AICharge.OnLoop
struct UGbxAction_AICharge_OnLoop_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAction_AICharge.OnHitWall
struct UGbxAction_AICharge_OnHitWall_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesTarget
struct UStretchBonesBlueprintLibrary_SetStretchBonesTarget_Params
{
	TArray<struct FGbxActionRegister>                  GbxActionRegisters;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // (Parm, IsPlainOldData)
	TArray<struct FGbxActionRegister>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesDistance
struct UStretchBonesBlueprintLibrary_SetStretchBonesDistance_Params
{
	TArray<struct FGbxActionRegister>                  GbxActionRegisters;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxActionRegister>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopLoopingActionClass
struct UGbxActionBlueprintLibrary_StopLoopingActionClass_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionSlot
struct UGbxActionBlueprintLibrary_StopActionSlot_Params
{
	struct FName                                       ActionSlotName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActions
struct UGbxActionBlueprintLibrary_StopActions_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionClass
struct UGbxActionBlueprintLibrary_StopActionClass_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetObjectGbxActionRegister
struct UGbxActionBlueprintLibrary_SetObjectGbxActionRegister_Params
{
	TArray<struct FGbxActionRegister>                  GbxActionRegisters;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       RegisterKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicates;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxActionRegister>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetNameGbxActionRegister
struct UGbxActionBlueprintLibrary_SetNameGbxActionRegister_Params
{
	TArray<struct FGbxActionRegister>                  GbxActionRegisters;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       RegisterKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicates;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxActionRegister>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetIntGbxActionRegister
struct UGbxActionBlueprintLibrary_SetIntGbxActionRegister_Params
{
	TArray<struct FGbxActionRegister>                  GbxActionRegisters;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       RegisterKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicates;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxActionRegister>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetFloatGbxActionRegister
struct UGbxActionBlueprintLibrary_SetFloatGbxActionRegister_Params
{
	TArray<struct FGbxActionRegister>                  GbxActionRegisters;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       RegisterKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicates;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxActionRegister>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionPlayRate
struct UGbxActionBlueprintLibrary_K2_UpdateActionPlayRate_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionDirection
struct UGbxActionBlueprintLibrary_K2_UpdateActionDirection_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_StopActionObj
struct UGbxActionBlueprintLibrary_K2_StopActionObj_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ShowGbxActionScreenLogs
struct UGbxActionBlueprintLibrary_K2_ShowGbxActionScreenLogs_Params
{
	bool                                               bShowLogsOnScreen;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Resume
struct UGbxActionBlueprintLibrary_K2_Resume_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedProceedToNextSection
struct UGbxActionBlueprintLibrary_K2_ReplicatedProceedToNextSection_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedJumpToNextSection
struct UGbxActionBlueprintLibrary_K2_ReplicatedJumpToNextSection_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ProceedToNextSection
struct UGbxActionBlueprintLibrary_K2_ProceedToNextSection_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Pause
struct UGbxActionBlueprintLibrary_K2_Pause_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_JumpToNextSection
struct UGbxActionBlueprintLibrary_K2_JumpToNextSection_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetTimeRemaining
struct UGbxActionBlueprintLibrary_K2_GetTimeRemaining_Params
{
	class UGbxAction*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetMaxCurrentTime
struct UGbxActionBlueprintLibrary_K2_GetMaxCurrentTime_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetActionByClass
struct UGbxActionBlueprintLibrary_K2_GetActionByClass_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetSummary_AnimActionDef
struct UGbxActionBlueprintLibrary_GetSummary_AnimActionDef_Params
{
	struct FAnimActionDef                              AnimActionDef;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetKeyedActionClass
struct UGbxActionBlueprintLibrary_GetKeyedActionClass_Params
{
	struct FGameplayTag                                ActionKey;                                                // (Parm)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.UpdateActionRemoteServer
struct UGbxActionComponent_UpdateActionRemoteServer_Params
{
	struct FActionState_Base                           ActionData;                                               // (Parm)
};

// Function GbxGameSystemCore.GbxActionComponent.StopOnRemoteServer
struct UGbxActionComponent_StopOnRemoteServer_Params
{
	int                                                ManagerRepId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionEndState                                 EndState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.StopLoopingActionClass
struct UGbxActionComponent_StopLoopingActionClass_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.StopActionSlot
struct UGbxActionComponent_StopActionSlot_Params
{
	struct FName                                       ActionSlotName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.StopActions
struct UGbxActionComponent_StopActions_Params
{
};

// Function GbxGameSystemCore.GbxActionComponent.StopActionClass
struct UGbxActionComponent_StopActionClass_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.PlayOnRemoteServer
struct UGbxActionComponent_PlayOnRemoteServer_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActionState_Base                           ActionData;                                               // (Parm)
};

// Function GbxGameSystemCore.GbxActionComponent.OnComponentUnregistered
struct UGbxActionComponent_OnComponentUnregistered_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.OnComponentDetached
struct UGbxActionComponent_OnComponentDetached_Params
{
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.OnComponentAttached
struct UGbxActionComponent_OnComponentAttached_Params
{
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.NotifyInterruptRequest
struct UGbxActionComponent_NotifyInterruptRequest_Params
{
};

// Function GbxGameSystemCore.GbxActionComponent.K2_Play
struct UGbxActionComponent_K2_Play_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.K2_IsPlayingObj
struct UGbxActionComponent_K2_IsPlayingObj_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.K2_GetActionBySlot
struct UGbxActionComponent_K2_GetActionBySlot_Params
{
	struct FName                                       ActionSlotName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.K2_GetActionByClass
struct UGbxActionComponent_K2_GetActionByClass_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.IsPlayingSlot
struct UGbxActionComponent_IsPlayingSlot_Params
{
	struct FName                                       ActionSlotName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxActionComponent.IsPlayingClass
struct UGbxActionComponent_IsPlayingClass_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAnimBlueprintProfile.RebuildBoneLists
struct UGbxAnimBlueprintProfile_RebuildBoneLists_Params
{
};

// Function GbxGameSystemCore.GbxAnimBlueprintProfile.AnimBlueprintImportFunction
struct UGbxAnimBlueprintProfile_AnimBlueprintImportFunction_Params
{
	EAnimBPProfileImport                               ImportType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeData.CanSetBaseValue
struct UGbxAttributeData_CanSetBaseValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeData.CanBindToOnChangedEvent
struct UGbxAttributeData_CanBindToOnChangedEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeData.CanAddModifiers
struct UGbxAttributeData_CanAddModifiers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeData.CanAddAndRemoveModifiers
struct UGbxAttributeData_CanAddAndRemoveModifiers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindFromOnAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindFromOnAttributeChanged_Params
{
	struct FGbxAttributeDelegateBindingHandle          BindingHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnIntegerAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindEventFromOnIntegerAttributeChanged_Params
{
	struct FGbxAttributeInteger                        Attribute;                                                // (Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnFloatAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindEventFromOnFloatAttributeChanged_Params
{
	struct FGbxAttributeFloat                          Attribute;                                                // (Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnIntegerAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindAllEventsFromOnIntegerAttributeChanged_Params
{
	struct FGbxAttributeInteger                        Attribute;                                                // (Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnFloatAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindAllEventsFromOnFloatAttributeChanged_Params
{
	struct FGbxAttributeFloat                          Attribute;                                                // (Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveMultipleAttributeModifiers
struct UGbxAttributeFunctionLibrary_RemoveMultipleAttributeModifiers_Params
{
	TArray<struct FGbxAttributeModifierHandle>         ModifierHandles;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveModifierFromGbxAttribute
struct UGbxAttributeFunctionLibrary_RemoveModifierFromGbxAttribute_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeModifierHandle                 ModifierHandle;                                           // (Parm, OutParm, ReferenceParm)
	EGbxAttributeModifierActionExecOutput              ModifierActionResult;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveAttributeModifier
struct UGbxAttributeFunctionLibrary_RemoveAttributeModifier_Params
{
	struct FGbxAttributeModifierHandle                 ModifierHandle;                                           // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RefreshBindingToOnAttributeChangedEvent
struct UGbxAttributeFunctionLibrary_RefreshBindingToOnAttributeChangedEvent_Params
{
	struct FGbxAttributeDelegateBindingHandle          BindingHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeDelegateBindingHandle          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeInteger
struct UGbxAttributeFunctionLibrary_MakeGbxAttributeInteger_Params
{
	int                                                BaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeInteger                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeFloat
struct UGbxAttributeFunctionLibrary_MakeGbxAttributeFloat_Params
{
	float                                              BaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsInteger
struct UGbxAttributeFunctionLibrary_GetValueOfAttributeAsInteger_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsBoolean
struct UGbxAttributeFunctionLibrary_GetValueOfAttributeAsBoolean_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttribute
struct UGbxAttributeFunctionLibrary_GetValueOfAttribute_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueFromAttributeDefinedRow
struct UGbxAttributeFunctionLibrary_GetValueFromAttributeDefinedRow_Params
{
	struct FDataTableRowHandle                         RowHandle;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializer
struct UGbxAttributeFunctionLibrary_EvaluateAttributeInitializer_Params
{
	class UClass*                                      Initializer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializationData
struct UGbxAttributeFunctionLibrary_EvaluateAttributeInitializationData_Params
{
	struct FAttributeInitializationData                InitializationData;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeIntegerValue
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeIntegerValue_Params
{
	struct FGbxAttributeInteger                        A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeInteger
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeInteger_Params
{
	struct FGbxAttributeInteger                        A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGbxAttributeInteger                        B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloatValue
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeFloatValue_Params
{
	struct FGbxAttributeFloat                          A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloat
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeFloat_Params
{
	struct FGbxAttributeFloat                          A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGbxAttributeFloat                          B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeModifierHandleToString
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeModifierHandleToString_Params
{
	struct FGbxAttributeModifierHandle                 Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToString
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeIntegerToString_Params
{
	struct FGbxAttributeInteger                        Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToInteger
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeIntegerToInteger_Params
{
	struct FGbxAttributeInteger                        Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToString
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeFloatToString_Params
{
	struct FGbxAttributeFloat                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToFloat
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeFloatToFloat_Params
{
	struct FGbxAttributeFloat                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_AttributeInitializationDataToString
struct UGbxAttributeFunctionLibrary_Conv_AttributeInitializationDataToString_Params
{
	struct FAttributeInitializationData                InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeInteger
struct UGbxAttributeFunctionLibrary_BreakGbxAttributeInteger_Params
{
	struct FGbxAttributeInteger                        Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                BaseValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeFloat
struct UGbxAttributeFunctionLibrary_BreakGbxAttributeFloat_Params
{
	struct FGbxAttributeFloat                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BaseValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnIntegerAttributeChanged
struct UGbxAttributeFunctionLibrary_BindEventToOnIntegerAttributeChanged_Params
{
	struct FGbxAttributeInteger                        Attribute;                                                // (Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnFloatAttributeChanged
struct UGbxAttributeFunctionLibrary_BindEventToOnFloatAttributeChanged_Params
{
	struct FGbxAttributeFloat                          Attribute;                                                // (Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnAttributeChanged
struct UGbxAttributeFunctionLibrary_BindEventToOnAttributeChanged_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGbxAttributeDelegateBindingHandle          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeEffects
struct UGbxAttributeFunctionLibrary_ApplyMultipleAttributeEffects_Params
{
	TArray<struct FAttributeEffectData>                Effects;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     ModifierValueContext;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AttributeToModifyContextSource;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxAttributeModifierHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeBaseValueData
struct UGbxAttributeFunctionLibrary_ApplyMultipleAttributeBaseValueData_Params
{
	TArray<struct FAttributeBaseValueData>             BaseValueData;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     AttributeToSetContextSource;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ValueContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeEffect
struct UGbxAttributeFunctionLibrary_ApplyAttributeEffect_Params
{
	struct FAttributeEffectData                        Effect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ModifierValueContext;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AttributeToModifyContextSource;                           // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxAttributeModifierActionExecOutput              ModifierActionResult;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeModifierHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeBaseValueData
struct UGbxAttributeFunctionLibrary_ApplyAttributeBaseValueData_Params
{
	struct FAttributeBaseValueData                     BaseValueData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     AttributeToSetContextSource;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ValueContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxAttributeModifierActionExecOutput              ModifierActionResult;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.AddModifierToGbxAttribute
struct UGbxAttributeFunctionLibrary_AddModifierToGbxAttribute_Params
{
	class UGbxAttributeData*                           Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxAttributeModifierType                          ModifierType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ModifierValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxAttributeModifierActionExecOutput              ModifierActionResult;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeModifierHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxAttributesComponent.IsAttributeSetClassUnrelatedToExistingSet
struct UGbxAttributesComponent_IsAttributeSetClassUnrelatedToExistingSet_Params
{
	class UClass*                                      AttributeSetClass;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsVector
struct UGbxBlackboardKeySelectorExt_SetValueAsVector_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsTargetActorInfo
struct UGbxBlackboardKeySelectorExt_SetValueAsTargetActorInfo_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTargetActorInfo                            Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsString
struct UGbxBlackboardKeySelectorExt_SetValueAsString_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsRotator
struct UGbxBlackboardKeySelectorExt_SetValueAsRotator_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    Value;                                                    // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsObject
struct UGbxBlackboardKeySelectorExt_SetValueAsObject_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsName
struct UGbxBlackboardKeySelectorExt_SetValueAsName_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsInt
struct UGbxBlackboardKeySelectorExt_SetValueAsInt_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFloat
struct UGbxBlackboardKeySelectorExt_SetValueAsFloat_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFlag
struct UGbxBlackboardKeySelectorExt_SetValueAsFlag_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsEnum
struct UGbxBlackboardKeySelectorExt_SetValueAsEnum_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsClass
struct UGbxBlackboardKeySelectorExt_SetValueAsClass_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsBool
struct UGbxBlackboardKeySelectorExt_SetValueAsBool_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsVector
struct UGbxBlackboardKeySelectorExt_GetValueAsVector_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsTargetActorInfo
struct UGbxBlackboardKeySelectorExt_GetValueAsTargetActorInfo_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTargetActorInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsString
struct UGbxBlackboardKeySelectorExt_GetValueAsString_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsRotator
struct UGbxBlackboardKeySelectorExt_GetValueAsRotator_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsObject
struct UGbxBlackboardKeySelectorExt_GetValueAsObject_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsName
struct UGbxBlackboardKeySelectorExt_GetValueAsName_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsInt
struct UGbxBlackboardKeySelectorExt_GetValueAsInt_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsFloat
struct UGbxBlackboardKeySelectorExt_GetValueAsFloat_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsEnum
struct UGbxBlackboardKeySelectorExt_GetValueAsEnum_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsClass
struct UGbxBlackboardKeySelectorExt_GetValueAsClass_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsBool
struct UGbxBlackboardKeySelectorExt_GetValueAsBool_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsActor
struct UGbxBlackboardKeySelectorExt_GetValueAsActor_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetPropertyDescription
struct UGbxBlackboardKeySelectorExt_GetPropertyDescription_Params
{
	struct FGbxBlackboardKeySelector                   BBKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.ClearValue
struct UGbxBlackboardKeySelectorExt_ClearValue_Params
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCondition_Blueprint.EvaluateCondition
struct UGbxCondition_Blueprint_EvaluateCondition_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCondition_List.RequiresNativeClass
struct UGbxCondition_List_RequiresNativeClass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxCondition_List.GetRequiredInterface
struct UGbxCondition_List_GetRequiredInterface_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValueFromHandle
struct UGbxDataTableFunctionLibrary_GetDataTableValueFromHandle_Params
{
	struct FDataTableValueHandle                       ValueHandle;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValue
struct UGbxDataTableFunctionLibrary_GetDataTableValue_Params
{
	class UDataTable*                                  Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ValueName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               ValueInStructType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.Conv_DataTableValueHandleToString
struct UGbxDataTableFunctionLibrary_Conv_DataTableValueHandleToString_Params
{
	struct FDataTableValueHandle                       ValueHandle;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxEqsRenderingComponent.GetAvailableEnvQueryParamRefNames
struct UGbxEqsRenderingComponent_GetAvailableEnvQueryParamRefNames_Params
{
	TArray<class FString>                              Names;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxFeedbackBase.StopGbxFeedback
struct UGbxFeedbackBase_StopGbxFeedback_Params
{
	class UGbxFeedbackBase*                            FeedbackData;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData3D
struct UGbxFeedbackBase_PlayGbxFeedbackData3D_Params
{
	class UGbxFeedbackBase*                            FeedbackData;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // (Parm, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectFalloffMinDistance;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectFalloffMaxDistance;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData2D
struct UGbxFeedbackBase_PlayGbxFeedbackData2D_Params
{
	class UGbxFeedbackBase*                            FeedbackData;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagValue
struct UGbxFlagFunctionLibrary_SetFlagValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFlag                                    Flag;                                                     // (Parm, OutParm, ReferenceParm)
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagTrueTimed
struct UGbxFlagFunctionLibrary_SetFlagTrueTimed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFlag                                    Flag;                                                     // (Parm, OutParm, ReferenceParm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataValue
struct UGbxFlagFunctionLibrary_SetFlagDataValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFlagData*                                FlagData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataTrueTimed
struct UGbxFlagFunctionLibrary_SetFlagDataTrueTimed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFlagData*                                FlagData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagValue
struct UGbxFlagFunctionLibrary_GetFlagValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFlag                                    Flag;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagDataValue
struct UGbxFlagFunctionLibrary_GetFlagDataValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFlagData*                                FlagData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueWithin
struct UGbxFlagFunctionLibrary_FlagTrueWithin_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFlag                                    Flag;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueFor
struct UGbxFlagFunctionLibrary_FlagTrueFor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFlag                                    Flag;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseWithin
struct UGbxFlagFunctionLibrary_FlagFalseWithin_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFlag                                    Flag;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseFor
struct UGbxFlagFunctionLibrary_FlagFalseFor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFlag                                    Flag;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueWithin
struct UGbxFlagFunctionLibrary_FlagDataTrueWithin_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFlagData*                                FlagData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueFor
struct UGbxFlagFunctionLibrary_FlagDataTrueFor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFlagData*                                FlagData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseWithin
struct UGbxFlagFunctionLibrary_FlagDataFalseWithin_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFlagData*                                FlagData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseFor
struct UGbxFlagFunctionLibrary_FlagDataFalseFor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFlagData*                                FlagData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseWith
struct UGbxGameplayStatics_SetTeamCollisionResponseWith_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TeamActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseToChannel
struct UGbxGameplayStatics_SetTeamCollisionResponseToChannel_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETeamCollisionChannel                              Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannelFrom
struct UGbxGameplayStatics_SetTeamCollisionChannelFrom_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TeamActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannel
struct UGbxGameplayStatics_SetTeamCollisionChannel_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETeamCollisionChannel                              Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetPlayerMaster
struct UGbxGameplayStatics_SetPlayerMaster_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlayerMaster;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseWith
struct UGbxGameplayStatics_SetComponentTeamCollisionResponseWith_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TeamActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseToChannel
struct UGbxGameplayStatics_SetComponentTeamCollisionResponseToChannel_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ETeamCollisionChannel                              Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionChannel
struct UGbxGameplayStatics_SetComponentTeamCollisionChannel_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ETeamCollisionChannel                              Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.ProjectFromQueryToSimulation
struct UGbxGameplayStatics_ProjectFromQueryToSimulation_Params
{
	class UGbxSkeletalMeshComponent*                   Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BodyName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     InOutHitPoint;                                            // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InOutHitNormal;                                           // (Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.GetPrimaryPlayerController
struct UGbxGameplayStatics_GetPrimaryPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.GetAssociatedPrimaryCharacter
struct UGbxGameplayStatics_GetAssociatedPrimaryCharacter_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameplayStatics.AlignTransformToSurface
struct UGbxGameplayStatics_AlignTransformToSurface_Params
{
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	struct FVector                                     SurfaceNormal;                                            // (Parm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStatForParty
struct UGbxGameStatsBlueprintLibrary_UpdateStatForParty_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStat
struct UGbxGameStatsBlueprintLibrary_UpdateStat_Params
{
	class AActor*                                      ContextActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStatForParty
struct UGbxGameStatsBlueprintLibrary_IncrementStatForParty_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStat
struct UGbxGameStatsBlueprintLibrary_IncrementStat_Params
{
	class AActor*                                      ContextActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.GetStatValue
struct UGbxGameStatsBlueprintLibrary_GetStatValue_Params
{
	class AActor*                                      ContextActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStatForParty
struct UGbxGameStatsBlueprintLibrary_DecrementStatForParty_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStat
struct UGbxGameStatsBlueprintLibrary_DecrementStat_Params
{
	class AActor*                                      ContextActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.SetComponentPhysicalRotation
struct UGbxGameSystemCoreBlueprintLibrary_SetComponentPhysicalRotation_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PitchRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RollRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTurns
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockTurns_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTickAndRefreshBones
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockTickAndRefreshBones_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockRotation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockRotation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMovement
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMovement_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMomentum
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMomentum_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMantling
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMantling_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAtTargetLocation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockLookAtTargetLocation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAt
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockLookAt_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockJumping
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockJumping_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockHandIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockHandIk_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockGod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockGod_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIkTracing
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockFootIkTracing_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockFootIk_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDodging
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockDodging_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDemigod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockDemigod_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockCrouching
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockCrouching_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAIThinking
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockAIThinking_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAiming
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockAiming_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTurns
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTurns_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTickAndRefreshBones
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTickAndRefreshBones_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTargetable
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTargetable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockRotation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockRotation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockPhysicsRotation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockPhysicsRotation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMovement
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockMovement_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMomentum
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockMomentum_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMantling
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockMantling_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAtTargetLocation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockLookAtTargetLocation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAt
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockLookAt_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockJumping
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockJumping_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockHandIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockHandIk_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockGod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockGod_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIkTracing
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockFootIkTracing_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockFootIk_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDodging
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockDodging_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDemigod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockDemigod_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockCrouching
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockCrouching_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAIThinking
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockAIThinking_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbort;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAiming
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockAiming_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsSplitScreen
struct UGbxGameSystemCoreBlueprintLibrary_IsSplitScreen_Params
{
	class UGameInstance*                               GameInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsPlayer
struct UGbxGameSystemCoreBlueprintLibrary_IsPlayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsContentCensored
struct UGbxGameSystemCoreBlueprintLibrary_IsContentCensored_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.HoverComponentAtActor
struct UGbxGameSystemCoreBlueprintLibrary_HoverComponentAtActor_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Altitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetRelativeDirection
struct UGbxGameSystemCoreBlueprintLibrary_GetRelativeDirection_Params
{
	struct FRelativeDirectionData                      RelativeDirectionData;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     DefaultDirection;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetCurveFloatValue
struct UGbxGameSystemCoreBlueprintLibrary_GetCurveFloatValue_Params
{
	struct FRuntimeFloatCurve                          Curve;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAnyPlayersOverlappingActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAnyPlayersOverlappingActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAllPlayersOverlappingActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAllPlayersOverlappingActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetActorListTrimmedToBestCluster
struct UGbxGameSystemCoreBlueprintLibrary_GetActorListTrimmedToBestCluster_Params
{
	TArray<class AActor*>                              OutputActors;                                             // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     ClusterMidpoint;                                          // (Parm, OutParm, IsPlainOldData)
	TArray<class AActor*>                              InputActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClusterRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreferClusterContainingCurrentTarget;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsPlayer
struct UGbxGameSystemCoreBlueprintLibrary_BranchOnIsPlayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EIsPlayerExecOutput                                Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsAutonomous
struct UGbxGameSystemCoreBlueprintLibrary_BranchOnIsAutonomous_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EIsAutonomousOuput                                 Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersOverlappingActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EPlayersOverlappingActorOutput                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersOverlappingActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayersOverlappingActorOutput                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersInVolume
struct UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersInVolume_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AVolume*>                             Volumes;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EPlayersInVolumeOutput                             Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersOverlappingActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EPlayersOverlappingActorOutput                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersOverlappingActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayersOverlappingActorOutput                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersInVolume
struct UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersInVolume_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AVolume*>                             Volumes;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EPlayersInVolumeOutput                             Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxMediaManager.OnMovieMediaOpenFailed
struct UGbxMediaManager_OnMovieMediaOpenFailed_Params
{
	class FString                                      DeviceUrl;                                                // (Parm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxMediaManager.OnMovieMediaClosed
struct UGbxMediaManager_OnMovieMediaClosed_Params
{
};

// Function GbxGameSystemCore.GbxMediaManager.OnMovieEndReached
struct UGbxMediaManager_OnMovieEndReached_Params
{
};

// Function GbxGameSystemCore.GbxMediaManager.GbxPlayMovie
struct UGbxMediaManager_GbxPlayMovie_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxMediaData*                               InMediaData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxNavAvoidanceInterface.SetObstacleAvoidanceLock
struct UGbxNavAvoidanceInterface_SetObstacleAvoidanceLock_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.IsValueInRangePure
struct UGbxParamExt_IsValueInRangePure_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.IsValueInRange
struct UGbxParamExt_IsValueInRange_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.GetParamPropertyDescription
struct UGbxParamExt_GetParamPropertyDescription_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxParamExt.GetParamDescriptionText
struct UGbxParamExt_GetParamDescriptionText_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxParamExt.GetParamDescription
struct UGbxParamExt_GetParamDescription_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescriptionText
struct UGbxParamExt_GetNamedParamDescriptionText_Params
{
	struct FGbxNamedParam                              Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescription
struct UGbxParamExt_GetNamedParamDescription_Params
{
	struct FGbxNamedParam                              Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.GbxParamExt.EvaluatePure
struct UGbxParamExt_EvaluatePure_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.EvaluateIntPure
struct UGbxParamExt_EvaluateIntPure_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.EvaluateInt
struct UGbxParamExt_EvaluateInt_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.EvaluateBoolPure
struct UGbxParamExt_EvaluateBoolPure_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.EvaluateBool
struct UGbxParamExt_EvaluateBool_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxParamExt.Evaluate
struct UGbxParamExt_Evaluate_Params
{
	struct FGbxParam                                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxPhysicsSettings.StaticSetRigidBodySimulationInteractability
struct UGbxPhysicsSettings_StaticSetRigidBodySimulationInteractability_Params
{
	class USkeletalMeshComponent*                      Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAesthetic;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BodyName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxQueryManager.NotifyAIHotSpotListChangedFor
struct UGbxQueryManager_NotifyAIHotSpotListChangedFor_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.GbxSignificanceSettings.EnumerateSignificanceEvents
struct UGbxSignificanceSettings_EnumerateSignificanceEvents_Params
{
	TArray<struct FName>                               OutEvents;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateVectorMotion
struct UGbxSimpleMotionLibrary_UpdateVectorMotion_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentValue;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              ControlValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionState                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SpeedScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetValue;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FSimpleMotionInstanceState                  State;                                                    // (Parm, OutParm)
};

// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateRotatorMotion
struct UGbxSimpleMotionLibrary_UpdateRotatorMotion_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentValue;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              ControlValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionState                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SpeedScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetValue;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bShortestRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionInstanceState                  State;                                                    // (Parm, OutParm)
};

// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateFloatMotion
struct UGbxSimpleMotionLibrary_UpdateFloatMotion_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ControlValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionState                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SpeedScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionInstanceState                  State;                                                    // (Parm, OutParm)
};

// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportVectorMotion
struct UGbxSimpleMotionLibrary_TeleportVectorMotion_Params
{
	struct FVector                                     CurrentValue;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              ControlValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionState                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SpeedScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetValue;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FSimpleMotionInstanceState                  State;                                                    // (Parm, OutParm)
};

// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportRotatorMotion
struct UGbxSimpleMotionLibrary_TeleportRotatorMotion_Params
{
	struct FRotator                                    CurrentValue;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              ControlValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionState                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SpeedScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetValue;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FSimpleMotionInstanceState                  State;                                                    // (Parm, OutParm)
};

// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportFloatMotion
struct UGbxSimpleMotionLibrary_TeleportFloatMotion_Params
{
	float                                              CurrentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ControlValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionState                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SpeedScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSimpleMotionInstanceState                  State;                                                    // (Parm, OutParm)
};

// Function GbxGameSystemCore.GbxSimpleMotionLibrary.ResetMotionState
struct UGbxSimpleMotionLibrary_ResetMotionState_Params
{
	struct FSimpleMotionInstanceState                  State;                                                    // (Parm, OutParm)
};

// Function GbxGameSystemCore.GbxUIName.GetFormattedText
struct UGbxUIName_GetFormattedText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.GestaltPartData_Mesh.EnumerateGestaltMeshPartNames
struct UGestaltPartData_Mesh_EnumerateGestaltMeshPartNames_Params
{
	TArray<struct FName>                               OutPartNameList;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.GlobalBoneModBlueprintLibrary.K2_SetGBMP
struct UGlobalBoneModBlueprintLibrary_K2_SetGBMP_Params
{
	class UGlobalBoneModifyProfileState*               State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.SetHitReactionData
struct UHitReactionBlueprintLibrary_SetHitReactionData_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionData*                            HitReactionData;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptHitReaction
struct UHitReactionBlueprintLibrary_ScriptHitReaction_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalHitDirection;                                        // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             Force;                                                    // (Parm)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptDeath
struct UHitReactionBlueprintLibrary_ScriptDeath_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalHitDirection;                                        // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             Force;                                                    // (Parm)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceUnlockHitReactions
struct UHitReactionBlueprintLibrary_ResourceUnlockHitReactions_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceLockHitReactions
struct UHitReactionBlueprintLibrary_ResourceLockHitReactions_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionLiveLayer
struct UHitReactionBlueprintLibrary_RemoveHitReactionLiveLayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionDeathLayer
struct UHitReactionBlueprintLibrary_RemoveHitReactionDeathLayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitLocationFromAction
struct UHitReactionBlueprintLibrary_K2_GetHitLocationFromAction_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitDirectionFromAction
struct UHitReactionBlueprintLibrary_K2_GetHitDirectionFromAction_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitCauserFromAction
struct UHitReactionBlueprintLibrary_K2_GetHitCauserFromAction_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHealthPercentFromAction
struct UHitReactionBlueprintLibrary_K2_GetHealthPercentFromAction_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetForceFromAction
struct UHitReactionBlueprintLibrary_K2_GetForceFromAction_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetBoneIndexFromAction
struct UHitReactionBlueprintLibrary_K2_GetBoneIndexFromAction_Params
{
	class UGbxAction*                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.IsHitReactionTagActive
struct UHitReactionBlueprintLibrary_IsHitReactionTagActive_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionLiveLayer
struct UHitReactionBlueprintLibrary_AddHitReactionLiveLayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionDeathLayer
struct UHitReactionBlueprintLibrary_AddHitReactionDeathLayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitReactionLayer_Blueprint.EvaluateTag
struct UHitReactionLayer_Blueprint_EvaluateTag_Params
{
	class UDamageComponent*                            Receiver;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      Causer;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             PreviousTag;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetHitRegionHealth
struct UHitRegionFunctionLibrary_ResetHitRegionHealth_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AssociatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetAllHitRegionHealth
struct UHitRegionFunctionLibrary_ResetAllHitRegionHealth_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByPercent
struct UHitRegionFunctionLibrary_RefillHitRegionHealthByPercent_Params
{
	float                                              RefillPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AssociatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByAmount
struct UHitRegionFunctionLibrary_RefillHitRegionHealthByAmount_Params
{
	float                                              RefillAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AssociatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.HitRegionFunctionLibrary.AssociateComponentWithHitRegion
struct UHitRegionFunctionLibrary_AssociateComponentWithHitRegion_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ComponentToAssociate;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InspectionInfoProvider.GetInspectionInfo
struct UInspectionInfoProvider_GetInspectionInfo_Params
{
	struct FInspectionInfo                             InspectionInfo;                                           // (Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpactAndGetParticleSystemComponents
struct UImpactEffectFunctionLibrary_PlayTraceImpactAndGetParticleSystemComponents_Params
{
	class UImpactData*                                 ImpactData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            SpawnedParticleSystemComponents;                          // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpact
struct UImpactEffectFunctionLibrary_PlayTraceImpact_Params
{
	class UImpactData*                                 ImpactData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicated;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpactGetParticleSystemComponents
struct UImpactEffectFunctionLibrary_PlayHitResultImpactGetParticleSystemComponents_Params
{
	class UImpactData*                                 ImpactData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            SpawnedParticleSystemComponents;                          // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpact
struct UImpactEffectFunctionLibrary_PlayHitResultImpact_Params
{
	class UImpactData*                                 ImpactData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bReplicated;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ImpactFXManagerComponent.SetEffectsEnabled
struct UImpactFXManagerComponent_SetEffectsEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedParticleSystemFinished
struct UImpactFXManagerComponent_OnTrackedParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedComponentDeactivated
struct UImpactFXManagerComponent_OnTrackedComponentDeactivated_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.ImpactFXManagerComponent.OnHit
struct UImpactFXManagerComponent_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddScreenOutput
struct UInspectionInfoFunctionLibrary_AddScreenOutput_Params
{
	struct FInspectionInfo                             InspectionInfo;                                           // (Parm, OutParm, ReferenceParm)
	class FString                                      String;                                                   // (Parm, ZeroConstructor)
	EDebugDisplayVerbosityLevel                        Verbosity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddAboveActorOutput
struct UInspectionInfoFunctionLibrary_AddAboveActorOutput_Params
{
	struct FInspectionInfo                             InspectionInfo;                                           // (Parm, OutParm, ReferenceParm)
	class FString                                      String;                                                   // (Parm, ZeroConstructor)
	EDebugDisplayVerbosityLevel                        Verbosity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.Stop
struct UInterpComponent_Stop_Params
{
};

// Function GbxGameSystemCore.InterpComponent.SetUpdateVelocity
struct UInterpComponent_SetUpdateVelocity_Params
{
	bool                                               bNewUpdateVelocity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.SetRemoveOnCompletion
struct UInterpComponent_SetRemoveOnCompletion_Params
{
	bool                                               bRemove;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.SetManualTick
struct UInterpComponent_SetManualTick_Params
{
	bool                                               bManual;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.SetClearVelocity
struct UInterpComponent_SetClearVelocity_Params
{
	bool                                               bNewClearVelocity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.MatchRotationToVelocity
struct UInterpComponent_MatchRotationToVelocity_Params
{
	bool                                               bInSetToInitialWhenFinished;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.ManualTick
struct UInterpComponent_ManualTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.IsFinished
struct UInterpComponent_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.InterpRotation
struct UInterpComponent_InterpRotation_Params
{
	struct FRotator                                    NewRot;                                                   // (Parm, IsPlainOldData)
	float                                              InterpTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLinear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bYawOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRelative;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.InterpLocation
struct UInterpComponent_InterpLocation_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	float                                              InterpTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLinear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRelative;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.InterpDeltaRotation
struct UInterpComponent_InterpDeltaRotation_Params
{
	struct FRotator                                    DeltaRot;                                                 // (Parm, IsPlainOldData)
	float                                              InterpTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLinear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bYawOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRelative;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.InterpDeltaLocation
struct UInterpComponent_InterpDeltaLocation_Params
{
	struct FVector                                     DeltaLoc;                                                 // (Parm, IsPlainOldData)
	float                                              InterpTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLinear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRelative;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.InterpBallisticsByTime
struct UInterpComponent_InterpBallisticsByTime_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (Parm, IsPlainOldData)
	float                                              LeapTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeapGravity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.InterpComponent.InterpBallistics
struct UInterpComponent_InterpBallistics_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (Parm, IsPlainOldData)
	float                                              LeapSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeapAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.MotionControlLibrary.UpdateSpeed
struct UMotionControlLibrary_UpdateSpeed_Params
{
	float                                              CurrentSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.MotionControlLibrary.Spin
struct UMotionControlLibrary_Spin_Params
{
	struct FRotator                                    CurrentRotation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RotationRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.OrbitingActorComponent.SetTargetActor
struct UOrbitingActorComponent_SetTargetActor_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.OrbitingActorComponent.OnRep_TargetActor
struct UOrbitingActorComponent_OnRep_TargetActor_Params
{
	class AActor*                                      LastTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromSlot
struct UPawnAttachmentFunctionLibrary_RequestDetachPawnFromSlot_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromActor
struct UPawnAttachmentFunctionLibrary_RequestDetachPawnFromActor_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.QueryPawnAttachment
struct UPawnAttachmentFunctionLibrary_QueryPawnAttachment_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPawnAttachmentQueryResult                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.FindPawnAttachSlotComponent
struct UPawnAttachmentFunctionLibrary_FindPawnAttachSlotComponent_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPawnAttachSlotComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromSlot
struct UPawnAttachmentFunctionLibrary_DetachPawnFromSlot_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromActor
struct UPawnAttachmentFunctionLibrary_DetachPawnFromActor_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.AttachPawnToSlot
struct UPawnAttachmentFunctionLibrary_AttachPawnToSlot_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetController
struct UProjectileAimViewPointHomingTargetComponent_SetTargetController_Params
{
	class AController*                                 InTargetController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetActor
struct UProjectileAimViewPointHomingTargetComponent_SetTargetActor_Params
{
	class AActor*                                      InTargetActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetTargetController
struct UProjectileAimViewPointHomingTargetComponent_GetTargetController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetCurrentHomingLoc
struct UProjectileAimViewPointHomingTargetComponent_GetCurrentHomingLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.ReferenceActor.EnumeratePreviewClasses
struct AReferenceActor_EnumeratePreviewClasses_Params
{
	TArray<struct FName>                               ClasssList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_TemplateOptions
struct AReplicatedEmitter_OnRep_TemplateOptions_Params
{
};

// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedWwiseEvent
struct AReplicatedEmitter_OnRep_ReplicatedWwiseEvent_Params
{
};

// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedVectorParams
struct AReplicatedEmitter_OnRep_ReplicatedVectorParams_Params
{
};

// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedFloatParams
struct AReplicatedEmitter_OnRep_ReplicatedFloatParams_Params
{
};

// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedColorParams
struct AReplicatedEmitter_OnRep_ReplicatedColorParams_Params
{
};

// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_OwnerNoSeeEmitter
struct AReplicatedEmitter_OnRep_OwnerNoSeeEmitter_Params
{
};

// Function GbxGameSystemCore.RigidBodyComponent.SetKinematic
struct URigidBodyComponent_SetKinematic_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.SceneBodySwitchComponent.OnRep_ReplicatedState
struct USceneBodySwitchComponent_OnRep_ReplicatedState_Params
{
};

// Function GbxGameSystemCore.SceneBodySwitchComponent.HandleWwiseEventFinished
struct USceneBodySwitchComponent_HandleWwiseEventFinished_Params
{
	class UWwiseAudioComponent*                        WAC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.SceneBodySwitchComponent.HandleParticleSystemFinished
struct USceneBodySwitchComponent_HandleParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.SceneBodySwitchComponent.GetValidSwitchStateNames
struct USceneBodySwitchComponent_GetValidSwitchStateNames_Params
{
	TArray<struct FName>                               OutNames;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchStateNames
struct USceneBodySwitchFunctionLibrary_EnumerateValidSwitchStateNames_Params
{
	struct FName                                       SwitchName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Names;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchNames
struct USceneBodySwitchFunctionLibrary_EnumerateValidSwitchNames_Params
{
	TArray<struct FName>                               Names;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitchExternal
struct USceneBodySwitchFunctionLibrary_ChangeSwitchExternal_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitch
struct USceneBodySwitchFunctionLibrary_ChangeSwitch_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ShowScreenParticleForActor
struct UScreenParticleManagerComponent_ShowScreenParticleForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideWhenFinished;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ContentDims;                                              // (Parm, IsPlainOldData)
	float                                              ParticleDepth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EScreenParticleScalingMode                         ScalingMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyOwnerSee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysVisible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowMultipleInstances;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bServerAuthority;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTickEvenWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideDuringInGameMenu;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.OnScreenParticleFinished
struct UScreenParticleManagerComponent_OnScreenParticleFinished_Params
{
	class UParticleSystemComponent*                    Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.HideScreenParticleForActor
struct UScreenParticleManagerComponent_HideScreenParticleForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowParticleToFinish;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bServerAuthority;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientTrackParticleProperty
struct UScreenParticleManagerComponent_ClientTrackParticleProperty_Params
{
	class UParticlePropertyTrackingData*               TrackingData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PropertyValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          UsedMaterialProperty;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialPropertyName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticleEx
struct UScreenParticleManagerComponent_ClientShowScreenParticleEx_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InitFlags;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ContentDims;                                              // (Parm, IsPlainOldData)
	float                                              ParticleDepth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EScreenParticleScalingMode                         ScalingMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticle
struct UScreenParticleManagerComponent_ClientShowScreenParticle_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideWhenFinished;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ContentDims;                                              // (Parm, IsPlainOldData)
	float                                              ParticleDepth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EScreenParticleScalingMode                         ScalingMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyOwnerSee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysVisible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowMultipleInstances;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTickEvenWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideDuringInGameMenu;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDepthPriorityWorld;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleVectorParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleVectorParameter_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Param;                                                    // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleMaterialParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleMaterialParameter_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleFloatParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleFloatParameter_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleColorParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleColorParameter_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Param;                                                    // (Parm, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleActorParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleActorParameter_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientHideScreenParticle
struct UScreenParticleManagerComponent_ClientHideScreenParticle_Params
{
	class UParticleSystem*                             Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowParticleToFinish;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceBlueprintLibrary.TryGetStanceComponent
struct UStanceBlueprintLibrary_TryGetStanceComponent_Params
{
	class AAIController*                               AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceBlueprintLibrary.SetStance
struct UStanceBlueprintLibrary_SetStance_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceBlueprintLibrary.IsStanceComponentInStance
struct UStanceBlueprintLibrary_IsStanceComponentInStance_Params
{
	class UStanceComponent*                            StanceComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStanceDataProvider*                         Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceBlueprintLibrary.IsInStance
struct UStanceBlueprintLibrary_IsInStance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceTypeStanceType
struct UStanceBlueprintLibrary_EqualEqual_StanceTypeStanceType_Params
{
	class UStanceType*                                 A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceType*                                 B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceDataStanceData
struct UStanceBlueprintLibrary_EqualEqual_StanceDataStanceData_Params
{
	class UStanceData*                                 A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceData*                                 B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceBlueprintLibrary.ClearStance
struct UStanceBlueprintLibrary_ClearStance_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.StackStanceChangedCallback
struct UStanceComponent_StackStanceChangedCallback_Params
{
	EStanceStackLayer                                  PreviousLayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceData*                                 PreviousStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EStanceStackLayer                                  NextLayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceData*                                 NextStance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.SetStanceLayer
struct UStanceComponent_SetStanceLayer_Params
{
	EStanceStackLayer                                  Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         NewStance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.SetBlueprintStance
struct UStanceComponent_SetBlueprintStance_Params
{
	class UStanceDataProvider*                         NewStance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.OnRep_StanceState
struct UStanceComponent_OnRep_StanceState_Params
{
};

// Function GbxGameSystemCore.StanceComponent.IsInStanceType
struct UStanceComponent_IsInStanceType_Params
{
	class UStanceType*                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.IsInStanceLayer
struct UStanceComponent_IsInStanceLayer_Params
{
	EStanceStackLayer                                  Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.IsInStance
struct UStanceComponent_IsInStance_Params
{
	class UStanceDataProvider*                         Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.IsInAnimStance
struct UStanceComponent_IsInAnimStance_Params
{
	class UStanceDataProvider*                         Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.GetTimeSpentInCurrentStance
struct UStanceComponent_GetTimeSpentInCurrentStance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.GetStanceLayer
struct UStanceComponent_GetStanceLayer_Params
{
	EStanceStackLayer                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.GetStance
struct UStanceComponent_GetStance_Params
{
	class UStanceData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.FindTypeForStance
struct UStanceComponent_FindTypeForStance_Params
{
	class UStanceData*                                 Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.FindStanceForType
struct UStanceComponent_FindStanceForType_Params
{
	class UStanceType*                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.ClearStanceLayer
struct UStanceComponent_ClearStanceLayer_Params
{
	EStanceStackLayer                                  Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StanceComponent.ClearBlueprintStance
struct UStanceComponent_ClearBlueprintStance_Params
{
};

// Function GbxGameSystemCore.StatusEffect.OnEndEffect
struct UStatusEffect_OnEndEffect_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.StatusEffect.OnBeginEffect
struct UStatusEffect_OnBeginEffect_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.SetTargetUIName
struct UTargetableComponent_SetTargetUIName_Params
{
	class UGbxUIName*                                  NewTargetUIName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.SetTargetName
struct UTargetableComponent_SetTargetName_Params
{
	struct FText                                       NewTargetName;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByNonPlayers
struct UTargetableComponent_SetIsTargetableByNonPlayers_Params
{
	bool                                               IsTargetable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByHumanPlayers
struct UTargetableComponent_SetIsTargetableByHumanPlayers_Params
{
	bool                                               IsTargetable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByAIPlayers
struct UTargetableComponent_SetIsTargetableByAIPlayers_Params
{
	bool                                               IsTargetable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.SetIsTargetable
struct UTargetableComponent_SetIsTargetable_Params
{
	bool                                               IsTargetable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.OnRep_TargetUIName
struct UTargetableComponent_OnRep_TargetUIName_Params
{
};

// Function GbxGameSystemCore.TargetableComponent.IsTargetableByPawn
struct UTargetableComponent_IsTargetableByPawn_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.IsTargetableByNonPlayers
struct UTargetableComponent_IsTargetableByNonPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.IsTargetableByHumanPlayers
struct UTargetableComponent_IsTargetableByHumanPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.IsTargetableByController
struct UTargetableComponent_IsTargetableByController_Params
{
	class AController*                                 Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.IsTargetableByAIPlayers
struct UTargetableComponent_IsTargetableByAIPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.IsTargetableByActor
struct UTargetableComponent_IsTargetableByActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.IsTargetable
struct UTargetableComponent_IsTargetable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.GetTargetSocketName
struct UTargetableComponent_GetTargetSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.GetTargetProxyComponentNames
struct UTargetableComponent_GetTargetProxyComponentNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.TargetableComponent.GetTargetNameString
struct UTargetableComponent_GetTargetNameString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.TargetableComponent.GetTargetLocations
struct UTargetableComponent_GetTargetLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxGameSystemCore.TargetableComponent.GetTargetLocation
struct UTargetableComponent_GetTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.GetClosestTargetLocation
struct UTargetableComponent_GetClosestTargetLocation_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetableComponent.GetAvailableSocketNames
struct UTargetableComponent_GetAvailableSocketNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.IsSenseActive
struct UTargetActorInfoLibrary_IsSenseActive_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.IsExistingTarget
struct UTargetActorInfoLibrary_IsExistingTarget_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.IsDirectlySensed
struct UTargetActorInfoLibrary_IsDirectlySensed_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.HasStimulusForSense
struct UTargetActorInfoLibrary_HasStimulusForSense_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.HasAnyKnownStimuli
struct UTargetActorInfoLibrary_HasAnyKnownStimuli_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusLocation
struct UTargetActorInfoLibrary_GetStimulusLocation_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusForSense
struct UTargetActorInfoLibrary_GetStimulusForSense_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.GetReceiverLocation
struct UTargetActorInfoLibrary_GetReceiverLocation_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulusLocation
struct UTargetActorInfoLibrary_GetBestStimulusLocation_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Age;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulus
struct UTargetActorInfoLibrary_GetBestStimulus_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestAttackLocation
struct UTargetActorInfoLibrary_GetBestAttackLocation_Params
{
	struct FTargetActorInfo                            Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     OutTargetVelocity;                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetActorInfoLibrary.FindActorTargetingComponent
struct UTargetActorInfoLibrary_FindActorTargetingComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTargetingComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.ServerSetBestTarget
struct UTargetingComponent_ServerSetBestTarget_Params
{
	class AActor*                                      NewBestTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.IsBestTargetDirectlySensed
struct UTargetingComponent_IsBestTargetDirectlySensed_Params
{
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.HasTargets
struct UTargetingComponent_HasTargets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.HasTarget
struct UTargetingComponent_HasTarget_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetTargetLocationForActor
struct UTargetingComponent_GetTargetLocationForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoForActor
struct UTargetingComponent_GetTargetInfoForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTargetActorInfo                            TargetInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoCount
struct UTargetingComponent_GetTargetInfoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoAt
struct UTargetingComponent_GetTargetInfoAt_Params
{
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTargetActorInfo                            TargetInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetTargetActorAt
struct UTargetingComponent_GetTargetActorAt_Params
{
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetBestThreatActor
struct UTargetingComponent_GetBestThreatActor_Params
{
	bool                                               bRequireFirsthandKnowledge;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetBestTargetLocation
struct UTargetingComponent_GetBestTargetLocation_Params
{
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetBestTargetInfo
struct UTargetingComponent_GetBestTargetInfo_Params
{
	struct FTargetActorInfo                            TargetInfo;                                               // (Parm, OutParm)
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetBestTargetActor
struct UTargetingComponent_GetBestTargetActor_Params
{
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetBestTargetableComponent
struct UTargetingComponent_GetBestTargetableComponent_Params
{
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTargetableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.GetBestAttackTargetLocation
struct UTargetingComponent_GetBestAttackTargetLocation_Params
{
	struct FVector                                     OutTargetVelocity;                                        // (Parm, OutParm, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingComponent.DoesBestTargetHaveStimulusForSense
struct UTargetingComponent_DoesBestTargetHaveStimulusForSense_Params
{
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.TargetingDebugServerRpcComponent.SetInspectedActor
struct UTargetingDebugServerRpcComponent_SetInspectedActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.Team.GetAttitudeToward
struct UTeam_GetAttitudeToward_Params
{
	class UTeam*                                       Team;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UserStatesInterface.HasEnableConditionsSetForAnyUserState
struct UUserStatesInterface_HasEnableConditionsSetForAnyUserState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UserStatesInterface.BlueprintStateHandler
struct UUserStatesInterface_BlueprintStateHandler_Params
{
	bool                                               bFromLoad;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UserStatesFunctionLibrary.HasEnableConditionsSetForSpecificUserState
struct UUserStatesFunctionLibrary_HasEnableConditionsSetForSpecificUserState_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       UserStateProperty;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxGameSystemCore.UseSystemFunctionLibrary.SetIsUsable
struct UUseSystemFunctionLibrary_SetIsUsable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewIsUsable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxGameSystemCore.UseSystemFunctionLibrary.ResetUseCount
struct UUseSystemFunctionLibrary_ResetUseCount_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
