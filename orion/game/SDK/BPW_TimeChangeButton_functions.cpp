#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BPW_TimeChangeButton.BPW_TimeChangeButton_C
// (None)

class UClass* UBPW_TimeChangeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPW_TimeChangeButton_C");

	return Clss;
}


// BPW_TimeChangeButton_C BPW_TimeChangeButton.Default__BPW_TimeChangeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPW_TimeChangeButton_C* UBPW_TimeChangeButton_C::GetDefaultObj()
{
	static class UBPW_TimeChangeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPW_TimeChangeButton_C*>(UBPW_TimeChangeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPW_TimeChangeButton.BPW_TimeChangeButton_C.BPW_TimeChangeButton_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_TimeChangeButton_C::BPW_TimeChangeButton_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_TimeChangeButton_C", "BPW_TimeChangeButton_AutoGenFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_TimeChangeButton.BPW_TimeChangeButton_C.RefreshText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPW_TimeChangeButton_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_TimeChangeButton_C", "RefreshText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_TimeChangeButton.BPW_TimeChangeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBPW_TimeChangeButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_TimeChangeButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPW_TimeChangeButton.BPW_TimeChangeButton_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TimeChangeButton_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_TimeChangeButton_C", "ChangeInputMode");

	Params::UBPW_TimeChangeButton_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPW_TimeChangeButton.BPW_TimeChangeButton_C.ExecuteUbergraph_BPW_TimeChangeButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TimeChangeButton_C::ExecuteUbergraph_BPW_TimeChangeButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPW_TimeChangeButton_C", "ExecuteUbergraph_BPW_TimeChangeButton");

	Params::UBPW_TimeChangeButton_C_ExecuteUbergraph_BPW_TimeChangeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


