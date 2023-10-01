#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_GbxDialog_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_GbxUI_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_GbxTravelStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxMission.EMissionEvent
enum class EMissionEvent : uint8_t
{
	NotStarted_Load                = 0,
	Active_Load                    = 1,
	Complete_Load                  = 2,
	Activated                      = 3,
	Completed                      = 4,
	Failed                         = 5,
	EMissionEvent_MAX              = 6
};


// Enum GbxMission.EMissionObjectiveEvent
enum class EMissionObjectiveEvent : uint8_t
{
	Inactive_Load                  = 0,
	Active_Load                    = 1,
	Dormant_Load                   = 2,
	Complete_Load                  = 3,
	Activated                      = 4,
	Deactivated                    = 5,
	Dormant                        = 6,
	Cleared                        = 7,
	Updated                        = 8,
	Thwarted                       = 9,
	Completed                      = 10,
	EMissionObjectiveEvent_MAX     = 11
};


// Enum GbxMission.EMissionObjectiveSetEvent
enum class EMissionObjectiveSetEvent : uint8_t
{
	NotStarted_Load                = 0,
	Active_Load                    = 1,
	Complete_Load                  = 2,
	Activated                      = 3,
	ObjectivesChanged              = 4,
	Completed                      = 5,
	Advanced                       = 6,
	EMissionObjectiveSetEvent_MAX  = 7
};


// Enum GbxMission.EMissionValueType
enum class EMissionValueType : uint8_t
{
	Level                          = 0,
	EMissionValueType_MAX          = 1
};


// Enum GbxMission.EMissionDebugStatus
enum class EMissionDebugStatus : uint8_t
{
	MDS_Ineligible                 = 0,
	MDS_Eligible                   = 1,
	MDS_DevMission                 = 2,
	MDS_Active                     = 3,
	MDS_Complete                   = 4,
	MDS_Failed                     = 5,
	MDS_MAX                        = 6
};


// Enum GbxMission.EMissionActiveResult
enum class EMissionActiveResult : uint8_t
{
	MissionActive                  = 0,
	NoMissionsActive               = 1,
	EMissionActiveResult_MAX       = 2
};


// Enum GbxMission.EMissionAvailableResult
enum class EMissionAvailableResult : uint8_t
{
	MissionAvailable               = 0,
	NoMissionsAvailable            = 1,
	EMissionAvailableResult_MAX    = 2
};


// Enum GbxMission.EObjectiveCountComparisonOperatorType
enum class EObjectiveCountComparisonOperatorType : uint8_t
{
	EqualTo                        = 0,
	NotEqualTo                     = 1,
	LessThan                       = 2,
	LessThanOrEqualTo              = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqualTo           = 5,
	EObjectiveCountComparisonOperatorType_MAX = 6
};


// Enum GbxMission.EMissionEnableConditionObjectiveSetObjectiveStatus
enum class EMissionEnableConditionObjectiveSetObjectiveStatus : uint8_t
{
	MECOSOS_Ignored                = 0,
	MECOSOS_AllCompleteStatusMatters = 1,
	MECOSOS_AllCompleteStatusIgnored = 2,
	MECOSOS_MAX                    = 3
};


// Enum GbxMission.EIconRadiusDrawStyle
enum class EIconRadiusDrawStyle : uint8_t
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	EIconRadiusDrawStyle_MAX       = 4
};


// Enum GbxMission.EMissionIconState
enum class EMissionIconState : uint8_t
{
	IconState_Default              = 0,
	IconState_ForceDisabled        = 1,
	IconState_ForceEnabled         = 2,
	IconState_MAX                  = 3
};


// Enum GbxMission.EMissionObjectiveDependencyStatus
enum class EMissionObjectiveDependencyStatus : uint8_t
{
	MODS_Active                    = 0,
	MODS_Complete                  = 1,
	MODS_MAX                       = 2
};


// Enum GbxMission.EMissionTimerEvent
enum class EMissionTimerEvent : uint8_t
{
	TimerStarted                   = 0,
	TimerStopped                   = 1,
	TimeAdded                      = 2,
	TimeExpired                    = 3,
	EMissionTimerEvent_MAX         = 4
};


// Enum GbxMission.EMissionObjectiveSetStatus
enum class EMissionObjectiveSetStatus : uint8_t
{
	MOSS_NotActive                 = 0,
	MOSS_Active                    = 1,
	MOSS_Unknown                   = 2,
	MOSS_MAX                       = 3
};


// Enum GbxMission.EMissionObjectiveStatus
enum class EMissionObjectiveStatus : uint8_t
{
	MOS_NotStarted                 = 0,
	MOS_Active                     = 1,
	MOS_Dormant                    = 2,
	MOS_Complete                   = 3,
	MOS_Unknown                    = 4,
	MOS_MAX                        = 5
};


// Enum GbxMission.EMissionStatus
enum class EMissionStatus : uint8_t
{
	MS_NotStarted                  = 0,
	MS_Active                      = 1,
	MS_Complete                    = 2,
	MS_Failed                      = 3,
	MS_Unknown                     = 4,
	MS_MAX                         = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxMission.MissionObjectiveReferenceBase
// 0x0028
struct FMissionObjectiveReferenceBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       ObjectiveName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ObjectiveGuid;                                            // 0x0010(0x0010) (Edit, IsPlainOldData)
	TWeakObjectPtr<class UMissionObjective>            Objective;                                                // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxMission.MissionObjectiveReferenceWeak
// 0x0028 (0x0050 - 0x0028)
struct FMissionObjectiveReferenceWeak : public FMissionObjectiveReferenceBase
{
	TSoftObjectPtr<class UClass>                       Mission;                                                  // 0x0028(0x0028) (Edit)
};

// ScriptStruct GbxMission.MissionObjectiveDependency
// 0x0058
struct FMissionObjectiveDependency
{
	struct FMissionObjectiveReferenceWeak              ObjectiveRef;                                             // 0x0000(0x0050) (Edit)
	TEnumAsByte<EMissionObjectiveDependencyStatus>     ObjectiveStatus;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct GbxMission.MissionObjectiveChain
// 0x0010
struct FMissionObjectiveChain
{
	TArray<class UMissionObjective*>                   ObjectiveChain;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct GbxMission.MissionObjectiveSetReference
// 0x0048
struct FMissionObjectiveSetReference
{
	TSoftObjectPtr<class UClass>                       Mission;                                                  // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ObjectiveSetName;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ObjectiveSetGuid;                                         // 0x0030(0x0010) (Edit, IsPlainOldData)
	TWeakObjectPtr<class UMissionObjectiveSet>         ObjectiveSet;                                             // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxMission.MissionProgress
// 0x0080
struct FMissionProgress
{
	class UMission*                                    Mission;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionStatus>                        Status;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   ObjectivesProgress;                                       // 0x0018(0x0010) (ZeroConstructor)
	class UMissionObjectiveSet*                        ActiveObjectiveSet;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMissionObjective*>                   DormantObjectives;                                        // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UMissionObjective*>                   PausedObjectiveChains;                                    // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bActivateScriptWhenDependenciesMet;                       // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FDialogScriptPinnedRef                      ActivatedDialogScript;                                    // 0x0058(0x0010)
	bool                                               bKickoffPlayed;                                           // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasMissionFailed;                                        // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReplicationError;                                        // 0x006A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x15];                                      // 0x006B(0x0015) MISSED OFFSET
};

// ScriptStruct GbxMission.DefendMissionTargetData
// 0x0010
struct FDefendMissionTargetData
{
	class UMissionObjective*                           Objective;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PercentHealth;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxMission.ActiveMissionIconData
// 0x0070
struct FActiveMissionIconData
{
	TScriptInterface<class UMissionIconInterface>      Icon;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       IconGuid;                                                 // 0x0010(0x0010) (IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              IconLocationComponent;                                    // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     IconLocation;                                             // 0x0028(0x000C) (IsPlainOldData)
	uint32_t                                           WaypointRadius;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  IconData;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      MissionClass;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMissionObjective*>                   MissionObjectives;                                        // 0x0048(0x0010) (ZeroConstructor)
	float                                              VisibleDistanceOverride;                                  // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HiddenDistanceOverride;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHideAreaWaypoint;                                        // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UClass*                                      AreaComponentClassOverride;                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxMission.MissionStatusPlayerData
// 0x0030
struct FMissionStatusPlayerData
{
	class UClass*                                      MissionClass;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionStatus>                        Status;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   ObjectivesProgress;                                       // 0x0010(0x0010) (ZeroConstructor)
	class UMissionObjectiveSet*                        ActiveObjectiveSet;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenViewedInLog;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bKickoffPlayed;                                           // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      LeagueInstance;                                           // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct GbxMission.MissionPlaythroughData
// 0x0018
struct FMissionPlaythroughData
{
	TArray<struct FMissionStatusPlayerData>            MissionList;                                              // 0x0000(0x0010) (ZeroConstructor)
	class UClass*                                      TrackedMission;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxMission.MissionObjectiveReference
// 0x0008 (0x0030 - 0x0028)
struct FMissionObjectiveReference : public FMissionObjectiveReferenceBase
{
	class UClass*                                      Mission;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxMission.MissionEventReference
// 0x0010
struct FMissionEventReference
{
	class UClass*                                      Mission;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxMission.MissionLocation
// 0x0030
struct FMissionLocation
{
	TSoftObjectPtr<class UTravelStationData>           TravelStation;                                            // 0x0000(0x0028) (Edit)
	class UGbxCondition*                               StationCondition;                                         // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxMission.MissionObserverEvent
// 0x0038
struct FMissionObserverEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLastConditionValue;                                      // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UGbxCondition*                               EnabledCondition;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnConditionTrue;                                          // 0x0018(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConditionFalse;                                         // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
};

// ScriptStruct GbxMission.MissionEnableConditionEvent
// 0x0020
struct FMissionEnableConditionEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMissionEnableCondition*                     EnableCondition;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLoad;                                                   // 0x0010(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
};

// ScriptStruct GbxMission.ReplicatedMissionProgress
// 0x0078
struct FReplicatedMissionProgress
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct GbxMission.TimedMissionData
// 0x0018
struct FTimedMissionData
{
	class UClass*                                      MissionClass;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SecondsLeft;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartingSeconds;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTimerRunning;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFailOnTimerExpiration;                                   // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTimerExpired;                                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct GbxMission.ReplicatedMissionData
// 0x0028
struct FReplicatedMissionData
{
	TArray<struct FReplicatedMissionProgress>          Progress;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class UClass*                                      TrackedMission;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTimedMissionData>                   ActiveTimedMissions;                                      // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxMission.MissionObjectiveData
// 0x0010
struct FMissionObjectiveData
{
	class UClass*                                      MissionClass;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMissionObjective*                           Objective;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxMission.DefendMissionData
// 0x0018
struct FDefendMissionData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
