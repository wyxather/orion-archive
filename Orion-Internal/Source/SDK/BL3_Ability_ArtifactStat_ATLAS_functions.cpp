// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_ArtifactStat_ATLAS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_ArtifactStat_ATLAS.Ability_ArtifactStat_ATLAS_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_ArtifactStat_ATLAS_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_ATLAS.Ability_ArtifactStat_ATLAS_C.OnActivated");

	UAbility_ArtifactStat_ATLAS_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_ArtifactStat_ATLAS.Ability_ArtifactStat_ATLAS_C.ExecuteUbergraph_Ability_ArtifactStat_ATLAS
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_ArtifactStat_ATLAS_C::ExecuteUbergraph_Ability_ArtifactStat_ATLAS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_ATLAS.Ability_ArtifactStat_ATLAS_C.ExecuteUbergraph_Ability_ArtifactStat_ATLAS");

	UAbility_ArtifactStat_ATLAS_C_ExecuteUbergraph_Ability_ArtifactStat_ATLAS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
