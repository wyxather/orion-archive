// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCSCript_Cartels_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorDied
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent**      SpawnerComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCSCript_Cartels_C::OnActorDied(class USpawnerComponent** SpawnerComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorDied");

	USpawnDLCSCript_Cartels_C_OnActorDied_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorSpawned
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent**      SpawnerComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCSCript_Cartels_C::OnActorSpawned(class USpawnerComponent** SpawnerComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorSpawned");

	USpawnDLCSCript_Cartels_C_OnActorSpawned_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
