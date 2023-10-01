// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Smog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Smog.Ability_Smog_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Smog_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Smog.Ability_Smog_C.OnRegistered");

	UAbility_Smog_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Smog.Ability_Smog_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Smog_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Smog.Ability_Smog_C.OnUnregistered");

	UAbility_Smog_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Smog.Ability_Smog_C.ExecuteUbergraph_Ability_Smog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Smog_C::ExecuteUbergraph_Ability_Smog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Smog.Ability_Smog_C.ExecuteUbergraph_Ability_Smog");

	UAbility_Smog_C_ExecuteUbergraph_Ability_Smog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
