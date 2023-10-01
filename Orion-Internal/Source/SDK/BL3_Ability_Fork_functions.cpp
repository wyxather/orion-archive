// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Fork_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Fork.Ability_Fork_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Fork_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Fork.Ability_Fork_C.OnActivated");

	UAbility_Fork_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Fork.Ability_Fork_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Fork_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Fork.Ability_Fork_C.OnDeactivated");

	UAbility_Fork_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Fork.Ability_Fork_C.ExecuteUbergraph_Ability_Fork
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Fork_C::ExecuteUbergraph_Ability_Fork(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Fork.Ability_Fork_C.ExecuteUbergraph_Ability_Fork");

	UAbility_Fork_C_ExecuteUbergraph_Ability_Fork_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
