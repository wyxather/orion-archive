// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_ArtifactStat_Vladof_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_ArtifactStat_Vladof_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.OnActivated");

	UAbility_ArtifactStat_Vladof_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.ExecuteUbergraph_Ability_ArtifactStat_Vladof
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_ArtifactStat_Vladof_C::ExecuteUbergraph_Ability_ArtifactStat_Vladof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.ExecuteUbergraph_Ability_ArtifactStat_Vladof");

	UAbility_ArtifactStat_Vladof_C_ExecuteUbergraph_Ability_ArtifactStat_Vladof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
