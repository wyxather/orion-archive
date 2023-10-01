// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SM_TED_DarkArmy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_SM_TED_DarkArmy_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnRegistered");

	UAbility_SM_TED_DarkArmy_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ReloadStartedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SM_TED_DarkArmy_C::ReloadStartedDelegate(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ReloadStartedDelegate");

	UAbility_SM_TED_DarkArmy_C_ReloadStartedDelegate_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_SM_TED_DarkArmy_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnDeactivated");

	UAbility_SM_TED_DarkArmy_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_SM_TED_DarkArmy_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnUnregistered");

	UAbility_SM_TED_DarkArmy_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_SM_TED_DarkArmy_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnPaused");

	UAbility_SM_TED_DarkArmy_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_SM_TED_DarkArmy_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnActivated");

	UAbility_SM_TED_DarkArmy_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ExecuteUbergraph_Ability_SM_TED_DarkArmy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SM_TED_DarkArmy_C::ExecuteUbergraph_Ability_SM_TED_DarkArmy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ExecuteUbergraph_Ability_SM_TED_DarkArmy");

	UAbility_SM_TED_DarkArmy_C_ExecuteUbergraph_Ability_SM_TED_DarkArmy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
