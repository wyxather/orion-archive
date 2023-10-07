#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanelTemplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanelTemplate_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanelTemplate_C WBP_FieldCommandPreviewPanelTemplate.Default__WBP_FieldCommandPreviewPanelTemplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanelTemplate_C* UWBP_FieldCommandPreviewPanelTemplate_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanelTemplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanelTemplate_C*>(UWBP_FieldCommandPreviewPanelTemplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetupTemplateWithoutButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DetailText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FieldCommandPreviewPanelTemplate_C::SetupTemplateWithoutButton(class FText DetailText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "SetupTemplateWithoutButton");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_SetupTemplateWithoutButton_Params Parms{};

	Parms.DetailText = DetailText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetCaptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FieldCommandPreviewPanelTemplate_C::SetCaptionText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "SetCaptionText");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_SetCaptionText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.GetActiveButtonNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_FieldCommandPreviewPanelTemplate_C::GetActiveButtonNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "GetActiveButtonNum");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_GetActiveButtonNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.RemoveCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanelTemplate_C::RemoveCursor(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "RemoveCursor");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_RemoveCursor_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetCursorToDefaultPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanelTemplate_C::SetCursorToDefaultPos(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "SetCursorToDefaultPos");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_SetCursorToDefaultPos_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.MoveCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EScrollDirection        Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanelTemplate_C::MoveCursor(enum class EScrollDirection Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "MoveCursor");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_MoveCursor_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.UpdateCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanelTemplate_C::UpdateCursor(int32 Index, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "UpdateCursor");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_UpdateCursor_Params Parms{};

	Parms.Index = Index;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.SetupTemplate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DetailText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<enum class EFieldCommandPreviewPanelDecideAnswer>AnswerList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FieldCommandPreviewPanelTemplate_C::SetupTemplate(class FText DetailText, TArray<class FText>& ButtonText, TArray<enum class EFieldCommandPreviewPanelDecideAnswer>& AnswerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "SetupTemplate");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_SetupTemplate_Params Parms{};

	Parms.DetailText = DetailText;
	Parms.ButtonText = ButtonText;
	Parms.AnswerList = AnswerList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanelTemplate_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanelTemplate_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerAnswer                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanelTemplate_C::Decide(enum class EFieldCommandPreviewPanelDecideAnswer* Answer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "Decide");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Answer != nullptr)
		*Answer = Parms.Answer;

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanelTemplate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanelTemplate_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "PreConstruct");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanelTemplate.WBP_FieldCommandPreviewPanelTemplate_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanelTemplate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanelTemplate_C::ExecuteUbergraph_WBP_FieldCommandPreviewPanelTemplate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanelTemplate_C", "ExecuteUbergraph_WBP_FieldCommandPreviewPanelTemplate");

	Params::UWBP_FieldCommandPreviewPanelTemplate_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanelTemplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


