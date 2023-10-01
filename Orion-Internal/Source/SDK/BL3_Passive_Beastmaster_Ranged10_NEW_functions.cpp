// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged10_NEW_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.GetProjectileComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 InWeapon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWeaponFireProjectileComponent* FireComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPassive_Beastmaster_Ranged10_NEW_C::GetProjectileComponent(class AWeapon* InWeapon, class UWeaponFireProjectileComponent** FireComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.GetProjectileComponent");

	UPassive_Beastmaster_Ranged10_NEW_C_GetProjectileComponent_Params params;
	params.InWeapon = InWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireComponent != nullptr)
		*FireComponent = params.FireComponent;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.RandomChanceByGrade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPassive_Beastmaster_Ranged10_NEW_C::RandomChanceByGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.RandomChanceByGrade");

	UPassive_Beastmaster_Ranged10_NEW_C_RandomChanceByGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponUsed_Ranged10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged10_NEW_C::OnWeaponUsed_Ranged10(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponUsed_Ranged10");

	UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponUsed_Ranged10_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponChanged_Ranged10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 LastWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged10_NEW_C::OnWeaponChanged_Ranged10(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponChanged_Ranged10");

	UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponChanged_Ranged10_Params params;
	params.NewWeapon = NewWeapon;
	params.LastWeapon = LastWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged10_NEW_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnActivated");

	UPassive_Beastmaster_Ranged10_NEW_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.TryAddProjectileToNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 InWeapon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged10_NEW_C::TryAddProjectileToNextShot(class AWeapon* InWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.TryAddProjectileToNextShot");

	UPassive_Beastmaster_Ranged10_NEW_C_TryAddProjectileToNextShot_Params params;
	params.InWeapon = InWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged10_NEW_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnPaused");

	UPassive_Beastmaster_Ranged10_NEW_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged10_NEW_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnDeactivated");

	UPassive_Beastmaster_Ranged10_NEW_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged10_NEW_C::ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW");

	UPassive_Beastmaster_Ranged10_NEW_C_ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
