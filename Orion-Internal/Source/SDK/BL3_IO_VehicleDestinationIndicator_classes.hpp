#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_VehicleDestinationIndicator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C
// 0x010A (0x065A - 0x0550)
class AIO_VehicleDestinationIndicator_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Vehicle_Destination_Indicator;                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_LerpPercentage_640EC38C4C9E0FCC6568BF8169BBDBAC;// 0x0590(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_640EC38C4C9E0FCC6568BF8169BBDBAC;   // 0x0594(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               ConditionToCareAbout;                                     // 0x05A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WaypointConditionSetByConditionToCareAbout;               // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VehicleDetectionLocked;                                   // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x05AA(0x0006) MISSED OFFSET
	class APawn*                                       ClonedVehicle;                                            // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                PlayerVehicleSearchTimer;                                 // 0x05B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                CheckForVehicleTimer;                                     // 0x05C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakVehicle*                                 DetectedVehicle;                                          // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       RequiredVehicleType;                                      // 0x05D0(0x0028) (Edit, BlueprintVisible)
	TArray<TSoftObjectPtr<class UClass>>               RequiredPassengers;                                       // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    VehicleArrivedAtDestination;                              // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AOakVehicleSpawner*                          SpawnPointForRequiredVehicle;                             // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      SpawnedRequiredVehicle;                                   // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleDestinationSuceeded;                               // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	float                                              FacingVectorTolerance;                                    // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationTolerance;                                        // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedTolerance;                                           // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMissionEventReference                      MissionEventToSendOnDelivery;                             // 0x0638(0x0010) (Edit, BlueprintVisible)
	TArray<TSoftObjectPtr<class UVehiclePartData>>     RequiredVehicleParts;                                     // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               RequireVehicleStop;                                       // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RequireVehicleOrientation;                                // 0x0659(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C");
		return ptr;
	}


	void CheckIfVehicleMeetsPositionalRequirements(class AOakVehicle* Vehicle, bool* Success);
	void UnlockVehicle();
	void SetNewClonedVehicle(class APawn* Vehicle);
	void CheckIfVehicleMeetRequirements(class AOakVehicle* Vehicle, bool* Meets_Requirements);
	void SetVehicleDestinationState(bool On);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_4_MissionObserverMissionObjectiveUpdate__DelegateSignature_IO_VehicleDestinationIndicator(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OnEnabled();
	void OnDisabled();
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_IO_VehicleDestinationIndicator(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BreakVehicleSearch();
	void SearchForClosestPlayerVehicle();
	void CloneNewVehicle(class APawn* Vehicle);
	void CheckForVehicle();
	void BreakCheckForVehicle();
	void BndEvt__NewVar_0_K2Node_ComponentBoundEvent_3_SpawnerEvent__DelegateSignature_IO_VehicleDestinationIndicator(class ASpawner* Spawner, class AActor* Actor);
	void OnLStateLocked();
	void OnLStateUnlocked();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_IO_VehicleDestinationIndicator(int EntryPoint);
	void VehicleArrivedAtDestination__DelegateSignature(class APawn* Vehicle);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
