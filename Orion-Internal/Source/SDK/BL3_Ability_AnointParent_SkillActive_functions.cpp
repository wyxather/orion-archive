// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_SkillActive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillCoolingDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility**      ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_SkillActive_C::AnointOnActionSkillCoolingDown(class UOakActionAbility** ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillCoolingDown");

	UAbility_AnointParent_SkillActive_C_AnointOnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillActivated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility**      ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_SkillActive_C::AnointOnActionSkillActivated(class UOakActionAbility** ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillActivated");

	UAbility_AnointParent_SkillActive_C_AnointOnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_SkillActive_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnActivated");

	UAbility_AnointParent_SkillActive_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointRemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_SkillActive_C::AnointRemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointRemoveEffect");

	UAbility_AnointParent_SkillActive_C_AnointRemoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_SkillActive_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnDeactivated");

	UAbility_AnointParent_SkillActive_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.ExecuteUbergraph_Ability_AnointParent_SkillActive
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_SkillActive_C::ExecuteUbergraph_Ability_AnointParent_SkillActive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.ExecuteUbergraph_Ability_AnointParent_SkillActive");

	UAbility_AnointParent_SkillActive_C_ExecuteUbergraph_Ability_AnointParent_SkillActive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
