// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_Generic_LowHealthExecutor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_EG_Generic_LowHealthExecutor_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.OnActivated");

	UAbility_EG_Generic_LowHealthExecutor_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_EG_Generic_LowHealthExecutor_C::ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor");

	UAbility_EG_Generic_LowHealthExecutor_C_ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
