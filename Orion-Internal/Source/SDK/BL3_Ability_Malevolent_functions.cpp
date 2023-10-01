// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Malevolent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Malevolent.Ability_Malevolent_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Malevolent_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Malevolent.Ability_Malevolent_C.OnActivated");

	UAbility_Malevolent_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Malevolent.Ability_Malevolent_C.ReloadEndedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Malevolent_C::ReloadEndedDelegate(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Malevolent.Ability_Malevolent_C.ReloadEndedDelegate");

	UAbility_Malevolent_C_ReloadEndedDelegate_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Malevolent.Ability_Malevolent_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Malevolent_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Malevolent.Ability_Malevolent_C.OnDeactivated");

	UAbility_Malevolent_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Malevolent.Ability_Malevolent_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Malevolent_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Malevolent.Ability_Malevolent_C.OnUnregistered");

	UAbility_Malevolent_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Malevolent.Ability_Malevolent_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Malevolent_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Malevolent.Ability_Malevolent_C.OnPaused");

	UAbility_Malevolent_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Malevolent.Ability_Malevolent_C.ExecuteUbergraph_Ability_Malevolent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Malevolent_C::ExecuteUbergraph_Ability_Malevolent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Malevolent.Ability_Malevolent_C.ExecuteUbergraph_Ability_Malevolent");

	UAbility_Malevolent_C_ExecuteUbergraph_Ability_Malevolent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
