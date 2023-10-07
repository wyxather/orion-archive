#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BarMenuStoryChList.BarMenuStoryChList_C
// (None)

class UClass* UBarMenuStoryChList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BarMenuStoryChList_C");

	return Clss;
}


// BarMenuStoryChList_C BarMenuStoryChList.Default__BarMenuStoryChList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBarMenuStoryChList_C* UBarMenuStoryChList_C::GetDefaultObj()
{
	static class UBarMenuStoryChList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBarMenuStoryChList_C*>(UBarMenuStoryChList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BarMenuStoryChList.BarMenuStoryChList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::Setup(int32 CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "Setup");

	Params::UBarMenuStoryChList_C_Setup_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.AddTextList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        AddText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBarMenuStoryChList_C::AddTextList(class FText AddText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "AddTextList");

	Params::UBarMenuStoryChList_C_AddTextList_Params Parms{};

	Parms.AddText = AddText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.SetShowTextIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ShowIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStoryChList_C::SetShowTextIndex(int32 ShowIndex, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "SetShowTextIndex");

	Params::UBarMenuStoryChList_C_SetShowTextIndex_Params Parms{};

	Parms.ShowIndex = ShowIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.SetTextList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                TextList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ShowIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStoryChList_C::SetTextList(TArray<class FText>& TextList, int32 ShowIndex, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "SetTextList");

	Params::UBarMenuStoryChList_C_SetTextList_Params Parms{};

	Parms.TextList = TextList;
	Parms.ShowIndex = ShowIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::GetCursorPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "GetCursorPosition");

	Params::UBarMenuStoryChList_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStoryChList_C::OutFocus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OutFocus");

	Params::UBarMenuStoryChList_C_OutFocus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStoryChList_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "Focus");

	Params::UBarMenuStoryChList_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnRightAxisX");

	Params::UBarMenuStoryChList_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnRightAxisY");

	Params::UBarMenuStoryChList_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnLeftAxisX");

	Params::UBarMenuStoryChList_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnLeftAxisY");

	Params::UBarMenuStoryChList_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnGamePadAxisX");

	Params::UBarMenuStoryChList_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnGamePadAxisY");

	Params::UBarMenuStoryChList_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStoryChList_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnListPaging");

	Params::UBarMenuStoryChList_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "WorldMapSlowCursorX");

	Params::UBarMenuStoryChList_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "WorldMapSlowCursorY");

	Params::UBarMenuStoryChList_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "HelpScrollAxis");

	Params::UBarMenuStoryChList_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStoryChList_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "Tick");

	Params::UBarMenuStoryChList_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStoryChList.BarMenuStoryChList_C.ExecuteUbergraph_BarMenuStoryChList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStoryChList_C::ExecuteUbergraph_BarMenuStoryChList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStoryChList_C", "ExecuteUbergraph_BarMenuStoryChList");

	Params::UBarMenuStoryChList_C_ExecuteUbergraph_BarMenuStoryChList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


