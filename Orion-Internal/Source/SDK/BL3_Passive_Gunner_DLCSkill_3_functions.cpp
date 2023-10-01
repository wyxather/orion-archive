// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_DLCSkill_2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.OnActivated");

	UPassive_Gunner_DLCSkill_2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_DLCSkill_2_C::DLCSkill2_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillCoolingDown");

	UPassive_Gunner_DLCSkill_2_C_DLCSkill2_OnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_DLCSkill_2_C::DLCSkill2_OnActionSkillReady(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillReady");

	UPassive_Gunner_DLCSkill_2_C_DLCSkill2_OnActionSkillReady_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_DLCSkill_2_C::ExecuteUbergraph_Passive_Gunner_DLCSkill_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_3");

	UPassive_Gunner_DLCSkill_2_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
