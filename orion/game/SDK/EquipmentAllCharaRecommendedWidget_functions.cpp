#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C
// (None)

class UClass* UEquipmentAllCharaRecommendedWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipmentAllCharaRecommendedWidget_C");

	return Clss;
}


// EquipmentAllCharaRecommendedWidget_C EquipmentAllCharaRecommendedWidget.Default__EquipmentAllCharaRecommendedWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipmentAllCharaRecommendedWidget_C* UEquipmentAllCharaRecommendedWidget_C::GetDefaultObj()
{
	static class UEquipmentAllCharaRecommendedWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipmentAllCharaRecommendedWidget_C*>(UEquipmentAllCharaRecommendedWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnSelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnSelectButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnSelectButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.SetCursorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::SetCursorIndex(int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "SetCursorIndex");

	Params::UEquipmentAllCharaRecommendedWidget_C_SetCursorIndex_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnLBButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnLBButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnLBButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnRBButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnRBButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnRBButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.GetActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Active                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::GetActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "GetActive");

	Params::UEquipmentAllCharaRecommendedWidget_C_GetActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnYButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnYButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnYButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.RecommendedFinish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::RecommendedFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "RecommendedFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.On Plus Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::On_Plus_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "On Plus Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               All                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::Refresh(bool All)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "Refresh");

	Params::UEquipmentAllCharaRecommendedWidget_C_Refresh_Params Parms{};

	Parms.All = All;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.FixChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::FixChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "FixChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeEquipListLeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::ChangeEquipListLeftRight(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ChangeEquipListLeftRight");

	Params::UEquipmentAllCharaRecommendedWidget_C_ChangeEquipListLeftRight_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::CursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "CursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::CursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "CursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseBeforeIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::OutFocus(bool UseBeforeIndex, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OutFocus");

	Params::UEquipmentAllCharaRecommendedWidget_C_OutFocus_Params Parms{};

	Parms.UseBeforeIndex = UseBeforeIndex;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "Focus");

	Params::UEquipmentAllCharaRecommendedWidget_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeEquipListUpDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ChangeIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::ChangeEquipListUpDown(bool IsUp, bool* ChangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ChangeEquipListUpDown");

	Params::UEquipmentAllCharaRecommendedWidget_C_ChangeEquipListUpDown_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeIndex != nullptr)
		*ChangeIndex = Parms.ChangeIndex;

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Setup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentAllCharaRecommendedWidget_C::Setup(TArray<int32>& CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "Setup");

	Params::UEquipmentAllCharaRecommendedWidget_C_Setup_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCancel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnDecide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnRightAxisX");

	Params::UEquipmentAllCharaRecommendedWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnRightAxisY");

	Params::UEquipmentAllCharaRecommendedWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnLeftAxisX");

	Params::UEquipmentAllCharaRecommendedWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnLeftAxisY");

	Params::UEquipmentAllCharaRecommendedWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnGamePadAxisX");

	Params::UEquipmentAllCharaRecommendedWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnGamePadAxisY");

	Params::UEquipmentAllCharaRecommendedWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnListPaging");

	Params::UEquipmentAllCharaRecommendedWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "WorldMapSlowCursorX");

	Params::UEquipmentAllCharaRecommendedWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "WorldMapSlowCursorY");

	Params::UEquipmentAllCharaRecommendedWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "HelpScrollAxis");

	Params::UEquipmentAllCharaRecommendedWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ExecuteUbergraph_EquipmentAllCharaRecommendedWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::ExecuteUbergraph_EquipmentAllCharaRecommendedWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ExecuteUbergraph_EquipmentAllCharaRecommendedWidget");

	Params::UEquipmentAllCharaRecommendedWidget_C_ExecuteUbergraph_EquipmentAllCharaRecommendedWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeCategoryEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::ChangeCategoryEvent__DelegateSignature(bool IsPlus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ChangeCategoryEvent__DelegateSignature");

	Params::UEquipmentAllCharaRecommendedWidget_C_ChangeCategoryEvent__DelegateSignature_Params Parms{};

	Parms.IsPlus = IsPlus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.DecideEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::DecideEvent__DelegateSignature(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "DecideEvent__DelegateSignature");

	Params::UEquipmentAllCharaRecommendedWidget_C_DecideEvent__DelegateSignature_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.HelpEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::HelpEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "HelpEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeCharaPartEquipEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectPart                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::ChangeCharaPartEquipEvent__DelegateSignature(int32 PlayerID, int32 CategoryIndex, int32 SelectPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "ChangeCharaPartEquipEvent__DelegateSignature");

	Params::UEquipmentAllCharaRecommendedWidget_C_ChangeCharaPartEquipEvent__DelegateSignature_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.CategoryIndex = CategoryIndex;
	Parms.SelectPart = SelectPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CusorEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentAllCharaRecommendedWidget_C::CusorEvent__DelegateSignature(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "CusorEvent__DelegateSignature");

	Params::UEquipmentAllCharaRecommendedWidget_C_CusorEvent__DelegateSignature_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CancelEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentAllCharaRecommendedWidget_C::CancelEvent__DelegateSignature(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "CancelEvent__DelegateSignature");

	Params::UEquipmentAllCharaRecommendedWidget_C_CancelEvent__DelegateSignature_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.AllRecommentEquipEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentAllCharaRecommendedWidget_C::AllRecommentEquipEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentAllCharaRecommendedWidget_C", "AllRecommentEquipEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


