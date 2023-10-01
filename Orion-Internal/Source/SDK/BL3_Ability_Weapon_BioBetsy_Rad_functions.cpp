// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_BioBetsy_Rad_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_BioBetsy_Rad_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnRegistered");

	UAbility_Weapon_BioBetsy_Rad_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_BioBetsy_Rad_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnDeactivated");

	UAbility_Weapon_BioBetsy_Rad_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_BioBetsy_Rad_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnPaused");

	UAbility_Weapon_BioBetsy_Rad_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnKilled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Weapon_BioBetsy_Rad_C::OnKilled(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.OnKilled");

	UAbility_Weapon_BioBetsy_Rad_C_OnKilled_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UAbility_Weapon_BioBetsy_Rad_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.Reset");

	UAbility_Weapon_BioBetsy_Rad_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Weapon_BioBetsy_Rad_C::ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C.ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad");

	UAbility_Weapon_BioBetsy_Rad_C_ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
