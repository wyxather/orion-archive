#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandWidgetLead.FieldCommandWidgetLead_C
// (None)

class UClass* UFieldCommandWidgetLead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandWidgetLead_C");

	return Clss;
}


// FieldCommandWidgetLead_C FieldCommandWidgetLead.Default__FieldCommandWidgetLead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandWidgetLead_C* UFieldCommandWidgetLead_C::GetDefaultObj()
{
	static class UFieldCommandWidgetLead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandWidgetLead_C*>(UFieldCommandWidgetLead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.GetDialogInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              DialogInput                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLead_C::GetDialogInput(int32* DialogInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "GetDialogInput");

	Params::UFieldCommandWidgetLead_C_GetDialogInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DialogInput != nullptr)
		*DialogInput = Parms.DialogInput;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OpenFixedFollowNPCReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::OpenFixedFollowNPCReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OpenFixedFollowNPCReleaseDialog");

	Params::UFieldCommandWidgetLead_C_OpenFixedFollowNPCReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OpenFixedFollowNPCDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::OpenFixedFollowNPCDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OpenFixedFollowNPCDialog");

	Params::UFieldCommandWidgetLead_C_OpenFixedFollowNPCDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OpenSwapDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::OpenSwapDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OpenSwapDialog");

	Params::UFieldCommandWidgetLead_C_OpenSwapDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OpenFailedDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::OpenFailedDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OpenFailedDialog");

	Params::UFieldCommandWidgetLead_C_OpenFailedDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OpenReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::OpenReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OpenReleaseDialog");

	Params::UFieldCommandWidgetLead_C_OpenReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OpenFollowDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::OpenFollowDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OpenFollowDialog");

	Params::UFieldCommandWidgetLead_C_OpenFollowDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.Get Follow Lead Member
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* UFieldCommandWidgetLead_C::Get_Follow_Lead_Member()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "Get Follow Lead Member");

	Params::UFieldCommandWidgetLead_C_Get_Follow_Lead_Member_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.LeadFailedCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLead_C::LeadFailedCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "LeadFailedCallback");

	Params::UFieldCommandWidgetLead_C_LeadFailedCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.LeadReleaseCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLead_C::LeadReleaseCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "LeadReleaseCallback");

	Params::UFieldCommandWidgetLead_C_LeadReleaseCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.LeadCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLead_C::LeadCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "LeadCallback");

	Params::UFieldCommandWidgetLead_C_LeadCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.LeadChangeCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLead_C::LeadChangeCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "LeadChangeCallback");

	Params::UFieldCommandWidgetLead_C_LeadChangeCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "IsChangeStateCloseFinish");

	Params::UFieldCommandWidgetLead_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "SetReference");

	Params::UFieldCommandWidgetLead_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetLead_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "IsRunning");

	Params::UFieldCommandWidgetLead_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.InitPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLead_C::InitPartsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "InitPartsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.SetupHelpUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        HeaderLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FooterLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLead_C::SetupHelpUI(class FName HeaderLabel, class FName FooterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "SetupHelpUI");

	Params::UFieldCommandWidgetLead_C_SetupHelpUI_Params Parms{};

	Parms.HeaderLabel = HeaderLabel;
	Parms.FooterLabel = FooterLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.DialogOpenCommon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLead_C::DialogOpenCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "DialogOpenCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLead_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLead_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetLead_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetLead.FieldCommandWidgetLead_C.ExecuteUbergraph_FieldCommandWidgetLead
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetLead_C::ExecuteUbergraph_FieldCommandWidgetLead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetLead_C", "ExecuteUbergraph_FieldCommandWidgetLead");

	Params::UFieldCommandWidgetLead_C_ExecuteUbergraph_FieldCommandWidgetLead_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


