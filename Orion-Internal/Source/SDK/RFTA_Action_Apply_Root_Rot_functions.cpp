// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Apply_Root_Rot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.Clear Timer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Apply_Root_Rot_C::Clear_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.Clear Timer");

	UAction_Apply_Root_Rot_C_Clear_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.Get Owners Transform
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform UAction_Apply_Root_Rot_C::Get_Owners_Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.Get Owners Transform");

	UAction_Apply_Root_Rot_C_Get_Owners_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Apply_Root_Rot_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnActionStart");

	UAction_Apply_Root_Rot_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Apply_Root_Rot_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnActionStop");

	UAction_Apply_Root_Rot_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.ApplyCough
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Apply_Root_Rot_C::ApplyCough()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.ApplyCough");

	UAction_Apply_Root_Rot_C_ApplyCough_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnRestore
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Apply_Root_Rot_C::OnRestore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnRestore");

	UAction_Apply_Root_Rot_C_OnRestore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Apply_Root_Rot_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.OnDead_Event_1");

	UAction_Apply_Root_Rot_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.ExecuteUbergraph_Action_Apply_Root_Rot
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Apply_Root_Rot_C::ExecuteUbergraph_Action_Apply_Root_Rot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Apply_Root_Rot.Action_Apply_Root_Rot_C.ExecuteUbergraph_Action_Apply_Root_Rot");

	UAction_Apply_Root_Rot_C_ExecuteUbergraph_Action_Apply_Root_Rot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
