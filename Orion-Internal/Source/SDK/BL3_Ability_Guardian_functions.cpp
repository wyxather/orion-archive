// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Guardian_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Guardian.Ability_Guardian_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Guardian_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Guardian.Ability_Guardian_C.OnActivated");

	UAbility_Guardian_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Guardian.Ability_Guardian_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Guardian_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Guardian.Ability_Guardian_C.OnDeactivated");

	UAbility_Guardian_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Guardian.Ability_Guardian_C.ExecuteUbergraph_Ability_Guardian
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Guardian_C::ExecuteUbergraph_Ability_Guardian(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Guardian.Ability_Guardian_C.ExecuteUbergraph_Ability_Guardian");

	UAbility_Guardian_C_ExecuteUbergraph_Ability_Guardian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
