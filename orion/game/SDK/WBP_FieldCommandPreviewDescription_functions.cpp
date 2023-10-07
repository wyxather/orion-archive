#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewDescription.WBP_FieldCommandPreviewDescription_C
// (None)

class UClass* UWBP_FieldCommandPreviewDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewDescription_C");

	return Clss;
}


// WBP_FieldCommandPreviewDescription_C WBP_FieldCommandPreviewDescription.Default__WBP_FieldCommandPreviewDescription_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewDescription_C* UWBP_FieldCommandPreviewDescription_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewDescription_C*>(UWBP_FieldCommandPreviewDescription_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewDescription.WBP_FieldCommandPreviewDescription_C.PlayClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewDescription_C::PlayClose(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewDescription_C", "PlayClose");

	Params::UWBP_FieldCommandPreviewDescription_C_PlayClose_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewDescription.WBP_FieldCommandPreviewDescription_C.PlayOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewDescription_C::PlayOpen(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewDescription_C", "PlayOpen");

	Params::UWBP_FieldCommandPreviewDescription_C_PlayOpen_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewDescription.WBP_FieldCommandPreviewDescription_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FieldCommandPreviewDescription_C::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewDescription_C", "SetText");

	Params::UWBP_FieldCommandPreviewDescription_C_SetText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewDescription.WBP_FieldCommandPreviewDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewDescription_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewDescription_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewDescription.WBP_FieldCommandPreviewDescription_C.ExecuteUbergraph_WBP_FieldCommandPreviewDescription
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewDescription_C::ExecuteUbergraph_WBP_FieldCommandPreviewDescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewDescription_C", "ExecuteUbergraph_WBP_FieldCommandPreviewDescription");

	Params::UWBP_FieldCommandPreviewDescription_C_ExecuteUbergraph_WBP_FieldCommandPreviewDescription_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


