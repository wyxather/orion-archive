#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GameplayTags_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxSpawn.ESpawnAnimNotifyAction
enum class ESpawnAnimNotifyAction : uint8_t
{
	Start                          = 0,
	Stop                           = 1,
	ESpawnAnimNotifyAction_MAX     = 2
};


// Enum GbxSpawn.EScriptedWarmup
enum class EScriptedWarmup : uint8_t
{
	None                           = 0,
	FirstWave                      = 1,
	AllWaves                       = 2,
	EScriptedWarmup_MAX            = 3
};


// Enum GbxSpawn.ESpawnerDrawStyle
enum class ESpawnerDrawStyle : uint8_t
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	ESpawnerDrawStyle_MAX          = 4
};


// Enum GbxSpawn.EScriptedWarmupState
enum class EScriptedWarmupState : uint8_t
{
	None                           = 0,
	Activated                      = 1,
	Complete                       = 2,
	EScriptedWarmupState_MAX       = 3
};


// Enum GbxSpawn.EEncounterAdvanceType
enum class EEncounterAdvanceType : uint8_t
{
	All                            = 0,
	Any                            = 1,
	EEncounterAdvanceType_MAX      = 2
};


// Enum GbxSpawn.ESpawnSystemStreamStyle
enum class ESpawnSystemStreamStyle : uint8_t
{
	MapStartSynchronous            = 0,
	MapStartAsynchronous           = 1,
	ESpawnSystemStreamStyle_MAX    = 2
};


// Enum GbxSpawn.ESpawnerType
enum class ESpawnerType : uint8_t
{
	None                           = 0,
	Level                          = 1,
	Static                         = 2,
	Dynamic                        = 3,
	ESpawnerType_MAX               = 4
};


// Enum GbxSpawn.ESpawnerActorState
enum class ESpawnerActorState : uint8_t
{
	Unborn                         = 0,
	Alive                          = 1,
	Suspended                      = 2,
	Dead                           = 3,
	ESpawnerActorState_MAX         = 4
};


// Enum GbxSpawn.ESpawnPointUseType
enum class ESpawnPointUseType : uint8_t
{
	Self                           = 0,
	List                           = 1,
	ManualGroup                    = 2,
	ClusterGroup                   = 3,
	ESpawnPointUseType_MAX         = 4
};


// Enum GbxSpawn.ESpawnPointFilter
enum class ESpawnPointFilter : uint8_t
{
	Any                            = 0,
	All                            = 1,
	NotAny                         = 2,
	NotAll                         = 3,
	ESpawnPointFilter_MAX          = 4
};


// Enum GbxSpawn.ESpawnLimitType
enum class ESpawnLimitType : uint8_t
{
	None                           = 0,
	Spawner                        = 1,
	SpawnerGroup                   = 2,
	ESpawnLimitType_MAX            = 3
};


// Enum GbxSpawn.ESpawnerCritical
enum class ESpawnerCritical : uint8_t
{
	NotCritical                    = 0,
	AlwaysSpawn                    = 1,
	Critical                       = 2,
	ESpawnerCritical_MAX           = 3
};


// Enum GbxSpawn.EIrrelevantAction
enum class EIrrelevantAction : uint8_t
{
	Suspend                        = 0,
	Remove                         = 1,
	Nothing                        = 2,
	EIrrelevantAction_MAX          = 3
};


// Enum GbxSpawn.ERespawnStyle
enum class ERespawnStyle : uint8_t
{
	Timed                          = 0,
	Level                          = 1,
	Never                          = 2,
	ERespawnStyle_MAX              = 3
};


// Enum GbxSpawn.ESpawnStretchType
enum class ESpawnStretchType : uint8_t
{
	None                           = 0,
	StartPoint                     = 1,
	EndPoint                       = 2,
	Dynamic                        = 3,
	ESpawnStretchType_MAX          = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxSpawn.SpawnDetails
// 0x0007
struct FSpawnDetails
{
	ESpawnerCritical                                   Critical;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCritical;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERespawnStyle                                      RespawnStyle;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideRespawnStyle;                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EIrrelevantAction                                  IrrelevantAction;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideIrrelevantAction;                                // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCritical;                                                // 0x0006(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct GbxSpawn.SpawnLimitData
// 0x0158
struct FSpawnLimitData
{
	struct FGameplayTagContainer                       Tags;                                                     // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       DisallowedTypes;                                          // 0x0020(0x0020) (Edit)
	ESpawnPointFilter                                  TagFilterType;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FGbxParam                                   TotalLimit;                                               // 0x0048(0x0080) (Edit)
	bool                                               bLimitTotal;                                              // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FGbxParam                                   AliveLimit;                                               // 0x00D0(0x0080) (Edit)
	bool                                               bLimitAlive;                                              // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagMatchType;                                             // 0x0151(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0152(0x0006) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnPointGroup
// 0x0030
struct FSpawnPointGroup
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      TerritoryActorForThisGroup;                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ASpawnPoint*>                         SpawnPoints;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	bool                                               bRandomize;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnerSoftPath
// 0x0018
struct FSpawnerSoftPath
{
	struct FName                                       SpawnerPathName;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      SpawnerSubPathString;                                     // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxSpawn.SpawnDLCGroupItem
// 0x0020
struct FSpawnDLCGroupItem
{
	TArray<struct FSpawnerSoftPath>                    SpawnerSoftPaths;                                         // 0x0000(0x0010) (ZeroConstructor)
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysEnabledDuringEvent;                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnDLCGroup
// 0x0020
struct FSpawnDLCGroup
{
	class FString                                      Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSpawnDLCGroupItem>                  Replacements;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxSpawn.SpawnDLCScriptGroup
// 0x00C0
struct FSpawnDLCScriptGroup
{
	class FString                                      Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGbxParam                                   MaximumScriptedSpawnersPerGroupOverride;                  // 0x0010(0x0080) (Edit)
	TArray<struct FSpawnerSoftPath>                    SpawnerSoftPaths;                                         // 0x0090(0x0010) (ZeroConstructor)
	bool                                               bAlwaysEnabledDuringEvent;                                // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x00A1(0x001F) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnDLCItem
// 0x0060
struct FSpawnDLCItem
{
	TSoftObjectPtr<class USpawnDLCData>                Data;                                                     // 0x0000(0x0028) (Edit)
	struct FAttributeInitializationData                IsEnabled;                                                // 0x0028(0x0038) (Edit)
};

// ScriptStruct GbxSpawn.SpawnManagerAsyncRequest
// 0x0068
struct FSpawnManagerAsyncRequest
{
	class AActor*                                      Context;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpawnFactory*                               SpawnFactory;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpawnPointComponent*                        SpawnPointComponent;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnerComponent*                           SpawnerComponent;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Spawned;                                                  // 0x0028(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             Failed;                                                   // 0x0038(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSpawnDetails                               SpawnDetails;                                             // 0x0060(0x0007) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnerLinkData
// 0x0028
struct FSpawnerLinkData
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpawner*                                    Spawner;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTeamComponent*                              TeamComp;                                                 // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnerComponent*                           SpawnerComp;                                              // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnerLinkComponent*                       LinkComp;                                                 // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxSpawn.SpawnBunchListItem
// 0x0090
struct FSpawnBunchListItem
{
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   NumActorsParam;                                           // 0x0008(0x0080) (Edit)
	struct FName                                       SpawnPointGroupName;                                      // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxSpawn.EncounterAdvanceData
// 0x0010
struct FEncounterAdvanceData
{
	EEncounterAdvanceType                              Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTimer;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Timer;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePercent;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Percent;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxSpawn.EncounterWave
// 0x0038
struct FEncounterWave
{
	class USpawnerStyle*                               SpawnerStyle;                                             // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEncounterAdvanceData                       Advancement;                                              // 0x0008(0x0010) (Edit)
	float                                              WarmupTimer;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FSpawnLimitData>                     Limits;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FName                                       SpawnPointGroupName;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxSpawn.SpawnOptionDataSoftPath
// 0x0018
struct FSpawnOptionDataSoftPath
{
	struct FName                                       SpawnOptionDataPathName;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      SpawnOptionDataSubPathString;                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxSpawn.SpawnManagerAsyncRequestEntry
// 0x0008 (0x0070 - 0x0068)
struct FSpawnManagerAsyncRequestEntry : public FSpawnManagerAsyncRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnerActorData
// 0x00A8
struct FSpawnerActorData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
	class USpawnFactory*                               Factory;                                                  // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0058(0x0040) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnerData
// 0x0140
struct FSpawnerData
{
	class USpawnManager*                               Manager;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpawner*                                    Spawner;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpawnerComponent*                           SpawnerComp;                                              // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnerStyle*                               SpawnerStyle;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
	TArray<struct FSpawnerActorData>                   Actors;                                                   // 0x0070(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0080(0x0048) MISSED OFFSET
	TArray<class AActor*>                              DeadActors;                                               // 0x00C8(0x0010) (ZeroConstructor)
	TArray<class USpawnDLCScript*>                     DLCScripts;                                               // 0x00D8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x58];                                      // 0x00E8(0x0058) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnFactoryData
// 0x0128
struct FSpawnFactoryData
{
	class USpawnFactory*                               Factory;                                                  // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGbxParam                                   WeightParam;                                              // 0x0008(0x0080) (Edit)
	class FString                                      Probability;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	ESpawnLimitType                                    AliveLimitType;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FGbxParam                                   AliveLimitParam;                                          // 0x00A0(0x0080) (Edit)
	int                                                AliveLimit;                                               // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
};

// ScriptStruct GbxSpawn.SpawnPreviewState
// 0x0018 (0x00F0 - 0x00D8)
struct FSpawnPreviewState : public FPreviewState
{
	class USpawnPointComponent*                        SpawnPointComponent;                                      // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USpawnFactory*>                       PreviewFactories;                                         // 0x00E0(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxSpawn.ActionState_SpawnAnim
// 0x0000 (0x04F8 - 0x04F8)
struct FActionState_SpawnAnim : public FActionState_Anim
{

};

// ScriptStruct GbxSpawn.PointWidget
// 0x0030
struct FPointWidget
{
	struct FTransform                                  Point;                                                    // 0x0000(0x0030) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
