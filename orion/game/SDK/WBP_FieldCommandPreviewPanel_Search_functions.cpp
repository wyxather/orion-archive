#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Search_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Search_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Search_C WBP_FieldCommandPreviewPanel_Search.Default__WBP_FieldCommandPreviewPanel_Search_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Search_C* UWBP_FieldCommandPreviewPanel_Search_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Search_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Search_C*>(UWBP_FieldCommandPreviewPanel_Search_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C.SetupNpcStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Search_C::SetupNpcStatus(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Search_C", "SetupNpcStatus");

	Params::UWBP_FieldCommandPreviewPanel_Search_C_SetupNpcStatus_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Search_C::Open(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Search_C", "Open");

	Params::UWBP_FieldCommandPreviewPanel_Search_C_Open_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C.SetupInfomationTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Search_C::SetupInfomationTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Search_C", "SetupInfomationTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C.SetupConfirmTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Search_C::SetupConfirmTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Search_C", "SetupConfirmTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C.SetupPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Search_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Search_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Search_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Search_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Search_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Search.WBP_FieldCommandPreviewPanel_Search_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Search
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Search_C::ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Search(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Search_C", "ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Search");

	Params::UWBP_FieldCommandPreviewPanel_Search_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Search_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


