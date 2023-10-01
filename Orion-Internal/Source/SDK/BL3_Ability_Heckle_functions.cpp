// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Heckle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Heckle.Ability_Heckle_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Heckle_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Heckle.Ability_Heckle_C.OnActivated");

	UAbility_Heckle_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Heckle.Ability_Heckle_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Heckle_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Heckle.Ability_Heckle_C.OnDeactivated");

	UAbility_Heckle_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Heckle.Ability_Heckle_C.ExecuteUbergraph_Ability_Heckle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Heckle_C::ExecuteUbergraph_Ability_Heckle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Heckle.Ability_Heckle_C.ExecuteUbergraph_Ability_Heckle");

	UAbility_Heckle_C_ExecuteUbergraph_Ability_Heckle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
