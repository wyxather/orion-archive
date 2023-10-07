#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TempButtonWBP.TempButtonWBP_C
// (None)

class UClass* UTempButtonWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TempButtonWBP_C");

	return Clss;
}


// TempButtonWBP_C TempButtonWBP.Default__TempButtonWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTempButtonWBP_C* UTempButtonWBP_C::GetDefaultObj()
{
	static class UTempButtonWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTempButtonWBP_C*>(UTempButtonWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TempButtonWBP.TempButtonWBP_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTempButtonWBP_C::SetButtonText(class FName ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TempButtonWBP_C", "SetButtonText");

	Params::UTempButtonWBP_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TempButtonWBP.TempButtonWBP_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTempButtonWBP_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TempButtonWBP_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TempButtonWBP.TempButtonWBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTempButtonWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TempButtonWBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TempButtonWBP.TempButtonWBP_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTempButtonWBP_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TempButtonWBP_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TempButtonWBP.TempButtonWBP_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTempButtonWBP_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TempButtonWBP_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TempButtonWBP.TempButtonWBP_C.InitExWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTempButtonWBP_C::InitExWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TempButtonWBP_C", "InitExWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TempButtonWBP.TempButtonWBP_C.ExecuteUbergraph_TempButtonWBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTempButtonWBP_C::ExecuteUbergraph_TempButtonWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TempButtonWBP_C", "ExecuteUbergraph_TempButtonWBP");

	Params::UTempButtonWBP_C_ExecuteUbergraph_TempButtonWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


