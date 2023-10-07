#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandWidgetHire.FieldCommandWidgetHire_C
// (None)

class UClass* UFieldCommandWidgetHire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandWidgetHire_C");

	return Clss;
}


// FieldCommandWidgetHire_C FieldCommandWidgetHire.Default__FieldCommandWidgetHire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandWidgetHire_C* UFieldCommandWidgetHire_C::GetDefaultObj()
{
	static class UFieldCommandWidgetHire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandWidgetHire_C*>(UFieldCommandWidgetHire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OpenFixedFollowNPCReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::OpenFixedFollowNPCReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OpenFixedFollowNPCReleaseDialog");

	Params::UFieldCommandWidgetHire_C_OpenFixedFollowNPCReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OpenFixedFollowNPCDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::OpenFixedFollowNPCDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OpenFixedFollowNPCDialog");

	Params::UFieldCommandWidgetHire_C_OpenFixedFollowNPCDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OpenFailedDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::OpenFailedDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OpenFailedDialog");

	Params::UFieldCommandWidgetHire_C_OpenFailedDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.GetDialogInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              DialogInput                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::GetDialogInput(int32* DialogInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "GetDialogInput");

	Params::UFieldCommandWidgetHire_C_GetDialogInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DialogInput != nullptr)
		*DialogInput = Parms.DialogInput;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.CloseDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "CloseDialog");

	Params::UFieldCommandWidgetHire_C_CloseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OpenSwapDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::OpenSwapDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OpenSwapDialog");

	Params::UFieldCommandWidgetHire_C_OpenSwapDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OpenReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::OpenReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OpenReleaseDialog");

	Params::UFieldCommandWidgetHire_C_OpenReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OpenFollowDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::OpenFollowDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OpenFollowDialog");

	Params::UFieldCommandWidgetHire_C_OpenFollowDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OnClosedSwapDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::OnClosedSwapDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OnClosedSwapDialog");

	Params::UFieldCommandWidgetHire_C_OnClosedSwapDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OnClosedFailedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DialogInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::OnClosedFailedDialog(int32 DialogInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OnClosedFailedDialog");

	Params::UFieldCommandWidgetHire_C_OnClosedFailedDialog_Params Parms{};

	Parms.DialogInput = DialogInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OnClosedReleaseDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::OnClosedReleaseDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OnClosedReleaseDialog");

	Params::UFieldCommandWidgetHire_C_OnClosedReleaseDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OnClosedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::OnClosedDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OnClosedDialog");

	Params::UFieldCommandWidgetHire_C_OnClosedDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.Get Follow Hire Member
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* UFieldCommandWidgetHire_C::Get_Follow_Hire_Member()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "Get Follow Hire Member");

	Params::UFieldCommandWidgetHire_C_Get_Follow_Hire_Member_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "IsChangeStateCloseFinish");

	Params::UFieldCommandWidgetHire_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "SetReference");

	Params::UFieldCommandWidgetHire_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetHire_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "IsRunning");

	Params::UFieldCommandWidgetHire_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.InitPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetHire_C::InitPartsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "InitPartsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.SetupHelpUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        HeaderLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FooterLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::SetupHelpUI(class FName HeaderLabel, class FName FooterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "SetupHelpUI");

	Params::UFieldCommandWidgetHire_C_SetupHelpUI_Params Parms{};

	Parms.HeaderLabel = HeaderLabel;
	Parms.FooterLabel = FooterLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.DialogOpenCommon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetHire_C::DialogOpenCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "DialogOpenCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetHire_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetHire_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetHire_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetHire_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetHire_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "Tick");

	Params::UFieldCommandWidgetHire_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetHire.FieldCommandWidgetHire_C.ExecuteUbergraph_FieldCommandWidgetHire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetHire_C::ExecuteUbergraph_FieldCommandWidgetHire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetHire_C", "ExecuteUbergraph_FieldCommandWidgetHire");

	Params::UFieldCommandWidgetHire_C_ExecuteUbergraph_FieldCommandWidgetHire_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


