// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusEffectStack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.StopListeningForLevelChange
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffectStack_C::StopListeningForLevelChange(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.StopListeningForLevelChange");

	UWidget_StatusEffectStack_C_StopListeningForLevelChange_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.ListenForLevelChange
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffectStack_C::ListenForLevelChange(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.ListenForLevelChange");

	UWidget_StatusEffectStack_C_ListenForLevelChange_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.DetermineDrawableStacks
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          DrawnActions                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumStacks                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldDraw                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusEffectStack_C::DetermineDrawableStacks(class UActionBase** Action, TArray<class UClass*>* DrawnActions, int* NumStacks, bool* ShouldDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.DetermineDrawableStacks");

	UWidget_StatusEffectStack_C_DetermineDrawableStacks_Params params;
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


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.GetRemainingTimeForAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffectStack_C::GetRemainingTimeForAction(class UActionBase** Action, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.GetRemainingTimeForAction");

	UWidget_StatusEffectStack_C_GetRemainingTimeForAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.StatusEffectSortPredicate
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Result                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UWidget_StatusEffectStack_C::StatusEffectSortPredicate(class UObject** A, class UObject** B, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.StatusEffectSortPredicate");

	UWidget_StatusEffectStack_C_StatusEffectSortPredicate_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.IsValidStatusEffect
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusEffectStack_C::IsValidStatusEffect(class UActionBase** Action, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.IsValidStatusEffect");

	UWidget_StatusEffectStack_C_IsValidStatusEffect_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.UpdateStatusEffects
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StatusEffectStack_C::UpdateStatusEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.UpdateStatusEffects");

	UWidget_StatusEffectStack_C_UpdateStatusEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffectStack_C::Init(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.Init");

	UWidget_StatusEffectStack_C_Init_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.OnActionRemoved
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffectStack_C::OnActionRemoved(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.OnActionRemoved");

	UWidget_StatusEffectStack_C_OnActionRemoved_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.OnActionAdded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffectStack_C::OnActionAdded(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.OnActionAdded");

	UWidget_StatusEffectStack_C_OnActionAdded_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.ExecuteUbergraph_Widget_StatusEffectStack
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusEffectStack_C::ExecuteUbergraph_Widget_StatusEffectStack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.ExecuteUbergraph_Widget_StatusEffectStack");

	UWidget_StatusEffectStack_C_ExecuteUbergraph_Widget_StatusEffectStack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
