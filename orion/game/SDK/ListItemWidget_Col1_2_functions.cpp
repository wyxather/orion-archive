#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col1_2.ListItemWidget_Col1_2_C
// (None)

class UClass* UListItemWidget_Col1_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col1_2_C");

	return Clss;
}


// ListItemWidget_Col1_2_C ListItemWidget_Col1_2.Default__ListItemWidget_Col1_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col1_2_C* UListItemWidget_Col1_2_C::GetDefaultObj()
{
	static class UListItemWidget_Col1_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col1_2_C*>(UListItemWidget_Col1_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.SetCursorVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_2_C::SetCursorVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "SetCursorVisibility");

	Params::UListItemWidget_Col1_2_C_SetCursorVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.OutFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_2_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "OutFocus");

	Params::UListItemWidget_Col1_2_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.Focus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_2_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "Focus");

	Params::UListItemWidget_Col1_2_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ItemmData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_2_C::Setup(struct FMJListWidgetItemData& ItemmData, enum class ELIST_NUM_UNIT_TYPE UnitType, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "Setup");

	Params::UListItemWidget_Col1_2_C_Setup_Params Parms{};

	Parms.ItemmData = ItemmData;
	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.Set Chapter Title
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChapterTitleMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ChapterTitle                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UListItemWidget_Col1_2_C::Set_Chapter_Title(bool IsChapterTitleMode, class FText ChapterTitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "Set Chapter Title");

	Params::UListItemWidget_Col1_2_C_Set_Chapter_Title_Params Parms{};

	Parms.IsChapterTitleMode = IsChapterTitleMode;
	Parms.ChapterTitle = ChapterTitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_2_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "InitInstance");

	Params::UListItemWidget_Col1_2_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_2_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.SetItemData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  IconTex                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  IconTex0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Value0                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Value1                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Detail                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_ITEM_STATUS       Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col1_2_C::SetItemData(class UTexture2D* IconTex, class UTexture2D* IconTex0, class FText& Name, class FText& Value0, class FText& Value1, class FText& Detail, enum class ELIST_ITEM_STATUS Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "SetItemData");

	Params::UListItemWidget_Col1_2_C_SetItemData_Params Parms{};

	Parms.IconTex = IconTex;
	Parms.IconTex0 = IconTex0;
	Parms.Name = Name;
	Parms.Value0 = Value0;
	Parms.Value1 = Value1;
	Parms.Detail = Detail;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_2_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.ExecuteUbergraph_ListItemWidget_Col1_2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col1_2_C::ExecuteUbergraph_ListItemWidget_Col1_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_2_C", "ExecuteUbergraph_ListItemWidget_Col1_2");

	Params::UListItemWidget_Col1_2_C_ExecuteUbergraph_ListItemWidget_Col1_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


