#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C
// (None)

class UClass* UFieldCommandWidgetPlacate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandWidgetPlacate_C");

	return Clss;
}


// FieldCommandWidgetPlacate_C FieldCommandWidgetPlacate.Default__FieldCommandWidgetPlacate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandWidgetPlacate_C* UFieldCommandWidgetPlacate_C::GetDefaultObj()
{
	static class UFieldCommandWidgetPlacate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandWidgetPlacate_C*>(UFieldCommandWidgetPlacate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OpenFixedFollowNPCReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::OpenFixedFollowNPCReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OpenFixedFollowNPCReleaseDialog");

	Params::UFieldCommandWidgetPlacate_C_OpenFixedFollowNPCReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OpenFixedFollowNPCDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::OpenFixedFollowNPCDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OpenFixedFollowNPCDialog");

	Params::UFieldCommandWidgetPlacate_C_OpenFixedFollowNPCDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OpenFailedDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::OpenFailedDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OpenFailedDialog");

	Params::UFieldCommandWidgetPlacate_C_OpenFailedDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.GetDialogInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              DialogInput                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::GetDialogInput(int32* DialogInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "GetDialogInput");

	Params::UFieldCommandWidgetPlacate_C_GetDialogInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DialogInput != nullptr)
		*DialogInput = Parms.DialogInput;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.CloseDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "CloseDialog");

	Params::UFieldCommandWidgetPlacate_C_CloseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OpenSwapDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::OpenSwapDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OpenSwapDialog");

	Params::UFieldCommandWidgetPlacate_C_OpenSwapDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OpenReleaseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::OpenReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OpenReleaseDialog");

	Params::UFieldCommandWidgetPlacate_C_OpenReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OpenFollowDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::OpenFollowDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OpenFollowDialog");

	Params::UFieldCommandWidgetPlacate_C_OpenFollowDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OnClosedSwapDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::OnClosedSwapDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OnClosedSwapDialog");

	Params::UFieldCommandWidgetPlacate_C_OnClosedSwapDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OnClosedFailedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DialogInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::OnClosedFailedDialog(int32 DialogInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OnClosedFailedDialog");

	Params::UFieldCommandWidgetPlacate_C_OnClosedFailedDialog_Params Parms{};

	Parms.DialogInput = DialogInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OnClosedReleaseDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::OnClosedReleaseDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OnClosedReleaseDialog");

	Params::UFieldCommandWidgetPlacate_C_OnClosedReleaseDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OnClosedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::OnClosedDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OnClosedDialog");

	Params::UFieldCommandWidgetPlacate_C_OnClosedDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.Get Follow Placate Member
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* UFieldCommandWidgetPlacate_C::Get_Follow_Placate_Member()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "Get Follow Placate Member");

	Params::UFieldCommandWidgetPlacate_C_Get_Follow_Placate_Member_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "IsChangeStateCloseFinish");

	Params::UFieldCommandWidgetPlacate_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "SetReference");

	Params::UFieldCommandWidgetPlacate_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetPlacate_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "IsRunning");

	Params::UFieldCommandWidgetPlacate_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.InitPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetPlacate_C::InitPartsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "InitPartsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.SetupHelpUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        HeaderLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FooterLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::SetupHelpUI(class FName HeaderLabel, class FName FooterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "SetupHelpUI");

	Params::UFieldCommandWidgetPlacate_C_SetupHelpUI_Params Parms{};

	Parms.HeaderLabel = HeaderLabel;
	Parms.FooterLabel = FooterLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.DialogOpenCommon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetPlacate_C::DialogOpenCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "DialogOpenCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetPlacate_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetPlacate_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetPlacate_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetPlacate_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetPlacate_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "Tick");

	Params::UFieldCommandWidgetPlacate_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetPlacate.FieldCommandWidgetPlacate_C.ExecuteUbergraph_FieldCommandWidgetPlacate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetPlacate_C::ExecuteUbergraph_FieldCommandWidgetPlacate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetPlacate_C", "ExecuteUbergraph_FieldCommandWidgetPlacate");

	Params::UFieldCommandWidgetPlacate_C_ExecuteUbergraph_FieldCommandWidgetPlacate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


