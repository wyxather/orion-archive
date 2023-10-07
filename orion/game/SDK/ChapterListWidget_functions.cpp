#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ChapterListWidget.ChapterListWidget_C
// (None)

class UClass* UChapterListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChapterListWidget_C");

	return Clss;
}


// ChapterListWidget_C ChapterListWidget.Default__ChapterListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChapterListWidget_C* UChapterListWidget_C::GetDefaultObj()
{
	static class UChapterListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChapterListWidget_C*>(UChapterListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChapterListWidget.ChapterListWidget_C.IsUIPartsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::IsUIPartsRunning(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "IsUIPartsRunning");

	Params::UChapterListWidget_C_IsUIPartsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function ChapterListWidget.ChapterListWidget_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "IsPlayingAnim");

	Params::UChapterListWidget_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function ChapterListWidget.ChapterListWidget_C.SetIsDialogOpening
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetIsDialogOpening(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetIsDialogOpening");

	Params::UChapterListWidget_C_SetIsDialogOpening_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetCursorVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetCursorVisibility");

	Params::UChapterListWidget_C_SetCursorVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.RestoreStateForReOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::RestoreStateForReOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RestoreStateForReOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SaveStateForReOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::SaveStateForReOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SaveStateForReOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetCursorToTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::SetCursorToTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetCursorToTop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetupListType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::SetupListType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetupListType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetListBodyHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NotUseScroll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetListBodyHeight(bool NotUseScroll, float Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetListBodyHeight");

	Params::UChapterListWidget_C_SetListBodyHeight_Params Parms{};

	Parms.NotUseScroll = NotUseScroll;
	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetListVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetListVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetListVisible");

	Params::UChapterListWidget_C_SetListVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetCategorySelectFromOutSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CategorySelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetCategorySelectFromOutSide(bool CategorySelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetCategorySelectFromOutSide");

	Params::UChapterListWidget_C_SetCategorySelectFromOutSide_Params Parms{};

	Parms.CategorySelect = CategorySelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.Init
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UChapterListWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "Init");

	Params::UChapterListWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChapterListWidget.ChapterListWidget_C.SetDecideDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetDecideDisable(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetDecideDisable");

	Params::UChapterListWidget_C_SetDecideDisable_Params Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.GetSelectedItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FMJListWidgetItemData       Output                                                           (Parm, OutParm)

void UChapterListWidget_C::GetSelectedItemData(struct FMJListWidgetItemData* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetSelectedItemData");

	Params::UChapterListWidget_C_GetSelectedItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function ChapterListWidget.ChapterListWidget_C.DecideCurrentItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::DecideCurrentItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "DecideCurrentItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.GetEnableCategoryNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetEnableCategoryNum(int32* Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetEnableCategoryNum");

	Params::UChapterListWidget_C_GetEnableCategoryNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function ChapterListWidget.ChapterListWidget_C.SyncHelpState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::SyncHelpState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SyncHelpState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.RefreshActiveItemText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::RefreshActiveItemText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RefreshActiveItemText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.RefreshScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::RefreshScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RefreshScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.IsVisibleHelp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::IsVisibleHelp(bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "IsVisibleHelp");

	Params::UChapterListWidget_C_IsVisibleHelp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function ChapterListWidget.ChapterListWidget_C.PageScroll
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::PageScroll(bool MoveToPlus, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "PageScroll");

	Params::UChapterListWidget_C_PageScroll_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ChapterListWidget.ChapterListWidget_C.SetHelpOffsetPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   OffsetPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetHelpOffsetPos(const struct FVector2D& OffsetPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetHelpOffsetPos");

	Params::UChapterListWidget_C_SetHelpOffsetPos_Params Parms{};

	Parms.OffsetPos = OffsetPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetDefaultCursorPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DefaultCursorPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetDefaultCursorPos(int32 DefaultCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetDefaultCursorPos");

	Params::UChapterListWidget_C_SetDefaultCursorPos_Params Parms{};

	Parms.DefaultCursorPos = DefaultCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetUseHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDetailText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetUseHelp(bool UseDetailText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetUseHelp");

	Params::UChapterListWidget_C_SetUseHelp_Params Parms{};

	Parms.UseDetailText = UseDetailText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateHelpPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateHelpPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateHelpPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.IsCategorySelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CategorySelect                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::IsCategorySelect(bool* CategorySelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "IsCategorySelect");

	Params::UChapterListWidget_C_IsCategorySelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategorySelect != nullptr)
		*CategorySelect = Parms.CategorySelect;

}


// Function ChapterListWidget.ChapterListWidget_C.SetVisibleHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetVisibleHeader(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetVisibleHeader");

	Params::UChapterListWidget_C_SetVisibleHeader_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetExHeaderWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ExWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetExHeaderWidget(class UUserWidget* ExWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetExHeaderWidget");

	Params::UChapterListWidget_C_SetExHeaderWidget_Params Parms{};

	Parms.ExWidget = ExWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.IsListEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::IsListEmpty(bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "IsListEmpty");

	Params::UChapterListWidget_C_IsListEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function ChapterListWidget.ChapterListWidget_C.GetItemWidgetForVirtualScroll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJListItemWidget*           Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetItemWidgetForVirtualScroll(int32 CursorPos, class UMJListItemWidget** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetItemWidgetForVirtualScroll");

	Params::UChapterListWidget_C_GetItemWidgetForVirtualScroll_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateVirtualScroll
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateVirtualScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateVirtualScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.HideCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::HideCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "HideCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.FitScrollAreaToContents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NotUseScroll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::FitScrollAreaToContents(bool NotUseScroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "FitScrollAreaToContents");

	Params::UChapterListWidget_C_FitScrollAreaToContents_Params Parms{};

	Parms.NotUseScroll = NotUseScroll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateScrollPos
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToTop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUpdated                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::UpdateScrollPos(bool ToTop, bool* IsUpdated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateScrollPos");

	Params::UChapterListWidget_C_UpdateScrollPos_Params Parms{};

	Parms.ToTop = ToTop;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUpdated != nullptr)
		*IsUpdated = Parms.IsUpdated;

}


// Function ChapterListWidget.ChapterListWidget_C.ResetScrollPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ResetScrollPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ResetScrollPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetupEnableCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableCursor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetupEnableCursor(bool EnableCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetupEnableCursor");

	Params::UChapterListWidget_C_SetupEnableCursor_Params Parms{};

	Parms.EnableCursor = EnableCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetupListTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TitleTextPaddingTop                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetupListTitle(float TitleTextPaddingTop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetupListTitle");

	Params::UChapterListWidget_C_SetupListTitle_Params Parms{};

	Parms.TitleTextPaddingTop = TitleTextPaddingTop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ReserveItemWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::ReserveItemWidget(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ReserveItemWidget");

	Params::UChapterListWidget_C_ReserveItemWidget_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.GetFreeCategoryTab
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChapterCategoryWidget_C*    Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetFreeCategoryTab(class UChapterCategoryWidget_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetFreeCategoryTab");

	Params::UChapterListWidget_C_GetFreeCategoryTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function ChapterListWidget.ChapterListWidget_C.ReturnAllCategoryTab
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ReturnAllCategoryTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ReturnAllCategoryTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.ReserveCategoryTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::ReserveCategoryTab(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ReserveCategoryTab");

	Params::UChapterListWidget_C_ReserveCategoryTab_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.FocusCurrentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::FocusCurrentItem(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "FocusCurrentItem");

	Params::UChapterListWidget_C_FocusCurrentItem_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::UpdateHelpText(int32 CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateHelpText");

	Params::UChapterListWidget_C_UpdateHelpText_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.Play List SE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELISTWIDGET_SE_TYPE     SeType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::Play_List_SE(enum class ELISTWIDGET_SE_TYPE SeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "Play List SE");

	Params::UChapterListWidget_C_Play_List_SE_Params Parms{};

	Parms.SeType = SeType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetDefaultSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::SetDefaultSE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetDefaultSE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DecideClose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CancelClose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Decide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Cancel                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Failed                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetSE(class FName Open, class FName DecideClose, class FName CancelClose, class FName Select, class FName Decide, class FName Cancel, class FName Failed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetSE");

	Params::UChapterListWidget_C_SetSE_Params Parms{};

	Parms.Open = Open;
	Parms.DecideClose = DecideClose;
	Parms.CancelClose = CancelClose;
	Parms.Select = Select;
	Parms.Decide = Decide;
	Parms.Cancel = Cancel;
	Parms.Failed = Failed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetRightFrameWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RightFrameWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetRightFrameWidget(class UUserWidget* RightFrameWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetRightFrameWidget");

	Params::UChapterListWidget_C_SetRightFrameWidget_Params Parms{};

	Parms.RightFrameWidget = RightFrameWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ReleaseSelf
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ReleaseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ReleaseSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetCategoryData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> CategoryData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChapterListWidget_C::SetCategoryData(TArray<struct FListWidgetCategory>& CategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetCategoryData");

	Params::UChapterListWidget_C_SetCategoryData_Params Parms{};

	Parms.CategoryData = CategoryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetupListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_NUM_UNIT_TYPE     NumUnitType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetupListItem(enum class ELIST_NUM_UNIT_TYPE NumUnitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetupListItem");

	Params::UChapterListWidget_C_SetupListItem_Params Parms{};

	Parms.NumUnitType = NumUnitType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ResetList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ResetList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ResetList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetupList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseListAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetupList(bool UseCategory, bool UseListAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetupList");

	Params::UChapterListWidget_C_SetupList_Params Parms{};

	Parms.UseCategory = UseCategory;
	Parms.UseListAnimation = UseListAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateListItemByAllIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemAllIdx                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMJListWidgetItemData       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChapterListWidget_C::UpdateListItemByAllIdx(int32 ItemAllIdx, struct FMJListWidgetItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateListItemByAllIdx");

	Params::UChapterListWidget_C_UpdateListItemByAllIdx_Params Parms{};

	Parms.ItemAllIdx = ItemAllIdx;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ChangeFocusToCurrentCursorPos
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ChangeFocusToCurrentCursorPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ChangeFocusToCurrentCursorPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateBody");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnEndState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnEndState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnBeginState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnBeginState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnBeginState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnUpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnUpdateState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnUpdateState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetNextState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELISTWIDGET_STATE       NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetNextState(enum class ELISTWIDGET_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetNextState");

	Params::UChapterListWidget_C_SetNextState_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetListCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CaptionText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UChapterListWidget_C::SetListCaption(class FText CaptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetListCaption");

	Params::UChapterListWidget_C_SetListCaption_Params Parms{};

	Parms.CaptionText = CaptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.CallEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::CallEvent(enum class ELIST_EVENT_TYPE EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CallEvent");

	Params::UChapterListWidget_C_CallEvent_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.GetCurrentCategoryItemWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJListItemWidget*           Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetCurrentCategoryItemWidget(int32 ItemIndex, class UMJListItemWidget** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetCurrentCategoryItemWidget");

	Params::UChapterListWidget_C_GetCurrentCategoryItemWidget_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ChapterListWidget.ChapterListWidget_C.RemoveListRightSideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 List_Right_Side_Widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::RemoveListRightSideWidget(class UUserWidget* List_Right_Side_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RemoveListRightSideWidget");

	Params::UChapterListWidget_C_RemoveListRightSideWidget_Params Parms{};

	Parms.List_Right_Side_Widget = List_Right_Side_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.AddListRightSideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 List_Right_Side_Widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::AddListRightSideWidget(class UUserWidget* List_Right_Side_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "AddListRightSideWidget");

	Params::UChapterListWidget_C_AddListRightSideWidget_Params Parms{};

	Parms.List_Right_Side_Widget = List_Right_Side_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.RefreshCursorPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::RefreshCursorPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RefreshCursorPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetUseAnimaiton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseAnimation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetUseAnimaiton(bool UseAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetUseAnimaiton");

	Params::UChapterListWidget_C_SetUseAnimaiton_Params Parms{};

	Parms.UseAnimation = UseAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.RemoveRightWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RightWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::RemoveRightWidget(class UUserWidget* RightWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RemoveRightWidget");

	Params::UChapterListWidget_C_RemoveRightWidget_Params Parms{};

	Parms.RightWidget = RightWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.AddRightWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RightWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::AddRightWidget(class UUserWidget* RightWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "AddRightWidget");

	Params::UChapterListWidget_C_AddRightWidget_Params Parms{};

	Parms.RightWidget = RightWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.Debug_PrintEnableCategoryList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      TempString1                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UChapterListWidget_C::Debug_PrintEnableCategoryList(class FString* TempString1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "Debug_PrintEnableCategoryList");

	Params::UChapterListWidget_C_Debug_PrintEnableCategoryList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TempString1 != nullptr)
		*TempString1 = std::move(Parms.TempString1);

}


// Function ChapterListWidget.ChapterListWidget_C.GetCurrentCategoryId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CategoryId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetCurrentCategoryId(int32* CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetCurrentCategoryId");

	Params::UChapterListWidget_C_GetCurrentCategoryId_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

}


// Function ChapterListWidget.ChapterListWidget_C.CategoryCursorPosToCategoryId
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::CategoryCursorPosToCategoryId(int32 CategoryCursorPos, int32* CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CategoryCursorPosToCategoryId");

	Params::UChapterListWidget_C_CategoryCursorPosToCategoryId_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

}


// Function ChapterListWidget.ChapterListWidget_C.GetCategoryTabWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChapterCategoryWidget_C*    Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetCategoryTabWidget(int32 CategoryCursorPos, class UChapterCategoryWidget_C** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetCategoryTabWidget");

	Params::UChapterListWidget_C_GetCategoryTabWidget_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ChapterListWidget.ChapterListWidget_C.RefreshList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::RefreshList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RefreshList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.RemoveBottomWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 BottomWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::RemoveBottomWidget(class UUserWidget* BottomWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "RemoveBottomWidget");

	Params::UChapterListWidget_C_RemoveBottomWidget_Params Parms{};

	Parms.BottomWidget = BottomWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.AddBottomWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 BottomWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::AddBottomWidget(class UUserWidget* BottomWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "AddBottomWidget");

	Params::UChapterListWidget_C_AddBottomWidget_Params Parms{};

	Parms.BottomWidget = BottomWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.CalcCurrentItemRelativePosY
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              RelativePosY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::CalcCurrentItemRelativePosY(float* RelativePosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CalcCurrentItemRelativePosY");

	Params::UChapterListWidget_C_CalcCurrentItemRelativePosY_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePosY != nullptr)
		*RelativePosY = Parms.RelativePosY;

}


// Function ChapterListWidget.ChapterListWidget_C.SetRangeRightFrameWidgetOffsetY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinOffsetY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxOffsetY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetRangeRightFrameWidgetOffsetY(float MinOffsetY, float MaxOffsetY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetRangeRightFrameWidgetOffsetY");

	Params::UChapterListWidget_C_SetRangeRightFrameWidgetOffsetY_Params Parms{};

	Parms.MinOffsetY = MinOffsetY;
	Parms.MaxOffsetY = MaxOffsetY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetRightFrameWidgetOffsetY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              In_Size_Y                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetRightFrameWidgetOffsetY(float In_Size_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetRightFrameWidgetOffsetY");

	Params::UChapterListWidget_C_SetRightFrameWidgetOffsetY_Params Parms{};

	Parms.In_Size_Y = In_Size_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ReturnItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ReturnItemWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ReturnItemWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.GetFreeItemWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMJListItemWidget*           ItemWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetFreeItemWidget(class UMJListItemWidget** ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetFreeItemWidget");

	Params::UChapterListWidget_C_GetFreeItemWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemWidget != nullptr)
		*ItemWidget = Parms.ItemWidget;

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateListAllItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateListAllItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateListAllItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateCategoryUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateCategoryUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateCategoryUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OutFocusCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::OutFocusCategory(int32 CategoryCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OutFocusCategory");

	Params::UChapterListWidget_C_OutFocusCategory_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.FocusCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::FocusCategory(int32 CategoryCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "FocusCategory");

	Params::UChapterListWidget_C_FocusCategory_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateCategoryItemNum
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateCategoryItemNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateCategoryItemNum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetAllItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>AllItemList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChapterListWidget_C::SetAllItems(TArray<struct FMJListWidgetItemData>& AllItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetAllItems");

	Params::UChapterListWidget_C_SetAllItems_Params Parms{};

	Parms.AllItemList = AllItemList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.GetSelectedItemWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMJListItemWidget*           Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetSelectedItemWidget(class UMJListItemWidget** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetSelectedItemWidget");

	Params::UChapterListWidget_C_GetSelectedItemWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ChapterListWidget.ChapterListWidget_C.OutFocusCurrentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OutFocusCurrentItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OutFocusCurrentItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.SetVisibleHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::SetVisibleHelp(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetVisibleHelp");

	Params::UChapterListWidget_C_SetVisibleHelp_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.GetRightSideWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 RightSideWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetRightSideWidget(class UUserWidget** RightSideWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetRightSideWidget");

	Params::UChapterListWidget_C_GetRightSideWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RightSideWidget != nullptr)
		*RightSideWidget = Parms.RightSideWidget;

}


// Function ChapterListWidget.ChapterListWidget_C.GetActiveListItemNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ItemNum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::GetActiveListItemNum(int32* ItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "GetActiveListItemNum");

	Params::UChapterListWidget_C_GetActiveListItemNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemNum != nullptr)
		*ItemNum = Parms.ItemNum;

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateCurrentItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChapterListWidget_C::UpdateCurrentItemList(TArray<struct FMJListWidgetItemData>& NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateCurrentItemList");

	Params::UChapterListWidget_C_UpdateCurrentItemList_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.SetItemDetailWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListItemDetailWidget_C*     ItemDetailWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::SetItemDetailWidget(class UListItemDetailWidget_C* ItemDetailWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "SetItemDetailWidget");

	Params::UChapterListWidget_C_SetItemDetailWidget_Params Parms{};

	Parms.ItemDetailWidget = ItemDetailWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.DecideMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "DecideMenu");

	Params::UChapterListWidget_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function ChapterListWidget.ChapterListWidget_C.CancelMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CancelMenu");

	Params::UChapterListWidget_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function ChapterListWidget.ChapterListWidget_C.CloseList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::CloseList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CloseList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OpenList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OpenList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OpenList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::IsActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "IsActive");

	Params::UChapterListWidget_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function ChapterListWidget.ChapterListWidget_C.AddCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetCategory         CategoryData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChapterListWidget_C::AddCategory(struct FListWidgetCategory& CategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "AddCategory");

	Params::UChapterListWidget_C_AddCategory_Params Parms{};

	Parms.CategoryData = CategoryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateStaticText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::UpdateStaticText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateStaticText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.IsEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::IsEmpty(bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "IsEmpty");

	Params::UChapterListWidget_C_IsEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function ChapterListWidget.ChapterListWidget_C.FocusPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::FocusPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "FocusPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OutFocusPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OutFocusPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OutFocusPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.MoveListCursor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdateCursorPosOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ToTop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::MoveListCursor(bool MoveToPlus, bool UpdateCursorPosOnly, bool ToTop, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "MoveListCursor");

	Params::UChapterListWidget_C_MoveListCursor_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;
	Parms.UpdateCursorPosOnly = UpdateCursorPosOnly;
	Parms.ToTop = ToTop;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ChapterListWidget.ChapterListWidget_C.UpdateListCaption
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::UpdateListCaption(int32 CategoryCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "UpdateListCaption");

	Params::UChapterListWidget_C_UpdateListCaption_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ChangeCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursorPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceUpdate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ToTop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::ChangeCursorPosition(int32 NewCursorPosition, bool ForceUpdate, bool ToTop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ChangeCursorPosition");

	Params::UChapterListWidget_C_ChangeCursorPosition_Params Parms{};

	Parms.NewCursorPosition = NewCursorPosition;
	Parms.ForceUpdate = ForceUpdate;
	Parms.ToTop = ToTop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.InitWidgetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::InitWidgetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "InitWidgetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnRightAxisX");

	Params::UChapterListWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnRightAxisY");

	Params::UChapterListWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnLeftAxisX");

	Params::UChapterListWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnLeftAxisY");

	Params::UChapterListWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnGamePadAxisX");

	Params::UChapterListWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnGamePadAxisY");

	Params::UChapterListWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "WorldMapSlowCursorX");

	Params::UChapterListWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "WorldMapSlowCursorY");

	Params::UChapterListWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "HelpScrollAxis");

	Params::UChapterListWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChapterListWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnListPaging");

	Params::UChapterListWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "Tick");

	Params::UChapterListWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.FocusMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OutFocusMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "OpenWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChapterListWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterListWidget.ChapterListWidget_C.ExecuteUbergraph_ChapterListWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::ExecuteUbergraph_ChapterListWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ExecuteUbergraph_ChapterListWidget");

	Params::UChapterListWidget_C_ExecuteUbergraph_ChapterListWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterListWidget.ChapterListWidget_C.ChapterListEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterListWidget_C::ChapterListEvent__DelegateSignature(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterListWidget_C", "ChapterListEvent__DelegateSignature");

	Params::UChapterListWidget_C_ChapterListEvent__DelegateSignature_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}

}


