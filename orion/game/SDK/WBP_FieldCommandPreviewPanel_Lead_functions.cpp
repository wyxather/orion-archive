#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Lead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Lead_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Lead_C WBP_FieldCommandPreviewPanel_Lead.Default__WBP_FieldCommandPreviewPanel_Lead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Lead_C* UWBP_FieldCommandPreviewPanel_Lead_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Lead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Lead_C*>(UWBP_FieldCommandPreviewPanel_Lead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerNewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Lead_C::Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Lead_C", "Decide");

	Params::UWBP_FieldCommandPreviewPanel_Lead_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.SetupTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Lead_C::SetupTemplate(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Lead_C", "SetupTemplate");

	Params::UWBP_FieldCommandPreviewPanel_Lead_C_SetupTemplate_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.SetupPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Lead_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Lead_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Lead_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Lead_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Lead_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Lead.WBP_FieldCommandPreviewPanel_Lead_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lead
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Lead_C::ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Lead_C", "ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lead");

	Params::UWBP_FieldCommandPreviewPanel_Lead_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Lead_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


