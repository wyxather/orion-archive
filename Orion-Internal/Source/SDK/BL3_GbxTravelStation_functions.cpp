// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTravelStation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxTravelStation.GlobalTravelGraph.DebugFindClosestLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelData*              StartingLevel                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelData*              DestinationLevel               (Parm, ZeroConstructor, IsPlainOldData)

void UGlobalTravelGraph::STATIC_DebugFindClosestLevel(class UObject* WorldContextObject, class ULevelData* StartingLevel, class ULevelData* DestinationLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.GlobalTravelGraph.DebugFindClosestLevel");

	UGlobalTravelGraph_DebugFindClosestLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StartingLevel = StartingLevel;
	params.DestinationLevel = DestinationLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationTracker.TravelToStationTimer
// (Final, Native, Private)

void ATravelStationTracker::TravelToStationTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.TravelToStationTimer");

	ATravelStationTracker_TravelToStationTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationTracker.PlayerJoinedTimer
// (Native, Protected)

void ATravelStationTracker::PlayerJoinedTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.PlayerJoinedTimer");

	ATravelStationTracker_PlayerJoinedTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationTracker.OnRep_TravelToStationCountdown
// (Final, Native, Private)

void ATravelStationTracker::OnRep_TravelToStationCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.OnRep_TravelToStationCountdown");

	ATravelStationTracker_OnRep_TravelToStationCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationTracker.OnRep_LastActiveTravelToStation
// (Native, Public)

void ATravelStationTracker::OnRep_LastActiveTravelToStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.OnRep_LastActiveTravelToStation");

	ATravelStationTracker_OnRep_LastActiveTravelToStation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationTracker.OnRep_HostFastTravelStations
// (Final, Native, Private)

void ATravelStationTracker::OnRep_HostFastTravelStations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.OnRep_HostFastTravelStations");

	ATravelStationTracker_OnRep_HostFastTravelStations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationTracker.GetTravelStationComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTravelStationData*      TravelStationData              (Parm, ZeroConstructor, IsPlainOldData)
// class UTravelStationComponentBase* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTravelStationComponentBase* ATravelStationTracker::GetTravelStationComponent(class UTravelStationData* TravelStationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetTravelStationComponent");

	ATravelStationTracker_GetTravelStationComponent_Params params;
	params.TravelStationData = TravelStationData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationTracker.GetLastTravelledThroughStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ATravelStationTracker::GetLastTravelledThroughStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetLastTravelledThroughStation");

	ATravelStationTracker_GetLastTravelledThroughStation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationTracker.GetLastActiveTravelToStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       pc                             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ATravelStationTracker::GetLastActiveTravelToStation(class APlayerController* pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetLastActiveTravelToStation");

	ATravelStationTracker_GetLastActiveTravelToStation_Params params;
	params.pc = pc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationTracker.GetFastTravelStationInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FastTravelStationName          (Parm, ZeroConstructor)
// class UFastTravelStationData*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFastTravelStationData* ATravelStationTracker::GetFastTravelStationInfo(const class FString& FastTravelStationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetFastTravelStationInfo");

	ATravelStationTracker_GetFastTravelStationInfo_Params params;
	params.FastTravelStationName = FastTravelStationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationTracker.GetAllFastTravelStations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UFastTravelStationData*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UFastTravelStationData*> ATravelStationTracker::GetAllFastTravelStations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetAllFastTravelStations");

	ATravelStationTracker_GetAllFastTravelStations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationTracker.GetActiveFastTravelStationList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FActiveFastTravelData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveFastTravelData> ATravelStationTracker::GetActiveFastTravelStationList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetActiveFastTravelStationList");

	ATravelStationTracker_GetActiveFastTravelStationList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationTracker.FindFastTravelStationForMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MapName                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UFastTravelStationData*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFastTravelStationData* ATravelStationTracker::FindFastTravelStationForMap(const struct FName& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.FindFastTravelStationForMap");

	ATravelStationTracker_FindFastTravelStationForMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationComponentBase.TravelToStation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UTravelStationData*      DestinationStationData         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ActivatingPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisallowLocalTravel           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTravelStationComponentBase::STATIC_TravelToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, bool bImmediate, class APawn* ActivatingPawn, bool bDisallowLocalTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationComponentBase.TravelToStation");

	UTravelStationComponentBase_TravelToStation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DestinationStationData = DestinationStationData;
	params.bImmediate = bImmediate;
	params.ActivatingPawn = ActivatingPawn;
	params.bDisallowLocalTravel = bDisallowLocalTravel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationComponentBase.GetAvailableSpawnLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  ActorForSpawnLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, OutParm, IsPlainOldData)
// bool                           bTestOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForVehicle                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTravelStationComponentBase::GetAvailableSpawnLocation(class AActor* ActorForSpawnLocation, bool bTestOnly, bool bForVehicle, struct FVector* SpawnLocation, struct FRotator* SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationComponentBase.GetAvailableSpawnLocation");

	UTravelStationComponentBase_GetAvailableSpawnLocation_Params params;
	params.ActorForSpawnLocation = ActorForSpawnLocation;
	params.bTestOnly = bTestOnly;
	params.bForVehicle = bForVehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
	if (SpawnRotation != nullptr)
		*SpawnRotation = params.SpawnRotation;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationComponentBase.EnumerateValidTravelStation
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 TravelStationObject            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          OutItems                       (Parm, OutParm, ZeroConstructor)

void UTravelStationComponentBase::STATIC_EnumerateValidTravelStation(class UObject* TravelStationObject, TArray<class FString>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationComponentBase.EnumerateValidTravelStation");

	UTravelStationComponentBase_EnumerateValidTravelStation_Params params;
	params.TravelStationObject = TravelStationObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function GbxTravelStation.FastTravelStationComponent.OnTravelStationActivated
// (Final, Native, Private)
// Parameters:
// class AActor*                  PreviousStation                (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelStationComponent::OnTravelStationActivated(class AActor* PreviousStation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.OnTravelStationActivated");

	UFastTravelStationComponent_OnTravelStationActivated_Params params;
	params.PreviousStation = PreviousStation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.FastTravelStationComponent.FastTravelToStation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UFastTravelStationData*  DestinationStationData         (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ActivatingPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelStationComponent::STATIC_FastTravelToStation(class UObject* WorldContextObject, class UFastTravelStationData* DestinationStationData, class APawn* ActivatingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.FastTravelToStation");

	UFastTravelStationComponent_FastTravelToStation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DestinationStationData = DestinationStationData;
	params.ActivatingPawn = ActivatingPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.FastTravelStationComponent.DeactivateFastTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFastTravelStationComponent* FallbackLocation               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFastTravelStationComponent::DeactivateFastTravel(class UFastTravelStationComponent* FallbackLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.DeactivateFastTravel");

	UFastTravelStationComponent_DeactivateFastTravel_Params params;
	params.FallbackLocation = FallbackLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.FastTravelStationComponent.ActivateFastTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFastTravelStationComponent::ActivateFastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.ActivateFastTravel");

	UFastTravelStationComponent_ActivateFastTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TravelStationData.GetStationMapName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UTravelStationData::GetStationMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationData.GetStationMapName");

	UTravelStationData_GetStationMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.FastTravelStationDebugButton.OnStationClicked
// (Final, Native, Private)

void UFastTravelStationDebugButton::OnStationClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugButton.OnStationClicked");

	UFastTravelStationDebugButton_OnStationClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelStationSelectedChanged
// (Final, Native, Private)
// Parameters:
// class UFastTravelStationDebugButton* TriggeredButton                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelStationDebugMenu::OnTravelStationSelectedChanged(class UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelStationSelectedChanged");

	UFastTravelStationDebugMenu_OnTravelStationSelectedChanged_Params params;
	params.TriggeredButton = TriggeredButton;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelButtonClicked
// (Final, Native, Private)

void UFastTravelStationDebugMenu::OnTravelButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelButtonClicked");

	UFastTravelStationDebugMenu_OnTravelButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnShowLevelStationsStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelStationDebugMenu::OnShowLevelStationsStateChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnShowLevelStationsStateChanged");

	UFastTravelStationDebugMenu_OnShowLevelStationsStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnActiveStationsStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelStationDebugMenu::OnActiveStationsStateChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnActiveStationsStateChanged");

	UFastTravelStationDebugMenu_OnActiveStationsStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.LevelTravelStationComponent.GetLevelTravelStationData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelTravelStationData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelTravelStationData* ULevelTravelStationComponent::GetLevelTravelStationData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.LevelTravelStationComponent.GetLevelTravelStationData");

	ULevelTravelStationComponent_GetLevelTravelStationData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.LevelTravelStationComponent.ActivateLevelTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             ActivatingController           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULevelTravelStationComponent::ActivateLevelTravel(class AController* ActivatingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.LevelTravelStationComponent.ActivateLevelTravel");

	ULevelTravelStationComponent_ActivateLevelTravel_Params params;
	params.ActivatingController = ActivatingController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTravelStation.TeleportDestinationActor.TeleportPlayersToDestination
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ATeleportDestinationActor* Destination                    (Parm, ZeroConstructor, IsPlainOldData)

void ATeleportDestinationActor::STATIC_TeleportPlayersToDestination(class UObject* WorldContextObject, class ATeleportDestinationActor* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TeleportDestinationActor.TeleportPlayersToDestination");

	ATeleportDestinationActor_TeleportPlayersToDestination_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationResurrectComponent.OnRep_StationIsActive
// (Final, Native, Public)

void UTravelStationResurrectComponent::OnRep_StationIsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationResurrectComponent.OnRep_StationIsActive");

	UTravelStationResurrectComponent_OnRep_StationIsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTravelStation.TravelStationResurrectComponent.ActivateTravelStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForceActivation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTravelStationResurrectComponent::ActivateTravelStation(bool bForceActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationResurrectComponent.ActivateTravelStation");

	UTravelStationResurrectComponent_ActivateTravelStation_Params params;
	params.bForceActivation = bForceActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
