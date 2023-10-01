// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnPoint_IO_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnPoint_IO.SpawnPoint_IO_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASpawnPoint_IO_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_IO.SpawnPoint_IO_C.UserConstructionScript");

	ASpawnPoint_IO_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_IO.SpawnPoint_IO_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpawnPoint_IO_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_IO.SpawnPoint_IO_C.ReceiveBeginPlay");

	ASpawnPoint_IO_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawnPoint*             SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnPoint_IO_C::IOSpawner_ActorDied(class ASpawnPoint* SpawnPoint, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorDied");

	ASpawnPoint_IO_C_IOSpawner_ActorDied_Params params;
	params.SpawnPoint = SpawnPoint;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawnPoint*             SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnPoint_IO_C::IOSpawner_ActorSpawned(class ASpawnPoint* SpawnPoint, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorSpawned");

	ASpawnPoint_IO_C_IOSpawner_ActorSpawned_Params params;
	params.SpawnPoint = SpawnPoint;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorFracture
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASpawnPoint_IO_C::IOSpawner_ActorFracture(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorFracture");

	ASpawnPoint_IO_C_IOSpawner_ActorFracture_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnPoint_IO_C::IOSpawner_ActorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_IO.SpawnPoint_IO_C.IOSpawner_ActorDestroyed");

	ASpawnPoint_IO_C_IOSpawner_ActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_IO.SpawnPoint_IO_C.ExecuteUbergraph_SpawnPoint_IO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnPoint_IO_C::ExecuteUbergraph_SpawnPoint_IO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_IO.SpawnPoint_IO_C.ExecuteUbergraph_SpawnPoint_IO");

	ASpawnPoint_IO_C_ExecuteUbergraph_SpawnPoint_IO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
