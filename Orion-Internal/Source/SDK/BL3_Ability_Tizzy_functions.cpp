// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Tizzy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Tizzy.Ability_Tizzy_C.StopTizzy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbility_Tizzy_C::StopTizzy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.StopTizzy");

	UAbility_Tizzy_C_StopTizzy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tizzy.Ability_Tizzy_C.StartTizzy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbility_Tizzy_C::StartTizzy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.StartTizzy");

	UAbility_Tizzy_C_StartTizzy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tizzy.Ability_Tizzy_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Tizzy_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.OnActivated");

	UAbility_Tizzy_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tizzy.Ability_Tizzy_C.NotifyHeatChange
// (BlueprintCallable, BlueprintEvent)

void UAbility_Tizzy_C::NotifyHeatChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.NotifyHeatChange");

	UAbility_Tizzy_C_NotifyHeatChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tizzy.Ability_Tizzy_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Tizzy_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.OnDeactivated");

	UAbility_Tizzy_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tizzy.Ability_Tizzy_C.WeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Tizzy_C::WeaponUsed(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.WeaponUsed");

	UAbility_Tizzy_C_WeaponUsed_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Tizzy.Ability_Tizzy_C.ExecuteUbergraph_Ability_Tizzy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Tizzy_C::ExecuteUbergraph_Ability_Tizzy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Tizzy.Ability_Tizzy_C.ExecuteUbergraph_Ability_Tizzy");

	UAbility_Tizzy_C_ExecuteUbergraph_Ability_Tizzy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
