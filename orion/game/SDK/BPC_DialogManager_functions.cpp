#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPC_DialogManager.BPC_DialogManager_C
// (Actor)

class UClass* ABPC_DialogManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPC_DialogManager_C");

	return Clss;
}


// BPC_DialogManager_C BPC_DialogManager.Default__BPC_DialogManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPC_DialogManager_C* ABPC_DialogManager_C::GetDefaultObj()
{
	static class ABPC_DialogManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPC_DialogManager_C*>(ABPC_DialogManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPC_DialogManager.BPC_DialogManager_C.CloseRequestDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_DialogManager_C::CloseRequestDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_DialogManager_C", "CloseRequestDialog");

	Params::ABPC_DialogManager_C_CloseRequestDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_DialogManager.BPC_DialogManager_C.OnDialogClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_DialogManager_C::OnDialogClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_DialogManager_C", "OnDialogClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_DialogManager.BPC_DialogManager_C.Initialize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_DialogManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_DialogManager_C", "Initialize");

	Params::ABPC_DialogManager_C_Initialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_DialogManager.BPC_DialogManager_C.OpenRequestDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJUICommonDialogParam      Param                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UCommonDialog*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonDialog* ABPC_DialogManager_C::OpenRequestDialog(struct FMJUICommonDialogParam& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_DialogManager_C", "OpenRequestDialog");

	Params::ABPC_DialogManager_C_OpenRequestDialog_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_DialogManager.BPC_DialogManager_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_DialogManager_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_DialogManager_C", "SetReference");

	Params::ABPC_DialogManager_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


