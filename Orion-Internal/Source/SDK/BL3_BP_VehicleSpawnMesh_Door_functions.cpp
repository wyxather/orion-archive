// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VehicleSpawnMesh_Door_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.SetArtStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_VehicleSpawnMesh_DoorStyle> VehicleSpawnMeshStyle          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSpawnMesh_Door_C::SetArtStyle(TEnumAsByte<Enum_VehicleSpawnMesh_DoorStyle> VehicleSpawnMeshStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.SetArtStyle");

	ABP_VehicleSpawnMesh_Door_C_SetArtStyle_Params params;
	params.VehicleSpawnMeshStyle = VehicleSpawnMeshStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawnMesh_Door_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.UserConstructionScript");

	ABP_VehicleSpawnMesh_Door_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleSpawnMesh_Door_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ReceiveBeginPlay");

	ABP_VehicleSpawnMesh_Door_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.OnActorSpawned_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawnPoint*             SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSpawnMesh_Door_C::OnActorSpawned_Event_1(class ASpawnPoint* SpawnPoint, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.OnActorSpawned_Event_1");

	ABP_VehicleSpawnMesh_Door_C_OnActorSpawned_Event_1_Params params;
	params.SpawnPoint = SpawnPoint;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.BndEvt__GbxAction_K2Node_ComponentBoundEvent_0_ActionComponentStopDelegate__DelegateSignature_BP_VehicleSpawnMesh_Door
// (BlueprintEvent)
// Parameters:
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSpawnMesh_Door_C::BndEvt__GbxAction_K2Node_ComponentBoundEvent_0_ActionComponentStopDelegate__DelegateSignature_BP_VehicleSpawnMesh_Door(class UClass* Action, EGbxActionEndState EndState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.BndEvt__GbxAction_K2Node_ComponentBoundEvent_0_ActionComponentStopDelegate__DelegateSignature_BP_VehicleSpawnMesh_Door");

	ABP_VehicleSpawnMesh_Door_C_BndEvt__GbxAction_K2Node_ComponentBoundEvent_0_ActionComponentStopDelegate__DelegateSignature_BP_VehicleSpawnMesh_Door_Params params;
	params.Action = Action;
	params.EndState = EndState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ReleaseVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawnMesh_Door_C::ReleaseVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ReleaseVehicle");

	ABP_VehicleSpawnMesh_Door_C_ReleaseVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ExecuteUbergraph_BP_VehicleSpawnMesh_Door
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSpawnMesh_Door_C::ExecuteUbergraph_BP_VehicleSpawnMesh_Door(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C.ExecuteUbergraph_BP_VehicleSpawnMesh_Door");

	ABP_VehicleSpawnMesh_Door_C_ExecuteUbergraph_BP_VehicleSpawnMesh_Door_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
