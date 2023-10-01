// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_AddGrenade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_SkillEnd_AddGrenade_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.OnActivated");

	UAbility_All_SkillEnd_AddGrenade_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.SkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_AddGrenade_C::SkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.SkillCoolingDown");

	UAbility_All_SkillEnd_AddGrenade_C_SkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.ExecuteUbergraph_Ability_All_SkillEnd_AddGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_AddGrenade_C::ExecuteUbergraph_Ability_All_SkillEnd_AddGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_AddGrenade.Ability_All_SkillEnd_AddGrenade_C.ExecuteUbergraph_Ability_All_SkillEnd_AddGrenade");

	UAbility_All_SkillEnd_AddGrenade_C_ExecuteUbergraph_Ability_All_SkillEnd_AddGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
