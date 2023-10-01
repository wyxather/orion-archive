// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_PersonalSpace_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassiveSkill_Siren_PersonalSpace_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.CalculateAbilityState");

	UPassiveSkill_Siren_PersonalSpace_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_PersonalSpace_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.OnActivated");

	UPassiveSkill_Siren_PersonalSpace_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_PersonalSpace_C::ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace");

	UPassiveSkill_Siren_PersonalSpace_C_ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
