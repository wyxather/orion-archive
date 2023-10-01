// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_VehicleDestinationIndicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckIfVehicleMeetsPositionalRequirements
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakVehicle*             Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::CheckIfVehicleMeetsPositionalRequirements(class AOakVehicle* Vehicle, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckIfVehicleMeetsPositionalRequirements");

	AIO_VehicleDestinationIndicator_C_CheckIfVehicleMeetsPositionalRequirements_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.UnlockVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::UnlockVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.UnlockVehicle");

	AIO_VehicleDestinationIndicator_C_UnlockVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SetNewClonedVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::SetNewClonedVehicle(class APawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SetNewClonedVehicle");

	AIO_VehicleDestinationIndicator_C_SetNewClonedVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckIfVehicleMeetRequirements
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakVehicle*             Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Meets_Requirements             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::CheckIfVehicleMeetRequirements(class AOakVehicle* Vehicle, bool* Meets_Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckIfVehicleMeetRequirements");

	AIO_VehicleDestinationIndicator_C_CheckIfVehicleMeetRequirements_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meets_Requirements != nullptr)
		*Meets_Requirements = params.Meets_Requirements;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SetVehicleDestinationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::SetVehicleDestinationState(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SetVehicleDestinationState");

	AIO_VehicleDestinationIndicator_C_SetVehicleDestinationState_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.UserConstructionScript");

	AIO_VehicleDestinationIndicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.Timeline_0__FinishedFunc");

	AIO_VehicleDestinationIndicator_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.Timeline_0__UpdateFunc");

	AIO_VehicleDestinationIndicator_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_4_MissionObserverMissionObjectiveUpdate__DelegateSignature_IO_VehicleDestinationIndicator
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_4_MissionObserverMissionObjectiveUpdate__DelegateSignature_IO_VehicleDestinationIndicator(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_4_MissionObserverMissionObjectiveUpdate__DelegateSignature_IO_VehicleDestinationIndicator");

	AIO_VehicleDestinationIndicator_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_4_MissionObserverMissionObjectiveUpdate__DelegateSignature_IO_VehicleDestinationIndicator_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnEnabled");

	AIO_VehicleDestinationIndicator_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnDisabled");

	AIO_VehicleDestinationIndicator_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_IO_VehicleDestinationIndicator
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_IO_VehicleDestinationIndicator(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_IO_VehicleDestinationIndicator");

	AIO_VehicleDestinationIndicator_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_IO_VehicleDestinationIndicator_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BreakVehicleSearch
// (BlueprintCallable, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::BreakVehicleSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BreakVehicleSearch");

	AIO_VehicleDestinationIndicator_C_BreakVehicleSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SearchForClosestPlayerVehicle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::SearchForClosestPlayerVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.SearchForClosestPlayerVehicle");

	AIO_VehicleDestinationIndicator_C_SearchForClosestPlayerVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CloneNewVehicle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::CloneNewVehicle(class APawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CloneNewVehicle");

	AIO_VehicleDestinationIndicator_C_CloneNewVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckForVehicle
// (BlueprintCallable, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::CheckForVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.CheckForVehicle");

	AIO_VehicleDestinationIndicator_C_CheckForVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BreakCheckForVehicle
// (BlueprintCallable, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::BreakCheckForVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BreakCheckForVehicle");

	AIO_VehicleDestinationIndicator_C_BreakCheckForVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__NewVar_0_K2Node_ComponentBoundEvent_3_SpawnerEvent__DelegateSignature_IO_VehicleDestinationIndicator
// (BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::BndEvt__NewVar_0_K2Node_ComponentBoundEvent_3_SpawnerEvent__DelegateSignature_IO_VehicleDestinationIndicator(class ASpawner* Spawner, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.BndEvt__NewVar_0_K2Node_ComponentBoundEvent_3_SpawnerEvent__DelegateSignature_IO_VehicleDestinationIndicator");

	AIO_VehicleDestinationIndicator_C_BndEvt__NewVar_0_K2Node_ComponentBoundEvent_3_SpawnerEvent__DelegateSignature_IO_VehicleDestinationIndicator_Params params;
	params.Spawner = Spawner;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnLStateLocked
// (Event, Protected, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::OnLStateLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnLStateLocked");

	AIO_VehicleDestinationIndicator_C_OnLStateLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnLStateUnlocked
// (Event, Protected, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::OnLStateUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.OnLStateUnlocked");

	AIO_VehicleDestinationIndicator_C_OnLStateUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_VehicleDestinationIndicator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.ReceiveBeginPlay");

	AIO_VehicleDestinationIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.ExecuteUbergraph_IO_VehicleDestinationIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::ExecuteUbergraph_IO_VehicleDestinationIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.ExecuteUbergraph_IO_VehicleDestinationIndicator");

	AIO_VehicleDestinationIndicator_C_ExecuteUbergraph_IO_VehicleDestinationIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.VehicleArrivedAtDestination__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_VehicleDestinationIndicator_C::VehicleArrivedAtDestination__DelegateSignature(class APawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_VehicleDestinationIndicator.IO_VehicleDestinationIndicator_C.VehicleArrivedAtDestination__DelegateSignature");

	AIO_VehicleDestinationIndicator_C_VehicleArrivedAtDestination__DelegateSignature_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
