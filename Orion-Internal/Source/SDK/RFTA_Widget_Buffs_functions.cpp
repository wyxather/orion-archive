// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Buffs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Buffs.Widget_Buffs_C.RemoveAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAction_Buff_C**         StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Buffs_C::RemoveAction(class UAction_Buff_C** StatusEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.RemoveAction");

	UWidget_Buffs_C_RemoveAction_Params params;
	params.StatusEffect = StatusEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buffs.Widget_Buffs_C.AddAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAction_Buff_C**         Buff                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Buffs_C::AddAction(class UAction_Buff_C** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.AddAction");

	UWidget_Buffs_C_AddAction_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buffs.Widget_Buffs_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Buffs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.Construct");

	UWidget_Buffs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buffs.Widget_Buffs_C.OnActionRemoved_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Buffs_C::OnActionRemoved_Event_1(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.OnActionRemoved_Event_1");

	UWidget_Buffs_C_OnActionRemoved_Event_1_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buffs.Widget_Buffs_C.On Action Added
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Buffs_C::On_Action_Added(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.On Action Added");

	UWidget_Buffs_C_On_Action_Added_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buffs.Widget_Buffs_C.ExecuteUbergraph_Widget_Buffs
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Buffs_C::ExecuteUbergraph_Widget_Buffs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.ExecuteUbergraph_Widget_Buffs");

	UWidget_Buffs_C_ExecuteUbergraph_Widget_Buffs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
