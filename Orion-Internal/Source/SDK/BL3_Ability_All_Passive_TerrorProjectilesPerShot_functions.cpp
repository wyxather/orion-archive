// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorProjectilesPerShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.GetFiringComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 InWeapon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWeaponFireProjectileComponent* FireComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbility_All_Passive_TerrorProjectilesPerShot_C::GetFiringComponent(class AWeapon* InWeapon, class UWeaponFireProjectileComponent** FireComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.GetFiringComponent");

	UAbility_All_Passive_TerrorProjectilesPerShot_C_GetFiringComponent_Params params;
	params.InWeapon = InWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireComponent != nullptr)
		*FireComponent = params.FireComponent;
}


// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorProjectilesPerShot_C::WeaponUsed(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponUsed");

	UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponUsed_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 LastWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorProjectilesPerShot_C::WeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.WeaponChanged");

	UAbility_All_Passive_TerrorProjectilesPerShot_C_WeaponChanged_Params params;
	params.NewWeapon = NewWeapon;
	params.LastWeapon = LastWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.AddProjectilePerShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 InWeapon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorProjectilesPerShot_C::AddProjectilePerShot(class AWeapon* InWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.AddProjectilePerShot");

	UAbility_All_Passive_TerrorProjectilesPerShot_C_AddProjectilePerShot_Params params;
	params.InWeapon = InWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_Passive_TerrorProjectilesPerShot_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.OnActivated");

	UAbility_All_Passive_TerrorProjectilesPerShot_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorProjectilesPerShot_C::ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C.ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot");

	UAbility_All_Passive_TerrorProjectilesPerShot_C_ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
