// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCScript_BloodyHarvest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.GetSpawnTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ActorThatDied                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Output                         (Parm, OutParm, IsPlainOldData)

void USpawnDLCScript_BloodyHarvest_C::GetSpawnTransform(class AActor* ActorThatDied, struct FTransform* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.GetSpawnTransform");

	USpawnDLCScript_BloodyHarvest_C_GetSpawnTransform_Params params;
	params.ActorThatDied = ActorThatDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.SpawnEnemyAsHaunted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCScript_BloodyHarvest_C::SpawnEnemyAsHaunted(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.SpawnEnemyAsHaunted");

	USpawnDLCScript_BloodyHarvest_C_SpawnEnemyAsHaunted_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorSpawned
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent**      SpawnerComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCScript_BloodyHarvest_C::OnActorSpawned(class USpawnerComponent** SpawnerComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorSpawned");

	USpawnDLCScript_BloodyHarvest_C_OnActorSpawned_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorDied
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent**      SpawnerComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCScript_BloodyHarvest_C::OnActorDied(class USpawnerComponent** SpawnerComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorDied");

	USpawnDLCScript_BloodyHarvest_C_OnActorDied_Params params;
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
