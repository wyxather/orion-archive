#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C
// (Actor)

class UClass* ABP_WeaponMasterEventFlowV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponMasterEventFlowV2_C");

	return Clss;
}


// BP_WeaponMasterEventFlowV2_C BP_WeaponMasterEventFlowV2.Default__BP_WeaponMasterEventFlowV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponMasterEventFlowV2_C* ABP_WeaponMasterEventFlowV2_C::GetDefaultObj()
{
	static class ABP_WeaponMasterEventFlowV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponMasterEventFlowV2_C*>(ABP_WeaponMasterEventFlowV2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedBuyDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMasterEventFlowV2_C::OnClosedBuyDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OnClosedBuyDialog");

	Params::ABP_WeaponMasterEventFlowV2_C_OnClosedBuyDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedSupportAbilityTutorial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponMasterEventFlowV2_C::OnClosedSupportAbilityTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OnClosedSupportAbilityTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OpenSupportAbilityTutorial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponMasterEventFlowV2_C::OpenSupportAbilityTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OpenSupportAbilityTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedJobTutorial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponMasterEventFlowV2_C::OnClosedJobTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OnClosedJobTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OpenJobTutorial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponMasterEventFlowV2_C::OpenJobTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OpenJobTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedSupportAbilityDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMasterEventFlowV2_C::OnClosedSupportAbilityDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OnClosedSupportAbilityDialog");

	Params::ABP_WeaponMasterEventFlowV2_C_OnClosedSupportAbilityDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OpenSupportAbilityDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponMasterEventFlowV2_C::OpenSupportAbilityDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OpenSupportAbilityDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedAbilityDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMasterEventFlowV2_C::OnClosedAbilityDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OnClosedAbilityDialog");

	Params::ABP_WeaponMasterEventFlowV2_C_OnClosedAbilityDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedJobDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMasterEventFlowV2_C::OnClosedJobDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OnClosedJobDialog");

	Params::ABP_WeaponMasterEventFlowV2_C_OnClosedJobDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedWeaponDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMasterEventFlowV2_C::OnClosedWeaponDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OnClosedWeaponDialog");

	Params::ABP_WeaponMasterEventFlowV2_C_OnClosedWeaponDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.SetIsStopEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponMasterEventFlowV2_C::SetIsStopEvent(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "SetIsStopEvent");

	Params::ABP_WeaponMasterEventFlowV2_C_SetIsStopEvent_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.GetIsStopEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_WeaponMasterEventFlowV2_C::GetIsStopEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "GetIsStopEvent");

	Params::ABP_WeaponMasterEventFlowV2_C_GetIsStopEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OpenDialog
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Caption                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 CloseFinishCallback                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class FName                        OpenSe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonDialog*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonDialog* ABP_WeaponMasterEventFlowV2_C::OpenDialog(class FText Caption, class FText Text, TArray<class FText>& ButtonText, FDelegateProperty_ CloseFinishCallback, class FName OpenSe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "OpenDialog");

	Params::ABP_WeaponMasterEventFlowV2_C_OpenDialog_Params Parms{};

	Parms.Caption = Caption;
	Parms.Text = Text;
	Parms.ButtonText = ButtonText;
	Parms.CloseFinishCallback = CloseFinishCallback;
	Parms.OpenSe = OpenSe;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.SelectIndex
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEventData                  EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_WeaponMasterEventFlowV2_C::SelectIndex(struct FEventData& EventData, int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "SelectIndex");

	Params::ABP_WeaponMasterEventFlowV2_C_SelectIndex_Params Parms{};

	Parms.EventData = EventData;
	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.GetState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWeaponMasterEventV2_MainStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EWeaponMasterEventV2_MainState ABP_WeaponMasterEventFlowV2_C::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "GetState");

	Params::ABP_WeaponMasterEventFlowV2_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.SetState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponMasterEventV2_MainStateNewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMasterEventFlowV2_C::SetState(enum class EWeaponMasterEventV2_MainState NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "SetState");

	Params::ABP_WeaponMasterEventFlowV2_C_SetState_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.ApplyResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponMasterEventFlowV2_C::ApplyResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "ApplyResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.UpdateFlow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMasterEventFlowV2_C::UpdateFlow(const struct FEventData& EventData, int32 CurrentIndex, int32* NextIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "UpdateFlow");

	Params::ABP_WeaponMasterEventFlowV2_C_UpdateFlow_Params Parms{};

	Parms.EventData = EventData;
	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (NextIndex != nullptr)
		*NextIndex = Parms.NextIndex;

}


// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponMasterEventFlowV2_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterEventFlowV2_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}

}


