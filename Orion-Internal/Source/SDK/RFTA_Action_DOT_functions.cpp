// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_DOT.Action_DOT_C.ShouldDoDamageScaling
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_DOT_C::ShouldDoDamageScaling(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.ShouldDoDamageScaling");

	UAction_DOT_C_ShouldDoDamageScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_DOT.Action_DOT_C.CanDoDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_DOT_C::CanDoDamage(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.CanDoDamage");

	UAction_DOT_C_CanDoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_DOT.Action_DOT_C.GetLevelScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_C::GetLevelScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.GetLevelScalar");

	UAction_DOT_C_GetLevelScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Action_DOT.Action_DOT_C.GetDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_C::GetDamageScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.GetDamageScalar");

	UAction_DOT_C_GetDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_DOT.Action_DOT_C.IsImmune
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_DOT_C::IsImmune(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.IsImmune");

	UAction_DOT_C_IsImmune_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_DOT.Action_DOT_C.DoDamage
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_DOT_C::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.DoDamage");

	UAction_DOT_C_DoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT.Action_DOT_C.SetDamage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TotalDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          ApplyLevelScaling              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_DOT_C::SetDamage(float* TotalDamage, bool* ApplyLevelScaling)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.SetDamage");

	UAction_DOT_C_SetDamage_Params params;
	params.TotalDamage = TotalDamage;
	params.ApplyLevelScaling = ApplyLevelScaling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT.Action_DOT_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DOT_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.OnActionStart");

	UAction_DOT_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT.Action_DOT_C.OnDOT
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_DOT_C::OnDOT()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.OnDOT");

	UAction_DOT_C_OnDOT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT.Action_DOT_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.OnDead_Event_1");

	UAction_DOT_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT.Action_DOT_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DOT_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.OnActionStop");

	UAction_DOT_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT.Action_DOT_C.ExecuteUbergraph_Action_DOT
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_C::ExecuteUbergraph_Action_DOT(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT.Action_DOT_C.ExecuteUbergraph_Action_DOT");

	UAction_DOT_C_ExecuteUbergraph_Action_DOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
