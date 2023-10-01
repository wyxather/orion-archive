// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillStart_OverchargeShield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.AnointOnActionSkillActivated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility**      ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillStart_OverchargeShield_C::AnointOnActionSkillActivated(class UOakActionAbility** ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.AnointOnActionSkillActivated");

	UAbility_All_SkillStart_OverchargeShield_C_AnointOnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.SkillStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillStart_OverchargeShield_C::SkillStarted(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.SkillStarted");

	UAbility_All_SkillStart_OverchargeShield_C_SkillStarted_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.DrainShield
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillStart_OverchargeShield_C::DrainShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.DrainShield");

	UAbility_All_SkillStart_OverchargeShield_C_DrainShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ResetShield
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillStart_OverchargeShield_C::ResetShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ResetShield");

	UAbility_All_SkillStart_OverchargeShield_C_ResetShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillStart_OverchargeShield_C::ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C.ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield");

	UAbility_All_SkillStart_OverchargeShield_C_ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
