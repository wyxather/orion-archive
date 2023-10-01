// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SparkyBoom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_SparkyBoom_v2_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnDeactivated");

	UAbility_SparkyBoom_v2_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_SparkyBoom_v2_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnUnregistered");

	UAbility_SparkyBoom_v2_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_SparkyBoom_v2_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnPaused");

	UAbility_SparkyBoom_v2_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SparkyBoom_v2_C::Event_ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadStarted");

	UAbility_SparkyBoom_v2_C_Event_ReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_SparkyBoom_v2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnActivated");

	UAbility_SparkyBoom_v2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SparkyBoom_v2_C::Event_ReloadEnded(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadEnded");

	UAbility_SparkyBoom_v2_C_Event_ReloadEnded_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_EnteredDownState
// (BlueprintCallable, BlueprintEvent)

void UAbility_SparkyBoom_v2_C::Event_EnteredDownState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_EnteredDownState");

	UAbility_SparkyBoom_v2_C_Event_EnteredDownState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.ExecuteUbergraph_Ability_SparkyBoom_v2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SparkyBoom_v2_C::ExecuteUbergraph_Ability_SparkyBoom_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.ExecuteUbergraph_Ability_SparkyBoom_v2");

	UAbility_SparkyBoom_v2_C_ExecuteUbergraph_Ability_SparkyBoom_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
