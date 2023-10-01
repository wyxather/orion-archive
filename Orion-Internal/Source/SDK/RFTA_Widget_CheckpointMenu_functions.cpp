// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_CheckpointMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.GetTutorial
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::GetTutorial(class UClass** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.GetTutorial");

	UWidget_CheckpointMenu_C_GetTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.RefreshWaypointInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::RefreshWaypointInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.RefreshWaypointInfo");

	UWidget_CheckpointMenu_C_RefreshWaypointInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.IsInTown
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_CheckpointMenu_C::IsInTown(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.IsInTown");

	UWidget_CheckpointMenu_C_IsInTown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.InDemoMode
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_CheckpointMenu_C::InDemoMode(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.InDemoMode");

	UWidget_CheckpointMenu_C_InDemoMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.GetZoneLabel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UWidget_CheckpointMenu_C::GetZoneLabel(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.GetZoneLabel");

	UWidget_CheckpointMenu_C_GetZoneLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.SetActionText
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_CheckpointMenu_C::SetActionText(struct FText* Text, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.SetActionText");

	UWidget_CheckpointMenu_C_SetActionText_Params params;
	params.Text = Text;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.SetSelectedAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_CheckpointOption_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::SetSelectedAction(struct FName* Action, class UWidget_CheckpointOption_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.SetSelectedAction");

	UWidget_CheckpointMenu_C_SetSelectedAction_Params params;
	params.Action = Action;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UpdateActionText
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::UpdateActionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UpdateActionText");

	UWidget_CheckpointMenu_C_UpdateActionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ShowTutorial
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::ShowTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ShowTutorial");

	UWidget_CheckpointMenu_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UnbindEvents
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UnbindEvents");

	UWidget_CheckpointMenu_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnTravelStateChanged
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FZoneTravelState*       NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWidget_CheckpointMenu_C::OnTravelStateChanged(struct FZoneTravelState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnTravelStateChanged");

	UWidget_CheckpointMenu_C_OnTravelStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UpdateTravelEnabled
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::UpdateTravelEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.UpdateTravelEnabled");

	UWidget_CheckpointMenu_C_UpdateTravelEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.CreateMenuEntry
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         TopSpacing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::CreateMenuEntry(struct FName* Action, struct FText* Label, float* TopSpacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.CreateMenuEntry");

	UWidget_CheckpointMenu_C_CreateMenuEntry_Params params;
	params.Action = Action;
	params.Label = Label;
	params.TopSpacing = TopSpacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::Init(class AActor** Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Init");

	UWidget_CheckpointMenu_C_Init_Params params;
	params.Waypoint = Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.FocusFirst
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::FocusFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.FocusFirst");

	UWidget_CheckpointMenu_C_FocusFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BuildMenuEntries
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::BuildMenuEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BuildMenuEntries");

	UWidget_CheckpointMenu_C_BuildMenuEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnLoaded_8DD6F9514A9A47A1BEC8FDA30BFBA923
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::OnLoaded_8DD6F9514A9A47A1BEC8FDA30BFBA923(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnLoaded_8DD6F9514A9A47A1BEC8FDA30BFBA923");

	UWidget_CheckpointMenu_C_OnLoaded_8DD6F9514A9A47A1BEC8FDA30BFBA923_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_CheckpointMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Construct");

	UWidget_CheckpointMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_CheckpointMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_CheckpointMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Destruct");

	UWidget_CheckpointMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.Tick");

	UWidget_CheckpointMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.LoadWaypointImage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::LoadWaypointImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.LoadWaypointImage");

	UWidget_CheckpointMenu_C_LoadWaypointImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_CheckpointMenu_C_BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ShowTutorialWithDelay
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointMenu_C::ShowTutorialWithDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ShowTutorialWithDelay");

	UWidget_CheckpointMenu_C_ShowTutorialWithDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnDialogResult_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::OnDialogResult_Event_1(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.OnDialogResult_Event_1");

	UWidget_CheckpointMenu_C_OnDialogResult_Event_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ExecuteUbergraph_Widget_CheckpointMenu
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointMenu_C::ExecuteUbergraph_Widget_CheckpointMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointMenu.Widget_CheckpointMenu_C.ExecuteUbergraph_Widget_CheckpointMenu");

	UWidget_CheckpointMenu_C_ExecuteUbergraph_Widget_CheckpointMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
