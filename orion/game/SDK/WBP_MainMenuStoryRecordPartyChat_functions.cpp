#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C
// (None)

class UClass* UWBP_MainMenuStoryRecordPartyChat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenuStoryRecordPartyChat_C");

	return Clss;
}


// WBP_MainMenuStoryRecordPartyChat_C WBP_MainMenuStoryRecordPartyChat.Default__WBP_MainMenuStoryRecordPartyChat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenuStoryRecordPartyChat_C* UWBP_MainMenuStoryRecordPartyChat_C::GetDefaultObj()
{
	static class UWBP_MainMenuStoryRecordPartyChat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenuStoryRecordPartyChat_C*>(UWBP_MainMenuStoryRecordPartyChat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.GetSelectingPartyChatItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_PartyChatItem_C*        AsWBP_Party_Chat_Item                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::GetSelectingPartyChatItem(class UWBP_PartyChatItem_C** AsWBP_Party_Chat_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "GetSelectingPartyChatItem");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_GetSelectingPartyChatItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AsWBP_Party_Chat_Item != nullptr)
		*AsWBP_Party_Chat_Item = Parms.AsWBP_Party_Chat_Item;

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.Paging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenuStoryRecordPartyChat_C::Paging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "Paging");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_Paging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenuStoryRecordPartyChat_C::SetActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "SetActive");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_SetActive_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.CloseList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::CloseList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "CloseList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenuStoryRecordPartyChat_C::IsActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "IsActive");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.Decide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PartyChatLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReOpen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenuStoryRecordPartyChat_C::Setup(TArray<class FName>& PartyChatLabel, bool ReOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "Setup");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_Setup_Params Parms{};

	Parms.PartyChatLabel = PartyChatLabel;
	Parms.ReOpen = ReOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnRightAxisX");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnRightAxisY");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnLeftAxisX");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnLeftAxisY");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnGamePadAxisX");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnGamePadAxisY");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "WorldMapSlowCursorX");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "WorldMapSlowCursorY");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "HelpScrollAxis");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenuStoryRecordPartyChat_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnListPaging");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.PartyChatCinfirmDialogCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::PartyChatCinfirmDialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "PartyChatCinfirmDialogCallback");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_PartyChatCinfirmDialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "Tick");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.ExecuteUbergraph_WBP_MainMenuStoryRecordPartyChat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenuStoryRecordPartyChat_C::ExecuteUbergraph_WBP_MainMenuStoryRecordPartyChat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "ExecuteUbergraph_WBP_MainMenuStoryRecordPartyChat");

	Params::UWBP_MainMenuStoryRecordPartyChat_C_ExecuteUbergraph_WBP_MainMenuStoryRecordPartyChat_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenuStoryRecordPartyChat.WBP_MainMenuStoryRecordPartyChat_C.OnOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenuStoryRecordPartyChat_C::OnOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_MainMenuStoryRecordPartyChat_C", "OnOpen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


