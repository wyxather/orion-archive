#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C
// (None)

class UClass* UWBP_FIeldCommandPreviewPanelBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FIeldCommandPreviewPanelBase_C");

	return Clss;
}


// WBP_FIeldCommandPreviewPanelBase_C WBP_FIeldCommandPreviewPanelBase.Default__WBP_FIeldCommandPreviewPanelBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FIeldCommandPreviewPanelBase_C* UWBP_FIeldCommandPreviewPanelBase_C::GetDefaultObj()
{
	static class UWBP_FIeldCommandPreviewPanelBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FIeldCommandPreviewPanelBase_C*>(UWBP_FIeldCommandPreviewPanelBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetCanPlayCloseSe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanPlay                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FIeldCommandPreviewPanelBase_C::GetCanPlayCloseSe(bool* CanPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "GetCanPlayCloseSe");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_GetCanPlayCloseSe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanPlay != nullptr)
		*CanPlay = Parms.CanPlay;

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OnFinishFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FIeldCommandPreviewPanelBase_C::OnFinishFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "OnFinishFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetAdditionalFooterGuide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGuideData>          Flow                                                             (Parm, OutParm)

void UWBP_FIeldCommandPreviewPanelBase_C::GetAdditionalFooterGuide(TArray<struct FGuideData>* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "GetAdditionalFooterGuide");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_GetAdditionalFooterGuide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Flow != nullptr)
		*Flow = std::move(Parms.Flow);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.RefreshPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FIeldCommandPreviewPanelBase_C::RefreshPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "RefreshPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FIeldCommandPreviewPanelBase_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.CanCloseState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFieldCommandPreviewMenuStateNextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::CanCloseState(enum class EFieldCommandPreviewMenuState* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "CanCloseState");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_CanCloseState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.ToggleHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FIeldCommandPreviewPanelBase_C::ToggleHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "ToggleHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.HelpWindowScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::HelpWindowScrollAxis(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "HelpWindowScrollAxis");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_HelpWindowScrollAxis_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.SetSwapNpcWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNPCStatusPartsWidget_C*     LeftNpcStatusWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusPartsWidget_C*     RightNpcStatusWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCFollowChangePartsWidget_C*CaptionChangeWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::SetSwapNpcWidget(class UNPCStatusPartsWidget_C* LeftNpcStatusWidget, class UNPCStatusPartsWidget_C* RightNpcStatusWidget, class UNPCFollowChangePartsWidget_C* CaptionChangeWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "SetSwapNpcWidget");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_SetSwapNpcWidget_Params Parms{};

	Parms.LeftNpcStatusWidget = LeftNpcStatusWidget;
	Parms.RightNpcStatusWidget = RightNpcStatusWidget;
	Parms.CaptionChangeWidget = CaptionChangeWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OpenSwapDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DetailTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReleaseWaitingNpcNotice                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_FIeldCommandPreviewPanelBase_C::OpenSwapDialog(class FName DetailTextLabel, class FName ReleaseWaitingNpcNotice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "OpenSwapDialog");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_OpenSwapDialog_Params Parms{};

	Parms.DetailTextLabel = DetailTextLabel;
	Parms.ReleaseWaitingNpcNotice = ReleaseWaitingNpcNotice;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OnClosedSwapDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::OnClosedSwapDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "OnClosedSwapDialog");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_OnClosedSwapDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetFlow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::GetFlow(class ABP_FCv2_FieldCommandFlowBase_C** Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "GetFlow");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_GetFlow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Flow != nullptr)
		*Flow = Parms.Flow;

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.IsFocusablePanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FIeldCommandPreviewPanelBase_C::IsFocusablePanel(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "IsFocusablePanel");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_IsFocusablePanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FIeldCommandPreviewPanelBase_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "OutFocus");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FIeldCommandPreviewPanelBase_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "Focus");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FIeldCommandPreviewPanelBase_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FIeldCommandPreviewPanelBase_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerNewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "Decide");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FIeldCommandPreviewPanelBase_C::Close(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "Close");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_Close_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FIeldCommandPreviewPanelBase_C::Open(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "Open");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_Open_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.SetupPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "SetupPanel");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.GetFcType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::GetFcType(enum class EMJFieldCommandType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "GetFcType");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_GetFcType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FIeldCommandPreviewPanelBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.ExecuteUbergraph_WBP_FIeldCommandPreviewPanelBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::ExecuteUbergraph_WBP_FIeldCommandPreviewPanelBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "ExecuteUbergraph_WBP_FIeldCommandPreviewPanelBase");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_ExecuteUbergraph_WBP_FIeldCommandPreviewPanelBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.RefreshPreviewWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_FIeldCommandPreviewPanelBase_C*ExcludePanel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::RefreshPreviewWidget__DelegateSignature(class UWBP_FIeldCommandPreviewPanelBase_C* ExcludePanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "RefreshPreviewWidget__DelegateSignature");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_RefreshPreviewWidget__DelegateSignature_Params Parms{};

	Parms.ExcludePanel = ExcludePanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FIeldCommandPreviewPanelBase.WBP_FIeldCommandPreviewPanelBase_C.OnDecideInPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerAnswer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FIeldCommandPreviewPanelBase_C::OnDecideInPanel__DelegateSignature(enum class EFieldCommandPreviewPanelDecideAnswer Answer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FIeldCommandPreviewPanelBase_C", "OnDecideInPanel__DelegateSignature");

	Params::UWBP_FIeldCommandPreviewPanelBase_C_OnDecideInPanel__DelegateSignature_Params Parms{};

	Parms.Answer = Answer;

	UObject::ProcessEvent(Func, &Parms);

}

}


