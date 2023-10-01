#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxAI.AIActionBase.StopBP
struct UAIActionBase_StopBP_Params
{
	class UAIActionBase*                               Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AIActionBase.CreateSubobjectNoName
struct UAIActionBase_CreateSubobjectNoName_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIAction.CreateSubAction
struct UAIAction_CreateSubAction_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIAction*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIAction_Composite.CreateChild
struct UAIAction_Composite_CreateChild_Params
{
	struct FName                                       ChildName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIAction_CompositeChild*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIAction_CompositeChild.CreateAction
struct UAIAction_CompositeChild_CreateAction_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIAction*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIAction_MoveSpline.SetupMoveSpline
struct UAIAction_MoveSpline_SetupMoveSpline_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TargetSpline;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReverse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIAction_MoveSpline.ChangeSplineOffset
struct UAIAction_MoveSpline_ChangeSplineOffset_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIAction_StateMachineChild.GetAvailableStates
struct UAIAction_StateMachineChild_GetAvailableStates_Params
{
	TArray<class UAIAction_StateMachineChild*>         Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxAI.AIActionBlueprint.ShouldSkipBlackboardProperty
struct UAIActionBlueprint_ShouldSkipBlackboardProperty_Params
{
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Object
struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Object_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_RunScriptedAIAction*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Controller
struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Controller_Params
{
	class AGbxAIController*                            Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_RunScriptedAIAction*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_AIActionComponent
struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_AIActionComponent_Params
{
	class UAIActionComponent*                          AIActionComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_RunScriptedAIAction*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Actor
struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Actor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_RunScriptedAIAction*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIActionComponent.ReplaceMainAIAction
struct UAIActionComponent_ReplaceMainAIAction_Params
{
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AIActionComponent.GetBlackboardData
struct UAIActionComponent_GetBlackboardData_Params
{
	class UBlackboardData*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIActionComponent.AbortScriptedAIAction
struct UAIActionComponent_AbortScriptedAIAction_Params
{
	bool                                               bStopImmediately;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AIAspect_ActorCollision.OnPawnHit
struct UAIAspect_ActorCollision_OnPawnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxAI.AIAspect_ActorCollision.GetOnCollisionOptions
struct UAIAspect_ActorCollision_GetOnCollisionOptions_Params
{
	TArray<struct FName>                               Options;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GbxAI.AIAspect_Condition.GetConditionDataDescription
struct UAIAspect_Condition_GetConditionDataDescription_Params
{
	struct FAIAspectSettings_ConditionData             ConditionData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_BlackboardKey.GetSettingsDescription
struct UAIAspect_BlackboardKey_GetSettingsDescription_Params
{
	struct FAIAspectSettings_BlackboardKey             BBKeySettings;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_Navigation.GetNavSettingsDescription
struct UAIAspect_Navigation_GetNavSettingsDescription_Params
{
	struct FAIAspectSettings_Navigation                NavSettings;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_EnvQuery.GetQuerySettingsDescription
struct UAIAspect_EnvQuery_GetQuerySettingsDescription_Params
{
	struct FAIAspectSettings_EnvQuery                  QuerySettings;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_Leap.GetQuerySettingsDescription
struct UAIAspect_Leap_GetQuerySettingsDescription_Params
{
	struct FAIAspectSettings_Leap                      LeapSettings;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_Loop.GetSettingsDescription
struct UAIAspect_Loop_GetSettingsDescription_Params
{
	struct FAIAspectSettings_Loop                      LoopSettings;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_Rotation.GetRotationSettingsDescription
struct UAIAspect_Rotation_GetRotationSettingsDescription_Params
{
	struct FAIAspectSettings_Rotation                  RotationSettings;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_Rotation.GetRotationChannelSettingsDescription
struct UAIAspect_Rotation_GetRotationChannelSettingsDescription_Params
{
	struct FAIAspectSettings_RotationChannel           RotationChannelSettings;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_Teleport.GetTeleportSettingsDescription
struct UAIAspect_Teleport_GetTeleportSettingsDescription_Params
{
	struct FAIAspectSettings_Teleport                  TeleportSettings;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AIAspect_Weapon.GetWeaponSettingsDescription
struct UAIAspect_Weapon_GetWeaponSettingsDescription_Params
{
	struct FAIAspectSettings_Weapon                    WeaponSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UProperty*                                   Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxAI.AICloakComponent.SetCloakData
struct UAICloakComponent_SetCloakData_Params
{
	class UAICloakData*                                NewCloakData;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AICloakComponent.OnRep_Cloaked
struct UAICloakComponent_OnRep_Cloaked_Params
{
};

// Function GbxAI.AICloakComponent.IsPlayingAction
struct UAICloakComponent_IsPlayingAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AICloakComponent.IsCloakStateForced
struct UAICloakComponent_IsCloakStateForced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AICloakComponent.IsCloaked
struct UAICloakComponent_IsCloaked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AICloakComponent.InterruptCloakAction
struct UAICloakComponent_InterruptCloakAction_Params
{
};

// Function GbxAI.AICloakComponent.GetCloakData
struct UAICloakComponent_GetCloakData_Params
{
	class UAICloakData*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AICloakComponent.ForceUncloak
struct UAICloakComponent_ForceUncloak_Params
{
	bool                                               bInCanPlayActions;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AICloakComponent.ForceCloak
struct UAICloakComponent_ForceCloak_Params
{
	bool                                               bInCanPlayActions;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AICloakComponent.ClearForcedState
struct UAICloakComponent_ClearForcedState_Params
{
};

// Function GbxAI.AICloakComponent.ClearCloakData
struct UAICloakComponent_ClearCloakData_Params
{
};

// Function GbxAI.AIGroupBlueprintLibrary.IsUsingAITicket
struct UAIGroupBlueprintLibrary_IsUsingAITicket_Params
{
	class AAIController*                               AIUser;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAITicketDataAsset*                          Ticket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterruptible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIGroupBlueprintLibrary.IsTicketValid
struct UAIGroupBlueprintLibrary_IsTicketValid_Params
{
	struct FAITicketHandle                             TicketHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIGroupBlueprintLibrary.ClearTicket
struct UAIGroupBlueprintLibrary_ClearTicket_Params
{
	struct FAITicketHandle                             TicketHandle;                                             // (Parm, OutParm, ReferenceParm)
	float                                              HoldDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AIGroupBlueprintLibrary.ClearAITicket
struct UAIGroupBlueprintLibrary_ClearAITicket_Params
{
	class AAIController*                               AIUser;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAITicketDataAsset*                          Ticket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HoldDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AIGroupBlueprintLibrary.CanUseAITicket
struct UAIGroupBlueprintLibrary_CanUseAITicket_Params
{
	class AAIController*                               AIUser;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAITicketDataAsset*                          Ticket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterruptible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIGroupBlueprintLibrary.AddAITicket
struct UAIGroupBlueprintLibrary_AddAITicket_Params
{
	struct FAITicketHandle                             OutTicketHandle;                                          // (Parm, OutParm)
	class AAIController*                               AIUser;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAITicketDataAsset*                          Ticket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPriority;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterruptible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIGroupState.OnThreatActorDied
struct UAIGroupState_OnThreatActorDied_Params
{
	class AActor*                                      DamageReceiver;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AINode.OnPawnDepartedNodeCB
struct AAINode_OnPawnDepartedNodeCB_Params
{
	class AActor*                                      NodeActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DepartedPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AINode.OnPawnArrivedNodeCB
struct AAINode_OnPawnArrivedNodeCB_Params
{
	class AActor*                                      NodeActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ArrivedPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AINodeBlueprintLibrary.FindNearestNode
struct UAINodeBlueprintLibrary_FindNearestNode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIncludeDisabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeBlueprintLibrary.FindAllNodes
struct UAINodeBlueprintLibrary_FindAllNodes_Params
{
	TArray<class AActor*>                              OutputNodes;                                              // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDisabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AINodeBlueprintLibrary.ChooseRandomNode
struct UAINodeBlueprintLibrary_ChooseRandomNode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDisabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.SelectNextNode
struct UAINodeComponent_SelectNextNode_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.HasLinkTo
struct UAINodeComponent_HasLinkTo_Params
{
	class AActor*                                      Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.HasLinkFrom
struct UAINodeComponent_HasLinkFrom_Params
{
	class AActor*                                      Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.HasArrived
struct UAINodeComponent_HasArrived_Params
{
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	float                                              Error;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.GetLinkedNodeNum
struct UAINodeComponent_GetLinkedNodeNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.GetLinkedNode
struct UAINodeComponent_GetLinkedNode_Params
{
	int                                                I;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.CreateLinkTo
struct UAINodeComponent_CreateLinkTo_Params
{
	class AActor*                                      Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AINodeComponent.BreakLinkTo
struct UAINodeComponent_BreakLinkTo_Params
{
	class AActor*                                      Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedByInfo
struct UAITargetingBlueprintLibrary_IsThreatenedByInfo_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTargetActorInfo                            TargetInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedBy
struct UAITargetingBlueprintLibrary_IsThreatenedBy_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.GetTargetSenseAge
struct UAITargetingBlueprintLibrary_GetTargetSenseAge_Params
{
	struct FTargetActorInfo                            TargetInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.GetNumTargetsInRange
struct UAITargetingBlueprintLibrary_GetNumTargetsInRange_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.GetBestKnownLocation
struct UAITargetingBlueprintLibrary_GetBestKnownLocation_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.CalcTargetGroupLocation
struct UAITargetingBlueprintLibrary_CalcTargetGroupLocation_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GroupDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.ApplyTargetScoringBoost
struct UAITargetingBlueprintLibrary_ApplyTargetScoringBoost_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoostName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EAITargetScoringBoost                              ScoringBoost;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AISetTargetInBlackboard
struct UAITargetingBlueprintLibrary_AISetTargetInBlackboard_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxBlackboardKeySelector                   Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AISetScriptedTarget
struct UAITargetingBlueprintLibrary_AISetScriptedTarget_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AISendCommunication
struct UAITargetingBlueprintLibrary_AISendCommunication_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AIProvokeSpecificSense
struct UAITargetingBlueprintLibrary_AIProvokeSpecificSense_Params
{
	class AActor*                                      AITarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SenseType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StimulusLocation;                                         // (Parm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AIProvoke
struct UAITargetingBlueprintLibrary_AIProvoke_Params
{
	class AActor*                                      AITarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AIPlayerProvoke
struct UAITargetingBlueprintLibrary_AIPlayerProvoke_Params
{
	class AActor*                                      AITarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AIGetScriptedTarget
struct UAITargetingBlueprintLibrary_AIGetScriptedTarget_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AITargetingBlueprintLibrary.AICanCommunicate
struct UAITargetingBlueprintLibrary_AICanCommunicate_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinSenseAgeDelta;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIUseComponent.StopUse
struct UAIUseComponent_StopUse_Params
{
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AIUseComponent.RequestUse
struct UAIUseComponent_RequestUse_Params
{
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionName;                                               // (Parm)
	bool                                               bAbortExisting;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUntilInterrupted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIUseComponent.OnUseCompleted
struct UAIUseComponent_OnUseCompleted_Params
{
	class UAITask*                                     Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ESmartObjectTaskResult                             Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.AIUseComponent.GetCurrentObject
struct UAIUseComponent_GetCurrentObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIUseSlotComponent.GetAvailableSocketNames
struct UAIUseSlotComponent_GetAvailableSocketNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxAI.AIWeaponUserComponent.WantsToFire
struct UAIWeaponUserComponent_WantsToFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.AIWeaponUserComponent.OnWeaponUsed
struct UAIWeaponUserComponent_OnWeaponUsed_Params
{
};

// Function GbxAI.Cover.SetEnabled
struct ACover_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.Cover.IsEnabled
struct ACover_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.CoverSlotComponent.SetEnabled
struct UCoverSlotComponent_SetEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.CoverSlotComponent.IsEnabled
struct UCoverSlotComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.CoverUserComponent.SetEnterTransitionTable
struct UCoverUserComponent_SetEnterTransitionTable_Params
{
	class UGbxCoverTransitionTable*                    NewTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.CoverUserComponent.OnRep_ClientData
struct UCoverUserComponent_OnRep_ClientData_Params
{
};

// Function GbxAI.CoverUserComponent.OnMovementModeChanged
struct UCoverUserComponent_OnMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.CoverUserComponent.GetStyle
struct UCoverUserComponent_GetStyle_Params
{
	class UCoverStyleData*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedAction.OnActorSpawned
struct UGameplayTask_ScriptedAction_OnActorSpawned_Params
{
	class ASpawner*                                    Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedCover.TaskScriptedCoverDelegate__DelegateSignature
struct UGameplayTask_ScriptedCover_TaskScriptedCoverDelegate__DelegateSignature_Params
{
};

// Function GbxAI.GameplayTask_ScriptedCover.EndScriptedCover
struct UGameplayTask_ScriptedCover_EndScriptedCover_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedCover.BeginScriptedCover
struct UGameplayTask_ScriptedCover_BeginScriptedCover_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ACover*                                      Cover;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedCover*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedFollow.TaskScriptedMoveDelegate__DelegateSignature
struct UGameplayTask_ScriptedFollow_TaskScriptedMoveDelegate__DelegateSignature_Params
{
};

// Function GbxAI.GameplayTask_ScriptedFollow.BeginScriptedFollow
struct UGameplayTask_ScriptedFollow_BeginScriptedFollow_Params
{
	class AActor*                                      Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToFollow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedFollow*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedLand.TaskScriptedLandDelegate__DelegateSignature
struct UGameplayTask_ScriptedLand_TaskScriptedLandDelegate__DelegateSignature_Params
{
};

// Function GbxAI.GameplayTask_ScriptedLand.BeginScriptedLand
struct UGameplayTask_ScriptedLand_BeginScriptedLand_Params
{
	class AActor*                                      Lander;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedLand*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedLead.TaskScriptedLeadDelegate__DelegateSignature
struct UGameplayTask_ScriptedLead_TaskScriptedLeadDelegate__DelegateSignature_Params
{
};

// Function GbxAI.GameplayTask_ScriptedLead.BeginScriptedLead
struct UGameplayTask_ScriptedLead_BeginScriptedLead_Params
{
	class AActor*                                      Leader;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DestAINode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToLead;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedLead*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedMove.TaskScriptedMoveDelegate__DelegateSignature
struct UGameplayTask_ScriptedMove_TaskScriptedMoveDelegate__DelegateSignature_Params
{
};

// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMoveActor
struct UGameplayTask_ScriptedMove_BeginScriptedMoveActor_Params
{
	class AAIController*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StartNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalLookAtActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedMove*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove2
struct UGameplayTask_ScriptedMove_BeginScriptedMove2_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StartAINode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalLookAtActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedMove*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove
struct UGameplayTask_ScriptedMove_BeginScriptedMove_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StartNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EScriptedActionRule                                SuccessRule;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EScriptedActionRule                                FailRule;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddSpawned;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalLookAtActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportOnFail;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedMove*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedMoveSpline.TaskScriptedMoveDelegate__DelegateSignature
struct UGameplayTask_ScriptedMoveSpline_TaskScriptedMoveDelegate__DelegateSignature_Params
{
	class AActor*                                      Targeted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedMoveSpline.BeginScriptedMoveOnSpline
struct UGameplayTask_ScriptedMoveSpline_BeginScriptedMoveOnSpline_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StartSpline;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EScriptedActionRule                                SuccessRule;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EScriptedActionRule                                FailRule;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReverse;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddSpawned;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalLookAtActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OptionalAIAction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedMoveSpline*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveDelegate__DelegateSignature
struct UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveDelegate__DelegateSignature_Params
{
};

// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorsDelegate__DelegateSignature
struct UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorsDelegate__DelegateSignature_Params
{
};

// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorDelegate__DelegateSignature
struct UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceStopped
struct UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceStopped_Params
{
};

// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceFinished
struct UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceFinished_Params
{
};

// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequenceMulti
struct UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequenceMulti_Params
{
	TArray<class AActor*>                              Targets;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AGbxLevelSequenceActor*                      LevelSequenceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStartSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedMoveToLevelSequence*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequence
struct UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequence_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGbxLevelSequenceActor*                      LevelSequenceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStartSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedMoveToLevelSequence*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxAI.GameplayTask_ScriptedRoute.TaskScriptedMoveDelegate__DelegateSignature
struct UGameplayTask_ScriptedRoute_TaskScriptedMoveDelegate__DelegateSignature_Params
{
};

// Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute2
struct UGameplayTask_ScriptedRoute_BeginScriptedRoute2_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FirstAINode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EScriptedActionRule                                SuccessRule;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EScriptedActionRule                                FailRule;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddSpawned;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedRoute*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute
struct UGameplayTask_ScriptedRoute_BeginScriptedRoute_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FirstAINode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ScriptedRoute*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_SmartAction.UnreserveCallback
struct UGameplayTask_SmartAction_UnreserveCallback_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // (Parm)
};

// Function GbxAI.GameplayTask_SmartAction.SuccessCallback
struct UGameplayTask_SmartAction_SuccessCallback_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // (Parm)
};

// Function GbxAI.GameplayTask_SmartAction.ReserveCallback
struct UGameplayTask_SmartAction_ReserveCallback_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // (Parm)
};

// Function GbxAI.GameplayTask_SmartAction.InterruptCallback
struct UGameplayTask_SmartAction_InterruptCallback_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // (Parm)
};

// Function GbxAI.GameplayTask_SmartAction.EndSmartAction
struct UGameplayTask_SmartAction_EndSmartAction_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GameplayTask_SmartAction.BeginSmartAction
struct UGameplayTask_SmartAction_BeginSmartAction_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // (Parm)
	class UGameplayTask_SmartAction*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GameplayTask_SmartAction.BeginCallback
struct UGameplayTask_SmartAction_BeginCallback_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // (Parm)
};

// DelegateFunction GbxAI.GameplayTask_SmartAction.AITaskEvent__DelegateSignature
struct UGameplayTask_SmartAction_AITaskEvent__DelegateSignature_Params
{
};

// Function GbxAI.GbxAction_Navigation.K2_GetExitLocation
struct UGbxAction_Navigation_K2_GetExitLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAction_Navigation.K2_GetEntryLocation
struct UGbxAction_Navigation_K2_GetEntryLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAction_NavJump.OnIdle
struct UGbxAction_NavJump_OnIdle_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAction_NavJump.OnExit
struct UGbxAction_NavJump_OnExit_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAction_NavLerp.OnAlmostDone
struct UGbxAction_NavLerp_OnAlmostDone_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.SetPerceivableToAllAI
struct UGbxAIBlueprintLibrary_SetPerceivableToAllAI_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPerceivable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.SetAIPathFindingData
struct UGbxAIBlueprintLibrary_SetAIPathFindingData_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UHavokPathFindingData*                       PathFindingData;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.SetAINavAreaData
struct UGbxAIBlueprintLibrary_SetAINavAreaData_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxNavAreaData*                             NavAreaData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.ResetTeamForAllAIChildren
struct UGbxAIBlueprintLibrary_ResetTeamForAllAIChildren_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.IsActorThreatened
struct UGbxAIBlueprintLibrary_IsActorThreatened_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.GetValueAsActorAndLocation
struct UGbxAIBlueprintLibrary_GetValueAsActorAndLocation_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBlackboardKeySelector                      Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.GetBlackboardValueAsActorAndLocation
struct UGbxAIBlueprintLibrary_GetBlackboardValueAsActorAndLocation_Params
{
	class UBTNode*                                     BTNode;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.AIScriptedUseWeapon
struct UGbxAIBlueprintLibrary_AIScriptedUseWeapon_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.AIScriptedAction
struct UGbxAIBlueprintLibrary_AIScriptedAction_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIBlueprintLibrary.AIIsWithinTerritory
struct UGbxAIBlueprintLibrary_AIIsWithinTerritory_Params
{
	class AActor*                                      AIActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ETerritoryType                                     Zone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.SetTerritory
struct AGbxAIController_SetTerritory_Params
{
	class UTerritoryComponent*                         Territory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.SetTeam
struct AGbxAIController_SetTeam_Params
{
	class UTeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIController.SetObstacleAvoidanceLock
struct AGbxAIController_SetObstacleAvoidanceLock_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.ResetTerritoryToDefault
struct AGbxAIController_ResetTerritoryToDefault_Params
{
};

// Function GbxAI.GbxAIController.OnMyWeaponHitSomething
struct AGbxAIController_OnMyWeaponHitSomething_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetWeaponUserComponent
struct AGbxAIController_GetWeaponUserComponent_Params
{
	class UAIWeaponUserComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetUseComponent
struct AGbxAIController_GetUseComponent_Params
{
	class UAIUseComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetTerritory
struct AGbxAIController_GetTerritory_Params
{
	class UTerritoryComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetTeamComponent
struct AGbxAIController_GetTeamComponent_Params
{
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetTeam
struct AGbxAIController_GetTeam_Params
{
	class UTeam*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetTargetingComponent
struct AGbxAIController_GetTargetingComponent_Params
{
	class UTargetingComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetTargetableComponent
struct AGbxAIController_GetTargetableComponent_Params
{
	class UTargetableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetSpawnerComponent
struct AGbxAIController_GetSpawnerComponent_Params
{
	class USpawnerComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetSpawner
struct AGbxAIController_GetSpawner_Params
{
	class ASpawner*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetPerceptionComponent
struct AGbxAIController_GetPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetNumChildActors
struct AGbxAIController_GetNumChildActors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetNavComponent
struct AGbxAIController_GetNavComponent_Params
{
	class UGbxNavComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetMovementComponent
struct AGbxAIController_GetMovementComponent_Params
{
	class UGbxCharacterMovementComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetGroupState
struct AGbxAIController_GetGroupState_Params
{
	class UAIGroupState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetGbxCharacter
struct AGbxAIController_GetGbxCharacter_Params
{
	class AGbxCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetGbxActionComponent
struct AGbxAIController_GetGbxActionComponent_Params
{
	class UGbxActionComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetChildActors
struct AGbxAIController_GetChildActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GbxAI.GbxAIController.GetBlackboardComponent
struct AGbxAIController_GetBlackboardComponent_Params
{
	class UBlackboardComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetBlackboardAsset
struct AGbxAIController_GetBlackboardAsset_Params
{
	class UBlackboardData*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetAIGroupSize
struct AGbxAIController_GetAIGroupSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetAIGroupList
struct AGbxAIController_GetAIGroupList_Params
{
	TArray<class AActor*>                              AIGroupList;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIController.GetAIActionComponent
struct AGbxAIController_GetAIActionComponent_Params
{
	class UAIActionComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxAIController.ChildDestroyed
struct AGbxAIController_ChildDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIController.CheckPauseWhileFalling
struct AGbxAIController_CheckPauseWhileFalling_Params
{
	class ACharacter*                                  TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAIController.AddChildActors
struct AGbxAIController_AddChildActors_Params
{
	TArray<class AActor*>                              NewChildren;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxAI.GbxAIController.AddChildActor
struct AGbxAIController_AddChildActor_Params
{
	class AActor*                                      NewChild;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.GbxAnimStateManager_Cover.Owner_PostBeginPlay
struct UGbxAnimStateManager_Cover_Owner_PostBeginPlay_Params
{
};

// Function GbxAI.SmartObject.GetSmartObjectComponent
struct ASmartObject_GetSmartObjectComponent_Params
{
	class USmartObjectComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.SmartObject.GetGbxActionComponent
struct ASmartObject_GetGbxActionComponent_Params
{
	class UGbxActionComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxSpawner.GetGameplayTasksComponent
struct AGbxSpawner_GetGameplayTasksComponent_Params
{
	class UGameplayTasksComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxSpawner.GetAINodeComponent
struct AGbxSpawner_GetAINodeComponent_Params
{
	class UAINodeComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxAI.GbxSpawner.GetAIGroupState
struct AGbxSpawner_GetAIGroupState_Params
{
	class UAIGroupState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxSpawner.DEPRECATED_IsThreatened
struct AGbxSpawner_DEPRECATED_IsThreatened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.GbxSpawnPoint.HasNavNearSpawnPointFor
struct AGbxSpawnPoint_HasNavNearSpawnPointFor_Params
{
	class USpawnPointComponent*                        SpawnPointComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnOptionData*                            SpawnOptions;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.ScriptedBehaviorTreeLibrary.PerformScriptedAbort
struct UScriptedBehaviorTreeLibrary_PerformScriptedAbort_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopImmediately;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedWait
struct UScriptedBehaviorTreeLibrary_BeginScriptedWait_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedLook
struct UScriptedBehaviorTreeLibrary_BeginScriptedLook_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAimAtActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireWeaponAtActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         OptionalStance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectBlueprintLibrary.UseSmartObject
struct USmartObjectBlueprintLibrary_UseSmartObject_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // (Parm)
	bool                                               bAbortExisting;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUntilInterrupted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.SmartObjectBlueprintLibrary.AbortSmartObjectUse
struct USmartObjectBlueprintLibrary_AbortSmartObjectUse_Params
{
	class AActor*                                      User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectComponent.UnreserveEventSignature
struct USmartObjectComponent_UnreserveEventSignature_Params
{
	class APawn*                                       User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectComponent.ToggleActionSet
struct USmartObjectComponent_ToggleActionSet_Params
{
	struct FSmartObjectActionSet                       ActionSet;                                                // (Parm)
};

// Function GbxAI.SmartObjectComponent.SuccessEventSignature
struct USmartObjectComponent_SuccessEventSignature_Params
{
	class APawn*                                       User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectComponent.ReserveEventSignature
struct USmartObjectComponent_ReserveEventSignature_Params
{
	class APawn*                                       User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectComponent.OnActionEnded
struct USmartObjectComponent_OnActionEnded_Params
{
	EGbxActionEndState                                 EndState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionName;                                               // (Parm)
	class AController*                                 User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectComponent.InterruptEventSignature
struct USmartObjectComponent_InterruptEventSignature_Params
{
	class APawn*                                       User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectComponent.GetAvailableSocketNames
struct USmartObjectComponent_GetAvailableSocketNames_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function GbxAI.SmartObjectComponent.GetActionUsers
struct USmartObjectComponent_GetActionUsers_Params
{
	struct FGameplayTag                                ActionTag;                                                // (Parm)
	TArray<class APawn*>                               OutUsers;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GbxAI.SmartObjectComponent.EnableAllActions
struct USmartObjectComponent_EnableAllActions_Params
{
};

// Function GbxAI.SmartObjectComponent.EnableAction
struct USmartObjectComponent_EnableAction_Params
{
	struct FGameplayTag                                ActionTag;                                                // (Parm)
};

// Function GbxAI.SmartObjectComponent.DisableAllActions
struct USmartObjectComponent_DisableAllActions_Params
{
};

// Function GbxAI.SmartObjectComponent.DisableAction
struct USmartObjectComponent_DisableAction_Params
{
	struct FGameplayTag                                ActionTag;                                                // (Parm)
};

// Function GbxAI.SmartObjectComponent.BeginEventSignature
struct USmartObjectComponent_BeginEventSignature_Params
{
	class APawn*                                       User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SmartObjectPreviewComponent.OnReplayAction
struct USmartObjectPreviewComponent_OnReplayAction_Params
{
};

// Function GbxAI.SmartObjectPreviewComponent.OnCycleActor
struct USmartObjectPreviewComponent_OnCycleActor_Params
{
	ECycleDirection                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SpawnBlueprintLibrary.SetSpawnOptions
struct USpawnBlueprintLibrary_SetSpawnOptions_Params
{
	class AActor*                                      SpawnerActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USpawnOptionData*                            SpawnOptions;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByRadius
struct USpawnBlueprintLibrary_GenerateSpawnerByRadius_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USpawnerStyle*                               Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         MinRequiredAttitude;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ASpawner*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner
struct USpawnBlueprintLibrary_GenerateSpawnerByOwningSpawner_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USpawnerStyle*                               Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ASpawner*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAI.Territory.GetTerritoryComponent
struct ATerritory_GetTerritoryComponent_Params
{
	class UTerritoryComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
