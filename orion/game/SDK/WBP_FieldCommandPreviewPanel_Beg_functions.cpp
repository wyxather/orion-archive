#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Beg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Beg_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Beg_C WBP_FieldCommandPreviewPanel_Beg.Default__WBP_FieldCommandPreviewPanel_Beg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Beg_C* UWBP_FieldCommandPreviewPanel_Beg_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Beg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Beg_C*>(UWBP_FieldCommandPreviewPanel_Beg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.GetAdditionalFooterGuide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGuideData>          Flow                                                             (Parm, OutParm)

void UWBP_FieldCommandPreviewPanel_Beg_C::GetAdditionalFooterGuide(TArray<struct FGuideData>* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "GetAdditionalFooterGuide");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_GetAdditionalFooterGuide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Flow != nullptr)
		*Flow = std::move(Parms.Flow);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.ToggleHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Beg_C::ToggleHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "ToggleHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.BegItemExec
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPurchaseItemInfoData       PurchaseItemInfoData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FieldCommandPreviewPanel_Beg_C::BegItemExec(struct FPurchaseItemInfoData& PurchaseItemInfoData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "BegItemExec");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_BegItemExec_Params Parms{};

	Parms.PurchaseItemInfoData = PurchaseItemInfoData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerNewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Beg_C::Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "Decide");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Beg_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Beg_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Beg_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "OutFocus");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Beg_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "Focus");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.IsFocusablePanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Beg_C::IsFocusablePanel(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "IsFocusablePanel");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_IsFocusablePanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.OnSelectItemEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursorPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Beg_C::OnSelectItemEvent(int32 SelectCursorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "OnSelectItemEvent");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_OnSelectItemEvent_Params Parms{};

	Parms.SelectCursorPosition = SelectCursorPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.SetupBegList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Beg_C::SetupBegList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "SetupBegList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Beg.WBP_FieldCommandPreviewPanel_Beg_C.SetupPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Beg_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Beg_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Beg_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}

}


