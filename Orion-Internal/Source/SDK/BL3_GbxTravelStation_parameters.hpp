#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTravelStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxTravelStation.GlobalTravelGraph.DebugFindClosestLevel
struct UGlobalTravelGraph_DebugFindClosestLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelData*                                  StartingLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelData*                                  DestinationLevel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationTracker.TravelToStationTimer
struct ATravelStationTracker_TravelToStationTimer_Params
{
};

// Function GbxTravelStation.TravelStationTracker.PlayerJoinedTimer
struct ATravelStationTracker_PlayerJoinedTimer_Params
{
};

// Function GbxTravelStation.TravelStationTracker.OnRep_TravelToStationCountdown
struct ATravelStationTracker_OnRep_TravelToStationCountdown_Params
{
};

// Function GbxTravelStation.TravelStationTracker.OnRep_LastActiveTravelToStation
struct ATravelStationTracker_OnRep_LastActiveTravelToStation_Params
{
};

// Function GbxTravelStation.TravelStationTracker.OnRep_HostFastTravelStations
struct ATravelStationTracker_OnRep_HostFastTravelStations_Params
{
};

// Function GbxTravelStation.TravelStationTracker.GetTravelStationComponent
struct ATravelStationTracker_GetTravelStationComponent_Params
{
	class UTravelStationData*                          TravelStationData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UTravelStationComponentBase*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationTracker.GetLastTravelledThroughStation
struct ATravelStationTracker_GetLastTravelledThroughStation_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationTracker.GetLastActiveTravelToStation
struct ATravelStationTracker_GetLastActiveTravelToStation_Params
{
	class APlayerController*                           pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationTracker.GetFastTravelStationInfo
struct ATravelStationTracker_GetFastTravelStationInfo_Params
{
	class FString                                      FastTravelStationName;                                    // (Parm, ZeroConstructor)
	class UFastTravelStationData*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationTracker.GetAllFastTravelStations
struct ATravelStationTracker_GetAllFastTravelStations_Params
{
	TArray<class UFastTravelStationData*>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTravelStation.TravelStationTracker.GetActiveFastTravelStationList
struct ATravelStationTracker_GetActiveFastTravelStationList_Params
{
	TArray<struct FActiveFastTravelData>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTravelStation.TravelStationTracker.FindFastTravelStationForMap
struct ATravelStationTracker_FindFastTravelStationForMap_Params
{
	struct FName                                       MapName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFastTravelStationData*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationComponentBase.TravelToStation
struct UTravelStationComponentBase_TravelToStation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTravelStationData*                          DestinationStationData;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ActivatingPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisallowLocalTravel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationComponentBase.GetAvailableSpawnLocation
struct UTravelStationComponentBase_GetAvailableSpawnLocation_Params
{
	class AActor*                                      ActorForSpawnLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, OutParm, IsPlainOldData)
	bool                                               bTestOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationComponentBase.EnumerateValidTravelStation
struct UTravelStationComponentBase_EnumerateValidTravelStation_Params
{
	class UObject*                                     TravelStationObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTravelStation.FastTravelStationComponent.OnTravelStationActivated
struct UFastTravelStationComponent_OnTravelStationActivated_Params
{
	class AActor*                                      PreviousStation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTravelStation.FastTravelStationComponent.FastTravelToStation
struct UFastTravelStationComponent_FastTravelToStation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFastTravelStationData*                      DestinationStationData;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ActivatingPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTravelStation.FastTravelStationComponent.DeactivateFastTravel
struct UFastTravelStationComponent_DeactivateFastTravel_Params
{
	class UFastTravelStationComponent*                 FallbackLocation;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.FastTravelStationComponent.ActivateFastTravel
struct UFastTravelStationComponent_ActivateFastTravel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationData.GetStationMapName
struct UTravelStationData_GetStationMapName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.FastTravelStationDebugButton.OnStationClicked
struct UFastTravelStationDebugButton_OnStationClicked_Params
{
};

// Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelStationSelectedChanged
struct UFastTravelStationDebugMenu_OnTravelStationSelectedChanged_Params
{
	class UFastTravelStationDebugButton*               TriggeredButton;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelButtonClicked
struct UFastTravelStationDebugMenu_OnTravelButtonClicked_Params
{
};

// Function GbxTravelStation.FastTravelStationDebugMenu.OnShowLevelStationsStateChanged
struct UFastTravelStationDebugMenu_OnShowLevelStationsStateChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTravelStation.FastTravelStationDebugMenu.OnActiveStationsStateChanged
struct UFastTravelStationDebugMenu_OnActiveStationsStateChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTravelStation.LevelTravelStationComponent.GetLevelTravelStationData
struct ULevelTravelStationComponent_GetLevelTravelStationData_Params
{
	class ULevelTravelStationData*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.LevelTravelStationComponent.ActivateLevelTravel
struct ULevelTravelStationComponent_ActivateLevelTravel_Params
{
	class AController*                                 ActivatingController;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTravelStation.TeleportDestinationActor.TeleportPlayersToDestination
struct ATeleportDestinationActor_TeleportPlayersToDestination_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ATeleportDestinationActor*                   Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTravelStation.TravelStationResurrectComponent.OnRep_StationIsActive
struct UTravelStationResurrectComponent_OnRep_StationIsActive_Params
{
};

// Function GbxTravelStation.TravelStationResurrectComponent.ActivateTravelStation
struct UTravelStationResurrectComponent_ActivateTravelStation_Params
{
	bool                                               bForceActivation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
