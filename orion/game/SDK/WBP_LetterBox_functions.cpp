#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LetterBox.WBP_LetterBox_C
// (None)

class UClass* UWBP_LetterBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LetterBox_C");

	return Clss;
}


// WBP_LetterBox_C WBP_LetterBox.Default__WBP_LetterBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LetterBox_C* UWBP_LetterBox_C::GetDefaultObj()
{
	static class UWBP_LetterBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LetterBox_C*>(UWBP_LetterBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LetterBox.WBP_LetterBox_C.ApplyLetterSize
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_LetterBox_C::ApplyLetterSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_LetterBox_C", "ApplyLetterSize");

	Params::UWBP_LetterBox_C_ApplyLetterSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_LetterBox.WBP_LetterBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LetterBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_LetterBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LetterBox.WBP_LetterBox_C.ApplyLetterSize_Inner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LetterBox_C::ApplyLetterSize_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_LetterBox_C", "ApplyLetterSize_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LetterBox.WBP_LetterBox_C.ExecuteUbergraph_WBP_LetterBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LetterBox_C::ExecuteUbergraph_WBP_LetterBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_LetterBox_C", "ExecuteUbergraph_WBP_LetterBox");

	Params::UWBP_LetterBox_C_ExecuteUbergraph_WBP_LetterBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


