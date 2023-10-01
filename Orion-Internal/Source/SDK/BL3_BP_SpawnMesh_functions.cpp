// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SpawnMesh_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnMesh.BP_SpawnMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh.BP_SpawnMesh_C.UserConstructionScript");

	ABP_SpawnMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnMesh.BP_SpawnMesh_C.SpawnMesh_TriggerDestruction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnMesh_C::SpawnMesh_TriggerDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh.BP_SpawnMesh_C.SpawnMesh_TriggerDestruction");

	ABP_SpawnMesh_C_SpawnMesh_TriggerDestruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnMesh.BP_SpawnMesh_C.ExecuteUbergraph_BP_SpawnMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnMesh_C::ExecuteUbergraph_BP_SpawnMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh.BP_SpawnMesh_C.ExecuteUbergraph_BP_SpawnMesh");

	ABP_SpawnMesh_C_ExecuteUbergraph_BP_SpawnMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
