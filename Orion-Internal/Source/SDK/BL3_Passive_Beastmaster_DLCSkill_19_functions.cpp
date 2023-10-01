// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_19_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_18_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_18_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.DLCSkill18_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_18_C::DLCSkill18_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.DLCSkill18_OnActionSkillActivated");

	UPassive_Beastmaster_DLCSkill_18_C_DLCSkill18_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_19
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_18_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_19(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_19.Passive_Beastmaster_DLCSkill_18_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_19");

	UPassive_Beastmaster_DLCSkill_18_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_19_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
