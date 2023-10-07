#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TitleItemWidget.TitleItemWidget_C
// (None)

class UClass* UTitleItemWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleItemWidget_C");

	return Clss;
}


// TitleItemWidget_C TitleItemWidget.Default__TitleItemWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleItemWidget_C* UTitleItemWidget_C::GetDefaultObj()
{
	static class UTitleItemWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleItemWidget_C*>(UTitleItemWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleItemWidget.TitleItemWidget_C.PlayDecideAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleItemWidget_C::PlayDecideAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "PlayDecideAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleItemWidget.TitleItemWidget_C.CallDecideDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleItemWidget_C::CallDecideDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "CallDecideDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleItemWidget.TitleItemWidget_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleItemWidget_C::SetEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "SetEnabled");

	Params::UTitleItemWidget_C_SetEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleItemWidget.TitleItemWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleItemWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleItemWidget.TitleItemWidget_C.OutForcus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleItemWidget_C::OutForcus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "OutForcus");

	Params::UTitleItemWidget_C_OutForcus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleItemWidget.TitleItemWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleItemWidget_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "Focus");

	Params::UTitleItemWidget_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleItemWidget.TitleItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitleItemWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleItemWidget.TitleItemWidget_C.CommonLog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleItemWidget_C::CommonLog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "CommonLog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleItemWidget.TitleItemWidget_C.NonLocLog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleItemWidget_C::NonLocLog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "NonLocLog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleItemWidget.TitleItemWidget_C.ExecuteUbergraph_TitleItemWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleItemWidget_C::ExecuteUbergraph_TitleItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "ExecuteUbergraph_TitleItemWidget");

	Params::UTitleItemWidget_C_ExecuteUbergraph_TitleItemWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleItemWidget.TitleItemWidget_C.OnDecide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleItemWidget_C::OnDecide__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleItemWidget_C", "OnDecide__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


