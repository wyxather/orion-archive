// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VehicleSpawnMesh_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.AddInstantForce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakVehicle*             OakVehicle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_VehicleSpawnMesh_C::AddInstantForce(class AOakVehicle* OakVehicle, const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.AddInstantForce");

	ABP_VehicleSpawnMesh_C_AddInstantForce_Params params;
	params.OakVehicle = OakVehicle;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawnMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.UserConstructionScript");

	ABP_VehicleSpawnMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.SpawnMesh_TriggerDestruction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawnMesh_C::SpawnMesh_TriggerDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.SpawnMesh_TriggerDestruction");

	ABP_VehicleSpawnMesh_C_SpawnMesh_TriggerDestruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.ExecuteUbergraph_BP_VehicleSpawnMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSpawnMesh_C::ExecuteUbergraph_BP_VehicleSpawnMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C.ExecuteUbergraph_BP_VehicleSpawnMesh");

	ABP_VehicleSpawnMesh_C_ExecuteUbergraph_BP_VehicleSpawnMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
