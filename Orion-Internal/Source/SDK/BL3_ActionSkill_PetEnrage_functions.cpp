// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_PetEnrage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ShouldStopAbilityOnPawnSlotComponentAttach
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_PetEnrage_C::ShouldStopAbilityOnPawnSlotComponentAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ShouldStopAbilityOnPawnSlotComponentAttach");

	UActionSkill_PetEnrage_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UActionSkill_PetEnrage_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.CalculateAbilityState");

	UActionSkill_PetEnrage_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetActionRegisters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FGbxActionRegister> res                            (Parm, OutParm, ZeroConstructor)

void UActionSkill_PetEnrage_C::GetActionRegisters(const struct FVector& InLocation, TArray<struct FGbxActionRegister>* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetActionRegisters");

	UActionSkill_PetEnrage_C_GetActionRegisters_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_PetEnrage_C::GetCooldownRestartPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetCooldownRestartPercent");

	UActionSkill_PetEnrage_C_GetCooldownRestartPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetMaxCooldownModifier
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EGbxAttributeModifierType      ModifierType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_PetEnrage_C::GetMaxCooldownModifier(EGbxAttributeModifierType* ModifierType, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetMaxCooldownModifier");

	UActionSkill_PetEnrage_C_GetMaxCooldownModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierType != nullptr)
		*ModifierType = params.ModifierType;
	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionSkill_PetEnrage_C::GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A");

	UActionSkill_PetEnrage_C_GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UActionSkill_PetEnrage_C::GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A");

	UActionSkill_PetEnrage_C_GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_PetEnrage_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStartActionAbility");

	UActionSkill_PetEnrage_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.FindTargetLocationAsync
// (BlueprintCallable, BlueprintEvent)

void UActionSkill_PetEnrage_C::FindTargetLocationAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.FindTargetLocationAsync");

	UActionSkill_PetEnrage_C_FindTargetLocationAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.LocationQueryComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UActionSkill_PetEnrage_C::LocationQueryComplete(const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.LocationQueryComplete");

	UActionSkill_PetEnrage_C_LocationQueryComplete_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStopActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_PetEnrage_C::OnStopActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStopActionAbility");

	UActionSkill_PetEnrage_C_OnStopActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ExecuteUbergraph_ActionSkill_PetEnrage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_PetEnrage_C::ExecuteUbergraph_ActionSkill_PetEnrage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ExecuteUbergraph_ActionSkill_PetEnrage");

	UActionSkill_PetEnrage_C_ExecuteUbergraph_ActionSkill_PetEnrage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
