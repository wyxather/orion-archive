#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C
// (None)

class UClass* UWBP_FiledCommandPreviewTabIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FiledCommandPreviewTabIcon_C");

	return Clss;
}


// WBP_FiledCommandPreviewTabIcon_C WBP_FiledCommandPreviewTabIcon.Default__WBP_FiledCommandPreviewTabIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FiledCommandPreviewTabIcon_C* UWBP_FiledCommandPreviewTabIcon_C::GetDefaultObj()
{
	static class UWBP_FiledCommandPreviewTabIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FiledCommandPreviewTabIcon_C*>(UWBP_FiledCommandPreviewTabIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C.RefreshIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FiledCommandPreviewTabIcon_C::RefreshIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FiledCommandPreviewTabIcon_C", "RefreshIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C.GetFlow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FiledCommandPreviewTabIcon_C::GetFlow(class ABP_FCv2_FieldCommandFlowBase_C** Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FiledCommandPreviewTabIcon_C", "GetFlow");

	Params::UWBP_FiledCommandPreviewTabIcon_C_GetFlow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Flow != nullptr)
		*Flow = Parms.Flow;

}


// Function WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FiledCommandPreviewTabIcon_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FiledCommandPreviewTabIcon_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FiledCommandPreviewTabIcon_C::ResetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FiledCommandPreviewTabIcon_C", "ResetFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C.SetupIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FiledCommandPreviewTabIcon_C::SetupIcon(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FiledCommandPreviewTabIcon_C", "SetupIcon");

	Params::UWBP_FiledCommandPreviewTabIcon_C_SetupIcon_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FiledCommandPreviewTabIcon_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FiledCommandPreviewTabIcon_C", "OutFocus");

	Params::UWBP_FiledCommandPreviewTabIcon_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FiledCommandPreviewTabIcon.WBP_FiledCommandPreviewTabIcon_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FiledCommandPreviewTabIcon_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FiledCommandPreviewTabIcon_C", "Focus");

	Params::UWBP_FiledCommandPreviewTabIcon_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}

}


