// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_DeployBarrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.IsHoldingBarrier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::IsHoldingBarrier(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.IsHoldingBarrier");

	UActionSkill_Operative_DeployBarrier_C_IsHoldingBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.RefillBarrierHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::RefillBarrierHealth(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.RefillBarrierHealth");

	UActionSkill_Operative_DeployBarrier_C_RefillBarrierHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GiveBarrierHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          New_Health                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::GiveBarrierHealth(float Health, float* New_Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GiveBarrierHealth");

	UActionSkill_Operative_DeployBarrier_C_GiveBarrierHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Health != nullptr)
		*New_Health = params.New_Health;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Barrier                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::GetBarrierReference(class AActor** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierReference");

	UActionSkill_Operative_DeployBarrier_C_GetBarrierReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Barrier != nullptr)
		*Barrier = params.Barrier;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::GetBarrierHealthPercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierHealthPercent");

	UActionSkill_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ShouldStopAbilityOnPawnSlotComponentAttach
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_DeployBarrier_C::ShouldStopAbilityOnPawnSlotComponentAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ShouldStopAbilityOnPawnSlotComponentAttach");

	UActionSkill_Operative_DeployBarrier_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.SpawnNewBarrier
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AOperativeBarrier*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AOperativeBarrier* UActionSkill_Operative_DeployBarrier_C::SpawnNewBarrier(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.SpawnNewBarrier");

	UActionSkill_Operative_DeployBarrier_C_SpawnNewBarrier_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_Operative_DeployBarrier_C::GetCooldownRestartPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetCooldownRestartPercent");

	UActionSkill_Operative_DeployBarrier_C_GetCooldownRestartPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.StartHoldingBarrier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::StartHoldingBarrier(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.StartHoldingBarrier");

	UActionSkill_Operative_DeployBarrier_C_StartHoldingBarrier_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstable
// (Public, BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DeployBarrier_C::ActivateHighlyUnstable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstable");

	UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
// (Public, BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DeployBarrier_C::ActivateHighlyUnstableFromCarry()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry");

	UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DeployBarrier_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStartActionAbility");

	UActionSkill_Operative_DeployBarrier_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierInHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::DeployNewBarrierInHand(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierInHand");

	UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.TryDropPickup
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DeployBarrier_C::TryDropPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.TryDropPickup");

	UActionSkill_Operative_DeployBarrier_C_TryDropPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_DeployBarrier_C::DeployNewBarrierAroundPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer");

	UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStopActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_DeployBarrier_C::OnStopActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStopActionAbility");

	UActionSkill_Operative_DeployBarrier_C_OnStopActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ExecuteUbergraph_ActionSkill_Operative_DeployBarrier
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_DeployBarrier_C::ExecuteUbergraph_ActionSkill_Operative_DeployBarrier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ExecuteUbergraph_ActionSkill_Operative_DeployBarrier");

	UActionSkill_Operative_DeployBarrier_C_ExecuteUbergraph_ActionSkill_Operative_DeployBarrier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
