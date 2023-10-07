#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandWidgetLure.FieldCommandWidgetLure_C
// (None)

class UClass* UFieldCommandWidgetLure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandWidgetLure_C");

	return Clss;
}


// FieldCommandWidgetLure_C FieldCommandWidgetLure.Default__FieldCommandWidgetLure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandWidgetLure_C* UFieldCommandWidgetLure_C::GetDefaultObj()
{
	static class UFieldCommandWidgetLure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandWidgetLure_C*>(UFieldCommandWidgetLure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.GetDialogInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              DialogInput                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLure_C::GetDialogInput(int32* DialogInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "GetDialogInput");

	Params::UFieldCommandWidgetLure_C_GetDialogInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DialogInput != nullptr)
		*DialogInput = Parms.DialogInput;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.OpenFixedFollowNPCReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::OpenFixedFollowNPCReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "OpenFixedFollowNPCReleaseDialog");

	Params::UFieldCommandWidgetLure_C_OpenFixedFollowNPCReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.OpenFixedFollowNPCDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::OpenFixedFollowNPCDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "OpenFixedFollowNPCDialog");

	Params::UFieldCommandWidgetLure_C_OpenFixedFollowNPCDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.OpenSwapDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::OpenSwapDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "OpenSwapDialog");

	Params::UFieldCommandWidgetLure_C_OpenSwapDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.OpenReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::OpenReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "OpenReleaseDialog");

	Params::UFieldCommandWidgetLure_C_OpenReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.OpenFollowDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::OpenFollowDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "OpenFollowDialog");

	Params::UFieldCommandWidgetLure_C_OpenFollowDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.LureFailedCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLure_C::LureFailedCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "LureFailedCallback");

	Params::UFieldCommandWidgetLure_C_LureFailedCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.LureChangeCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLure_C::LureChangeCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "LureChangeCallback");

	Params::UFieldCommandWidgetLure_C_LureChangeCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.LureReleaseCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLure_C::LureReleaseCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "LureReleaseCallback");

	Params::UFieldCommandWidgetLure_C_LureReleaseCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.LureCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLure_C::LureCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "LureCallback");

	Params::UFieldCommandWidgetLure_C_LureCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.Get Follow Lure Member
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* UFieldCommandWidgetLure_C::Get_Follow_Lure_Member()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "Get Follow Lure Member");

	Params::UFieldCommandWidgetLure_C_Get_Follow_Lure_Member_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "IsChangeStateCloseFinish");

	Params::UFieldCommandWidgetLure_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "SetReference");

	Params::UFieldCommandWidgetLure_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLure_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "IsRunning");

	Params::UFieldCommandWidgetLure_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.InitPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLure_C::InitPartsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "InitPartsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.SetupHelpUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        HeaderLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FooterLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLure_C::SetupHelpUI(class FName HeaderLabel, class FName FooterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "SetupHelpUI");

	Params::UFieldCommandWidgetLure_C_SetupHelpUI_Params Parms{};

	Parms.HeaderLabel = HeaderLabel;
	Parms.FooterLabel = FooterLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.DialogOpenCommon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLure_C::DialogOpenCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "DialogOpenCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLure_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLure_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLure_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLure_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLure_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLure.FieldCommandWidgetLure_C.ExecuteUbergraph_FieldCommandWidgetLure
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLure_C::ExecuteUbergraph_FieldCommandWidgetLure(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLure_C", "ExecuteUbergraph_FieldCommandWidgetLure");

	Params::UFieldCommandWidgetLure_C_ExecuteUbergraph_FieldCommandWidgetLure_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


