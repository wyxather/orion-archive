// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Contagion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Contagion.Ability_Contagion_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Contagion_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contagion.Ability_Contagion_C.OnActivated");

	UAbility_Contagion_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contagion.Ability_Contagion_C.Event_RelaodStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Contagion_C::Event_RelaodStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contagion.Ability_Contagion_C.Event_RelaodStarted");

	UAbility_Contagion_C_Event_RelaodStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contagion.Ability_Contagion_C.DotEnd
// (BlueprintCallable, BlueprintEvent)

void UAbility_Contagion_C::DotEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contagion.Ability_Contagion_C.DotEnd");

	UAbility_Contagion_C_DotEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contagion.Ability_Contagion_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Contagion_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contagion.Ability_Contagion_C.OnDeactivated");

	UAbility_Contagion_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contagion.Ability_Contagion_C.ExecuteUbergraph_Ability_Contagion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Contagion_C::ExecuteUbergraph_Ability_Contagion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contagion.Ability_Contagion_C.ExecuteUbergraph_Ability_Contagion");

	UAbility_Contagion_C_ExecuteUbergraph_Ability_Contagion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
