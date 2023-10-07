#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Bribery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Bribery_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Bribery_C WBP_FieldCommandPreviewPanel_Bribery.Default__WBP_FieldCommandPreviewPanel_Bribery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Bribery_C* UWBP_FieldCommandPreviewPanel_Bribery_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Bribery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Bribery_C*>(UWBP_FieldCommandPreviewPanel_Bribery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C.SetupNpcStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Bribery_C::SetupNpcStatus(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Bribery_C", "SetupNpcStatus");

	Params::UWBP_FieldCommandPreviewPanel_Bribery_C_SetupNpcStatus_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Bribery_C::Open(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Bribery_C", "Open");

	Params::UWBP_FieldCommandPreviewPanel_Bribery_C_Open_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C.SetupInfomationTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Bribery_C::SetupInfomationTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Bribery_C", "SetupInfomationTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C.SetupConfirmTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Bribery_C::SetupConfirmTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Bribery_C", "SetupConfirmTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C.SetupPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Bribery_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Bribery_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Bribery_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Bribery_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Bribery_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Bribery
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Bribery_C::ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Bribery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Bribery_C", "ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Bribery");

	Params::UWBP_FieldCommandPreviewPanel_Bribery_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Bribery_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


