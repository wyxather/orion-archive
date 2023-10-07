#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C
// (None)

class UClass* UBPW_MusicPlayerWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPW_MusicPlayerWidget_C");

	return Clss;
}


// BPW_MusicPlayerWidget_C BPW_MusicPlayerWidget.Default__BPW_MusicPlayerWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPW_MusicPlayerWidget_C* UBPW_MusicPlayerWidget_C::GetDefaultObj()
{
	static class UBPW_MusicPlayerWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPW_MusicPlayerWidget_C*>(UBPW_MusicPlayerWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMUSIC_PLAYER_WIDGET_STATECurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnEndState(enum class EMUSIC_PLAYER_WIDGET_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnEndState");

	Params::UBPW_MusicPlayerWidget_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMUSIC_PLAYER_WIDGET_STATECurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnBeginState(enum class EMUSIC_PLAYER_WIDGET_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnBeginState");

	Params::UBPW_MusicPlayerWidget_C_OnBeginState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.Debug_GetStateInfoAsString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBPW_MusicPlayerWidget_C::Debug_GetStateInfoAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "Debug_GetStateInfoAsString");

	Params::UBPW_MusicPlayerWidget_C_Debug_GetStateInfoAsString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnStopButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnStopButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnStopButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.StopMusic
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::StopMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "StopMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.PlayMusic
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   RecordItemData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_MusicPlayerWidget_C::PlayMusic(struct FItemData& RecordItemData, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "PlayMusic");

	Params::UBPW_MusicPlayerWidget_C_PlayMusic_Params Parms{};

	Parms.RecordItemData = RecordItemData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.GetMusicRecordItemList
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           Records                                                          (Parm, OutParm)
// TArray<class FName>                BgmLabelList                                                     (Parm, OutParm)

void UBPW_MusicPlayerWidget_C::GetMusicRecordItemList(TArray<struct FItemData>* Records, TArray<class FName>* BgmLabelList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "GetMusicRecordItemList");

	Params::UBPW_MusicPlayerWidget_C_GetMusicRecordItemList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Records != nullptr)
		*Records = std::move(Parms.Records);

	if (BgmLabelList != nullptr)
		*BgmLabelList = std::move(Parms.BgmLabelList);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnListEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnListEvent");

	Params::UBPW_MusicPlayerWidget_C_OnListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPW_MusicPlayerWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "IsRunning");

	Params::UBPW_MusicPlayerWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.CreateMusicListItems
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FItemData>           Records                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              PlayingIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMJListWidgetItemData>ListItems                                                        (Parm, OutParm)

void UBPW_MusicPlayerWidget_C::CreateMusicListItems(TArray<struct FItemData>& Records, int32 PlayingIndex, TArray<struct FMJListWidgetItemData>* ListItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "CreateMusicListItems");

	Params::UBPW_MusicPlayerWidget_C_CreateMusicListItems_Params Parms{};

	Parms.Records = Records;
	Parms.PlayingIndex = PlayingIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (ListItems != nullptr)
		*ListItems = std::move(Parms.ListItems);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.UIOpen
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.SetupMusicList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::SetupMusicList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "SetupMusicList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.SetupHeaderFooter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::SetupHeaderFooter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "SetupHeaderFooter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnRightAxisX");

	Params::UBPW_MusicPlayerWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnRightAxisY");

	Params::UBPW_MusicPlayerWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnLeftAxisX");

	Params::UBPW_MusicPlayerWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnLeftAxisY");

	Params::UBPW_MusicPlayerWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnGamePadAxisX");

	Params::UBPW_MusicPlayerWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnGamePadAxisY");

	Params::UBPW_MusicPlayerWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "WorldMapSlowCursorX");

	Params::UBPW_MusicPlayerWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "WorldMapSlowCursorY");

	Params::UBPW_MusicPlayerWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "HelpScrollAxis");

	Params::UBPW_MusicPlayerWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_MusicPlayerWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_MusicPlayerWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "OnListPaging");

	Params::UBPW_MusicPlayerWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C.ExecuteUbergraph_BPW_MusicPlayerWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_MusicPlayerWidget_C::ExecuteUbergraph_BPW_MusicPlayerWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_MusicPlayerWidget_C", "ExecuteUbergraph_BPW_MusicPlayerWidget");

	Params::UBPW_MusicPlayerWidget_C_ExecuteUbergraph_BPW_MusicPlayerWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


