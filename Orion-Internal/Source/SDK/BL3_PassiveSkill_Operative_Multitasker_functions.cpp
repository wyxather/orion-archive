// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_Multitasker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_Multitasker_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.OnActivated");

	UPassiveSkill_Operative_Multitasker_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_Multitasker_C::Multitasker_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillActivated");

	UPassiveSkill_Operative_Multitasker_C_Multitasker_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_Multitasker_C::Multitasker_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillCoolingDown");

	UPassiveSkill_Operative_Multitasker_C_Multitasker_OnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.ExecuteUbergraph_PassiveSkill_Operative_Multitasker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_Multitasker_C::ExecuteUbergraph_PassiveSkill_Operative_Multitasker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.ExecuteUbergraph_PassiveSkill_Operative_Multitasker");

	UPassiveSkill_Operative_Multitasker_C_ExecuteUbergraph_PassiveSkill_Operative_Multitasker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
