// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_Reload_TerrorNova_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_Reload_TerrorNova_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.OnActivated");

	UAbility_Gunner_Reload_TerrorNova_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_Reload_TerrorNova_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ReloadStarted");

	UAbility_Gunner_Reload_TerrorNova_C_ReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_Reload_TerrorNova_C::ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova");

	UAbility_Gunner_Reload_TerrorNova_C_ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
