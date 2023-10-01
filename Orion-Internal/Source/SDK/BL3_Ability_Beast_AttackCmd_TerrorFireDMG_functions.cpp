// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_AttackCmd_TerrorFireDMG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_AttackCmd_TerrorFireDMG_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnActivated");

	UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_AttackCmd_TerrorFireDMG_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnDeactivated");

	UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.AttackCommandGiven
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakActionAbilityPetEvolutionType PetEvolution                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakActionAbilityPetType       PetType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_AttackCmd_TerrorFireDMG_C::AttackCommandGiven(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.AttackCommandGiven");

	UAbility_Beast_AttackCmd_TerrorFireDMG_C_AttackCommandGiven_Params params;
	params.PetEvolution = PetEvolution;
	params.PetType = PetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Beast_AttackCmd_TerrorFireDMG_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnAbilityTimerEnded");

	UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_AttackCmd_TerrorFireDMG_C::ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG");

	UAbility_Beast_AttackCmd_TerrorFireDMG_C_ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
