#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxMission_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxMission.Mission.UpdateObjective
struct UMission_UpdateObjective_Params
{
	class UMissionObjective*                           Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.Mission.UnpauseObjectiveChain
struct UMission_UnpauseObjectiveChain_Params
{
	class UMissionObjective*                           Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet
struct UMission_ThwartObjectiveAndAdvanceObjectiveSet_Params
{
	class UMissionObjective*                           ObjectiveToThwart;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjectiveSet*                        ObjectiveSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJumpToSet;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.Mission.StopMissionTimer
struct UMission_StopMissionTimer_Params
{
};

// Function GbxMission.Mission.StartMissionTimer
struct UMission_StartMissionTimer_Params
{
};

// Function GbxMission.Mission.MissionTimerExpired
struct UMission_MissionTimerExpired_Params
{
};

// Function GbxMission.Mission.MissionRemoteEvent
struct UMission_MissionRemoteEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.Mission.MissionNotStarted
struct UMission_MissionNotStarted_Params
{
};

// Function GbxMission.Mission.MissionKickoff
struct UMission_MissionKickoff_Params
{
};

// Function GbxMission.Mission.MissionGameModeEvent
struct UMission_MissionGameModeEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.Mission.MissionFailed
struct UMission_MissionFailed_Params
{
};

// Function GbxMission.Mission.MissionCompleteLoad
struct UMission_MissionCompleteLoad_Params
{
};

// Function GbxMission.Mission.MissionComplete
struct UMission_MissionComplete_Params
{
};

// Function GbxMission.Mission.MissionActiveLoad
struct UMission_MissionActiveLoad_Params
{
};

// Function GbxMission.Mission.MissionActive
struct UMission_MissionActive_Params
{
};

// Function GbxMission.Mission.JumpToObjectiveSet
struct UMission_JumpToObjectiveSet_Params
{
	class UMissionObjectiveSet*                        ObjectiveSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBranchingMission;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.Mission.GetPausableChainedObjectivesList
struct UMission_GetPausableChainedObjectivesList_Params
{
	TArray<class UMissionObjective*>                   ObjectivesList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.Mission.GetObjectivesList
struct UMission_GetObjectivesList_Params
{
	TArray<class UMissionObjective*>                   ObjectivesList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.Mission.GetObjectiveSetsList
struct UMission_GetObjectiveSetsList_Params
{
	TArray<class UMissionObjectiveSet*>                ObjectiveSetsList;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.Mission.GetMissionRemainingSeconds
struct UMission_GetMissionRemainingSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.Mission.FailMission
struct UMission_FailMission_Params
{
};

// Function GbxMission.Mission.EndKickoff
struct UMission_EndKickoff_Params
{
};

// Function GbxMission.Mission.CompleteMission
struct UMission_CompleteMission_Params
{
};

// Function GbxMission.Mission.ClearObjective
struct UMission_ClearObjective_Params
{
	class UMissionObjective*                           Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.Mission.AdvanceObjectiveSet
struct UMission_AdvanceObjectiveSet_Params
{
	class UMissionObjectiveSet*                        ObjectiveSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.Mission.AddTimeToMission
struct UMission_AddTimeToMission_Params
{
	int                                                SecondsToAdd;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.Mission.ActivateMission
struct UMission_ActivateMission_Params
{
	class UMissionObjectiveSet*                        InitialObjectiveSet;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetAsTrackedMission;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable
struct UMissionDirectorComponent_IsAnyMissionAvailable_Params
{
	TEnumAsByte<EMissionAvailableResult>               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionDirectorComponent.IsAnyMissionActive
struct UMissionDirectorComponent_IsAnyMissionActive_Params
{
	TEnumAsByte<EMissionActiveResult>                  OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionDirectorComponent.GetAllMissions
struct UMissionDirectorComponent_GetAllMissions_Params
{
	TArray<class UClass*>                              AllMissions;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionDirectorComponent.ClearMissions
struct UMissionDirectorComponent_ClearMissions_Params
{
};

// Function GbxMission.MissionDirectorComponent.AddMission
struct UMissionDirectorComponent_AddMission_Params
{
	class UClass*                                      InMission;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionDirectorComponent.ActivateAvailableMission
struct UMissionDirectorComponent_ActivateAvailableMission_Params
{
};

// Function GbxMission.MissionIconComponent.SetIconState
struct UMissionIconComponent_SetIconState_Params
{
	TEnumAsByte<EMissionIconState>                     InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionIconComponent.SetIconEnabledCondition
struct UMissionIconComponent_SetIconEnabledCondition_Params
{
	class UGbxCondition*                               EnabledCondition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionIconComponent.SetDisabledState
struct UMissionIconComponent_SetDisabledState_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionIconComponent.OnRep_Enabled
struct UMissionIconComponent_OnRep_Enabled_Params
{
	bool                                               bPreviouslyEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionIconComponent.IsIconEnabled
struct UMissionIconComponent_IsIconEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionIconComponent.GetRequiredInterface
struct UMissionIconComponent_GetRequiredInterface_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass
struct UMissionIconComponent_EnabledConditionRequiresNativeClass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionTracker.OnStatIncrement
struct AMissionTracker_OnStatIncrement_Params
{
	class AActor*                                      StatContext;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameStatData*                               StatId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionTracker.OnRep_LevelLoadEventsIssued
struct AMissionTracker_OnRep_LevelLoadEventsIssued_Params
{
};

// Function GbxMission.MissionTracker.OnRep_ActiveIcons
struct AMissionTracker_OnRep_ActiveIcons_Params
{
};

// Function GbxMission.PlayerMissionComponent.ServerTrackPreviousActiveMissionInList
struct UPlayerMissionComponent_ServerTrackPreviousActiveMissionInList_Params
{
};

// Function GbxMission.PlayerMissionComponent.ServerTrackNextActiveMissionInList
struct UPlayerMissionComponent_ServerTrackNextActiveMissionInList_Params
{
};

// Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission
struct UPlayerMissionComponent_ServerSetTrackedMission_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus
struct UPlayerMissionComponent_ClientUpdateMissionStatus_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionStatus>                        Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet
struct UPlayerMissionComponent_ClientUpdateActiveObjectiveSet_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjectiveSet*                        ActiveObjectiveSet;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMissionObjective*>                   DormantObjectives;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged
struct UPlayerMissionComponent_ClientTrackedMissionChanged_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated
struct UPlayerMissionComponent_ClientObjectiveUpdated_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjective*                           UpdatedObjective;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ObjectiveBit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted
struct UPlayerMissionComponent_ClientObjectiveSetCompleted_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjectiveSet*                        CompletedObjectiveSet;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared
struct UPlayerMissionComponent_ClientObjectiveCleared_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjective*                           ClearedObjective;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused
struct UPlayerMissionComponent_ClientObjectiveChainUnpaused_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjective*                           Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped
struct UPlayerMissionComponent_ClientMissionTimerStopped_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted
struct UPlayerMissionComponent_ClientMissionTimerStarted_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged
struct UPlayerMissionComponent_ClientMissionTimerChanged_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SecondsToAdd;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientMissionRegistered
struct UPlayerMissionComponent_ClientMissionRegistered_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved
struct UPlayerMissionComponent_ClientDormantObjectiveRemoved_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjective*                           Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIssueActiveEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded
struct UPlayerMissionComponent_ClientDormantObjectiveAdded_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMissionObjective*                           Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionDebugMenu.SelectMissionGraph
struct UMissionDebugMenu_SelectMissionGraph_Params
{
	struct FName                                       MissionGraphId;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxMission.MissionDebugMenu.NotifyMissionActivationCheatStart
struct UMissionDebugMenu_NotifyMissionActivationCheatStart_Params
{
};

// Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission
struct UMissionDebugMenu_GetObjectiveSetItemsForMission_Params
{
	struct FName                                       MissionId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FGbxCascadingListItemData>           OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionDebugMenu.GetMissionWithId
struct UMissionDebugMenu_GetMissionWithId_Params
{
	struct FName                                       MissionId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMission*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionDebugMenu.GetMissionStatus
struct UMissionDebugMenu_GetMissionStatus_Params
{
	struct FName                                       MissionId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EMissionStatus>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus
struct UMissionDebugMenu_GetItemsForMissionStatus_Params
{
	TEnumAsByte<EMissionDebugStatus>                   Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxCascadingListItemData>           OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph
struct UMissionDebugMenu_GetItemsForMissionGraph_Params
{
	TArray<struct FGbxCascadingListItemData>           OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionDebugMenu.CompleteMission
struct UMissionDebugMenu_CompleteMission_Params
{
	struct FName                                       MissionId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet
struct UMissionDebugMenu_AdvanceToObjectiveSet_Params
{
	struct FName                                       MissionId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ObjectiveSetId;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxMission.MissionDebugMenu.AdvanceMission
struct UMissionDebugMenu_AdvanceMission_Params
{
	struct FName                                       MissionId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef
struct UMissionFunctionLibrary_UpdateMissionObjectiveRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveReference                  ObjectiveRef;                                             // (Parm)
};

// Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList
struct UMissionFunctionLibrary_TrackPreviousActiveMissionInList_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList
struct UMissionFunctionLibrary_TrackNextActiveMissionInList_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.TrackActiveMission
struct UMissionFunctionLibrary_TrackActiveMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext
struct UMissionFunctionLibrary_SendMissionEventWithContext_Params
{
	struct FMissionEventReference                      EventRef;                                                 // (Parm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.SendMissionEvent
struct UMissionFunctionLibrary_SendMissionEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionEventReference                      EventRef;                                                 // (Parm)
	class UObject*                                     OptionalContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference
struct UMissionFunctionLibrary_ResolveMissionSoftClassReference_Params
{
	TSoftObjectPtr<class UClass>                       Mission;                                                  // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef
struct UMissionFunctionLibrary_JumpToMissionObjectiveSetRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveSetReference               ObjectiveSetRef;                                          // (Parm)
	bool                                               bIsBranchingMission;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission
struct UMissionFunctionLibrary_GetSoftObjectiveSetListForMission_Params
{
	TSoftObjectPtr<class UClass>                       MissionClass;                                             // (Parm)
	TArray<TSoftObjectPtr<class UMissionObjectiveSet>> SoftObjectiveSetList;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex
struct UMissionFunctionLibrary_GetPlotMissionIndex_Params
{
	class UMission*                                    MissionObj;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass
struct UMissionFunctionLibrary_GetObjectiveSetNameListForMissionFromAssetSubclass_Params
{
	TSoftObjectPtr<class UClass>                       MissionClass;                                             // (Parm)
	TArray<struct FName>                               NamesList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission
struct UMissionFunctionLibrary_GetObjectiveSetNameListForMission_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               NamesList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission
struct UMissionFunctionLibrary_GetObjectiveSetListForMission_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMissionObjectiveSet*>                ObjectiveSetList;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass
struct UMissionFunctionLibrary_GetObjectiveNameListForMissionFromAssetSubclass_Params
{
	TSoftObjectPtr<class UClass>                       Mission;                                                  // (Parm)
	TArray<struct FName>                               NamesList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission
struct UMissionFunctionLibrary_GetObjectiveNameListForMission_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               NamesList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionFunctionLibrary.GetMissionStatus
struct UMissionFunctionLibrary_GetMissionStatus_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionStatus>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef
struct UMissionFunctionLibrary_GetMissionObjectiveStatusRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveReference                  ObjectiveRef;                                             // (Parm)
	class UObject*                                     OptionalContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionObjectiveStatus>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef
struct UMissionFunctionLibrary_GetMissionObjectiveSetStatusRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveSetReference               ObjectiveSetRef;                                          // (Parm)
	TEnumAsByte<EMissionObjectiveSetStatus>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount
struct UMissionFunctionLibrary_GetMissionObjectiveCount_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveReference                  ObjectiveRef;                                             // (Parm)
	int                                                CurrentObjectiveCount;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalObjectiveCount;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetMissionLevel
struct UMissionFunctionLibrary_GetMissionLevel_Params
{
	class UMission*                                    MissionObj;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak
struct UMissionFunctionLibrary_GetMissionClassFromObjectiveReferenceWeak_Params
{
	struct FMissionObjectiveReferenceWeak              ObjectiveReference;                                       // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference
struct UMissionFunctionLibrary_GetMissionClassFromObjectiveReference_Params
{
	struct FMissionObjectiveReference                  ObjectiveReference;                                       // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetMission
struct UMissionFunctionLibrary_GetMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMission*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission
struct UMissionFunctionLibrary_GetEventNameListForMission_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               NamesList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission
struct UMissionFunctionLibrary_GetCurrentlyTrackedMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetActivePlotMission
struct UMissionFunctionLibrary_GetActivePlotMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.GetActiveMissions
struct UMissionFunctionLibrary_GetActiveMissions_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMission*>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef
struct UMissionFunctionLibrary_FillMissionObjectiveSetRef_Params
{
	struct FMissionObjectiveSetReference               MissionObjectiveSetRef;                                   // (Parm, OutParm, ReferenceParm)
	class UClass*                                      MissionClass;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ObjectiveSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak
struct UMissionFunctionLibrary_FillMissionObjectiveRefWeak_Params
{
	struct FMissionObjectiveReferenceWeak              MissionObjectiveRef;                                      // (Parm, OutParm, ReferenceParm)
	class UClass*                                      MissionClass;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef
struct UMissionFunctionLibrary_FillMissionObjectiveRef_Params
{
	struct FMissionObjectiveReference                  MissionObjectiveRef;                                      // (Parm, OutParm, ReferenceParm)
	class UClass*                                      MissionClass;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.FillMissionEventRef
struct UMissionFunctionLibrary_FillMissionEventRef_Params
{
	struct FMissionEventReference                      MissionEventRef;                                          // (Parm, OutParm, ReferenceParm)
	class UClass*                                      MissionClass;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference
struct UMissionFunctionLibrary_EqualEqual_MissionObjectiveSetReference_Params
{
	struct FMissionObjectiveSetReference               A;                                                        // (Parm)
	struct FMissionObjectiveSetReference               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference
struct UMissionFunctionLibrary_EqualEqual_MissionObjectiveReference_Params
{
	struct FMissionObjectiveReference                  A;                                                        // (Parm)
	struct FMissionObjectiveReference                  B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef
struct UMissionFunctionLibrary_DebugJumpToMissionObjectiveSetRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveSetReference               ObjectiveSetRef;                                          // (Parm)
	bool                                               bIsBranchingMission;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.CreateMission
struct UMissionFunctionLibrary_CreateMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMission*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.CompleteMission
struct UMissionFunctionLibrary_CompleteMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective
struct UMissionFunctionLibrary_AdvanceToBreadcrumbObjective_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveReference                  BreadcrumbObjectiveRef;                                   // (Parm)
};

// Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef
struct UMissionFunctionLibrary_AdvanceMissionObjectiveSetRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveSetReference               ObjectiveSetRef;                                          // (Parm)
};

// Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet
struct UMissionFunctionLibrary_ActivateMissionAtObjectiveSet_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveSetReference               ObjectiveSetRef;                                          // (Parm)
};

// Function GbxMission.MissionFunctionLibrary.ActivateMission
struct UMissionFunctionLibrary_ActivateMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionLocationData.GetRequiredInterface
struct UMissionLocationData_GetRequiredInterface_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass
struct UMissionLocationData_EnabledConditionRequiresNativeClass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences
struct UMissionObjectiveReferenceInterface_GetMissionObjectiveReferences_Params
{
	TArray<struct FMissionObjectiveReference>          OutMissionObjectives;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences
struct UMissionObjectiveSetReferenceInterface_GetMissionObjectiveSetReferences_Params
{
	TArray<struct FMissionObjectiveSetReference>       OutMissionObjectiveSets;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionObserverComponent.ObserverMission
struct UMissionObserverComponent_ObserverMission_Params
{
	class UClass*                                      MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxMission.MissionObserverComponent.GetUpdateEventObject
struct UMissionObserverComponent_GetUpdateEventObject_Params
{
	TArray<class UObject*>                             OutMissionInitialized;                                    // (Parm, OutParm, ZeroConstructor)
	TArray<class UObject*>                             OutMissionUpdate;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<class UObject*>                             OutMissionObjectiveUpdate;                                // (Parm, OutParm, ZeroConstructor)
	TArray<class UObject*>                             OutMissionObjectiveSetUpdate;                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData
struct UMissionObserverPlayerInterface_ClientReceiveMissionData_Params
{
	struct FReplicatedMissionData                      MissionData;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function GbxMission.MissionReferenceInterface.GetMissionClassReferences
struct UMissionReferenceInterface_GetMissionClassReferences_Params
{
	TArray<class UClass*>                              OutMissions;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors
struct UMissionReferenceInterface_CheckForMissionReferenceErrors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
