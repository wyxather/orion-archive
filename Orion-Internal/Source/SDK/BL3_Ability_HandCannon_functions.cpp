// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_HandCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_HandCannon.Ability_HandCannon_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_HandCannon_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_HandCannon.Ability_HandCannon_C.OnActivated");

	UAbility_HandCannon_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_HandCannon.Ability_HandCannon_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_HandCannon_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_HandCannon.Ability_HandCannon_C.OnDeactivated");

	UAbility_HandCannon_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_HandCannon.Ability_HandCannon_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_HandCannon_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_HandCannon.Ability_HandCannon_C.OnUnregistered");

	UAbility_HandCannon_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_HandCannon.Ability_HandCannon_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_HandCannon_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_HandCannon.Ability_HandCannon_C.OnPaused");

	UAbility_HandCannon_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_HandCannon.Ability_HandCannon_C.ExecuteUbergraph_Ability_HandCannon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_HandCannon_C::ExecuteUbergraph_Ability_HandCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_HandCannon.Ability_HandCannon_C.ExecuteUbergraph_Ability_HandCannon");

	UAbility_HandCannon_C_ExecuteUbergraph_Ability_HandCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
