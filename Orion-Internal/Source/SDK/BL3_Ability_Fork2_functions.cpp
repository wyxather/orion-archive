// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Fork2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Fork2.Ability_Fork2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Fork2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Fork2.Ability_Fork2_C.OnActivated");

	UAbility_Fork2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Fork2.Ability_Fork2_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Fork2_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Fork2.Ability_Fork2_C.OnDeactivated");

	UAbility_Fork2_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Fork2.Ability_Fork2_C.ExecuteUbergraph_Ability_Fork2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Fork2_C::ExecuteUbergraph_Ability_Fork2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Fork2.Ability_Fork2_C.ExecuteUbergraph_Ability_Fork2");

	UAbility_Fork2_C_ExecuteUbergraph_Ability_Fork2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
