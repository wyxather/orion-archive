// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_Unique05_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Gunner_Unique05_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnActivated");

	UOakAbility_Gunner_Unique05_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnWeaponStartReloaded_UniqueClassMod05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_Unique05_C::OnWeaponStartReloaded_UniqueClassMod05(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnWeaponStartReloaded_UniqueClassMod05");

	UOakAbility_Gunner_Unique05_C_OnWeaponStartReloaded_UniqueClassMod05_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.DontNeedNoAbilityTimers
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Gunner_Unique05_C::DontNeedNoAbilityTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.DontNeedNoAbilityTimers");

	UOakAbility_Gunner_Unique05_C_DontNeedNoAbilityTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.ExecuteUbergraph_OakAbility_Gunner_Unique05
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_Unique05_C::ExecuteUbergraph_OakAbility_Gunner_Unique05(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.ExecuteUbergraph_OakAbility_Gunner_Unique05");

	UOakAbility_Gunner_Unique05_C_ExecuteUbergraph_OakAbility_Gunner_Unique05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
