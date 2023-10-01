#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_VehicleDestinationIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckIfVehicleMeetsPositionalRequirements
struct AIO_VehicleDestinationIndicator_C_CheckIfVehicleMeetsPositionalRequirements_Params
{
	class AOakVehicle*                                 Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.UnlockVehicle
struct AIO_VehicleDestinationIndicator_C_UnlockVehicle_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SetNewClonedVehicle
struct AIO_VehicleDestinationIndicator_C_SetNewClonedVehicle_Params
{
	class APawn*                                       Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckIfVehicleMeetRequirements
struct AIO_VehicleDestinationIndicator_C_CheckIfVehicleMeetRequirements_Params
{
	class AOakVehicle*                                 Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Meets_Requirements;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SetVehicleDestinationState
struct AIO_VehicleDestinationIndicator_C_SetVehicleDestinationState_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.UserConstructionScript
struct AIO_VehicleDestinationIndicator_C_UserConstructionScript_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.Timeline_0__FinishedFunc
struct AIO_VehicleDestinationIndicator_C_Timeline_0__FinishedFunc_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.Timeline_0__UpdateFunc
struct AIO_VehicleDestinationIndicator_C_Timeline_0__UpdateFunc_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_4_MissionObserverMissionObjectiveUpdate__DelegateSignature_IO_VehicleDestinationIndicator
struct AIO_VehicleDestinationIndicator_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_4_MissionObserverMissionObjectiveUpdate__DelegateSignature_IO_VehicleDestinationIndicator_Params
{
	struct FMissionObjectiveReference                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnEnabled
struct AIO_VehicleDestinationIndicator_C_OnEnabled_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnDisabled
struct AIO_VehicleDestinationIndicator_C_OnDisabled_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_IO_VehicleDestinationIndicator
struct AIO_VehicleDestinationIndicator_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_IO_VehicleDestinationIndicator_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BreakVehicleSearch
struct AIO_VehicleDestinationIndicator_C_BreakVehicleSearch_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SearchForClosestPlayerVehicle
struct AIO_VehicleDestinationIndicator_C_SearchForClosestPlayerVehicle_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CloneNewVehicle
struct AIO_VehicleDestinationIndicator_C_CloneNewVehicle_Params
{
	class APawn*                                       Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckForVehicle
struct AIO_VehicleDestinationIndicator_C_CheckForVehicle_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BreakCheckForVehicle
struct AIO_VehicleDestinationIndicator_C_BreakCheckForVehicle_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__NewVar_0_K2Node_ComponentBoundEvent_3_SpawnerEvent__DelegateSignature_IO_VehicleDestinationIndicator
struct AIO_VehicleDestinationIndicator_C_BndEvt__NewVar_0_K2Node_ComponentBoundEvent_3_SpawnerEvent__DelegateSignature_IO_VehicleDestinationIndicator_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnLStateLocked
struct AIO_VehicleDestinationIndicator_C_OnLStateLocked_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnLStateUnlocked
struct AIO_VehicleDestinationIndicator_C_OnLStateUnlocked_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.ReceiveBeginPlay
struct AIO_VehicleDestinationIndicator_C_ReceiveBeginPlay_Params
{
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.ExecuteUbergraph_IO_VehicleDestinationIndicator
struct AIO_VehicleDestinationIndicator_C_ExecuteUbergraph_IO_VehicleDestinationIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.VehicleArrivedAtDestination__DelegateSignature
struct AIO_VehicleDestinationIndicator_C_VehicleArrivedAtDestination__DelegateSignature_Params
{
	class APawn*                                       Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
