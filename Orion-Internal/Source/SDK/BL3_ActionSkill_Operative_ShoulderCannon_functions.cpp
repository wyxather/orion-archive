// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_ShoulderCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_ShoulderCannon_C::StartShoulderCannonMod3Timer(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer");

	UActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShoulderCannonMods> Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_ShoulderCannon_C::IsShouldCannonModSlotted(TEnumAsByte<EShoulderCannonMods> Mod, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted");

	UActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_ShoulderCannon_C::GetCannonRef(class AActor** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.GetCannonRef");

	UActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ShouldAbortActivation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  OutAbortCode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_ShoulderCannon_C::ShouldAbortActivation(unsigned char* OutAbortCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ShouldAbortActivation");

	UActionSkill_Operative_ShoulderCannon_C_ShouldAbortActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAbortCode != nullptr)
		*OutAbortCode = params.OutAbortCode;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.TrySpawnCannon
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractiveObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AInteractiveObject* UActionSkill_Operative_ShoulderCannon_C::TrySpawnCannon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.TrySpawnCannon");

	UActionSkill_Operative_ShoulderCannon_C_TrySpawnCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsActionSkillValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionSkill_Operative_ShoulderCannon_C::IsActionSkillValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsActionSkillValid");

	UActionSkill_Operative_ShoulderCannon_C_IsActionSkillValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnPaused");

	UActionSkill_Operative_ShoulderCannon_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnResumed");

	UActionSkill_Operative_ShoulderCannon_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnChargeCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           OldCharge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_ShoulderCannon_C::OnChargeCountChanged(int* OldCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnChargeCountChanged");

	UActionSkill_Operative_ShoulderCannon_C_OnChargeCountChanged_Params params;
	params.OldCharge = OldCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnActivated");

	UActionSkill_Operative_ShoulderCannon_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.SpawnShoulderCannon
// (BlueprintCallable, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::SpawnShoulderCannon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.SpawnShoulderCannon");

	UActionSkill_Operative_ShoulderCannon_C_SpawnShoulderCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnStartActionAbility");

	UActionSkill_Operative_ShoulderCannon_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnDeactivated");

	UActionSkill_Operative_ShoulderCannon_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnRegistered");

	UActionSkill_Operative_ShoulderCannon_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UActionSkill_Operative_ShoulderCannon_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnUnregistered");

	UActionSkill_Operative_ShoulderCannon_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_Operative_ShoulderCannon_C::ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon");

	UActionSkill_Operative_ShoulderCannon_C_ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
