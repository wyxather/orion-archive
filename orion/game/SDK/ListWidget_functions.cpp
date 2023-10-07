#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListWidget.ListWidget_C
// (None)

class UClass* UListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListWidget_C");

	return Clss;
}


// ListWidget_C ListWidget.Default__ListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListWidget_C* UListWidget_C::GetDefaultObj()
{
	static class UListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListWidget_C*>(UListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListWidget.ListWidget_C.IsUIPartsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsUIPartsRunning(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsUIPartsRunning");

	Params::UListWidget_C_IsUIPartsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function ListWidget.ListWidget_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsPlayingAnim");

	Params::UListWidget_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function ListWidget.ListWidget_C.SetIsDialogOpening
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetIsDialogOpening(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetIsDialogOpening");

	Params::UListWidget_C_SetIsDialogOpening_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetIsDialogOpening
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListWidget_C::GetIsDialogOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetIsDialogOpening");

	Params::UListWidget_C_GetIsDialogOpening_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListWidget.ListWidget_C.GetSubItemListCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SubItemIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetSubItemListCount(int32 SubItemIndex, int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetSubItemListCount");

	Params::UListWidget_C_GetSubItemListCount_Params Parms{};

	Parms.SubItemIndex = SubItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function ListWidget.ListWidget_C.AddSubItemSpacer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpacer*                     Spacer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::AddSubItemSpacer(class USpacer* Spacer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "AddSubItemSpacer");

	Params::UListWidget_C_AddSubItemSpacer_Params Parms{};

	Parms.Spacer = Spacer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ClampCursorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ClampCursorIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ClampCursorIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.TreatCharaIdAsCategoryId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::TreatCharaIdAsCategoryId(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "TreatCharaIdAsCategoryId");

	Params::UListWidget_C_TreatCharaIdAsCategoryId_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetLLineVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetLLineVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetLLineVisible");

	Params::UListWidget_C_SetLLineVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.Set Help Flip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FlipCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::Set_Help_Flip(int32 FlipCount, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Set Help Flip");

	Params::UListWidget_C_Set_Help_Flip_Params Parms{};

	Parms.FlipCount = FlipCount;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.IsForceHelpFlip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListWidget_C::IsForceHelpFlip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsForceHelpFlip");

	Params::UListWidget_C_IsForceHelpFlip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListWidget.ListWidget_C.SetSaveCursorMinMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetSaveCursorMinMax(int32 Min, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetSaveCursorMinMax");

	Params::UListWidget_C_SetSaveCursorMinMax_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ChangeCategoryFromOutSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::ChangeCategoryFromOutSide(bool IsPlus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ChangeCategoryFromOutSide");

	Params::UListWidget_C_ChangeCategoryFromOutSide_Params Parms{};

	Parms.IsPlus = IsPlus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetSaveCursorToChangeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSave                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetSaveCursorToChangeCategory(bool IsSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetSaveCursorToChangeCategory");

	Params::UListWidget_C_SetSaveCursorToChangeCategory_Params Parms{};

	Parms.IsSave = IsSave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetNearestSelectableCursorPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CheckCursorPos                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RetCursorPos                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetNearestSelectableCursorPos(int32 CheckCursorPos, int32* RetCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetNearestSelectableCursorPos");

	Params::UListWidget_C_GetNearestSelectableCursorPos_Params Parms{};

	Parms.CheckCursorPos = CheckCursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (RetCursorPos != nullptr)
		*RetCursorPos = Parms.RetCursorPos;

}


// Function ListWidget.ListWidget_C.UpdateSubItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateSubItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateSubItemList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.CreateNewItemList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::CreateNewItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CreateNewItemList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.ReOpenSubItemHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ReOpenSubItemHelp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ReOpenSubItemHelp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.GetListItemDataOnCursorPosWithSubItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMJListWidgetItemData       Output                                                           (Parm, OutParm)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetListItemDataOnCursorPosWithSubItems(int32 CursorPos, struct FMJListWidgetItemData* Output, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetListItemDataOnCursorPosWithSubItems");

	Params::UListWidget_C_GetListItemDataOnCursorPosWithSubItems_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ListWidget.ListWidget_C.InputSendSubItemCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::InputSendSubItemCursor(bool MoveToPlus, class UUserWidget* TargetWidget, bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "InputSendSubItemCursor");

	Params::UListWidget_C_InputSendSubItemCursor_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;
	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function ListWidget.ListWidget_C.SetupSubItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetupSubItem(bool MoveToPlus, class UUserWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetupSubItem");

	Params::UListWidget_C_SetupSubItem_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;
	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.Is Selectable Item Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListWidget_C::Is_Selectable_Item_Data(int32 CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Is Selectable Item Data");

	Params::UListWidget_C_Is_Selectable_Item_Data_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListWidget.ListWidget_C.IsMainCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMain                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsMainCursor(int32 CursorPos, bool* IsMain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsMainCursor");

	Params::UListWidget_C_IsMainCursor_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMain != nullptr)
		*IsMain = Parms.IsMain;

}


// Function ListWidget.ListWidget_C.CheckCursorWidgetChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BeforeCursor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextCursor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChange                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::CheckCursorWidgetChange(int32 BeforeCursor, int32 NextCursor, bool* IsChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CheckCursorWidgetChange");

	Params::UListWidget_C_CheckCursorWidgetChange_Params Parms{};

	Parms.BeforeCursor = BeforeCursor;
	Parms.NextCursor = NextCursor;

	UObject::ProcessEvent(Func, &Parms);

	if (IsChange != nullptr)
		*IsChange = Parms.IsChange;

}


// Function ListWidget.ListWidget_C.UpdateCursorWithSubItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CursorPos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::UpdateCursorWithSubItems(bool IsPlus, int32* CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateCursorWithSubItems");

	Params::UListWidget_C_UpdateCursorWithSubItems_Params Parms{};

	Parms.IsPlus = IsPlus;

	UObject::ProcessEvent(Func, &Parms);

	if (CursorPos != nullptr)
		*CursorPos = Parms.CursorPos;

}


// Function ListWidget.ListWidget_C.MoveListCursorSubItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdateCursorPosOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::MoveListCursorSubItem(bool MoveToPlus, bool UpdateCursorPosOnly, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "MoveListCursorSubItem");

	Params::UListWidget_C_MoveListCursorSubItem_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;
	Parms.UpdateCursorPosOnly = UpdateCursorPosOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ListWidget.ListWidget_C.Get Sub Item with Cursor Pos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CurrentSubItemWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMain                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::Get_Sub_Item_with_Cursor_Pos(int32 CursorPos, class UUserWidget** CurrentSubItemWidget, int32* Index, bool* IsMain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Get Sub Item with Cursor Pos");

	Params::UListWidget_C_Get_Sub_Item_with_Cursor_Pos_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentSubItemWidget != nullptr)
		*CurrentSubItemWidget = Parms.CurrentSubItemWidget;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (IsMain != nullptr)
		*IsMain = Parms.IsMain;

}


// Function ListWidget.ListWidget_C.GetCurrentCategoryItemNumWithSubItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ItemNum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetCurrentCategoryItemNumWithSubItems(int32* ItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetCurrentCategoryItemNumWithSubItems");

	Params::UListWidget_C_GetCurrentCategoryItemNumWithSubItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemNum != nullptr)
		*ItemNum = Parms.ItemNum;

}


// Function ListWidget.ListWidget_C.GetBottomCursorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetBottomCursorIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetBottomCursorIndex");

	Params::UListWidget_C_GetBottomCursorIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ListWidget.ListWidget_C.GetTopCursorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetTopCursorIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetTopCursorIndex");

	Params::UListWidget_C_GetTopCursorIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ListWidget.ListWidget_C.PlayListClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::PlayListClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "PlayListClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.PlayListOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::PlayListOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "PlayListOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetupListType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::SetupListType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetupListType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetListBodyHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NotUseScroll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetListBodyHeight(bool NotUseScroll, float Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetListBodyHeight");

	Params::UListWidget_C_SetListBodyHeight_Params Parms{};

	Parms.NotUseScroll = NotUseScroll;
	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.MoveListCursorSubItem_Old
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdateCursorPosOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::MoveListCursorSubItem_Old(bool MoveToPlus, bool UpdateCursorPosOnly, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "MoveListCursorSubItem_Old");

	Params::UListWidget_C_MoveListCursorSubItem_Old_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;
	Parms.UpdateCursorPosOnly = UpdateCursorPosOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ListWidget.ListWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.RemoveSubItemWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 SubItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::RemoveSubItemWidget(class UUserWidget* SubItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RemoveSubItemWidget");

	Params::UListWidget_C_RemoveSubItemWidget_Params Parms{};

	Parms.SubItem = SubItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.AddSubItemWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 SubItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InsertIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::AddSubItemWidget(class UUserWidget* SubItem, int32 InsertIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "AddSubItemWidget");

	Params::UListWidget_C_AddSubItemWidget_Params Parms{};

	Parms.SubItem = SubItem;
	Parms.InsertIndex = InsertIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetListVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetListVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetListVisible");

	Params::UListWidget_C_SetListVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetCategorySelectFromOutSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CategorySelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetCategorySelectFromOutSide(bool CategorySelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetCategorySelectFromOutSide");

	Params::UListWidget_C_SetCategorySelectFromOutSide_Params Parms{};

	Parms.CategorySelect = CategorySelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.Init
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Init");

	Params::UListWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListWidget.ListWidget_C.SetDecideDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetDecideDisable(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetDecideDisable");

	Params::UListWidget_C_SetDecideDisable_Params Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetSelectedItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FMJListWidgetItemData       Output                                                           (Parm, OutParm)

void UListWidget_C::GetSelectedItemData(struct FMJListWidgetItemData* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetSelectedItemData");

	Params::UListWidget_C_GetSelectedItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function ListWidget.ListWidget_C.SetParamFromOutside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CursorIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetParamFromOutside(int32 CategoryId, int32 CursorIndex, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetParamFromOutside");

	Params::UListWidget_C_SetParamFromOutside_Params Parms{};

	Parms.CategoryId = CategoryId;
	Parms.CursorIndex = CursorIndex;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.DecideCurrentItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::DecideCurrentItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "DecideCurrentItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.GetEnableCategoryNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetEnableCategoryNum(int32* Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetEnableCategoryNum");

	Params::UListWidget_C_GetEnableCategoryNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function ListWidget.ListWidget_C.SyncHelpState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::SyncHelpState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SyncHelpState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.RefreshActiveItemText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::RefreshActiveItemText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RefreshActiveItemText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.RefreshScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::RefreshScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RefreshScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.IsVisibleHelp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsVisibleHelp(bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsVisibleHelp");

	Params::UListWidget_C_IsVisibleHelp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function ListWidget.ListWidget_C.PageScroll
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::PageScroll(bool MoveToPlus, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "PageScroll");

	Params::UListWidget_C_PageScroll_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ListWidget.ListWidget_C.SetDefaultCursorPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DefaultCursorPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetDefaultCursorPos(int32 DefaultCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetDefaultCursorPos");

	Params::UListWidget_C_SetDefaultCursorPos_Params Parms{};

	Parms.DefaultCursorPos = DefaultCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetUseHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDetailText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetUseHelp(bool UseDetailText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetUseHelp");

	Params::UListWidget_C_SetUseHelp_Params Parms{};

	Parms.UseDetailText = UseDetailText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.UpdateHelpPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateHelpPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateHelpPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetCategory(int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetCategory");

	Params::UListWidget_C_SetCategory_Params Parms{};

	Parms.CategoryId = CategoryId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.IsCategorySelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CategorySelect                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsCategorySelect(bool* CategorySelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsCategorySelect");

	Params::UListWidget_C_IsCategorySelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategorySelect != nullptr)
		*CategorySelect = Parms.CategorySelect;

}


// Function ListWidget.ListWidget_C.SetVisibleHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetVisibleHeader(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetVisibleHeader");

	Params::UListWidget_C_SetVisibleHeader_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetExHeaderWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ExWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetExHeaderWidget(class UUserWidget* ExWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetExHeaderWidget");

	Params::UListWidget_C_SetExHeaderWidget_Params Parms{};

	Parms.ExWidget = ExWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.IsListEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsListEmpty(bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsListEmpty");

	Params::UListWidget_C_IsListEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function ListWidget.ListWidget_C.GetItemWidgetForVirtualScroll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJListItemWidget*           Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetItemWidgetForVirtualScroll(int32 CursorPos, class UMJListItemWidget** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetItemWidgetForVirtualScroll");

	Params::UListWidget_C_GetItemWidgetForVirtualScroll_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ListWidget.ListWidget_C.UpdateVirtualScroll
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateVirtualScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateVirtualScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.HideCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::HideCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "HideCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.FitScrollAreaToContents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NotUseScroll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::FitScrollAreaToContents(bool NotUseScroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "FitScrollAreaToContents");

	Params::UListWidget_C_FitScrollAreaToContents_Params Parms{};

	Parms.NotUseScroll = NotUseScroll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.UpdateScrollPos
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUpdated                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::UpdateScrollPos(bool* IsUpdated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateScrollPos");

	Params::UListWidget_C_UpdateScrollPos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUpdated != nullptr)
		*IsUpdated = Parms.IsUpdated;

}


// Function ListWidget.ListWidget_C.ResetScrollPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ResetScrollPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ResetScrollPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetupEnableCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableCursor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetupEnableCursor(bool EnableCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetupEnableCursor");

	Params::UListWidget_C_SetupEnableCursor_Params Parms{};

	Parms.EnableCursor = EnableCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetupListTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TitleTextPaddingTop                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetupListTitle(float TitleTextPaddingTop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetupListTitle");

	Params::UListWidget_C_SetupListTitle_Params Parms{};

	Parms.TitleTextPaddingTop = TitleTextPaddingTop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ReserveItemWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::ReserveItemWidget(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ReserveItemWidget");

	Params::UListWidget_C_ReserveItemWidget_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetFreeCategoryTab
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListCategoryWidget_C*       Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetFreeCategoryTab(class UListCategoryWidget_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetFreeCategoryTab");

	Params::UListWidget_C_GetFreeCategoryTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function ListWidget.ListWidget_C.ReturnAllCategoryTab
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ReturnAllCategoryTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ReturnAllCategoryTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.ReserveCategoryTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::ReserveCategoryTab(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ReserveCategoryTab");

	Params::UListWidget_C_ReserveCategoryTab_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.FocusCurrentItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::FocusCurrentItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "FocusCurrentItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.UpdateHelpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::UpdateHelpText(int32 CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateHelpText");

	Params::UListWidget_C_UpdateHelpText_Params Parms{};

	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.RefreshCategoryCursorPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::RefreshCategoryCursorPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RefreshCategoryCursorPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.Play List SE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELISTWIDGET_SE_TYPE     SeType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::Play_List_SE(enum class ELISTWIDGET_SE_TYPE SeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Play List SE");

	Params::UListWidget_C_Play_List_SE_Params Parms{};

	Parms.SeType = SeType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetDefaultSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::SetDefaultSE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetDefaultSE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DecideClose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CancelClose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Decide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Cancel                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Failed                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetSE(class FName Open, class FName DecideClose, class FName CancelClose, class FName Select, class FName Decide, class FName Cancel, class FName Failed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetSE");

	Params::UListWidget_C_SetSE_Params Parms{};

	Parms.Open = Open;
	Parms.DecideClose = DecideClose;
	Parms.CancelClose = CancelClose;
	Parms.Select = Select;
	Parms.Decide = Decide;
	Parms.Cancel = Cancel;
	Parms.Failed = Failed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetRightFrameWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RightFrameWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetRightFrameWidget(class UUserWidget* RightFrameWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetRightFrameWidget");

	Params::UListWidget_C_SetRightFrameWidget_Params Parms{};

	Parms.RightFrameWidget = RightFrameWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ReleaseSelf
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ReleaseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ReleaseSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetCategoryData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> CategoryData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListWidget_C::SetCategoryData(TArray<struct FListWidgetCategory>& CategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetCategoryData");

	Params::UListWidget_C_SetCategoryData_Params Parms{};

	Parms.CategoryData = CategoryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetupListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_NUM_UNIT_TYPE     NumUnitType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetupListItem(enum class ELIST_NUM_UNIT_TYPE NumUnitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetupListItem");

	Params::UListWidget_C_SetupListItem_Params Parms{};

	Parms.NumUnitType = NumUnitType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ResetList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ResetList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ResetList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetupList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseListAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetupList(bool UseCategory, bool UseListAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetupList");

	Params::UListWidget_C_SetupList_Params Parms{};

	Parms.UseCategory = UseCategory;
	Parms.UseListAnimation = UseListAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetSavedCursorPosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              SavedCursorPos                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetSavedCursorPosition(int32* SavedCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetSavedCursorPosition");

	Params::UListWidget_C_GetSavedCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SavedCursorPos != nullptr)
		*SavedCursorPos = Parms.SavedCursorPos;

}


// Function ListWidget.ListWidget_C.RestoreCursorPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::RestoreCursorPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RestoreCursorPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.UpdateListItemByAllIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemAllIdx                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMJListWidgetItemData       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListWidget_C::UpdateListItemByAllIdx(int32 ItemAllIdx, struct FMJListWidgetItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateListItemByAllIdx");

	Params::UListWidget_C_UpdateListItemByAllIdx_Params Parms{};

	Parms.ItemAllIdx = ItemAllIdx;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ChangeFocusToCurrentCursorPos
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ChangeFocusToCurrentCursorPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ChangeFocusToCurrentCursorPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.UpdateBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateBody");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnEndState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnEndState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnBeginState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnBeginState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnBeginState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnUpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnUpdateState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnUpdateState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetNextState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELISTWIDGET_STATE       NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetNextState(enum class ELISTWIDGET_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetNextState");

	Params::UListWidget_C_SetNextState_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetListCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CaptionText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UListWidget_C::SetListCaption(class FText CaptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetListCaption");

	Params::UListWidget_C_SetListCaption_Params Parms{};

	Parms.CaptionText = CaptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.CallEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::CallEvent(enum class ELIST_EVENT_TYPE EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CallEvent");

	Params::UListWidget_C_CallEvent_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetCurrentCategoryItemWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJListItemWidget*           Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetCurrentCategoryItemWidget(int32 ItemIndex, class UMJListItemWidget** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetCurrentCategoryItemWidget");

	Params::UListWidget_C_GetCurrentCategoryItemWidget_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ListWidget.ListWidget_C.RemoveListRightSideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 List_Right_Side_Widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::RemoveListRightSideWidget(class UUserWidget* List_Right_Side_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RemoveListRightSideWidget");

	Params::UListWidget_C_RemoveListRightSideWidget_Params Parms{};

	Parms.List_Right_Side_Widget = List_Right_Side_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.AddListRightSideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 List_Right_Side_Widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::AddListRightSideWidget(class UUserWidget* List_Right_Side_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "AddListRightSideWidget");

	Params::UListWidget_C_AddListRightSideWidget_Params Parms{};

	Parms.List_Right_Side_Widget = List_Right_Side_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.UpdateTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.RefreshCursorPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::RefreshCursorPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RefreshCursorPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetUseAnimaiton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseAnimation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetUseAnimaiton(bool UseAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetUseAnimaiton");

	Params::UListWidget_C_SetUseAnimaiton_Params Parms{};

	Parms.UseAnimation = UseAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.RemoveRightWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RightWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::RemoveRightWidget(class UUserWidget* RightWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RemoveRightWidget");

	Params::UListWidget_C_RemoveRightWidget_Params Parms{};

	Parms.RightWidget = RightWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.AddRightWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RightWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::AddRightWidget(class UUserWidget* RightWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "AddRightWidget");

	Params::UListWidget_C_AddRightWidget_Params Parms{};

	Parms.RightWidget = RightWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.Debug_PrintEnableCategoryList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      TempString1                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UListWidget_C::Debug_PrintEnableCategoryList(class FString* TempString1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Debug_PrintEnableCategoryList");

	Params::UListWidget_C_Debug_PrintEnableCategoryList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TempString1 != nullptr)
		*TempString1 = std::move(Parms.TempString1);

}


// Function ListWidget.ListWidget_C.GetCurrentCategoryId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CategoryId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetCurrentCategoryId(int32* CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetCurrentCategoryId");

	Params::UListWidget_C_GetCurrentCategoryId_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

}


// Function ListWidget.ListWidget_C.CategoryCursorPosToCategoryId
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::CategoryCursorPosToCategoryId(int32 CategoryCursorPos, int32* CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CategoryCursorPosToCategoryId");

	Params::UListWidget_C_CategoryCursorPosToCategoryId_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

}


// Function ListWidget.ListWidget_C.GetCategoryTabWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListCategoryWidget_C*       Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetCategoryTabWidget(int32 CategoryCursorPos, class UListCategoryWidget_C** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetCategoryTabWidget");

	Params::UListWidget_C_GetCategoryTabWidget_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ListWidget.ListWidget_C.RefreshList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::RefreshList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RefreshList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.RemoveBottomWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 BottomWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::RemoveBottomWidget(class UUserWidget* BottomWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "RemoveBottomWidget");

	Params::UListWidget_C_RemoveBottomWidget_Params Parms{};

	Parms.BottomWidget = BottomWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.AddBottomWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 BottomWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContainSubItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::AddBottomWidget(class UUserWidget* BottomWidget, bool ContainSubItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "AddBottomWidget");

	Params::UListWidget_C_AddBottomWidget_Params Parms{};

	Parms.BottomWidget = BottomWidget;
	Parms.ContainSubItem = ContainSubItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.Calc Current Item Relative Pos Y
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              RelativePosY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::Calc_Current_Item_Relative_Pos_Y(float* RelativePosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Calc Current Item Relative Pos Y");

	Params::UListWidget_C_Calc_Current_Item_Relative_Pos_Y_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePosY != nullptr)
		*RelativePosY = Parms.RelativePosY;

}


// Function ListWidget.ListWidget_C.SetRangeRightFrameWidgetOffsetY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinOffsetY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxOffsetY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetRangeRightFrameWidgetOffsetY(float MinOffsetY, float MaxOffsetY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetRangeRightFrameWidgetOffsetY");

	Params::UListWidget_C_SetRangeRightFrameWidgetOffsetY_Params Parms{};

	Parms.MinOffsetY = MinOffsetY;
	Parms.MaxOffsetY = MaxOffsetY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetRightFrameWidgetOffsetY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              In_Size_Y                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::SetRightFrameWidgetOffsetY(float In_Size_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetRightFrameWidgetOffsetY");

	Params::UListWidget_C_SetRightFrameWidgetOffsetY_Params Parms{};

	Parms.In_Size_Y = In_Size_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ReturnItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ReturnItemWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ReturnItemWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.GetFreeItemWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMJListItemWidget*           ItemWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetFreeItemWidget(class UMJListItemWidget** ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetFreeItemWidget");

	Params::UListWidget_C_GetFreeItemWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemWidget != nullptr)
		*ItemWidget = Parms.ItemWidget;

}


// Function ListWidget.ListWidget_C.UpdateListAllItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::UpdateListAllItem(int32 CategoryCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateListAllItem");

	Params::UListWidget_C_UpdateListAllItem_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.UpdateCategoryUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateCategoryUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateCategoryUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OutFocusCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::OutFocusCategory(int32 CategoryCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OutFocusCategory");

	Params::UListWidget_C_OutFocusCategory_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.FocusCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::FocusCategory(int32 CategoryCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "FocusCategory");

	Params::UListWidget_C_FocusCategory_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.UpdateCategoryItemNum
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateCategoryItemNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateCategoryItemNum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.SetAllItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>AllItemList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListWidget_C::SetAllItems(TArray<struct FMJListWidgetItemData>& AllItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetAllItems");

	Params::UListWidget_C_SetAllItems_Params Parms{};

	Parms.AllItemList = AllItemList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetSelectedItemWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMJListItemWidget*           Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetSelectedItemWidget(class UMJListItemWidget** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetSelectedItemWidget");

	Params::UListWidget_C_GetSelectedItemWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ListWidget.ListWidget_C.OutFocusCurrentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::OutFocusCurrentItem(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OutFocusCurrentItem");

	Params::UListWidget_C_OutFocusCurrentItem_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.SetVisibleHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::SetVisibleHelp(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SetVisibleHelp");

	Params::UListWidget_C_SetVisibleHelp_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.GetRightSideWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 RightSideWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetRightSideWidget(class UUserWidget** RightSideWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetRightSideWidget");

	Params::UListWidget_C_GetRightSideWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RightSideWidget != nullptr)
		*RightSideWidget = Parms.RightSideWidget;

}


// Function ListWidget.ListWidget_C.GetCurrentCategoryItemNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ItemNum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::GetCurrentCategoryItemNum(int32* ItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "GetCurrentCategoryItemNum");

	Params::UListWidget_C_GetCurrentCategoryItemNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemNum != nullptr)
		*ItemNum = Parms.ItemNum;

}


// Function ListWidget.ListWidget_C.UpdateCurrentItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListWidget_C::UpdateCurrentItemList(TArray<struct FMJListWidgetItemData>& NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateCurrentItemList");

	Params::UListWidget_C_UpdateCurrentItemList_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.Set Item Detail Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListItemDetailWidget_C*     ItemDetailWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::Set_Item_Detail_Widget(class UListItemDetailWidget_C* ItemDetailWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Set Item Detail Widget");

	Params::UListWidget_C_Set_Item_Detail_Widget_Params Parms{};

	Parms.ItemDetailWidget = ItemDetailWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.DecideMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "DecideMenu");

	Params::UListWidget_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function ListWidget.ListWidget_C.CancelMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CancelMenu");

	Params::UListWidget_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function ListWidget.ListWidget_C.CloseList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayNullCloseAnim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::CloseList(bool IsPlayNullCloseAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CloseList");

	Params::UListWidget_C_CloseList_Params Parms{};

	Parms.IsPlayNullCloseAnim = IsPlayNullCloseAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OpenList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OpenList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OpenList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsActive");

	Params::UListWidget_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function ListWidget.ListWidget_C.AddCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetCategory         CategoryData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListWidget_C::AddCategory(struct FListWidgetCategory& CategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "AddCategory");

	Params::UListWidget_C_AddCategory_Params Parms{};

	Parms.CategoryData = CategoryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.UpdateStaticText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::UpdateStaticText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateStaticText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.IsEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::IsEmpty(bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "IsEmpty");

	Params::UListWidget_C_IsEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function ListWidget.ListWidget_C.SaveCursorPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::SaveCursorPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "SaveCursorPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.FocusPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::FocusPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "FocusPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OutFocusPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OutFocusPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OutFocusPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.UpdateCategoryFocus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::UpdateCategoryFocus(int32 NewCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateCategoryFocus");

	Params::UListWidget_C_UpdateCategoryFocus_Params Parms{};

	Parms.NewCategory = NewCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.MoveListCursor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdateCursorPosOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::MoveListCursor(bool MoveToPlus, bool UpdateCursorPosOnly, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "MoveListCursor");

	Params::UListWidget_C_MoveListCursor_Params Parms{};

	Parms.MoveToPlus = MoveToPlus;
	Parms.UpdateCursorPosOnly = UpdateCursorPosOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ListWidget.ListWidget_C.UpdateListCaption
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::UpdateListCaption(int32 CategoryCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "UpdateListCaption");

	Params::UListWidget_C_UpdateListCaption_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ChangeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ModeToPlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::ChangeCategory(bool ModeToPlus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ChangeCategory");

	Params::UListWidget_C_ChangeCategory_Params Parms{};

	Parms.ModeToPlus = ModeToPlus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ChangeCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursorPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceUpdate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::ChangeCursorPosition(int32 NewCursorPosition, bool ForceUpdate, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ChangeCursorPosition");

	Params::UListWidget_C_ChangeCursorPosition_Params Parms{};

	Parms.NewCursorPosition = NewCursorPosition;
	Parms.ForceUpdate = ForceUpdate;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.InitWidgetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::InitWidgetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "InitWidgetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnRightAxisX");

	Params::UListWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnRightAxisY");

	Params::UListWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnLeftAxisX");

	Params::UListWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnLeftAxisY");

	Params::UListWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnGamePadAxisX");

	Params::UListWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnGamePadAxisY");

	Params::UListWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "WorldMapSlowCursorX");

	Params::UListWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "WorldMapSlowCursorY");

	Params::UListWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnListPaging");

	Params::UListWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Tick");

	Params::UListWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.FocusMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OutFocusMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "OpenWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidget_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidget.ListWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "HelpScrollAxis");

	Params::UListWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ExecuteUbergraph_ListWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::ExecuteUbergraph_ListWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ExecuteUbergraph_ListWidget");

	Params::UListWidget_C_ExecuteUbergraph_ListWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidget.ListWidget_C.ListEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidget_C::ListEvent__DelegateSignature(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidget_C", "ListEvent__DelegateSignature");

	Params::UListWidget_C_ListEvent__DelegateSignature_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}

}


