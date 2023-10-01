// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_VanquisherDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_VanquisherDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.OnActivated");

	UAbility_Gunner_VanquisherDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_VanquisherDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.OnDeactivated");

	UAbility_Gunner_VanquisherDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.ExecuteUbergraph_Ability_Gunner_VanquisherDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_VanquisherDamage_C::ExecuteUbergraph_Ability_Gunner_VanquisherDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.ExecuteUbergraph_Ability_Gunner_VanquisherDamage");

	UAbility_Gunner_VanquisherDamage_C_ExecuteUbergraph_Ability_Gunner_VanquisherDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
