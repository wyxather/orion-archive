#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_GbxUI_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxTravelStation.ETravelStatus
enum class ETravelStatus : uint8_t
{
	None                           = 0,
	Queued                         = 1,
	Cancelled_OpenMenu             = 2,
	Cancelled_DownState            = 3,
	Cancelled_Cinamatic            = 4,
	Cancelled_DLCOwnership         = 5,
	ETravelStatus_MAX              = 6
};


// Enum GbxTravelStation.EFastTravelDirection
enum class EFastTravelDirection : uint8_t
{
	SendAndReceive                 = 0,
	SendOnly                       = 1,
	ReceiveOnly                    = 2,
	EFastTravelDirection_MAX       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxTravelStation.ExternalGraphLevelLinks
// 0x0038
struct FExternalGraphLevelLinks
{
	TSoftObjectPtr<class ULevelData>                   LevelData;                                                // 0x0000(0x0028) (Edit, EditConst)
	TArray<TSoftObjectPtr<class ULevelData>>           LinksToOtherLevel;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct GbxTravelStation.ActiveFastTravelData
// 0x0010
struct FActiveFastTravelData
{
	class UFastTravelStationData*                      FastTravelData;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlightDiscovery;                                      // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxTravelStation.TravelCountdownInfo
// 0x0010
struct FTravelCountdownInfo
{
	class UTravelStationData*                          TravelStationDestination;                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingTime;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	ETravelStatus                                      Status;                                                   // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDisallowLocalTravel;                                     // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct GbxTravelStation.AvailableTravelStation
// 0x0020
struct FAvailableTravelStation
{
	class FString                                      StationToTravelTo;                                        // 0x0000(0x0010) (ZeroConstructor)
	class UFastTravelStationDebugButton*               OptionButton;                                             // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GbxTravelStation.TravelDataConditional
// 0x0030
struct FTravelDataConditional
{
	class FString                                      TravelDataSelection;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	class ULevelTravelStationData*                     LevelTravelData;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MovieToPlayDuringTravelMap;                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UGbxCondition*                               ConditionToPlayMovie;                                     // 0x0020(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Condition;                                                // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxTravelStation.ActiveFastTravelSaveData
// 0x0018
struct FActiveFastTravelSaveData
{
	class FString                                      FastTravelStationName;                                    // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bBlacklisted;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxTravelStation.FastTravelStationActiveEntry
// 0x000C (0x0018 - 0x000C)
struct FFastTravelStationActiveEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UFastTravelStationData*                      FastTravelData;                                           // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxTravelStation.FastTravelStationActiveContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FFastTravelStationActiveContainer : public FFastArraySerializer
{
	TArray<struct FFastTravelStationActiveEntry>       ActiveFastTravelStations;                                 // 0x00B0(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct GbxTravelStation.SpawnPointTracker
// 0x0028
struct FSpawnPointTracker
{
	TScriptInterface<class UTravelStationSpawnPointInterface> SpawnPoint;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                LastSpawnedAtCounter;                                     // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AActor*                                      AssignedToActor;                                          // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
