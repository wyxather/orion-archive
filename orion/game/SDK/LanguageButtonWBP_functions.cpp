#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass LanguageButtonWBP.LanguageButtonWBP_C
// (None)

class UClass* ULanguageButtonWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LanguageButtonWBP_C");

	return Clss;
}


// LanguageButtonWBP_C LanguageButtonWBP.Default__LanguageButtonWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULanguageButtonWBP_C* ULanguageButtonWBP_C::GetDefaultObj()
{
	static class ULanguageButtonWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULanguageButtonWBP_C*>(ULanguageButtonWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LanguageButtonWBP.LanguageButtonWBP_C.SetFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::SetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "SetFont");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.SetGameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::SetGameText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "SetGameText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.SetTextList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                TextList                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULanguageButtonWBP_C::SetTextList(TArray<class FName>& TextList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "SetTextList");

	Params::ULanguageButtonWBP_C_SetTextList_Params Parms{};

	Parms.TextList = TextList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULanguageButtonWBP_C::SetIndex(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "SetIndex");

	Params::ULanguageButtonWBP_C_SetIndex_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULanguageButtonWBP_C::GetIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "GetIndex");

	Params::ULanguageButtonWBP_C_GetIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.InputRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.InputLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.InitExWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULanguageButtonWBP_C::InitExWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "InitExWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LanguageButtonWBP.LanguageButtonWBP_C.ExecuteUbergraph_LanguageButtonWBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULanguageButtonWBP_C::ExecuteUbergraph_LanguageButtonWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LanguageButtonWBP_C", "ExecuteUbergraph_LanguageButtonWBP");

	Params::ULanguageButtonWBP_C_ExecuteUbergraph_LanguageButtonWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


