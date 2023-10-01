// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TravelMenuScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInSurvivalHub
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TravelMenuScreen_C::IsInSurvivalHub(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInSurvivalHub");

	UWidget_TravelMenuScreen_C_IsInSurvivalHub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsSurvivalMode
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSurvival                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TravelMenuScreen_C::IsSurvivalMode(bool* IsSurvival)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsSurvivalMode");

	UWidget_TravelMenuScreen_C_IsSurvivalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSurvival != nullptr)
		*IsSurvival = params.IsSurvival;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInTown
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TravelMenuScreen_C::IsInTown(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInTown");

	UWidget_TravelMenuScreen_C_IsInTown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildLastCheckpointEntry
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TravelMenuScreen_C::BuildLastCheckpointEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildLastCheckpointEntry");

	UWidget_TravelMenuScreen_C_BuildLastCheckpointEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetZoneLabel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UWidget_TravelMenuScreen_C::GetZoneLabel(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetZoneLabel");

	UWidget_TravelMenuScreen_C_GetZoneLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.SetActionText
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TravelMenuScreen_C::SetActionText(struct FText* Text, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.SetActionText");

	UWidget_TravelMenuScreen_C_SetActionText_Params params;
	params.Text = Text;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.HideEmptyTabs
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TravelMenuScreen_C::HideEmptyTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.HideEmptyTabs");

	UWidget_TravelMenuScreen_C_HideEmptyTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetList
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*            List                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::GetList(struct FName* Category, class UVerticalBox** List)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetList");

	UWidget_TravelMenuScreen_C_GetList_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ControlletVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_TravelMenuScreen_C::ControlletVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ControlletVisibility");

	UWidget_TravelMenuScreen_C_ControlletVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.UpdateTravelEnabled
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AutoExit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TravelMenuScreen_C::UpdateTravelEnabled(bool* AutoExit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.UpdateTravelEnabled");

	UWidget_TravelMenuScreen_C_UpdateTravelEnabled_Params params;
	params.AutoExit = AutoExit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInDungeon
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TravelMenuScreen_C::IsInDungeon(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInDungeon");

	UWidget_TravelMenuScreen_C_IsInDungeon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntry
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  WaypointName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>* Image                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float*                         TopSpacing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::CreateMenuEntry(struct FName* Action, struct FText* Label, struct FName* WaypointName, struct FName* Category, TSoftObjectPtr<class UTexture2D>* Image, float* TopSpacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntry");

	UWidget_TravelMenuScreen_C_CreateMenuEntry_Params params;
	params.Action = Action;
	params.Label = Label;
	params.WaypointName = WaypointName;
	params.Category = Category;
	params.Image = Image;
	params.TopSpacing = TopSpacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntryIfTagExists
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>* Image                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::CreateMenuEntryIfTagExists(struct FName* Tag, struct FText* Label, struct FName* Category, TSoftObjectPtr<class UTexture2D>* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntryIfTagExists");

	UWidget_TravelMenuScreen_C_CreateMenuEntryIfTagExists_Params params;
	params.Tag = Tag;
	params.Label = Label;
	params.Category = Category;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildFastTravelEntries
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TravelMenuScreen_C::BuildFastTravelEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildFastTravelEntries");

	UWidget_TravelMenuScreen_C_BuildFastTravelEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Init
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::Init(class AActor** Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Init");

	UWidget_TravelMenuScreen_C_Init_Params params;
	params.Waypoint = Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.FocusFirst
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TravelMenuScreen_C::FocusFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.FocusFirst");

	UWidget_TravelMenuScreen_C_FocusFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildMenuEntries
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TravelMenuScreen_C::BuildMenuEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildMenuEntries");

	UWidget_TravelMenuScreen_C_BuildMenuEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TravelMenuScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Construct");

	UWidget_TravelMenuScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_TravelMenuScreen_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Tick");

	UWidget_TravelMenuScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.LeaveTravelMenu
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_TravelMenuScreen_C::LeaveTravelMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.LeaveTravelMenu");

	UWidget_TravelMenuScreen_C_LeaveTravelMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_TravelMenuScreen_C_BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ExecuteUbergraph_Widget_TravelMenuScreen
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelMenuScreen_C::ExecuteUbergraph_Widget_TravelMenuScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ExecuteUbergraph_Widget_TravelMenuScreen");

	UWidget_TravelMenuScreen_C_ExecuteUbergraph_Widget_TravelMenuScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
