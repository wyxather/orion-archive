#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTravelStation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxTravelStation.TravelGraph
// 0x0068 (0x0090 - 0x0028)
class UTravelGraph : public UObject
{
public:
	class UTravelStationData*                          InitialStation;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<TSoftObjectPtr<class UTravelStationData>>   ReferencedTravelStations;                                 // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<TSoftObjectPtr<class ULevelData>>           ReferencedLevels;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<TSoftObjectPtr<class ULevelGroupData>>      ReferencedLevelGroups;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FText                                       GraphDisplayName;                                         // 0x0060(0x0028) (Edit)
	class UDownloadableContentData*                    DLCExpansionData;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FExternalGraphLevelLinks>            ExternalLinksToOtherLevel;                                // 0x0080(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelGraph");
		return ptr;
	}

};


// Class GbxTravelStation.GlobalTravelGraph
// 0x0010 (0x00A0 - 0x0090)
class UGlobalTravelGraph : public UTravelGraph
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.GlobalTravelGraph");
		return ptr;
	}


	void STATIC_DebugFindClosestLevel(class UObject* WorldContextObject, class ULevelData* StartingLevel, class ULevelData* DestinationLevel);
};


// Class GbxTravelStation.TravelStationTracker
// 0x00F0 (0x0548 - 0x0458)
class ATravelStationTracker : public AActor
{
public:
	TArray<class UTravelStationResurrectComponent*>    ResurrectTravelStations;                                  // 0x0458(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	TArray<class ULevelTravelStationComponent*>        LevelTravelStations;                                      // 0x0468(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	TArray<class UFastTravelStationComponent*>         FastTravelStations;                                       // 0x0478(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	TArray<class UFastTravelStationData*>              AllFastTravelStations;                                    // 0x0488(0x0010) (ZeroConstructor, Transient)
	TArray<struct FActiveFastTravelData>               ActiveFastTravelStations;                                 // 0x0498(0x0010) (ZeroConstructor, Transient)
	TArray<class UFastTravelStationData*>              HostFastTravelStations;                                   // 0x04A8(0x0010) (Net, ZeroConstructor, Transient)
	TWeakObjectPtr<class AActor>                       LastActiveTravelToStation_Client;                         // 0x04B8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LastTravelledThroughStation;                              // 0x04C0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LastActiveTravelToStation_Server;                         // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LevelArrivalTravelStation;                                // 0x04D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      LastDestinationTravelStationName;                         // 0x04D8(0x0010) (ZeroConstructor, Transient)
	struct FTravelCountdownInfo                        TravelToStationCountdown;                                 // 0x04E8(0x0010) (Net, Transient)
	class UGlobalTravelGraph*                          GlobalTravelGraph;                                        // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0500(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationTracker");
		return ptr;
	}


	void TravelToStationTimer();
	void PlayerJoinedTimer();
	void OnRep_TravelToStationCountdown();
	void OnRep_LastActiveTravelToStation();
	void OnRep_HostFastTravelStations();
	class UTravelStationComponentBase* GetTravelStationComponent(class UTravelStationData* TravelStationData);
	class AActor* GetLastTravelledThroughStation();
	class AActor* GetLastActiveTravelToStation(class APlayerController* pc);
	class UFastTravelStationData* GetFastTravelStationInfo(const class FString& FastTravelStationName);
	TArray<class UFastTravelStationData*> GetAllFastTravelStations();
	TArray<struct FActiveFastTravelData> GetActiveFastTravelStationList();
	class UFastTravelStationData* FindFastTravelStationForMap(const struct FName& MapName);
};


// Class GbxTravelStation.TravelStationComponentBase
// 0x0020 (0x0710 - 0x06F0)
class UTravelStationComponentBase : public UPrimitiveComponent
{
public:
	class FString                                      TravelDataSelection;                                      // 0x06F0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0700(0x0008) MISSED OFFSET
	struct FName                                       TravelDataClassName;                                      // 0x0708(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationComponentBase");
		return ptr;
	}


	bool STATIC_TravelToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, bool bImmediate, class APawn* ActivatingPawn, bool bDisallowLocalTravel);
	bool GetAvailableSpawnLocation(class AActor* ActorForSpawnLocation, bool bTestOnly, bool bForVehicle, struct FVector* SpawnLocation, struct FRotator* SpawnRotation);
	void STATIC_EnumerateValidTravelStation(class UObject* TravelStationObject, TArray<class FString>* OutItems);
};


// Class GbxTravelStation.FastTravelStationComponent
// 0x0030 (0x0740 - 0x0710)
class UFastTravelStationComponent : public UTravelStationComponentBase
{
public:
	class UFastTravelStationData*                      FastTravelData;                                           // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFastTravelStationDiscovered;                            // 0x0718(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFastTravelStationUndiscovered;                          // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationComponent");
		return ptr;
	}


	void OnTravelStationActivated(class AActor* PreviousStation);
	void STATIC_FastTravelToStation(class UObject* WorldContextObject, class UFastTravelStationData* DestinationStationData, class APawn* ActivatingPawn);
	bool DeactivateFastTravel(class UFastTravelStationComponent* FallbackLocation);
	bool ActivateFastTravel();
};


// Class GbxTravelStation.TravelLocationData
// 0x0000 (0x0030 - 0x0030)
class UTravelLocationData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelLocationData");
		return ptr;
	}

};


// Class GbxTravelStation.TravelStationData
// 0x00A8 (0x00D8 - 0x0030)
class UTravelStationData : public UTravelLocationData
{
public:
	struct FName                                       StationMapName;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	TArray<class UGbxCondition*>                       Dependencies;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TSoftObjectPtr<class UTravelStationData>           PreviousStation;                                          // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
	TSoftObjectPtr<class ULevelData>                   OwningLevel;                                              // 0x0070(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
	struct FText                                       DisplayName;                                              // 0x0098(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UGbxUIName*                                  DisplayUIName;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Description;                                              // 0x00B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UGbxUIName*                                  DescriptionUI;                                            // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationData");
		return ptr;
	}


	struct FName GetStationMapName();
};


// Class GbxTravelStation.FastTravelStationData
// 0x0048 (0x0120 - 0x00D8)
class UFastTravelStationData : public UTravelStationData
{
public:
	EFastTravelDirection                               TravelDirection;                                          // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FTransform                                  PlanetTransform;                                          // 0x00E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiscoveredByDefault;                                     // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0111(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationData");
		return ptr;
	}

};


// Class GbxTravelStation.FastTravelStationDebugButton
// 0x0040 (0x02F8 - 0x02B8)
class UFastTravelStationDebugButton : public UGbxUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET
	class UBUTTON*                                     StationButton;                                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  DescriptionText;                                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                ButtonSelectedColor;                                      // 0x02D8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                ButtonUnSelectedColor;                                    // 0x02E8(0x0010) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationDebugButton");
		return ptr;
	}


	void OnStationClicked();
};


// Class GbxTravelStation.FastTravelStationDebugMenu
// 0x0068 (0x0360 - 0x02F8)
class UFastTravelStationDebugMenu : public UGbxDebugMenuSubmenu
{
public:
	class UBUTTON*                                     TravelButton;                                             // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCheckBox*                                   ActiveStationsButton;                                     // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCheckBox*                                   ShowLevelStationsButton;                                  // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  TravelStationList;                                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  ErrorText;                                                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      OptionButtonClass;                                        // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAvailableTravelStation>             AllFastTravelStations;                                    // 0x0328(0x0010) (ZeroConstructor)
	TArray<struct FAvailableTravelStation>             AvailableFastTravelStations;                              // 0x0338(0x0010) (ZeroConstructor)
	TArray<struct FAvailableTravelStation>             AllLevelTravelStations;                                   // 0x0348(0x0010) (ZeroConstructor)
	bool                                               ShowAllFastTravelStations;                                // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationDebugMenu");
		return ptr;
	}


	void OnTravelStationSelectedChanged(class UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked);
	void OnTravelButtonClicked();
	void OnShowLevelStationsStateChanged(bool bIsChecked);
	void OnActiveStationsStateChanged(bool bIsChecked);
};


// Class GbxTravelStation.LevelTravelStationComponent
// 0x0040 (0x0750 - 0x0710)
class ULevelTravelStationComponent : public UTravelStationComponentBase
{
public:
	class ULevelTravelStationData*                     LevelTravelData;                                          // 0x0710(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FTravelDataConditional>              LevelTravelDataList;                                      // 0x0718(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	float                                              TextRenderEvalRate;                                       // 0x0728(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDestinationForTextRenderChanged;                        // 0x0730(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0740(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.LevelTravelStationComponent");
		return ptr;
	}


	class ULevelTravelStationData* GetLevelTravelStationData();
	bool ActivateLevelTravel(class AController* ActivatingController);
};


// Class GbxTravelStation.LevelTravelStationData
// 0x0048 (0x0120 - 0x00D8)
class ULevelTravelStationData : public UTravelStationData
{
public:
	struct FName                                       TravelToMapName;                                          // 0x00D8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      DestinationStationString;                                 // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TSoftObjectPtr<class UTravelStationData>           DestinationStation;                                       // 0x00F0(0x0028) (Edit, DisableEditOnInstance, EditConst)
	bool                                               bVehiclesAllowed;                                         // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVirtualLevel;                                            // 0x0119(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNoOutOfMapWaypoints;                                     // 0x011A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x011B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.LevelTravelStationData");
		return ptr;
	}

};


// Class GbxTravelStation.ResurrectTravelStationData
// 0x0000 (0x00D8 - 0x00D8)
class UResurrectTravelStationData : public UTravelStationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.ResurrectTravelStationData");
		return ptr;
	}

};


// Class GbxTravelStation.TeleportDestinationActor
// 0x0008 (0x0460 - 0x0458)
class ATeleportDestinationActor : public AActor
{
public:
	class UTravelStationResurrectComponent*            ResurrectComponent;                                       // 0x0458(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TeleportDestinationActor");
		return ptr;
	}


	void STATIC_TeleportPlayersToDestination(class UObject* WorldContextObject, class ATeleportDestinationActor* Destination);
};


// Class GbxTravelStation.TravelStationBase
// 0x0000 (0x0458 - 0x0458)
class ATravelStationBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationBase");
		return ptr;
	}

};


// Class GbxTravelStation.TravelStationModuleSettings
// 0x0018 (0x0040 - 0x0028)
class UTravelStationModuleSettings : public UObject
{
public:
	float                                              PlayerHalfHeight;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PlayerRadius;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TravelToStationCountdownTime;                             // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     VehicleExtents;                                           // 0x0034(0x000C) (Edit, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationModuleSettings");
		return ptr;
	}

};


// Class GbxTravelStation.TravelStationResurrectComponent
// 0x0090 (0x07A0 - 0x0710)
class UTravelStationResurrectComponent : public UTravelStationComponentBase
{
public:
	bool                                               StationIsActive;                                          // 0x0710(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultStationToActive;                                   // 0x0711(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bActivateOnEnterArea;                                     // 0x0712(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bResurrectionActive;                                      // 0x0713(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverResurectThere;                                      // 0x0714(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	class UClass*                                      TravelDiscoveredChallenge;                                // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ActivationCylinderTestDelay;                              // 0x0720(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UseActivationCylinder;                                    // 0x0724(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0725(0x0003) MISSED OFFSET
	float                                              ActivationCylinderRadius;                                 // 0x0728(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ActivationCylinderHalfHeight;                             // 0x072C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ActivationCylinderZOffset;                                // 0x0730(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStationResurrectActivated;                              // 0x0738(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStationResurrectDeactivated;                            // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResurrectedAtStation;                                   // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UResurrectTravelStationData*                 ResurrectTravelData;                                      // 0x0768(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0770(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationResurrectComponent");
		return ptr;
	}


	void OnRep_StationIsActive();
	bool ActivateTravelStation(bool bForceActivation);
};


// Class GbxTravelStation.TravelStationSpawnPointInterface
// 0x0000 (0x0028 - 0x0028)
class UTravelStationSpawnPointInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationSpawnPointInterface");
		return ptr;
	}

};


// Class GbxTravelStation.TravelStationSpawnPointComponent
// 0x0020 (0x0740 - 0x0720)
class UTravelStationSpawnPointComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0720(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStationActorSpawned;                                    // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationSpawnPointComponent");
		return ptr;
	}

};


// Class GbxTravelStation.TravelStationVehicleSpawnPointComponent
// 0x0020 (0x0740 - 0x0720)
class UTravelStationVehicleSpawnPointComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0720(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStationActorSpawned;                                    // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTravelStation.TravelStationVehicleSpawnPointComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
