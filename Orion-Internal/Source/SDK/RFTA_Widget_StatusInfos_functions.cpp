// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusInfos_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StatusInfos.Widget_StatusInfos_C.CanAddAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAction_StatusEffect_C** StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionBuff**            BuffEffect                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusInfos_C::CanAddAction(class UAction_StatusEffect_C** StatusEffect, class UActionBuff** BuffEffect, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.CanAddAction");

	UWidget_StatusInfos_C_CanAddAction_Params params;
	params.StatusEffect = StatusEffect;
	params.BuffEffect = BuffEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_StatusInfos.Widget_StatusInfos_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StatusInfos_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.Init");

	UWidget_StatusInfos_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusInfos.Widget_StatusInfos_C.RemoveAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAction_StatusEffect_C** StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAction_Buff_C**         BuffEffect                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          IsTeamwork                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusInfos_C::RemoveAction(class UAction_StatusEffect_C** StatusEffect, class UAction_Buff_C** BuffEffect, bool* IsTeamwork)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.RemoveAction");

	UWidget_StatusInfos_C_RemoveAction_Params params;
	params.StatusEffect = StatusEffect;
	params.BuffEffect = BuffEffect;
	params.IsTeamwork = IsTeamwork;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusInfos.Widget_StatusInfos_C.AddAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAction_StatusEffect_C** StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAction_Buff_C**         BuffEffect                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          IsStatusEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          IsTeamwork                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusInfos_C::AddAction(class UAction_StatusEffect_C** StatusEffect, class UAction_Buff_C** BuffEffect, bool* IsStatusEffect, bool* IsTeamwork)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.AddAction");

	UWidget_StatusInfos_C_AddAction_Params params;
	params.StatusEffect = StatusEffect;
	params.BuffEffect = BuffEffect;
	params.IsStatusEffect = IsStatusEffect;
	params.IsTeamwork = IsTeamwork;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusInfos.Widget_StatusInfos_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_StatusInfos_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.Construct");

	UWidget_StatusInfos_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusInfos.Widget_StatusInfos_C.OnActionAdded_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusInfos_C::OnActionAdded_Event_1(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.OnActionAdded_Event_1");

	UWidget_StatusInfos_C_OnActionAdded_Event_1_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusInfos.Widget_StatusInfos_C.OnActionRemoved_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusInfos_C::OnActionRemoved_Event_1(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.OnActionRemoved_Event_1");

	UWidget_StatusInfos_C_OnActionRemoved_Event_1_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusInfos.Widget_StatusInfos_C.ExecuteUbergraph_Widget_StatusInfos
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusInfos_C::ExecuteUbergraph_Widget_StatusInfos(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfos.Widget_StatusInfos_C.ExecuteUbergraph_Widget_StatusInfos");

	UWidget_StatusInfos_C_ExecuteUbergraph_Widget_StatusInfos_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
