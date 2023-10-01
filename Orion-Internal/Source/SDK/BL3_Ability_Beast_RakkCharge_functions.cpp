// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_RakkCharge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_RakkCharge_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.OnActivated");

	UAbility_Beast_RakkCharge_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_RakkCharge_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.OnDeactivated");

	UAbility_Beast_RakkCharge_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.ExecuteUbergraph_Ability_Beast_RakkCharge
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_RakkCharge_C::ExecuteUbergraph_Ability_Beast_RakkCharge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.ExecuteUbergraph_Ability_Beast_RakkCharge");

	UAbility_Beast_RakkCharge_C_ExecuteUbergraph_Ability_Beast_RakkCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
