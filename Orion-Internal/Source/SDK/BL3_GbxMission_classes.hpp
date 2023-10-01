#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxMission_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxMission.MissionRewardData
// 0x0000 (0x0030 - 0x0030)
class UMissionRewardData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionRewardData");
		return ptr;
	}

};


// Class GbxMission.MissionGraph
// 0x0040 (0x0068 - 0x0028)
class UMissionGraph : public UObject
{
public:
	int                                                GraphPriorityID;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       GraphDisplayName;                                         // 0x0030(0x0028) (Edit)
	bool                                               bShowReferencedMissionDummy;                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ReferencedMissions;                                       // 0x0050(0x0010) (Edit, ZeroConstructor)
	class UDownloadableContentData*                    DLCExpansionData;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionGraph");
		return ptr;
	}

};


// Class GbxMission.GlobalMissionGraph
// 0x0010 (0x0078 - 0x0068)
class UGlobalMissionGraph : public UMissionGraph
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.GlobalMissionGraph");
		return ptr;
	}

};


// Class GbxMission.Mission
// 0x03E0 (0x0408 - 0x0028)
class UMission : public UObject
{
public:
	class AMissionTrackerBase*                         MissionTrackerBase;                                       // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowAutomaticDebugActivation;                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGbxUIFormattedText                         FormattedMissionName;                                     // 0x0038(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGbxUIFormattedText                         PreAcceptanceSummary;                                     // 0x00A0(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGbxUIFormattedText                         PostAcceptanceSummary;                                    // 0x0108(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0170(0x0002) MISSED OFFSET
	bool                                               bImmediatelyAdvanceToFirstSet;                            // 0x0172(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseImmediatelyAdvanceToFirstSet;                         // 0x0173(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediatelyAdvanceToFirstSetIfNotInMissionLevel;         // 0x0174(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlayKickoff;                                         // 0x0175(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutoPlayKickoff;                                      // 0x0176(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlotCritical;                                            // 0x0177(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatable;                                              // 0x0178(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	int                                                SecondsToComplete;                                        // 0x017C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFailOnTimerExpiration;                                   // 0x0180(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyDisplayTimer;                                        // 0x0181(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
	class UMissionRewardData*                          RewardData;                                               // 0x0188(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDependencyViewDummy;                                     // 0x0190(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFirstPlotMission;                                      // 0x0191(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0192(0x0006) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               MissionDependencies;                                      // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FMissionObjectiveDependency                 ObjectiveDependency;                                      // 0x01A8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UMissionObjectiveSet*>                ObjectiveSets;                                            // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient)
	TArray<class UMissionObjective*>                   Objectives;                                               // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient)
	TArray<struct FMissionObjectiveChain>              ObjectiveChains;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient)
	TArray<class UMissionPhase*>                       MissionPhases;                                            // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient)
	class UClass*                                      MissionChallenge;                                         // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFailOnTravel;                                            // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UMissionObjectiveSet*                        StartCriticalSectionSet;                                  // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionObjectiveSet*                        StopCriticalSectionSet;                                   // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGlobalMissionBlocker;                                    // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               BlockedMissions;                                          // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMissionObjectiveSet*                        StartBlockingSet;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionObjectiveSet*                        StopBlockingSet;                                          // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDialogConversation                         KickoffConversation;                                      // 0x0288(0x000C) (BlueprintVisible, Transient)
	int                                                ActivityPriority;                                         // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHidden;                                                // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FGbxUIFormattedText                         Description;                                              // 0x02A0(0x0068) (Edit)
	TSoftObjectPtr<class UTravelLocationData>          TravelStation;                                            // 0x0308(0x0028) (Edit)
	bool                                               bActivateMissionDialogScriptInAnyMap;                     // 0x0330(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UDialogScriptData>            MissionActivationDialogScript;                            // 0x0338(0x0028) (Edit)
	struct FDialogTimeSlotReference                    KickoffDialog;                                            // 0x0360(0x0040) (Edit)
	TSoftObjectPtr<class UClass>                       NextMissionInChain;                                       // 0x03A0(0x0028) (Edit)
	TSoftObjectPtr<class UClass>                       AssociatedMissionGraph;                                   // 0x03C8(0x0028) (Edit, EditConst)
	class FString                                      CookedActivityObjectId;                                   // 0x03F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.Mission");
		return ptr;
	}


	void UpdateObjective(class UMissionObjective* Objective, class UObject* Context, unsigned char Amount);
	void UnpauseObjectiveChain(class UMissionObjective* Objective);
	void ThwartObjectiveAndAdvanceObjectiveSet(class UMissionObjective* ObjectiveToThwart, class UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet);
	void StopMissionTimer();
	void StartMissionTimer();
	void MissionTimerExpired();
	bool MissionRemoteEvent(const struct FName& EventName);
	void MissionNotStarted();
	void MissionKickoff();
	bool MissionGameModeEvent(const struct FName& EventName);
	void MissionFailed();
	void MissionCompleteLoad();
	void MissionComplete();
	void MissionActiveLoad();
	void MissionActive();
	void JumpToObjectiveSet(class UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission);
	void GetPausableChainedObjectivesList(TArray<class UMissionObjective*>* ObjectivesList);
	void GetObjectivesList(TArray<class UMissionObjective*>* ObjectivesList);
	void GetObjectiveSetsList(TArray<class UMissionObjectiveSet*>* ObjectiveSetsList);
	int GetMissionRemainingSeconds();
	void FailMission();
	void EndKickoff();
	void CompleteMission();
	void ClearObjective(class UMissionObjective* Objective);
	void AdvanceObjectiveSet(class UMissionObjectiveSet* ObjectiveSet);
	void AddTimeToMission(int SecondsToAdd);
	void ActivateMission(class UMissionObjectiveSet* InitialObjectiveSet, bool bSetAsTrackedMission);
};


// Class GbxMission.MissionDirectorComponent
// 0x00E0 (0x03B0 - 0x02D0)
class UMissionDirectorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02D0(0x0018) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               Missions;                                                 // 0x02E8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	TArray<struct FMissionObjectiveSetReference>       MissionEntryPoints;                                       // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UGbxCondition*                               MissionDirectorEnableCondition;                           // 0x0310(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGbxUIFormattedText                         MissionDirectorName;                                      // 0x0318(0x0068) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnMissionDirectorEnabled;                                 // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionDirectorDisabled;                                // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionsInitialized;                                    // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionDirectorComponent");
		return ptr;
	}


	void IsAnyMissionAvailable(TEnumAsByte<EMissionAvailableResult>* OutResult);
	void IsAnyMissionActive(TEnumAsByte<EMissionActiveResult>* OutResult);
	void GetAllMissions(TArray<class UClass*>* AllMissions);
	void ClearMissions();
	void AddMission(class UClass* InMission);
	void ActivateAvailableMission();
};


// Class GbxMission.MissionIconComponent
// 0x00C0 (0x07B0 - 0x06F0)
class UMissionIconComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x06F0(0x0020) MISSED OFFSET
	class UGbxCondition*                               IconEnabledCondition;                                     // 0x0710(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           WaypointRadius;                                           // 0x0718(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideAreaWaypoint;                                        // 0x071C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	class UClass*                                      AreaComponentClassOverride;                               // 0x0720(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EIconRadiusDrawStyle                               DrawStyle;                                                // 0x0728(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0729(0x000F) MISSED OFFSET
	class UParticleSystem*                             AttractParticleTemplate;                                  // 0x0738(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  AttractParticleTransform;                                 // 0x0740(0x0030) (Edit, IsPlainOldData)
	bool                                               bSyncAttachedParticles;                                   // 0x0770(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToWaypointSocket;                                  // 0x0771(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0772(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnIconEnabled;                                            // 0x0778(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconDisabled;                                           // 0x0788(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnabled;                                                 // 0x0798(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x0799(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionIconComponent");
		return ptr;
	}


	void SetIconState(TEnumAsByte<EMissionIconState> InState);
	bool SetIconEnabledCondition(class UGbxCondition* EnabledCondition);
	void SetDisabledState(bool bDisabled);
	void OnRep_Enabled(bool bPreviouslyEnabled);
	bool IsIconEnabled();
	class UClass* GetRequiredInterface();
	bool EnabledConditionRequiresNativeClass();
};


// Class GbxMission.MissionTrackerBase
// 0x0048 (0x04A0 - 0x0458)
class AMissionTrackerBase : public AActor
{
public:
	TArray<struct FMissionProgress>                    MissionList;                                              // 0x0458(0x0010) (ZeroConstructor)
	class UClass*                                      TrackedMission;                                           // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET
	bool                                               bDataValidated;                                           // 0x0490(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UGlobalMissionGraph*                         GlobalMissionGraph;                                       // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionTrackerBase");
		return ptr;
	}

};


// Class GbxMission.MissionTracker
// 0x0208 (0x06A8 - 0x04A0)
class AMissionTracker : public AMissionTrackerBase
{
public:
	class UMission*                                    DebugActivatedMission;                                    // 0x04A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionObjectiveSet*                        JumpedTooObjectiveSet;                                    // 0x04A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x04B0(0x00B8) MISSED OFFSET
	struct FDefendMissionTargetData                    DefendTarget;                                             // 0x0568(0x0010) (Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0578(0x0001) MISSED OFFSET
	bool                                               bLevelLoadEventsIssued;                                   // 0x0579(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6E];                                      // 0x057A(0x006E) MISSED OFFSET
	TArray<TScriptInterface<class UMissionObserverInterface>> AllMissionsObservers;                                     // 0x05E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	TArray<TScriptInterface<class UMissionIconObserverInterface>> MissionIconObservers;                                     // 0x0600(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0610(0x0050) MISSED OFFSET
	TArray<struct FActiveMissionIconData>              ActiveIcons;                                              // 0x0660(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x38];                                      // 0x0670(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionTracker");
		return ptr;
	}


	void OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int Amount);
	void OnRep_LevelLoadEventsIssued();
	void OnRep_ActiveIcons();
};


// Class GbxMission.PlayerMissionComponent
// 0x0028 (0x01A0 - 0x0178)
class UPlayerMissionComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMissionDataChanged;                                     // 0x0178(0x0010) (ZeroConstructor, Transient, InstancedReference)
	TArray<struct FMissionPlaythroughData>             MissionPlaythroughs;                                      // 0x0188(0x0010) (ZeroConstructor)
	class AMissionTracker*                             CachedMissionTracker;                                     // 0x0198(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.PlayerMissionComponent");
		return ptr;
	}


	void ServerTrackPreviousActiveMissionInList();
	void ServerTrackNextActiveMissionInList();
	void ServerSetTrackedMission(class UClass* MissionClass);
	void ClientUpdateMissionStatus(class UClass* MissionClass, TEnumAsByte<EMissionStatus> Status);
	void ClientUpdateActiveObjectiveSet(class UClass* MissionClass, class UMissionObjectiveSet* ActiveObjectiveSet, TArray<class UMissionObjective*> DormantObjectives);
	void ClientTrackedMissionChanged(class UClass* MissionClass);
	void ClientObjectiveUpdated(class UClass* MissionClass, class UMissionObjective* UpdatedObjective, uint32_t ObjectiveBit, unsigned char Amount);
	void ClientObjectiveSetCompleted(class UClass* MissionClass, class UMissionObjectiveSet* CompletedObjectiveSet);
	void ClientObjectiveCleared(class UClass* MissionClass, class UMissionObjective* ClearedObjective);
	void ClientObjectiveChainUnpaused(class UClass* MissionClass, class UMissionObjective* Objective);
	void ClientMissionTimerStopped(class UClass* MissionClass);
	void ClientMissionTimerStarted(class UClass* MissionClass);
	void ClientMissionTimerChanged(class UClass* MissionClass, float SecondsToAdd);
	void ClientMissionRegistered(class UClass* MissionClass);
	void ClientDormantObjectiveRemoved(class UClass* MissionClass, class UMissionObjective* Objective, bool bIssueActiveEvent);
	void ClientDormantObjectiveAdded(class UClass* MissionClass, class UMissionObjective* Objective);
};


// Class GbxMission.MissionAttributeValueResolver
// 0x0008 (0x0030 - 0x0028)
class UMissionAttributeValueResolver : public UAttributeValueResolver
{
public:
	EMissionValueType                                  ValueToResolve;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionAttributeValueResolver");
		return ptr;
	}

};


// Class GbxMission.MissionCondition_List
// 0x0018 (0x00B8 - 0x00A0)
class UMissionCondition_List : public UGbxCondition_List
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionCondition_List");
		return ptr;
	}

};


// Class GbxMission.MissionDebugMenu
// 0x0020 (0x0318 - 0x02F8)
class UMissionDebugMenu : public UGbxDebugMenuSubmenu
{
public:
	class UMissionGraph*                               MissionGraphToUse;                                        // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisplayObjectName;                                       // 0x0300(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	TArray<class UMission*>                            Missions;                                                 // 0x0308(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionDebugMenu");
		return ptr;
	}


	void SelectMissionGraph(const struct FName& MissionGraphId);
	void NotifyMissionActivationCheatStart();
	void GetObjectiveSetItemsForMission(const struct FName& MissionId, TArray<struct FGbxCascadingListItemData>* OutItems);
	class UMission* GetMissionWithId(const struct FName& MissionId);
	TEnumAsByte<EMissionStatus> GetMissionStatus(const struct FName& MissionId);
	void GetItemsForMissionStatus(TEnumAsByte<EMissionDebugStatus> Status, TArray<struct FGbxCascadingListItemData>* OutItems);
	void GetItemsForMissionGraph(TArray<struct FGbxCascadingListItemData>* OutItems);
	void CompleteMission(const struct FName& MissionId);
	void AdvanceToObjectiveSet(const struct FName& MissionId, const struct FName& ObjectiveSetId);
	void AdvanceMission(const struct FName& MissionId);
};


// Class GbxMission.MissionEnableCondition
// 0x0018 (0x00A0 - 0x0088)
class UMissionEnableCondition : public UGbxCondition
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableCondition");
		return ptr;
	}

};


// Class GbxMission.MissionEnableConditionBreadcrumbLinkedObjective
// 0x0050 (0x00F0 - 0x00A0)
class UMissionEnableConditionBreadcrumbLinkedObjective : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveReferenceWeak              ObjectiveRef;                                             // 0x00A0(0x0050) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionBreadcrumbLinkedObjective");
		return ptr;
	}

};


// Class GbxMission.MissionEnableConditionKickoff
// 0x0028 (0x00C8 - 0x00A0)
class UMissionEnableConditionKickoff : public UMissionEnableCondition
{
public:
	TSoftObjectPtr<class UClass>                       MissionClass;                                             // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionKickoff");
		return ptr;
	}

};


// Class GbxMission.MissionEnableConditionMission
// 0x0030 (0x00D0 - 0x00A0)
class UMissionEnableConditionMission : public UMissionEnableCondition
{
public:
	TSoftObjectPtr<class UClass>                       MissionClass;                                             // 0x00A0(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EMissionStatus>                        MissionStatus;                                            // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionMission");
		return ptr;
	}

};


// Class GbxMission.MissionEnableConditionMissionAvailable
// 0x0028 (0x00C8 - 0x00A0)
class UMissionEnableConditionMissionAvailable : public UMissionEnableCondition
{
public:
	TSoftObjectPtr<class UClass>                       MissionClass;                                             // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionMissionAvailable");
		return ptr;
	}

};


// Class GbxMission.MissionEnableConditionObjective
// 0x0058 (0x00F8 - 0x00A0)
class UMissionEnableConditionObjective : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveReferenceWeak              ObjectiveRef;                                             // 0x00A0(0x0050) (Edit, BlueprintVisible)
	TEnumAsByte<EMissionObjectiveStatus>               ObjectiveStatus;                                          // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreObjectiveBit;                                      // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionObjective");
		return ptr;
	}

};


// Class GbxMission.MissionEnableConditionObjectiveCount
// 0x0060 (0x0100 - 0x00A0)
class UMissionEnableConditionObjectiveCount : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveReferenceWeak              ObjectiveRef;                                             // 0x00A0(0x0050) (Edit, BlueprintVisible)
	EObjectiveCountComparisonOperatorType              ComparisonOperator;                                       // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                ObjectiveProgress;                                        // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireActiveObjective;                                  // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionObjectiveCount");
		return ptr;
	}

};


// Class GbxMission.MissionEnableConditionObjectiveSet
// 0x0050 (0x00F0 - 0x00A0)
class UMissionEnableConditionObjectiveSet : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveSetReference               ObjectiveSetRef;                                          // 0x00A0(0x0048) (Edit, BlueprintVisible)
	TEnumAsByte<EMissionObjectiveSetStatus>            ObjectiveSetStatus;                                       // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionEnableConditionObjectiveSetObjectiveStatus> ObjectivesStatus;                                         // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionObjectiveSet");
		return ptr;
	}

};


// Class GbxMission.MissionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionFunctionLibrary");
		return ptr;
	}


	void STATIC_UpdateMissionObjectiveRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef);
	void STATIC_TrackPreviousActiveMissionInList(class UObject* WorldContextObject);
	void STATIC_TrackNextActiveMissionInList(class UObject* WorldContextObject);
	void STATIC_TrackActiveMission(class UObject* WorldContextObject, class UClass* MissionClass);
	void STATIC_SendMissionEventWithContext(const struct FMissionEventReference& EventRef, class UObject* WorldContextObject, class UObject* OptionalContext);
	void STATIC_SendMissionEvent(class UObject* WorldContextObject, const struct FMissionEventReference& EventRef, class UObject* OptionalContext);
	class UClass* STATIC_ResolveMissionSoftClassReference(TSoftObjectPtr<class UClass> Mission);
	void STATIC_JumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission);
	void STATIC_GetSoftObjectiveSetListForMission(TSoftObjectPtr<class UClass> MissionClass, TArray<TSoftObjectPtr<class UMissionObjectiveSet>>* SoftObjectiveSetList);
	int STATIC_GetPlotMissionIndex(class UMission* MissionObj);
	void STATIC_GetObjectiveSetNameListForMissionFromAssetSubclass(TSoftObjectPtr<class UClass> MissionClass, TArray<struct FName>* NamesList);
	void STATIC_GetObjectiveSetNameListForMission(class UClass* MissionClass, TArray<struct FName>* NamesList);
	void STATIC_GetObjectiveSetListForMission(class UClass* MissionClass, TArray<class UMissionObjectiveSet*>* ObjectiveSetList);
	void STATIC_GetObjectiveNameListForMissionFromAssetSubclass(TSoftObjectPtr<class UClass> Mission, TArray<struct FName>* NamesList);
	void STATIC_GetObjectiveNameListForMission(class UClass* MissionClass, TArray<struct FName>* NamesList);
	TEnumAsByte<EMissionStatus> STATIC_GetMissionStatus(class UObject* WorldContextObject, class UClass* MissionClass);
	TEnumAsByte<EMissionObjectiveStatus> STATIC_GetMissionObjectiveStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, class UObject* OptionalContext);
	TEnumAsByte<EMissionObjectiveSetStatus> STATIC_GetMissionObjectiveSetStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
	void STATIC_GetMissionObjectiveCount(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, int* CurrentObjectiveCount, int* TotalObjectiveCount);
	int STATIC_GetMissionLevel(class UMission* MissionObj);
	class UClass* STATIC_GetMissionClassFromObjectiveReferenceWeak(const struct FMissionObjectiveReferenceWeak& ObjectiveReference);
	class UClass* STATIC_GetMissionClassFromObjectiveReference(const struct FMissionObjectiveReference& ObjectiveReference);
	class UMission* STATIC_GetMission(class UObject* WorldContextObject, class UClass* MissionClass);
	void STATIC_GetEventNameListForMission(class UClass* MissionClass, TArray<struct FName>* NamesList);
	class UClass* STATIC_GetCurrentlyTrackedMission(class UObject* WorldContextObject);
	class UClass* STATIC_GetActivePlotMission(class UObject* WorldContextObject);
	TArray<class UMission*> STATIC_GetActiveMissions(class UObject* WorldContextObject);
	void STATIC_FillMissionObjectiveSetRef(const struct FName& ObjectiveSet, struct FMissionObjectiveSetReference* MissionObjectiveSetRef, class UClass** MissionClass);
	void STATIC_FillMissionObjectiveRefWeak(const struct FName& Objective, struct FMissionObjectiveReferenceWeak* MissionObjectiveRef, class UClass** MissionClass);
	void STATIC_FillMissionObjectiveRef(const struct FName& Objective, struct FMissionObjectiveReference* MissionObjectiveRef, class UClass** MissionClass);
	void STATIC_FillMissionEventRef(const struct FName& EventName, struct FMissionEventReference* MissionEventRef, class UClass** MissionClass);
	bool STATIC_EqualEqual_MissionObjectiveSetReference(const struct FMissionObjectiveSetReference& A, const struct FMissionObjectiveSetReference& B);
	bool STATIC_EqualEqual_MissionObjectiveReference(const struct FMissionObjectiveReference& A, const struct FMissionObjectiveReference& B);
	void STATIC_DebugJumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission);
	class UMission* STATIC_CreateMission(class UObject* WorldContextObject, class UClass* MissionClass);
	void STATIC_CompleteMission(class UObject* WorldContextObject, class UClass* MissionClass);
	void STATIC_AdvanceToBreadcrumbObjective(class UObject* WorldContextObject, const struct FMissionObjectiveReference& BreadcrumbObjectiveRef);
	void STATIC_AdvanceMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
	void STATIC_ActivateMissionAtObjectiveSet(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
	void STATIC_ActivateMission(class UObject* WorldContextObject, class UClass* MissionClass);
};


// Class GbxMission.MissionIconInterface
// 0x0000 (0x0028 - 0x0028)
class UMissionIconInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionIconInterface");
		return ptr;
	}

};


// Class GbxMission.MissionIconObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UMissionIconObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionIconObserverInterface");
		return ptr;
	}

};


// Class GbxMission.MissionLocationData
// 0x0038 (0x0068 - 0x0030)
class UMissionLocationData : public UTravelLocationData
{
public:
	TSoftObjectPtr<class UTravelStationData>           DefaultStation;                                           // 0x0030(0x0028) (Edit)
	TArray<struct FMissionLocation>                    MissionLocations;                                         // 0x0058(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionLocationData");
		return ptr;
	}


	class UClass* GetRequiredInterface();
	bool EnabledConditionRequiresNativeClass();
};


// Class GbxMission.MissionObjective
// 0x00B0 (0x00D8 - 0x0028)
class UMissionObjective : public UObject
{
public:
	unsigned char                                      ObjectiveCount;                                           // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UGameStatData*                               GameStat;                                                 // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxUIFormattedText                         FormattedProgressMessage;                                 // 0x0038(0x0068) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bRememberIndividualState;                                 // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllOrNothing;                                            // 0x00A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClearIfActiveSetNotComplete;                             // 0x00A2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUpdateIfActivatedInMissionLevel;                     // 0x00A3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInvisible;                                               // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBreadcrumb;                                              // 0x00A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBreadcrumbNoClear;                                       // 0x00A6(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bBreadcrumbLinked;                                        // 0x00A7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOptional;                                                // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPauseObjectiveChain;                                     // 0x00A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAdvanceChainOnLevelLoad;                                 // 0x00AA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsPlanetTravel;                                       // 0x00AB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGrantsStarterGear;                                       // 0x00AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfAnyPlayerInVehicle;                          // 0x00AD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfNoPlayersInVehicle;                          // 0x00AE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfMissionVehicleNotSpawned;                    // 0x00AF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfTravelIdActive;                              // 0x00B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfTravelIdNotActive;                           // 0x00B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfMissionWeaponWielded;                        // 0x00B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfMissionWeaponNotWielded;                     // 0x00B3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfStateStable;                                 // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActiveIfStateTransitioning;                          // 0x00B5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoClearWhenNoLongerDormant;                            // 0x00B6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bObjectiveChainHead;                                      // 0x00B7(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bObjectiveChainMember;                                    // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRequiredForObjectiveSetAdvance;                          // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressEmptyCheckbox;                                   // 0x00BA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00BB(0x0005) MISSED OFFSET
	class UMissionRewardData*                          OptionalRewardData;                                       // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ObjectiveGuid;                                            // 0x00C8(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionObjective");
		return ptr;
	}

};


// Class GbxMission.MissionObjectiveReferenceInterface
// 0x0000 (0x0028 - 0x0028)
class UMissionObjectiveReferenceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionObjectiveReferenceInterface");
		return ptr;
	}


	void GetMissionObjectiveReferences(TArray<struct FMissionObjectiveReference>* OutMissionObjectives);
};


// Class GbxMission.MissionObjectiveSet
// 0x0148 (0x0170 - 0x0028)
class UMissionObjectiveSet : public UObject
{
public:
	TArray<class UMissionObjective*>                   Objectives;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TSoftObjectPtr<class UTravelLocationData>          StationOverride;                                          // 0x0038(0x0028)
	class UMissionObjective*                           BreadcrumbLinkedObjective;                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UMissionObjective*                           DisplayedBreadcrumbLinkedObjective;                       // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UMissionObjectiveSet*                        NextSet;                                                  // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCompleteMission;                                      // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAdvanceToNextSet;                                    // 0x0079(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOutOfMapWaypoints;                                       // 0x007A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bContainsRequiredObjectives;                              // 0x007B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bContainsClearIfNotCompleteObjectives;                    // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FGbxUIFormattedText                         DescriptionOverride;                                      // 0x0080(0x0068) (BlueprintVisible, BlueprintReadOnly)
	struct FGbxUIFormattedText                         PreAcceptanceSummaryOverride;                             // 0x00E8(0x0068) (BlueprintVisible, BlueprintReadOnly)
	struct FGuid                                       ObjectiveSetGuid;                                         // 0x0150(0x0010) (IsPlainOldData)
	TArray<int>                                        ObjOrderPos;                                              // 0x0160(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionObjectiveSet");
		return ptr;
	}

};


// Class GbxMission.MissionObjectiveSetReferenceInterface
// 0x0000 (0x0028 - 0x0028)
class UMissionObjectiveSetReferenceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionObjectiveSetReferenceInterface");
		return ptr;
	}


	void GetMissionObjectiveSetReferences(TArray<struct FMissionObjectiveSetReference>* OutMissionObjectiveSets);
};


// Class GbxMission.MissionObserverComponent
// 0x0090 (0x0208 - 0x0178)
class UMissionObserverComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	TArray<class UClass*>                              Missions;                                                 // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ObjectiveBit;                                             // 0x0198(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           NumberOfObjectiveBits;                                    // 0x019C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableObjectiveBit;                                      // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMissionUpdate;                                          // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionObjectiveUpdate;                                 // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionObjectiveSetUpdate;                              // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionsInitialized;                                    // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FMissionObserverEvent>               ObserverEventList;                                        // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMissionEnableConditionEvent>        OnLoadEventList;                                          // 0x01F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionObserverComponent");
		return ptr;
	}


	void ObserverMission(class UClass* MissionClass);
	bool GetUpdateEventObject(TArray<class UObject*>* OutMissionInitialized, TArray<class UObject*>* OutMissionUpdate, TArray<class UObject*>* OutMissionObjectiveUpdate, TArray<class UObject*>* OutMissionObjectiveSetUpdate);
};


// Class GbxMission.MissionObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UMissionObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionObserverInterface");
		return ptr;
	}

};


// Class GbxMission.MissionObserverPlayerInterface
// 0x0000 (0x0028 - 0x0028)
class UMissionObserverPlayerInterface : public UMissionObserverInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionObserverPlayerInterface");
		return ptr;
	}


	void ClientReceiveMissionData(const struct FReplicatedMissionData& MissionData);
};


// Class GbxMission.MissionPhase
// 0x0018 (0x0040 - 0x0028)
class UMissionPhase : public UObject
{
public:
	TArray<class UMissionObjectiveSet*>                ObjectiveSets;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient)
	int                                                PhaseIndex;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionPhase");
		return ptr;
	}

};


// Class GbxMission.MissionReferenceInterface
// 0x0000 (0x0028 - 0x0028)
class UMissionReferenceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxMission.MissionReferenceInterface");
		return ptr;
	}


	void GetMissionClassReferences(TArray<class UClass*>* OutMissions);
	bool CheckForMissionReferenceErrors();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
