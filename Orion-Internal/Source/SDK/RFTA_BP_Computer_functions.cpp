// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Computer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Computer.BP_Computer_C.UpdateTriggerState
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::UpdateTriggerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.UpdateTriggerState");

	ABP_Computer_C_UpdateTriggerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.IsLocked
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Computer_C::IsLocked(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.IsLocked");

	ABP_Computer_C_IsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_Computer.BP_Computer_C.SetPowerEnabled
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Computer_C::SetPowerEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.SetPowerEnabled");

	ABP_Computer_C_SetPowerEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.Refresh Focus
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::Refresh_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.Refresh Focus");

	ABP_Computer_C_Refresh_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.Get Terminal
// 00007FF6F8B35350
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget_Terminal_C*      Widget_Terminal                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Computer_C::Get_Terminal(class UWidget_Terminal_C** Widget_Terminal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.Get Terminal");

	ABP_Computer_C_Get_Terminal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Terminal != nullptr)
		*Widget_Terminal = params.Widget_Terminal;
}


// Function BP_Computer.BP_Computer_C.Get Widget Interaction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetInteractionComponent* WidgetInteraction              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Computer_C::Get_Widget_Interaction(class UWidgetInteractionComponent** WidgetInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.Get Widget Interaction");

	ABP_Computer_C_Get_Widget_Interaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetInteraction != nullptr)
		*WidgetInteraction = params.WidgetInteraction;
}


// Function BP_Computer.BP_Computer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Computer_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	ABP_Computer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Computer_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	ABP_Computer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.TerminalSelect
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::TerminalSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.TerminalSelect");

	ABP_Computer_C_TerminalSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.On Dialog Complete
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::On_Dialog_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.On Dialog Complete");

	ABP_Computer_C_On_Dialog_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.On Inspectable Complete
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Computer_C::On_Inspectable_Complete(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.On Inspectable Complete");

	ABP_Computer_C_On_Inspectable_Complete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.BndEvt__PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Computer_C::BndEvt__PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.BndEvt__PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature");

	ABP_Computer_C_BndEvt__PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectableEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UInspectableComponent**  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Computer_C::BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectableEvent__DelegateSignature(class UInspectableComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectableEvent__DelegateSignature");

	ABP_Computer_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectableEvent__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.SetTriggerState
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Computer_C::SetTriggerState(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.SetTriggerState");

	ABP_Computer_C_SetTriggerState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.SFX_Keyboard_On
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::SFX_Keyboard_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.SFX_Keyboard_On");

	ABP_Computer_C_SFX_Keyboard_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.SendEventToQuest
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::SendEventToQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.SendEventToQuest");

	ABP_Computer_C_SendEventToQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Computer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.ReceiveBeginPlay");

	ABP_Computer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.OnReset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.OnReset");

	ABP_Computer_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.OnInitQuestEntity
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::OnInitQuestEntity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.OnInitQuestEntity");

	ABP_Computer_C_OnInitQuestEntity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.ExecuteUbergraph_BP_Computer
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Computer_C::ExecuteUbergraph_BP_Computer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.ExecuteUbergraph_BP_Computer");

	ABP_Computer_C_ExecuteUbergraph_BP_Computer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Computer.BP_Computer_C.OnTerminalSelect__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Computer_C::OnTerminalSelect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Computer.BP_Computer_C.OnTerminalSelect__DelegateSignature");

	ABP_Computer_C_OnTerminalSelect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
