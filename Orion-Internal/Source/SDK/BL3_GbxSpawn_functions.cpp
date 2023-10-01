// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxSpawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxSpawn.Spawner.SuspendAllActors
// (Final, Native, Public, BlueprintCallable)

void ASpawner::SuspendAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SuspendAllActors");

	ASpawner_SuspendAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.SetTeamOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                   OverrideTeam                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpawner::SetTeamOverride(class UTeam* OverrideTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SetTeamOverride");

	ASpawner_SetTeamOverride_Params params;
	params.OverrideTeam = OverrideTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                   NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpawner::SetTeam(class UTeam* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SetTeam");

	ASpawner_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.SetAlwaysActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAlwaysActive                (Parm, ZeroConstructor, IsPlainOldData)

void ASpawner::SetAlwaysActive(bool bInAlwaysActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.SetAlwaysActive");

	ASpawner_SetAlwaysActive_Params params;
	params.bInAlwaysActive = bInAlwaysActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.ResetSpawning
// (Final, Native, Public, BlueprintCallable)

void ASpawner::ResetSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.ResetSpawning");

	ASpawner_ResetSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.OverrideSpawnerStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnerStyle*           NewSpawnerStyle                (Parm, ZeroConstructor, IsPlainOldData)

void ASpawner::OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.OverrideSpawnerStyle");

	ASpawner_OverrideSpawnerStyle_Params params;
	params.NewSpawnerStyle = NewSpawnerStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.OnSpawningComplete
// (Final, Native, Private)
// Parameters:
// class ASpawner*                Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpawner::OnSpawningComplete(class ASpawner* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.OnSpawningComplete");

	ASpawner_OnSpawningComplete_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.IsSpawnerEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpawner::IsSpawnerEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.IsSpawnerEnabled");

	ASpawner_IsSpawnerEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.Spawner.IsFinishedSpawning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpawner::IsFinishedSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.IsFinishedSpawning");

	ASpawner_IsFinishedSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.Spawner.GetSpawnPointComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnPointComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpawnPointComponent* ASpawner::GetSpawnPointComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnPointComponent");

	ASpawner_GetSpawnPointComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.Spawner.GetSpawnerTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerTeamComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpawnerTeamComponent* ASpawner::GetSpawnerTeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnerTeamComponent");

	ASpawner_GetSpawnerTeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.Spawner.GetSpawnerLinkComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerLinkComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpawnerLinkComponent* ASpawner::GetSpawnerLinkComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnerLinkComponent");

	ASpawner_GetSpawnerLinkComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.Spawner.GetSpawnerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpawnerComponent* ASpawner::GetSpawnerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetSpawnerComponent");

	ASpawner_GetSpawnerComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.Spawner.GetNumAliveActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeExternal               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASpawner::GetNumAliveActors(bool bIncludeExternal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.GetNumAliveActors");

	ASpawner_GetNumAliveActors_Params params;
	params.bIncludeExternal = bIncludeExternal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.Spawner.EnableSpawner
// (Native, Public, BlueprintCallable)

void ASpawner::EnableSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.EnableSpawner");

	ASpawner_EnableSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.DisableSpawner
// (Native, Public, BlueprintCallable)

void ASpawner::DisableSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.DisableSpawner");

	ASpawner_DisableSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.DestroyAllActors
// (Final, Native, Public, BlueprintCallable)

void ASpawner::DestroyAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.DestroyAllActors");

	ASpawner_DestroyAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.CompleteScriptedWarmup
// (Final, Native, Public, BlueprintCallable)

void ASpawner::CompleteScriptedWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.CompleteScriptedWarmup");

	ASpawner_CompleteScriptedWarmup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.Spawner.AreAllDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeExternal               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpawner::AreAllDead(bool bIncludeExternal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.Spawner.AreAllDead");

	ASpawner_AreAllDead_Params params;
	params.bIncludeExternal = bIncludeExternal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.SuspendAllActors
// (Final, Native, Public, BlueprintCallable)

void USpawnerComponent::SuspendAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.SuspendAllActors");

	USpawnerComponent_SuspendAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                   NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerComponent::SetTeam(class UTeam* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.SetTeam");

	USpawnerComponent_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.SetSpawnOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnOptionData*        NewSpawnOptions                (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerComponent::SetSpawnOptions(class USpawnOptionData* NewSpawnOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.SetSpawnOptions");

	USpawnerComponent_SetSpawnOptions_Params params;
	params.NewSpawnOptions = NewSpawnOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.ResetSpawning
// (Native, Public, BlueprintCallable)

void USpawnerComponent::ResetSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.ResetSpawning");

	USpawnerComponent_ResetSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.OverrideSpawnerStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnerStyle*           NewSpawnerStyle                (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerComponent::OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.OverrideSpawnerStyle");

	USpawnerComponent_OverrideSpawnerStyle_Params params;
	params.NewSpawnerStyle = NewSpawnerStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.IsSpawnerStyleClassAllowed
// (Final, Native, Private, Const)
// Parameters:
// class UClass*                  SpawnerStyleClass              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnerComponent::IsSpawnerStyleClassAllowed(class UClass* SpawnerStyleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.IsSpawnerStyleClassAllowed");

	USpawnerComponent_IsSpawnerStyleClassAllowed_Params params;
	params.SpawnerStyleClass = SpawnerStyleClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.IsFinishedSpawning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnerComponent::IsFinishedSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.IsFinishedSpawning");

	USpawnerComponent_IsFinishedSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.IncludeExternalActorsForAllDiedEvent
// (Final, Native, Public, BlueprintCallable)

void USpawnerComponent::IncludeExternalActorsForAllDiedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.IncludeExternalActorsForAllDiedEvent");

	USpawnerComponent_IncludeExternalActorsForAllDiedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.GetSpawnOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnOptionData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpawnOptionData* USpawnerComponent::GetSpawnOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetSpawnOptions");

	USpawnerComponent_GetSpawnOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.GetParentSpawner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpawnerComponent* USpawnerComponent::GetParentSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetParentSpawner");

	USpawnerComponent_GetParentSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.GetNumSuspendedActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USpawnerComponent::GetNumSuspendedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumSuspendedActors");

	USpawnerComponent_GetNumSuspendedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.GetNumSpawnedActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeExternal               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInGroup                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USpawnerComponent::GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumSpawnedActors");

	USpawnerComponent_GetNumSpawnedActors_Params params;
	params.bIncludeExternal = bIncludeExternal;
	params.bInGroup = bInGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.GetNumDeadActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeExternal               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInGroup                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USpawnerComponent::GetNumDeadActors(bool bIncludeExternal, bool bInGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumDeadActors");

	USpawnerComponent_GetNumDeadActors_Params params;
	params.bIncludeExternal = bIncludeExternal;
	params.bInGroup = bInGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.GetNumAliveActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeExternal               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInGroup                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USpawnerComponent::GetNumAliveActors(bool bIncludeExternal, bool bInGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetNumAliveActors");

	USpawnerComponent_GetNumAliveActors_Params params;
	params.bIncludeExternal = bIncludeExternal;
	params.bInGroup = bInGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.GetAliveActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> USpawnerComponent::GetAliveActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.GetAliveActors");

	USpawnerComponent_GetAliveActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerComponent.EnableSpawner
// (Final, Native, Public, BlueprintCallable)

void USpawnerComponent::EnableSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.EnableSpawner");

	USpawnerComponent_EnableSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.DisableSpawner
// (Final, Native, Public, BlueprintCallable)

void USpawnerComponent::DisableSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.DisableSpawner");

	USpawnerComponent_DisableSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.DestroyAllActors
// (Final, Native, Public, BlueprintCallable)

void USpawnerComponent::DestroyAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.DestroyAllActors");

	USpawnerComponent_DestroyAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.CompleteScriptedWarmup
// (Final, Native, Public, BlueprintCallable)

void USpawnerComponent::CompleteScriptedWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.CompleteScriptedWarmup");

	USpawnerComponent_CompleteScriptedWarmup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerComponent.AreAllDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeExternal               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInGroup                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnerComponent::AreAllDead(bool bIncludeExternal, bool bInGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerComponent.AreAllDead");

	USpawnerComponent_AreAllDead_Params params;
	params.bIncludeExternal = bIncludeExternal;
	params.bInGroup = bInGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnPoint.SetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            NewTag                         (Parm)

void ASpawnPoint::SetSpawnStyleTag(const struct FGameplayTag& NewTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.SetSpawnStyleTag");

	ASpawnPoint_SetSpawnStyleTag_Params params;
	params.NewTag = NewTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPoint.ResetStretchPoint
// (Final, Native, Public, BlueprintCallable)

void ASpawnPoint::ResetStretchPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.ResetStretchPoint");

	ASpawnPoint_ResetStretchPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPoint.GetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag ASpawnPoint::GetSpawnStyleTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.GetSpawnStyleTag");

	ASpawnPoint_GetSpawnStyleTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnPoint.EnableSpawnPoint
// (Final, Native, Public, BlueprintCallable)

void ASpawnPoint::EnableSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.EnableSpawnPoint");

	ASpawnPoint_EnableSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPoint.DisableSpawnPoint
// (Final, Native, Public, BlueprintCallable)

void ASpawnPoint::DisableSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPoint.DisableSpawnPoint");

	ASpawnPoint_DisableSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.GbxAction_SpawnAnim.K2_GetSpawnPoint
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGbxAction_SpawnAnim::K2_GetSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.GbxAction_SpawnAnim.K2_GetSpawnPoint");

	UGbxAction_SpawnAnim_K2_GetSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnDLCScript.OnAllSpawned
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*       SpawnerComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USpawnDLCScript::OnAllSpawned(class USpawnerComponent* SpawnerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnAllSpawned");

	USpawnDLCScript_OnAllSpawned_Params params;
	params.SpawnerComponent = SpawnerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnDLCScript.OnAllDied
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*       SpawnerComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USpawnDLCScript::OnAllDied(class USpawnerComponent* SpawnerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnAllDied");

	USpawnDLCScript_OnAllDied_Params params;
	params.SpawnerComponent = SpawnerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnDLCScript.OnActorSpawned
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*       SpawnerComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCScript::OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnActorSpawned");

	USpawnDLCScript_OnActorSpawned_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnDLCScript.OnActorDied
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*       SpawnerComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCScript::OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnDLCScript.OnActorDied");

	USpawnDLCScript_OnActorDied_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.SuspendSpawnedActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerBlueprintLibrary::STATIC_SuspendSpawnedActors(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SuspendSpawnedActors");

	USpawnerBlueprintLibrary_SuspendSpawnedActors_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class USpawnOptionData*        SpawnOptions                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawnOptionsTransform(class AActor* Context, class USpawnOptionData* SpawnOptions, const struct FTransform& SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsTransform");

	USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsTransform_Params params;
	params.Context = Context;
	params.SpawnOptions = SpawnOptions;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnManagerAsyncRequest Request                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawnOptionsAsync(class UObject* WorldContext, const struct FSpawnManagerAsyncRequest& Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsAsync");

	USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsAsync_Params params;
	params.WorldContext = WorldContext;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class USpawnOptionData*        SpawnOptions                   (Parm, ZeroConstructor, IsPlainOldData)
// class USpawnPointComponent*    SpawnPointComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawnOptions(class AActor* Context, class USpawnOptionData* SpawnOptions, class USpawnPointComponent* SpawnPointComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptions");

	USpawnerBlueprintLibrary_SpawnActorWithSpawnOptions_Params params;
	params.Context = Context;
	params.SpawnOptions = SpawnOptions;
	params.SpawnPointComponent = SpawnPointComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class USpawnFactory*           Factory                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USpawnPointComponent*    SpawnPointComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USpawnerComponent*       SpawnerComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USpawnerBlueprintLibrary::STATIC_SpawnActorWithSpawner(class AActor* Context, class USpawnFactory* Factory, class USpawnPointComponent* SpawnPointComponent, class USpawnerComponent* SpawnerComponent, class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawner");

	USpawnerBlueprintLibrary_SpawnActorWithSpawner_Params params;
	params.Context = Context;
	params.Factory = Factory;
	params.SpawnPointComponent = SpawnPointComponent;
	params.SpawnerComponent = SpawnerComponent;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.SetMaxSpawnCost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewMaxSpawnCost                (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerBlueprintLibrary::STATIC_SetMaxSpawnCost(class UObject* WorldContextObject, int NewMaxSpawnCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.SetMaxSpawnCost");

	USpawnerBlueprintLibrary_SetMaxSpawnCost_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewMaxSpawnCost = NewMaxSpawnCost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.RestoreSuspendedActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerBlueprintLibrary::STATIC_RestoreSuspendedActors(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.RestoreSuspendedActors");

	USpawnerBlueprintLibrary_RestoreSuspendedActors_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.RemoveActorFromSpawnSystem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerBlueprintLibrary::STATIC_RemoveActorFromSpawnSystem(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.RemoveActorFromSpawnSystem");

	USpawnerBlueprintLibrary_RemoveActorFromSpawnSystem_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.CancelSpawnActorWithOptionsAsyncRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)

void USpawnerBlueprintLibrary::STATIC_CancelSpawnActorWithOptionsAsyncRequest(class UObject* WorldContext, int RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerBlueprintLibrary.CancelSpawnActorWithOptionsAsyncRequest");

	USpawnerBlueprintLibrary_CancelSpawnActorWithOptionsAsyncRequest_Params params;
	params.WorldContext = WorldContext;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnerStyleFactory_Bunch.IsFactoryClassAllowed
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                  FactoryClass                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnerStyleFactory_Bunch::IsFactoryClassAllowed(class UClass* FactoryClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerStyleFactory_Bunch.IsFactoryClassAllowed");

	USpawnerStyleFactory_Bunch_IsFactoryClassAllowed_Params params;
	params.FactoryClass = FactoryClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerStyleFactory_Den.IsFactoryClassAllowed
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                  FactoryClass                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnerStyleFactory_Den::IsFactoryClassAllowed(class UClass* FactoryClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerStyleFactory_Den.IsFactoryClassAllowed");

	USpawnerStyleFactory_Den_IsFactoryClassAllowed_Params params;
	params.FactoryClass = FactoryClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnerStyleFactory_Single.IsFactoryClassAllowed
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                  FactoryClass                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnerStyleFactory_Single::IsFactoryClassAllowed(class UClass* FactoryClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnerStyleFactory_Single.IsFactoryClassAllowed");

	USpawnerStyleFactory_Single_IsFactoryClassAllowed_Params params;
	params.FactoryClass = FactoryClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnFactory_Generic.ShouldSkipActorProperty
// (Final, Native, Static, Private)
// Parameters:
// class UProperty*               ActorProperty                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnFactory_Generic::STATIC_ShouldSkipActorProperty(class UProperty* ActorProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnFactory_Generic.ShouldSkipActorProperty");

	USpawnFactory_Generic_ShouldSkipActorProperty_Params params;
	params.ActorProperty = ActorProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnManager.ActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void USpawnManager::ActorDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnManager.ActorDestroyed");

	USpawnManager_ActorDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPointComponent.SetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            NewTag                         (Parm)

void USpawnPointComponent::SetSpawnStyleTag(const struct FGameplayTag& NewTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.SetSpawnStyleTag");

	USpawnPointComponent_SetSpawnStyleTag_Params params;
	params.NewTag = NewTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPointComponent.ResetStretchPoint
// (Final, Native, Public, BlueprintCallable)

void USpawnPointComponent::ResetStretchPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.ResetStretchPoint");

	USpawnPointComponent_ResetStretchPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPointComponent.HasSpawnAITreeTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpawnPointComponent::HasSpawnAITreeTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.HasSpawnAITreeTag");

	USpawnPointComponent_HasSpawnAITreeTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnPointComponent.GetStretchyPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform USpawnPointComponent::GetStretchyPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.GetStretchyPoint");

	USpawnPointComponent_GetStretchyPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnPointComponent.GetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag USpawnPointComponent::GetSpawnStyleTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.GetSpawnStyleTag");

	USpawnPointComponent_GetSpawnStyleTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnPointComponent.GetSpawnAITreeTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag USpawnPointComponent::GetSpawnAITreeTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.GetSpawnAITreeTag");

	USpawnPointComponent_GetSpawnAITreeTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxSpawn.SpawnPointComponent.EnableSpawnPoint
// (Final, Native, Public, BlueprintCallable)

void USpawnPointComponent::EnableSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.EnableSpawnPoint");

	USpawnPointComponent_EnableSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPointComponent.DisableSpawnPoint
// (Final, Native, Public, BlueprintCallable)

void USpawnPointComponent::DisableSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPointComponent.DisableSpawnPoint");

	USpawnPointComponent_DisableSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPreviewComponent.OnReplayAction
// (Final, Native, Private)

void USpawnPreviewComponent::OnReplayAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPreviewComponent.OnReplayAction");

	USpawnPreviewComponent_OnReplayAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpawn.SpawnPreviewComponent.OnCycleActor
// (Final, Native, Private)
// Parameters:
// ECycleDirection                Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void USpawnPreviewComponent::OnCycleActor(ECycleDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpawn.SpawnPreviewComponent.OnCycleActor");

	USpawnPreviewComponent_OnCycleActor_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
