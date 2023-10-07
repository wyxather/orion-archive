#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_PotentialityActionComponent.BP_PotentialityActionComponent_C
// (None)

class UClass* UBP_PotentialityActionComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PotentialityActionComponent_C");

	return Clss;
}


// BP_PotentialityActionComponent_C BP_PotentialityActionComponent.Default__BP_PotentialityActionComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PotentialityActionComponent_C* UBP_PotentialityActionComponent_C::GetDefaultObj()
{
	static class UBP_PotentialityActionComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PotentialityActionComponent_C*>(UBP_PotentialityActionComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.CheckExecMasquerade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PotentialityActionComponent_C::CheckExecMasquerade(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "CheckExecMasquerade");

	Params::UBP_PotentialityActionComponent_C_CheckExecMasquerade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.AddPotentialityActionPoint
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NAddActionPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIgnoreAddAbility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PotentialityActionComponent_C::AddPotentialityActionPoint(int32 NAddActionPoint, bool bIgnoreAddAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "AddPotentialityActionPoint");

	Params::UBP_PotentialityActionComponent_C_AddPotentialityActionPoint_Params Parms{};

	Parms.NAddActionPoint = NAddActionPoint;
	Parms.bIgnoreAddAbility = bIgnoreAddAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.ResumeUnusedPotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::ResumeUnusedPotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "ResumeUnusedPotentialityAction");

	Params::UBP_PotentialityActionComponent_C_ResumeUnusedPotentialityAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.FinishPotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::FinishPotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "FinishPotentialityAction");

	Params::UBP_PotentialityActionComponent_C_FinishPotentialityAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OnPotentialityAction_Common
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::OnPotentialityAction_Common()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "OnPotentialityAction_Common");

	Params::UBP_PotentialityActionComponent_C_OnPotentialityAction_Common_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OffPotentialityAction_Common
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCancel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::OffPotentialityAction_Common(bool bCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "OffPotentialityAction_Common");

	Params::UBP_PotentialityActionComponent_C_OffPotentialityAction_Common_Params Parms{};

	Parms.bCancel = bCancel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OffPotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCancel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::OffPotentialityAction(bool bCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "OffPotentialityAction");

	Params::UBP_PotentialityActionComponent_C_OffPotentialityAction_Params Parms{};

	Parms.bCancel = bCancel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.ExecPotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::ExecPotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "ExecPotentialityAction");

	Params::UBP_PotentialityActionComponent_C_ExecPotentialityAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OnPotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::OnPotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "OnPotentialityAction");

	Params::UBP_PotentialityActionComponent_C_OnPotentialityAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.CheckEnablePotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPOTENTIALITY_ACTION_TYPEEActionType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PotentialityActionComponent_C::CheckEnablePotentialityAction(enum class EPOTENTIALITY_ACTION_TYPE EActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PotentialityActionComponent_C", "CheckEnablePotentialityAction");

	Params::UBP_PotentialityActionComponent_C_CheckEnablePotentialityAction_Params Parms{};

	Parms.EActionType = EActionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


