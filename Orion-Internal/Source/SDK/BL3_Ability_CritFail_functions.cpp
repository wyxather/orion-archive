// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CritFail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_CritFail.Ability_CritFail_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_CritFail_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CritFail.Ability_CritFail_C.OnActivated");

	UAbility_CritFail_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CritFail.Ability_CritFail_C.ReloadStartedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CritFail_C::ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CritFail.Ability_CritFail_C.ReloadStartedEvent");

	UAbility_CritFail_C_ReloadStartedEvent_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CritFail.Ability_CritFail_C.ExecuteUbergraph_Ability_CritFail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CritFail_C::ExecuteUbergraph_Ability_CritFail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CritFail.Ability_CritFail_C.ExecuteUbergraph_Ability_CritFail");

	UAbility_CritFail_C_ExecuteUbergraph_Ability_CritFail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
