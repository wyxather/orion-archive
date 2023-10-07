#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Unavailable.WBP_FieldCommandPreviewPanel_Unavailable_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Unavailable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Unavailable_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Unavailable_C WBP_FieldCommandPreviewPanel_Unavailable.Default__WBP_FieldCommandPreviewPanel_Unavailable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Unavailable_C* UWBP_FieldCommandPreviewPanel_Unavailable_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Unavailable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Unavailable_C*>(UWBP_FieldCommandPreviewPanel_Unavailable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Unavailable.WBP_FieldCommandPreviewPanel_Unavailable_C.SetupPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Unavailable_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Unavailable_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Unavailable_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}

}


