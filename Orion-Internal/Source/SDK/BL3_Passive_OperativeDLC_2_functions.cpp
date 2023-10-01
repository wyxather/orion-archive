// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.OnActivated");

	UPassive_OperativeDLC_1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.OperativeDLCSkill1_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_1_C::OperativeDLCSkill1_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.OperativeDLCSkill1_OnActionSkillActivated");

	UPassive_OperativeDLC_1_C_OperativeDLCSkill1_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.ExecuteUbergraph_Passive_OperativeDLC_2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_1_C::ExecuteUbergraph_Passive_OperativeDLC_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.ExecuteUbergraph_Passive_OperativeDLC_2");

	UPassive_OperativeDLC_1_C_ExecuteUbergraph_Passive_OperativeDLC_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
