// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusEffects_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StatusEffects.Widget_StatusEffects_C.DetermineDrawableStacks
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          DrawnActions                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumStacks                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldDraw                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusEffects_C::DetermineDrawableStacks(class UActionBase** Action, TArray<class UClass*>* DrawnActions, int* NumStacks, bool* ShouldDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.DetermineDrawableStacks");

	UWidget_StatusEffects_C_DetermineDrawableStacks_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrawnActions != nullptr)
		*DrawnActions = params.DrawnActions;
	if (NumStacks != nullptr)
		*NumStacks = params.NumStacks;
	if (ShouldDraw != nullptr)
		*ShouldDraw = params.ShouldDraw;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.GetRemainingTimeForAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffects_C::GetRemainingTimeForAction(class UActionBase** Action, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.GetRemainingTimeForAction");

	UWidget_StatusEffects_C_GetRemainingTimeForAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.StatusEffectSortPredicate
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Result                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UWidget_StatusEffects_C::StatusEffectSortPredicate(class UObject** A, class UObject** B, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.StatusEffectSortPredicate");

	UWidget_StatusEffects_C_StatusEffectSortPredicate_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.UpdateRenderedActions
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StatusEffects_C::UpdateRenderedActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.UpdateRenderedActions");

	UWidget_StatusEffects_C_UpdateRenderedActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.AddAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           StackSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffects_C::AddAction(class UActionBase** Action, int* StackSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.AddAction");

	UWidget_StatusEffects_C_AddAction_Params params;
	params.Action = Action;
	params.StackSize = StackSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_StatusEffects_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.Construct");

	UWidget_StatusEffects_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.OnActionRemoved_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffects_C::OnActionRemoved_Event_1(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.OnActionRemoved_Event_1");

	UWidget_StatusEffects_C_OnActionRemoved_Event_1_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.On Action Added
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffects_C::On_Action_Added(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.On Action Added");

	UWidget_StatusEffects_C_On_Action_Added_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffects.Widget_StatusEffects_C.ExecuteUbergraph_Widget_StatusEffects
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffects_C::ExecuteUbergraph_Widget_StatusEffects(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffects.Widget_StatusEffects_C.ExecuteUbergraph_Widget_StatusEffects");

	UWidget_StatusEffects_C_ExecuteUbergraph_Widget_StatusEffects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
