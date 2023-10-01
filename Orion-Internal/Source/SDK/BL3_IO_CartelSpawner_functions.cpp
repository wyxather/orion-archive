// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_CartelSpawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_CartelSpawner.IO_CartelSpawner_C.SetSpawnedEnemyProvoke
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::SetSpawnedEnemyProvoke(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SetSpawnedEnemyProvoke");

	AIO_CartelSpawner_C_SetSpawnedEnemyProvoke_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.HandleTestmapEnemySpawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECartelSpawnerType> SpawnType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::HandleTestmapEnemySpawns(TEnumAsByte<ECartelSpawnerType> SpawnType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.HandleTestmapEnemySpawns");

	AIO_CartelSpawner_C_HandleTestmapEnemySpawns_Params params;
	params.SpawnType = SpawnType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.CheckForSpawnCollisions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 CapsulePos                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::CheckForSpawnCollisions(const struct FVector& CapsulePos, bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.CheckForSpawnCollisions");

	AIO_CartelSpawner_C_CheckForSpawnCollisions_Params params;
	params.CapsulePos = CapsulePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BackupFX_Location              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AIO_CartelSpawner_C::SpawnCartelFX(const struct FVector& BackupFX_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelFX");

	AIO_CartelSpawner_C_SpawnCartelFX_Params params;
	params.BackupFX_Location = BackupFX_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.InitCartelIO
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::InitCartelIO()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.InitCartelIO");

	AIO_CartelSpawner_C_InitCartelIO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnNewKillSquadMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnOptionData*        SpawnOptions                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECartelSpawnerType> SpawnType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::SpawnNewKillSquadMember(class USpawnOptionData* SpawnOptions, TEnumAsByte<ECartelSpawnerType> SpawnType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnNewKillSquadMember");

	AIO_CartelSpawner_C_SpawnNewKillSquadMember_Params params;
	params.SpawnOptions = SpawnOptions;
	params.SpawnType = SpawnType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.BeginCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::BeginCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.BeginCleanup");

	AIO_CartelSpawner_C_BeginCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.UpdateCartelMission
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::UpdateCartelMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.UpdateCartelMission");

	AIO_CartelSpawner_C_UpdateCartelMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.UserConstructionScript");

	AIO_CartelSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AIO_CartelSpawner_C::GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50");

	AIO_CartelSpawner_C_GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AIO_CartelSpawner_C::GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50");

	AIO_CartelSpawner_C_GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_CartelSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.ReceiveBeginPlay");

	AIO_CartelSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelKillSquad
// (BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::SpawnCartelKillSquad()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelKillSquad");

	AIO_CartelSpawner_C_SpawnCartelKillSquad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnUnderbossWithAllies
// (BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::SpawnUnderbossWithAllies()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnUnderbossWithAllies");

	AIO_CartelSpawner_C_SpawnUnderbossWithAllies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.StartAsyncSpawnTrace
// (BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::StartAsyncSpawnTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.StartAsyncSpawnTrace");

	AIO_CartelSpawner_C_StartAsyncSpawnTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.DoStartupPresentation
// (BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::DoStartupPresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.DoStartupPresentation");

	AIO_CartelSpawner_C_DoStartupPresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_Underboss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::OnAllDied_Underboss(class ASpawner* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_Underboss");

	AIO_CartelSpawner_C_OnAllDied_Underboss_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_ThugSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::OnAllDied_ThugSpawner(class ASpawner* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_ThugSpawner");

	AIO_CartelSpawner_C_OnAllDied_ThugSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Underboss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::OnSuspend_Underboss(class ASpawner* Spawner, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Underboss");

	AIO_CartelSpawner_C_OnSuspend_Underboss_Params params;
	params.Spawner = Spawner;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Thug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::OnSuspend_Thug(class ASpawner* Spawner, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Thug");

	AIO_CartelSpawner_C_OnSuspend_Thug_Params params;
	params.Spawner = Spawner;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.BeginFailsafeTimer
// (BlueprintCallable, BlueprintEvent)

void AIO_CartelSpawner_C::BeginFailsafeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.BeginFailsafeTimer");

	AIO_CartelSpawner_C_BeginFailsafeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_ThugSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::OnSpawned_ThugSpawner(class ASpawner* Spawner, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_ThugSpawner");

	AIO_CartelSpawner_C_OnSpawned_ThugSpawner_Params params;
	params.Spawner = Spawner;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_Underboss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::OnSpawned_Underboss(class ASpawner* Spawner, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_Underboss");

	AIO_CartelSpawner_C_OnSpawned_Underboss_Params params;
	params.Spawner = Spawner;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_CartelSpawner.IO_CartelSpawner_C.ExecuteUbergraph_IO_CartelSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_CartelSpawner_C::ExecuteUbergraph_IO_CartelSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_CartelSpawner.IO_CartelSpawner_C.ExecuteUbergraph_IO_CartelSpawner");

	AIO_CartelSpawner_C_ExecuteUbergraph_IO_CartelSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
