#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorial.UITutorial_C
// (None)

class UClass* UUITutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorial_C");

	return Clss;
}


// UITutorial_C UITutorial.Default__UITutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorial_C* UUITutorial_C::GetDefaultObj()
{
	static class UUITutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorial_C*>(UUITutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorial.UITutorial_C.FadeOutFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::FadeOutFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "FadeOutFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.SetBGFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUITutorialCommonUI_C*       Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::SetBGFocus(class UUITutorialCommonUI_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "SetBGFocus");

	Params::UUITutorial_C_SetBGFocus_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OpenTutorial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableTutorialPageData>TopPageData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETUTORIAL_TYPE          TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEndCard                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEpilouge                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUITutorial_C::OpenTutorial(TArray<struct FDataTableTutorialPageData>& TopPageData, enum class ETUTORIAL_TYPE TutorialType, bool IsEndCard, bool IsEpilouge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OpenTutorial");

	Params::UUITutorial_C_OpenTutorial_Params Parms{};

	Parms.TopPageData = TopPageData;
	Parms.TutorialType = TutorialType;
	Parms.IsEndCard = IsEndCard;
	Parms.IsEpilouge = IsEpilouge;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorial.UITutorial_C.ForceTutorialClose
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUITutorial_C::ForceTutorialClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "ForceTutorialClose");

	Params::UUITutorial_C_ForceTutorialClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorial.UITutorial_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUITutorial_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "IsChangeStateCloseFinish");

	Params::UUITutorial_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorial.UITutorial_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUITutorial_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "IsChangeStateOpenFinish");

	Params::UUITutorial_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorial.UITutorial_C.SetupTutorialPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NowPage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableTutorialPageData  TutorialPageData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUITutorial_C::SetupTutorialPage(bool NowPage, struct FDataTableTutorialPageData& TutorialPageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "SetupTutorialPage");

	Params::UUITutorial_C_SetupTutorialPage_Params Parms{};

	Parms.NowPage = NowPage;
	Parms.TutorialPageData = TutorialPageData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.SetupTemplate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableTutorialPageData  TutorialPageData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UUITutorialTemplateBase*     Template                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::SetupTemplate(struct FDataTableTutorialPageData& TutorialPageData, class UUITutorialTemplateBase** Template)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "SetupTemplate");

	Params::UUITutorial_C_SetupTemplate_Params Parms{};

	Parms.TutorialPageData = TutorialPageData;

	UObject::ProcessEvent(Func, &Parms);

	if (Template != nullptr)
		*Template = Parms.Template;

}


// Function UITutorial.UITutorial_C.AddTemplateList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUITutorialTemplateBase*     AddTemplate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::AddTemplateList(class UUITutorialTemplateBase* AddTemplate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "AddTemplateList");

	Params::UUITutorial_C_AddTemplateList_Params Parms{};

	Parms.AddTemplate = AddTemplate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.GetTemplateFromList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TemplateType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUITutorialTemplateBase*     Template                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorial_C::GetTemplateFromList(int32 TemplateType, class UUITutorialTemplateBase** Template, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "GetTemplateFromList");

	Params::UUITutorial_C_GetTemplateFromList_Params Parms{};

	Parms.TemplateType = TemplateType;

	UObject::ProcessEvent(Func, &Parms);

	if (Template != nullptr)
		*Template = Parms.Template;

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function UITutorial.UITutorial_C.CloseEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "CloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUITutorial_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "IsRunning");

	Params::UUITutorial_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorial.UITutorial_C.Change Next Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::Change_Next_Image()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "Change Next Image");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.TickEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::TickEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "TickEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.ConstructObjectSetting
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::ConstructObjectSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "ConstructObjectSetting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.SwitchImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::SwitchImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "SwitchImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnRightAxisX");

	Params::UUITutorial_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnRightAxisY");

	Params::UUITutorial_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnLeftAxisX");

	Params::UUITutorial_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnLeftAxisY");

	Params::UUITutorial_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnGamePadAxisX");

	Params::UUITutorial_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnGamePadAxisY");

	Params::UUITutorial_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorial_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnListPaging");

	Params::UUITutorial_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "WorldMapSlowCursorX");

	Params::UUITutorial_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "WorldMapSlowCursorY");

	Params::UUITutorial_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "HelpScrollAxis");

	Params::UUITutorial_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorial_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorial.UITutorial_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "ChangeInputMode");

	Params::UUITutorial_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorial.UITutorial_C.ExecuteUbergraph_UITutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorial_C::ExecuteUbergraph_UITutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorial_C", "ExecuteUbergraph_UITutorial");

	Params::UUITutorial_C_ExecuteUbergraph_UITutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


