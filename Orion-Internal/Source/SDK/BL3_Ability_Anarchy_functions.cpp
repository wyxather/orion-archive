// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Anarchy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Anarchy.Ability_Anarchy_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Anarchy_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Anarchy.Ability_Anarchy_C.OnRegistered");

	UAbility_Anarchy_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Anarchy.Ability_Anarchy_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Anarchy_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Anarchy.Ability_Anarchy_C.OnUnregistered");

	UAbility_Anarchy_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Anarchy.Ability_Anarchy_C.OnCauseDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Anarchy_C::OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Anarchy.Ability_Anarchy_C.OnCauseDeath_CE");

	UAbility_Anarchy_C_OnCauseDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Anarchy.Ability_Anarchy_C.Reload Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Anarchy_C::Reload_Started(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Anarchy.Ability_Anarchy_C.Reload Started");

	UAbility_Anarchy_C_Reload_Started_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Anarchy.Ability_Anarchy_C.ExecuteUbergraph_Ability_Anarchy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Anarchy_C::ExecuteUbergraph_Ability_Anarchy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Anarchy.Ability_Anarchy_C.ExecuteUbergraph_Ability_Anarchy");

	UAbility_Anarchy_C_ExecuteUbergraph_Ability_Anarchy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
