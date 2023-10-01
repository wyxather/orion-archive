// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_OnePumpOrTwoOrThree_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_OnePumpOrTwoOrThree_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.OnActivated");

	UAbility_OnePumpOrTwoOrThree_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UAbility_OnePumpOrTwoOrThree_C::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.WeaponFired");

	UAbility_OnePumpOrTwoOrThree_C_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.ExecuteUbergraph_Ability_OnePumpOrTwoOrThree
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_OnePumpOrTwoOrThree_C::ExecuteUbergraph_Ability_OnePumpOrTwoOrThree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.ExecuteUbergraph_Ability_OnePumpOrTwoOrThree");

	UAbility_OnePumpOrTwoOrThree_C_ExecuteUbergraph_Ability_OnePumpOrTwoOrThree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
