// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_GrenadeThrow_GlobalDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_EG_GrenadeThrow_GlobalDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.OnActivated");

	UAbility_EG_GrenadeThrow_GlobalDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.GrenadeThrown
// (BlueprintCallable, BlueprintEvent)

void UAbility_EG_GrenadeThrow_GlobalDamage_C::GrenadeThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.GrenadeThrown");

	UAbility_EG_GrenadeThrow_GlobalDamage_C_GrenadeThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ApplyCDM
// (BlueprintCallable, BlueprintEvent)

void UAbility_EG_GrenadeThrow_GlobalDamage_C::ApplyCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ApplyCDM");

	UAbility_EG_GrenadeThrow_GlobalDamage_C_ApplyCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.RemoveCDM
// (BlueprintCallable, BlueprintEvent)

void UAbility_EG_GrenadeThrow_GlobalDamage_C::RemoveCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.RemoveCDM");

	UAbility_EG_GrenadeThrow_GlobalDamage_C_RemoveCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_EG_GrenadeThrow_GlobalDamage_C::ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage");

	UAbility_EG_GrenadeThrow_GlobalDamage_C_ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
