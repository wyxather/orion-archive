#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C
// (None)

class UClass* UFieldCommandMenuItemPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandMenuItemPanel_C");

	return Clss;
}


// FieldCommandMenuItemPanel_C FieldCommandMenuItemPanel.Default__FieldCommandMenuItemPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandMenuItemPanel_C* UFieldCommandMenuItemPanel_C::GetDefaultObj()
{
	static class UFieldCommandMenuItemPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandMenuItemPanel_C*>(UFieldCommandMenuItemPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.GetFcCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFieldCommandCategory   Fc_Category                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::GetFcCategory(enum class EFieldCommandCategory* Fc_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "GetFcCategory");

	Params::UFieldCommandMenuItemPanel_C_GetFcCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fc_Category != nullptr)
		*Fc_Category = Parms.Fc_Category;

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetDeathMatchMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDeathMatch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenuItemPanel_C::SetDeathMatchMode(bool IsDeathMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "SetDeathMatchMode");

	Params::UFieldCommandMenuItemPanel_C_SetDeathMatchMode_Params Parms{};

	Parms.IsDeathMatch = IsDeathMatch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::SetIconTexture(enum class EMJFieldCommandType FCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "SetIconTexture");

	Params::UFieldCommandMenuItemPanel_C_SetIconTexture_Params Parms{};

	Parms.FCType = FCType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.IsUnused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUnused                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenuItemPanel_C::IsUnused(bool* IsUnused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "IsUnused");

	Params::UFieldCommandMenuItemPanel_C_IsUnused_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUnused != nullptr)
		*IsUnused = Parms.IsUnused;

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetUse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBadConnection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsGrayOut                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsComplete                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFieldCommandCategory   FcCategory                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::SetUse(bool IsBadConnection, bool IsValid, bool IsGrayOut, bool IsComplete, enum class EFieldCommandCategory FcCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "SetUse");

	Params::UFieldCommandMenuItemPanel_C_SetUse_Params Parms{};

	Parms.IsBadConnection = IsBadConnection;
	Parms.IsValid = IsValid;
	Parms.IsGrayOut = IsGrayOut;
	Parms.IsComplete = IsComplete;
	Parms.FcCategory = FcCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.AddTextList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        AddText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFieldCommandMenuItemPanel_C::AddTextList(class FText AddText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "AddTextList");

	Params::UFieldCommandMenuItemPanel_C_AddTextList_Params Parms{};

	Parms.AddText = AddText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetShowTextIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ShowIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenuItemPanel_C::SetShowTextIndex(int32 ShowIndex, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "SetShowTextIndex");

	Params::UFieldCommandMenuItemPanel_C_SetShowTextIndex_Params Parms{};

	Parms.ShowIndex = ShowIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.SetTextList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                TextList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ShowIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenuItemPanel_C::SetTextList(TArray<class FText>& TextList, int32 ShowIndex, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "SetTextList");

	Params::UFieldCommandMenuItemPanel_C_SetTextList_Params Parms{};

	Parms.TextList = TextList;
	Parms.ShowIndex = ShowIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::GetCursorPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "GetCursorPosition");

	Params::UFieldCommandMenuItemPanel_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenuItemPanel_C::OutFocus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OutFocus");

	Params::UFieldCommandMenuItemPanel_C_OutFocus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnRightAxisX");

	Params::UFieldCommandMenuItemPanel_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnRightAxisY");

	Params::UFieldCommandMenuItemPanel_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnLeftAxisX");

	Params::UFieldCommandMenuItemPanel_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnLeftAxisY");

	Params::UFieldCommandMenuItemPanel_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnGamePadAxisX");

	Params::UFieldCommandMenuItemPanel_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnGamePadAxisY");

	Params::UFieldCommandMenuItemPanel_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenuItemPanel_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnListPaging");

	Params::UFieldCommandMenuItemPanel_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "WorldMapSlowCursorX");

	Params::UFieldCommandMenuItemPanel_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "WorldMapSlowCursorY");

	Params::UFieldCommandMenuItemPanel_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "HelpScrollAxis");

	Params::UFieldCommandMenuItemPanel_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenuItemPanel_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "Tick");

	Params::UFieldCommandMenuItemPanel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenuItemPanel.FieldCommandMenuItemPanel_C.ExecuteUbergraph_FieldCommandMenuItemPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenuItemPanel_C::ExecuteUbergraph_FieldCommandMenuItemPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenuItemPanel_C", "ExecuteUbergraph_FieldCommandMenuItemPanel");

	Params::UFieldCommandMenuItemPanel_C_ExecuteUbergraph_FieldCommandMenuItemPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


