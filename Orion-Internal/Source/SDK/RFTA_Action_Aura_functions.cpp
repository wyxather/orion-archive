// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Aura_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Aura.Action_Aura_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Aura_C::DoAction(class UActionComponent** ActionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.DoAction");

	UAction_Aura_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Aura.Action_Aura_C.GetRadius
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Aura_C::GetRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.GetRadius");

	UAction_Aura_C_GetRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function Action_Aura.Action_Aura_C.UpdateOverlaps
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Aura_C::UpdateOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.UpdateOverlaps");

	UAction_Aura_C_UpdateOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Aura.Action_Aura_C.ValidateActor
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Aura_C::ValidateActor(class AActor** Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.ValidateActor");

	UAction_Aura_C_ValidateActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Aura.Action_Aura_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Aura_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.OnTick");

	UAction_Aura_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Aura.Action_Aura_C.OnBeginOverlap
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Aura_C::OnBeginOverlap(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.OnBeginOverlap");

	UAction_Aura_C_OnBeginOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Aura.Action_Aura_C.OnEndOverlap
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Aura_C::OnEndOverlap(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.OnEndOverlap");

	UAction_Aura_C_OnEndOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Aura.Action_Aura_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Aura_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.OnActionStop");

	UAction_Aura_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Aura.Action_Aura_C.ExecuteUbergraph_Action_Aura
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Aura_C::ExecuteUbergraph_Action_Aura(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Aura.Action_Aura_C.ExecuteUbergraph_Action_Aura");

	UAction_Aura_C_ExecuteUbergraph_Action_Aura_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
