// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_NextMag_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointTriggerEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_NextMag_Parent_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointTriggerEffect");

	UAbility_Gunner_NextMag_Parent_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_NextMag_Parent_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.OnActivated");

	UAbility_Gunner_NextMag_Parent_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ReloadedWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_NextMag_Parent_C::ReloadedWeapon(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ReloadedWeapon");

	UAbility_Gunner_NextMag_Parent_C_ReloadedWeapon_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointAutoBearStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_Gunner_NextMag_Parent_C::AnointAutoBearStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointAutoBearStarted");

	UAbility_Gunner_NextMag_Parent_C_AnointAutoBearStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ExecuteUbergraph_Ability_Gunner_NextMag_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_NextMag_Parent_C::ExecuteUbergraph_Ability_Gunner_NextMag_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ExecuteUbergraph_Ability_Gunner_NextMag_Parent");

	UAbility_Gunner_NextMag_Parent_C_ExecuteUbergraph_Ability_Gunner_NextMag_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
