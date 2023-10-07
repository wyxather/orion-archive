#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C
// (None)

class UClass* UListWidgetJobAbilityWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListWidgetJobAbilityWidget_C");

	return Clss;
}


// ListWidgetJobAbilityWidget_C ListWidgetJobAbilityWidget.Default__ListWidgetJobAbilityWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListWidgetJobAbilityWidget_C* UListWidgetJobAbilityWidget_C::GetDefaultObj()
{
	static class UListWidgetJobAbilityWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListWidgetJobAbilityWidget_C*>(UListWidgetJobAbilityWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.GetItemListWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMJListItemWidget*>   ListWidget                                                       (Parm, OutParm, ContainsInstancedReference)

void UListWidgetJobAbilityWidget_C::GetItemListWidget(TArray<class UMJListItemWidget*>* ListWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "GetItemListWidget");

	Params::UListWidgetJobAbilityWidget_C_GetItemListWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidget != nullptr)
		*ListWidget = std::move(Parms.ListWidget);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.GetItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ItemList                                                         (Parm, OutParm)

void UListWidgetJobAbilityWidget_C::GetItemList(TArray<struct FMJListWidgetItemData>* ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "GetItemList");

	Params::UListWidgetJobAbilityWidget_C_GetItemList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemList != nullptr)
		*ItemList = std::move(Parms.ItemList);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.GetItemLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Length                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidgetJobAbilityWidget_C::GetItemLength(int32* Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "GetItemLength");

	Params::UListWidgetJobAbilityWidget_C_GetItemLength_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.EnableSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidgetJobAbilityWidget_C::EnableSelect(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "EnableSelect");

	Params::UListWidgetJobAbilityWidget_C_EnableSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.OnCursorUp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidgetJobAbilityWidget_C::OnCursorUp(bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "OnCursorUp");

	Params::UListWidgetJobAbilityWidget_C_OnCursorUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.OnCursorDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidgetJobAbilityWidget_C::OnCursorDown(bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "OnCursorDown");

	Params::UListWidgetJobAbilityWidget_C_OnCursorDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidgetJobAbilityWidget_C::PlayOutFocus(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "PlayOutFocus");

	Params::UListWidgetJobAbilityWidget_C_PlayOutFocus_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidgetJobAbilityWidget_C::PlayFocus(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "PlayFocus");

	Params::UListWidgetJobAbilityWidget_C_PlayFocus_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.UpdateSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidgetJobAbilityWidget_C::UpdateSelectCursor(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "UpdateSelectCursor");

	Params::UListWidgetJobAbilityWidget_C_UpdateSelectCursor_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.ShowHelpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::ShowHelpText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "ShowHelpText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetCharacterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ShowSecondJob                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListWidgetJobAbilityWidget_C::SetCharacterData(struct FSavePlayerCharacterData& CharacterData, bool ShowSecondJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "SetCharacterData");

	Params::UListWidgetJobAbilityWidget_C_SetCharacterData_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.ShowSecondJob = ShowSecondJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetSupportAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJobData                    JobData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                       AcquisitionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidgetJobAbilityWidget_C::SetSupportAbility(struct FJobData& JobData, TArray<bool>& AcquisitionData, int32 CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "SetSupportAbility");

	Params::UListWidgetJobAbilityWidget_C_SetSupportAbility_Params Parms{};

	Parms.JobData = JobData;
	Parms.AcquisitionData = AcquisitionData;
	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetListCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CaptionText                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidgetJobAbilityWidget_C::SetListCaption(class FName CaptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "SetListCaption");

	Params::UListWidgetJobAbilityWidget_C_SetListCaption_Params Parms{};

	Parms.CaptionText = CaptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.MostTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::MostTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "MostTop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.MostBottom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::MostBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "MostBottom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.OutSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::OutSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "OutSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.ReOpenHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListWidgetJobAbilityWidget_C::ReOpenHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "ReOpenHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.SetSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidgetJobAbilityWidget_C::SetSelectIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "SetSelectIndex");

	Params::UListWidgetJobAbilityWidget_C_SetSelectIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListWidgetJobAbilityWidget.ListWidgetJobAbilityWidget_C.ExecuteUbergraph_ListWidgetJobAbilityWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListWidgetJobAbilityWidget_C::ExecuteUbergraph_ListWidgetJobAbilityWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListWidgetJobAbilityWidget_C", "ExecuteUbergraph_ListWidgetJobAbilityWidget");

	Params::UListWidgetJobAbilityWidget_C_ExecuteUbergraph_ListWidgetJobAbilityWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


