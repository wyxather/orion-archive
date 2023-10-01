// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_Drone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldStopAbilityOnPawnSlotComponentAttach
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_Drone_C::ShouldStopAbilityOnPawnSlotComponentAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldStopAbilityOnPawnSlotComponentAttach");

	UActionSkill_Operative_Drone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.GetGoodMisfortuneRechargeValue
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           TotalKills                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActionSkill_Operative_Drone_C::GetGoodMisfortuneRechargeValue(int* TotalKills)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.GetGoodMisfortuneRechargeValue");

	UActionSkill_Operative_Drone_C_GetGoodMisfortuneRechargeValue_Params params;
	params.TotalKills = TotalKills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TrySpawnPrimaryDrone
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakDroneProjectile_GRMLN* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AOakDroneProjectile_GRMLN* UActionSkill_Operative_Drone_C::TrySpawnPrimaryDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TrySpawnPrimaryDrone");

	UActionSkill_Operative_Drone_C_TrySpawnPrimaryDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldAbortActivation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  OutAbortCode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_Drone_C::ShouldAbortActivation(unsigned char* OutAbortCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldAbortActivation");

	UActionSkill_Operative_Drone_C_ShouldAbortActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAbortCode != nullptr)
		*OutAbortCode = params.OutAbortCode;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TryFindNewDroneTarget
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_Drone_C::TryFindNewDroneTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TryFindNewDroneTarget");

	UActionSkill_Operative_Drone_C_TryFindNewDroneTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_Drone_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartActionAbility");

	UActionSkill_Operative_Drone_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartCalledShot
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_Drone_C::OnStartCalledShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartCalledShot");

	UActionSkill_Operative_Drone_C_OnStartCalledShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopCalledShot
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_Drone_C::OnStopCalledShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopCalledShot");

	UActionSkill_Operative_Drone_C_OnStopCalledShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.StopButtonPress
// (BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_Drone_C::StopButtonPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.StopButtonPress");

	UActionSkill_Operative_Drone_C_StopButtonPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_Drone_C::OnStopActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopActionAbility");

	UActionSkill_Operative_Drone_C_OnStopActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ExecuteUbergraph_ActionSkill_Operative_Drone
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_Drone_C::ExecuteUbergraph_ActionSkill_Operative_Drone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ExecuteUbergraph_ActionSkill_Operative_Drone");

	UActionSkill_Operative_Drone_C_ExecuteUbergraph_ActionSkill_Operative_Drone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
