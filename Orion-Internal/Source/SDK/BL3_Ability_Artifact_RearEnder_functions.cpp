// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_RearEnder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_RearEnder.Ability_Artifact_RearEnder_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_RearEnder_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RearEnder.Ability_Artifact_RearEnder_C.OnActivated");

	UAbility_Artifact_RearEnder_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RearEnder.Ability_Artifact_RearEnder_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_RearEnder_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RearEnder.Ability_Artifact_RearEnder_C.OnDeactivated");

	UAbility_Artifact_RearEnder_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RearEnder.Ability_Artifact_RearEnder_C.ExecuteUbergraph_Ability_Artifact_RearEnder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_RearEnder_C::ExecuteUbergraph_Ability_Artifact_RearEnder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RearEnder.Ability_Artifact_RearEnder_C.ExecuteUbergraph_Ability_Artifact_RearEnder");

	UAbility_Artifact_RearEnder_C_ExecuteUbergraph_Ability_Artifact_RearEnder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
