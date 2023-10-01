// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CommanderPlanetoid_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_CommanderPlanetoid_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnActivated");

	UAbility_Artifact_CommanderPlanetoid_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_CommanderPlanetoid_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnDeactivated");

	UAbility_Artifact_CommanderPlanetoid_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.SwitchElement
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_CommanderPlanetoid_C::SwitchElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.SwitchElement");

	UAbility_Artifact_CommanderPlanetoid_C_SwitchElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_CommanderPlanetoid_C::ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid");

	UAbility_Artifact_CommanderPlanetoid_C_ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
