// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_QuestNode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.TeleportTo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestNode_C::TeleportTo(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.TeleportTo");

	UWidget_Debug_QuestNode_C_TeleportTo_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Debug_QuestNode_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.GetVisibility_1");

	UWidget_Debug_QuestNode_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.SetIconIf
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 QuestComponentType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestNode_C::SetIconIf(class UQuestComponent** QuestComponent, class UClass** QuestComponentType, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.SetIconIf");

	UWidget_Debug_QuestNode_C_SetIconIf_Params params;
	params.QuestComponent = QuestComponent;
	params.QuestComponentType = QuestComponentType;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.SetIcon
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestNode_C::SetIcon(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.SetIcon");

	UWidget_Debug_QuestNode_C_SetIcon_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Get_Errors_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Debug_QuestNode_C::Get_Errors_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Get_Errors_Visibility_1");

	UWidget_Debug_QuestNode_C_Get_Errors_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Get_Label_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Debug_QuestNode_C::Get_Label_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Get_Label_Text_1");

	UWidget_Debug_QuestNode_C_Get_Label_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestNode_C::BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Debug_QuestNode_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Debug_QuestNode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Construct");

	UWidget_Debug_QuestNode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Debug_QuestNode_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");

	UWidget_Debug_QuestNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestNode_C::BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Debug_QuestNode_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_43_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestNode_C::BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_43_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_43_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Debug_QuestNode_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_43_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.ExecuteUbergraph_Widget_Debug_QuestNode
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestNode_C::ExecuteUbergraph_Widget_Debug_QuestNode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.ExecuteUbergraph_Widget_Debug_QuestNode");

	UWidget_Debug_QuestNode_C_ExecuteUbergraph_Widget_Debug_QuestNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
