// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SupersonicMan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_SupersonicMan_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OnActivated");

	UPassiveSkill_Operative_SupersonicMan_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_SupersonicMan_C::OOO_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillActivated");

	UPassiveSkill_Operative_SupersonicMan_C_OOO_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_SupersonicMan_C::OOO_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillCoolingDown");

	UPassiveSkill_Operative_SupersonicMan_C_OOO_OnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_SupersonicMan_C::ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan");

	UPassiveSkill_Operative_SupersonicMan_C_ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
