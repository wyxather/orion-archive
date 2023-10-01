// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Hydrafrost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Hydrafrost_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnActivated");

	UAbility_Hydrafrost_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Hydrafrost_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnDeactivated");

	UAbility_Hydrafrost_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Hydrafrost_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnUnregistered");

	UAbility_Hydrafrost_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Hydrafrost_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnPaused");

	UAbility_Hydrafrost_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnCauseDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Hydrafrost_C::OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnCauseDeath_CE");

	UAbility_Hydrafrost_C_OnCauseDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Hydrafrost.Ability_Hydrafrost_C.AmpBuff_CE
// (BlueprintCallable, BlueprintEvent)

void UAbility_Hydrafrost_C::AmpBuff_CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Hydrafrost.Ability_Hydrafrost_C.AmpBuff_CE");

	UAbility_Hydrafrost_C_AmpBuff_CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Hydrafrost.Ability_Hydrafrost_C.ExecuteUbergraph_Ability_Hydrafrost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Hydrafrost_C::ExecuteUbergraph_Ability_Hydrafrost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Hydrafrost.Ability_Hydrafrost_C.ExecuteUbergraph_Ability_Hydrafrost");

	UAbility_Hydrafrost_C_ExecuteUbergraph_Ability_Hydrafrost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
