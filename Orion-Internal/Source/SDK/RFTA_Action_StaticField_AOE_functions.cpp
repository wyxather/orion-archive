// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StaticField_AOE_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.EvaluateCause
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StaticField_AOE_C::EvaluateCause(class AActor** Cause, class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.EvaluateCause");

	UAction_StaticField_AOE_C_EvaluateCause_Params params;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.IsValidTarget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 _Target                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_StaticField_AOE_C::IsValidTarget(class AActor** _Target, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.IsValidTarget");

	UAction_StaticField_AOE_C_IsValidTarget_Params params;
	params._Target = _Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnRep_ExplosionDelay
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_StaticField_AOE_C::OnRep_ExplosionDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnRep_ExplosionDelay");

	UAction_StaticField_AOE_C_OnRep_ExplosionDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.Get Socket Location
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UAction_StaticField_AOE_C::Get_Socket_Location(struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.Get Socket Location");

	UAction_StaticField_AOE_C_Get_Socket_Location_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StaticField_AOE_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnTick");

	UAction_StaticField_AOE_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_StaticField_AOE_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnActionStart");

	UAction_StaticField_AOE_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.UpdateFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_StaticField_AOE_C::UpdateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.UpdateFX");

	UAction_StaticField_AOE_C_UpdateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.StopFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_StaticField_AOE_C::StopFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.StopFX");

	UAction_StaticField_AOE_C_StopFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_StaticField_AOE_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnActionStop");

	UAction_StaticField_AOE_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StaticField_AOE.Action_StaticField_AOE_C.ExecuteUbergraph_Action_StaticField_AOE
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StaticField_AOE_C::ExecuteUbergraph_Action_StaticField_AOE(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StaticField_AOE.Action_StaticField_AOE_C.ExecuteUbergraph_Action_StaticField_AOE");

	UAction_StaticField_AOE_C_ExecuteUbergraph_Action_StaticField_AOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
