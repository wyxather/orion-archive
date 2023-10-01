// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Slam_ReturnDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_Slam_ReturnDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnActivated");

	UAbility_Siren_Slam_ReturnDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.SlamEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Slam_ReturnDamage_C::SlamEnded(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.SlamEnded");

	UAbility_Siren_Slam_ReturnDamage_C_SlamEnded_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_Slam_ReturnDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnDeactivated");

	UAbility_Siren_Slam_ReturnDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.UnregisterCDM
// (BlueprintCallable, BlueprintEvent)

void UAbility_Siren_Slam_ReturnDamage_C::UnregisterCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.UnregisterCDM");

	UAbility_Siren_Slam_ReturnDamage_C_UnregisterCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Slam_ReturnDamage_C::ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage");

	UAbility_Siren_Slam_ReturnDamage_C_ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
