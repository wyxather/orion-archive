// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Kickcharger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Kickcharger.Ability_Kickcharger_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Kickcharger_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.OnDeactivated");

	UAbility_Kickcharger_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kickcharger.Ability_Kickcharger_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Kickcharger_C::WeaponFired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.WeaponFired");

	UAbility_Kickcharger_C_WeaponFired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kickcharger.Ability_Kickcharger_C.StopSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Kickcharger_C::StopSliding(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.StopSliding");

	UAbility_Kickcharger_C_StopSliding_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kickcharger.Ability_Kickcharger_C.InstantChargeExpired
// (BlueprintCallable, BlueprintEvent)

void UAbility_Kickcharger_C::InstantChargeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.InstantChargeExpired");

	UAbility_Kickcharger_C_InstantChargeExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kickcharger.Ability_Kickcharger_C.FullyChargedAudio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UAbility_Kickcharger_C::FullyChargedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.FullyChargedAudio");

	UAbility_Kickcharger_C_FullyChargedAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kickcharger.Ability_Kickcharger_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Kickcharger_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.OnActivated");

	UAbility_Kickcharger_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kickcharger.Ability_Kickcharger_C.ChargeTicker
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UAbility_Kickcharger_C::ChargeTicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.ChargeTicker");

	UAbility_Kickcharger_C_ChargeTicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kickcharger.Ability_Kickcharger_C.ExecuteUbergraph_Ability_Kickcharger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Kickcharger_C::ExecuteUbergraph_Ability_Kickcharger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kickcharger.Ability_Kickcharger_C.ExecuteUbergraph_Ability_Kickcharger");

	UAbility_Kickcharger_C_ExecuteUbergraph_Ability_Kickcharger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
