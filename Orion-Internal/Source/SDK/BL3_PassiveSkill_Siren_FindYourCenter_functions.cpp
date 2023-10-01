// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_FindYourCenter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_FindYourCenter_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActivated");

	UPassiveSkill_Siren_FindYourCenter_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_FindYourCenter_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActionSkillActivated");

	UPassiveSkill_Siren_FindYourCenter_C_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_FindYourCenter_C::ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter");

	UPassiveSkill_Siren_FindYourCenter_C_ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
