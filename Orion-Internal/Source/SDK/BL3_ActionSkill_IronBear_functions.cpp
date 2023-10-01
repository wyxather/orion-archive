// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_IronBear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetActionSkillWidgetKeyframe
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UActionSkill_IronBear_C::GetActionSkillWidgetKeyframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetActionSkillWidgetKeyframe");

	UActionSkill_IronBear_C_GetActionSkillWidgetKeyframe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UActionSkill_IronBear_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.CalculateAbilityState");

	UActionSkill_IronBear_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearClass
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UActionSkill_IronBear_C::GetIronBearClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearClass");

	UActionSkill_IronBear_C_GetIronBearClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnRotation
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UActionSkill_IronBear_C::GetIronBearSpawnRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnRotation");

	UActionSkill_IronBear_C_GetIronBearSpawnRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnLocation
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UActionSkill_IronBear_C::GetIronBearSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnLocation");

	UActionSkill_IronBear_C_GetIronBearSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCooldownRestartPercent
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_IronBear_C::GetCooldownRestartPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCooldownRestartPercent");

	UActionSkill_IronBear_C_GetCooldownRestartPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.ShouldAbortActivation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  OutAbortCode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_IronBear_C::ShouldAbortActivation(unsigned char* OutAbortCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.ShouldAbortActivation");

	UActionSkill_IronBear_C_ShouldAbortActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAbortCode != nullptr)
		*OutAbortCode = params.OutAbortCode;

	return params.ReturnValue;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCameraYaw
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_IronBear_C::GetCameraYaw(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCameraYaw");

	UActionSkill_IronBear_C_GetCameraYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.StartSummoningIronCub
// (Event, Protected, BlueprintEvent)

void UActionSkill_IronBear_C::StartSummoningIronCub()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.StartSummoningIronCub");

	UActionSkill_IronBear_C_StartSummoningIronCub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_IronBear.ActionSkill_IronBear_C.ExecuteUbergraph_ActionSkill_IronBear
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_IronBear_C::ExecuteUbergraph_ActionSkill_IronBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.ExecuteUbergraph_ActionSkill_IronBear");

	UActionSkill_IronBear_C_ExecuteUbergraph_ActionSkill_IronBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
