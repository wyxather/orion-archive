#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Purchase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Purchase_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Purchase_C WBP_FieldCommandPreviewPanel_Purchase.Default__WBP_FieldCommandPreviewPanel_Purchase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Purchase_C* UWBP_FieldCommandPreviewPanel_Purchase_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Purchase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Purchase_C*>(UWBP_FieldCommandPreviewPanel_Purchase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.GetAdditionalFooterGuide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGuideData>          Flow                                                             (Parm, OutParm)

void UWBP_FieldCommandPreviewPanel_Purchase_C::GetAdditionalFooterGuide(TArray<struct FGuideData>* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "GetAdditionalFooterGuide");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_GetAdditionalFooterGuide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Flow != nullptr)
		*Flow = std::move(Parms.Flow);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.ToggleHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Purchase_C::ToggleHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "ToggleHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.PurchaseItemExec
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPurchaseItemInfoData       PurchaseItemInfoData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FieldCommandPreviewPanel_Purchase_C::PurchaseItemExec(struct FPurchaseItemInfoData& PurchaseItemInfoData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "PurchaseItemExec");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_PurchaseItemExec_Params Parms{};

	Parms.PurchaseItemInfoData = PurchaseItemInfoData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.OnCloseConfirmDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Purchase_C::OnCloseConfirmDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "OnCloseConfirmDialog");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_OnCloseConfirmDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerNewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Purchase_C::Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "Decide");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Purchase_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Purchase_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Purchase_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "OutFocus");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Purchase_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "Focus");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.IsFocusablePanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Purchase_C::IsFocusablePanel(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "IsFocusablePanel");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_IsFocusablePanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.OnSelectItemEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursorPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Purchase_C::OnSelectItemEvent(int32 SelectCursorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "OnSelectItemEvent");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_OnSelectItemEvent_Params Parms{};

	Parms.SelectCursorPosition = SelectCursorPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.SetupPurchaseListData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Purchase_C::SetupPurchaseListData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "SetupPurchaseListData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Purchase.WBP_FieldCommandPreviewPanel_Purchase_C.SetupPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Purchase_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Purchase_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Purchase_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}

}


