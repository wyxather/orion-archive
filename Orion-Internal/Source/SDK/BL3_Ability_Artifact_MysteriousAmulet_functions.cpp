// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_MysteriousAmulet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_MysteriousAmulet_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnActivated");

	UAbility_Artifact_MysteriousAmulet_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_MysteriousAmulet_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnDeactivated");

	UAbility_Artifact_MysteriousAmulet_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnKilledEnemy
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_MysteriousAmulet_C::OnKilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnKilledEnemy");

	UAbility_Artifact_MysteriousAmulet_C_OnKilledEnemy_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.ExecuteUbergraph_Ability_Artifact_MysteriousAmulet
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_MysteriousAmulet_C::ExecuteUbergraph_Ability_Artifact_MysteriousAmulet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.ExecuteUbergraph_Ability_Artifact_MysteriousAmulet");

	UAbility_Artifact_MysteriousAmulet_C_ExecuteUbergraph_Ability_Artifact_MysteriousAmulet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
