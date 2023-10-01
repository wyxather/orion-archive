// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SeeinRed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_SeeinRed_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.OnActivated");

	UPassiveSkill_Operative_SeeinRed_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.SeeinRedOnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_SeeinRed_C::SeeinRedOnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.SeeinRedOnActionSkillActivated");

	UPassiveSkill_Operative_SeeinRed_C_SeeinRedOnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.ExecuteUbergraph_PassiveSkill_Operative_SeeinRed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_SeeinRed_C::ExecuteUbergraph_PassiveSkill_Operative_SeeinRed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.ExecuteUbergraph_PassiveSkill_Operative_SeeinRed");

	UPassiveSkill_Operative_SeeinRed_C_ExecuteUbergraph_PassiveSkill_Operative_SeeinRed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
