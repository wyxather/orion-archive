// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_DigiClone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Digiclone                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::GetDigiCloneReference(class AActor** Digiclone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneReference");

	UActionSkill_Operative_DigiClone_C_GetDigiCloneReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Digiclone != nullptr)
		*Digiclone = params.Digiclone;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Is DigiClone Active
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::Is_DigiClone_Active(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Is DigiClone Active");

	UActionSkill_Operative_DigiClone_C_Is_DigiClone_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetQueryParamsForCloneSwapLocationAttempt
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Attempt                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         Params                         (Parm, OutParm)
// class AActor*                  QueryContext                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::GetQueryParamsForCloneSwapLocationAttempt(int* Attempt, struct FEnvQueryParams* Params, class AActor** QueryContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetQueryParamsForCloneSwapLocationAttempt");

	UActionSkill_Operative_DigiClone_C_GetQueryParamsForCloneSwapLocationAttempt_Params params;
	params.Attempt = Attempt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
	if (QueryContext != nullptr)
		*QueryContext = params.QueryContext;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldStopAbilityOnPawnSlotComponentAttach
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_DigiClone_C::ShouldStopAbilityOnPawnSlotComponentAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldStopAbilityOnPawnSlotComponentAttach");

	UActionSkill_Operative_DigiClone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PlayDigiCloneSpawnFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPChar_DigiClone_Base_C* NewClone                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::PlayDigiCloneSpawnFX(class ABPChar_DigiClone_Base_C* NewClone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PlayDigiCloneSpawnFX");

	UActionSkill_Operative_DigiClone_C_PlayDigiCloneSpawnFX_Params params;
	params.NewClone = NewClone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PayDigiCloneSpawnCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GrenadeSpawnCost               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::PayDigiCloneSpawnCost(int GrenadeSpawnCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PayDigiCloneSpawnCost");

	UActionSkill_Operative_DigiClone_C_PayDigiCloneSpawnCost_Params params;
	params.GrenadeSpawnCost = GrenadeSpawnCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneGrenadeSpawnCost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::GetDigiCloneGrenadeSpawnCost(int* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneGrenadeSpawnCost");

	UActionSkill_Operative_DigiClone_C_GetDigiCloneGrenadeSpawnCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigicloneClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            GrenadeSpawnCost               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::GetDigicloneClass(int GrenadeSpawnCost, class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigicloneClass");

	UActionSkill_Operative_DigiClone_C_GetDigicloneClass_Params params;
	params.GrenadeSpawnCost = GrenadeSpawnCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.DoBurst
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::DoBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.DoBurst");

	UActionSkill_Operative_DigiClone_C_DoBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.TryJustAcceptRefund
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_DigiClone_C::TryJustAcceptRefund(float* Damage, struct FVector* HitLocation, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.TryJustAcceptRefund");

	UActionSkill_Operative_DigiClone_C_TryJustAcceptRefund_Params params;
	params.Damage = Damage;
	params.HitLocation = HitLocation;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SpawnNewDigiclone
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AOakCharacter*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AOakCharacter* UActionSkill_Operative_DigiClone_C::SpawnNewDigiclone(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SpawnNewDigiclone");

	UActionSkill_Operative_DigiClone_C_SpawnNewDigiclone_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartDistractionPrinciple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::StartDistractionPrinciple()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartDistractionPrinciple");

	UActionSkill_Operative_DigiClone_C_StartDistractionPrinciple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldAbortActivation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  OutAbortCode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_DigiClone_C::ShouldAbortActivation(unsigned char* OutAbortCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldAbortActivation");

	UActionSkill_Operative_DigiClone_C_ShouldAbortActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAbortCode != nullptr)
		*OutAbortCode = params.OutAbortCode;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_Operative_DigiClone_C::GetCooldownRestartPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetCooldownRestartPercent");

	UActionSkill_Operative_DigiClone_C_GetCooldownRestartPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Add Swap Places Modifier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::Add_Swap_Places_Modifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Add Swap Places Modifier");

	UActionSkill_Operative_DigiClone_C_Add_Swap_Places_Modifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Corsican
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::Corsican(float Damage, class APawn* DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Corsican");

	UActionSkill_Operative_DigiClone_C_Corsican_Params params;
	params.Damage = Damage;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnStartActionAbility");

	UActionSkill_Operative_DigiClone_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SwapPlaces
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECloneSwapReason*              Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::SwapPlaces(ECloneSwapReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SwapPlaces");

	UActionSkill_Operative_DigiClone_C_SwapPlaces_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ReleaseDigiclone
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter**          Digiclone                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::ReleaseDigiclone(class AOakCharacter** Digiclone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ReleaseDigiclone");

	UActionSkill_Operative_DigiClone_C_ReleaseDigiclone_Params params;
	params.Digiclone = Digiclone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCorsicanDamage
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::OnCorsicanDamage(float* Damage, class APawn** DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCorsicanDamage");

	UActionSkill_Operative_DigiClone_C_OnCorsicanDamage_Params params;
	params.Damage = Damage;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.BeginDetonateClone
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::BeginDetonateClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.BeginDetonateClone");

	UActionSkill_Operative_DigiClone_C_BeginDetonateClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.CancelDetonateClone
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::CancelDetonateClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.CancelDetonateClone");

	UActionSkill_Operative_DigiClone_C_CancelDetonateClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.NotifyPanicButtonTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::NotifyPanicButtonTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.NotifyPanicButtonTriggered");

	UActionSkill_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Just Accept It Timer Done
// (BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::Just_Accept_It_Timer_Done()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Just Accept It Timer Done");

	UActionSkill_Operative_DigiClone_C_Just_Accept_It_Timer_Done_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapStarted
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::OnCloneSwapStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapStarted");

	UActionSkill_Operative_DigiClone_C_OnCloneSwapStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapStarted
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::OnPlayerSwapStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapStarted");

	UActionSkill_Operative_DigiClone_C_OnPlayerSwapStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapSucceeded
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::OnPlayerSwapSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapSucceeded");

	UActionSkill_Operative_DigiClone_C_OnPlayerSwapSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartSeperationAnxietyNova
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::StartSeperationAnxietyNova(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartSeperationAnxietyNova");

	UActionSkill_Operative_DigiClone_C_StartSeperationAnxietyNova_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapSucceeded
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::OnCloneSwapSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapSucceeded");

	UActionSkill_Operative_DigiClone_C_OnCloneSwapSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapFailed
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::OnPlayerSwapFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapFailed");

	UActionSkill_Operative_DigiClone_C_OnPlayerSwapFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapFailed
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DigiClone_C::OnCloneSwapFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapFailed");

	UActionSkill_Operative_DigiClone_C_OnCloneSwapFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ExecuteUbergraph_ActionSkill_Operative_DigiClone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DigiClone_C::ExecuteUbergraph_ActionSkill_Operative_DigiClone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ExecuteUbergraph_ActionSkill_Operative_DigiClone");

	UActionSkill_Operative_DigiClone_C_ExecuteUbergraph_ActionSkill_Operative_DigiClone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
