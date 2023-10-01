// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Beastmaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointOnActionSkillCoolingDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility**      ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Beastmaster_C::AnointOnActionSkillCoolingDown(class UOakActionAbility** ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointOnActionSkillCoolingDown");

	UAbility_AnointParent_Beastmaster_C_AnointOnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndHulkOut
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Beastmaster_C::AnointEndHulkOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndHulkOut");

	UAbility_AnointParent_Beastmaster_C_AnointEndHulkOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndGammaBurst
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Beastmaster_C::AnointEndGammaBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndGammaBurst");

	UAbility_AnointParent_Beastmaster_C_AnointEndGammaBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndFadeAway
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Beastmaster_C::AnointEndFadeAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndFadeAway");

	UAbility_AnointParent_Beastmaster_C_AnointEndFadeAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedBeastmasterSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Beastmaster_C::AnointUsedBeastmasterSkill(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedBeastmasterSkill");

	UAbility_AnointParent_Beastmaster_C_AnointUsedBeastmasterSkill_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedAttackCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakActionAbilityPetEvolutionType PetEvolution                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakActionAbilityPetType       PetType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Beastmaster_C::AnointUsedAttackCommand(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedAttackCommand");

	UAbility_AnointParent_Beastmaster_C_AnointUsedAttackCommand_Params params;
	params.PetEvolution = PetEvolution;
	params.PetType = PetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_Beastmaster_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.OnActivated");

	UAbility_AnointParent_Beastmaster_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointBeastmasterFindLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Beastmaster_C::AnointBeastmasterFindLocation(bool res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointBeastmasterFindLocation");

	UAbility_AnointParent_Beastmaster_C_AnointBeastmasterFindLocation_Params params;
	params.res = res;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.BindBeastmasterEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Beastmaster_C::BindBeastmasterEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.BindBeastmasterEvents");

	UAbility_AnointParent_Beastmaster_C_BindBeastmasterEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.ExecuteUbergraph_Ability_AnointParent_Beastmaster
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Beastmaster_C::ExecuteUbergraph_Ability_AnointParent_Beastmaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.ExecuteUbergraph_Ability_AnointParent_Beastmaster");

	UAbility_AnointParent_Beastmaster_C_ExecuteUbergraph_Ability_AnointParent_Beastmaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
