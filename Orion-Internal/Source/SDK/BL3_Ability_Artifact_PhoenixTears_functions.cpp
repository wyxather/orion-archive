// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_PhoenixTears_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_PhoenixTears_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnActivated");

	UAbility_Artifact_PhoenixTears_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_PhoenixTears_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnDeactivated");

	UAbility_Artifact_PhoenixTears_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.DownStateStopped
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_PhoenixTears_C::DownStateStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.DownStateStopped");

	UAbility_Artifact_PhoenixTears_C_DownStateStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.ExecuteUbergraph_Ability_Artifact_PhoenixTears
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_PhoenixTears_C::ExecuteUbergraph_Ability_Artifact_PhoenixTears(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.ExecuteUbergraph_Ability_Artifact_PhoenixTears");

	UAbility_Artifact_PhoenixTears_C_ExecuteUbergraph_Ability_Artifact_PhoenixTears_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
