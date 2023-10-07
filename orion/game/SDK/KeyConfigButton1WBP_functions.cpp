#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass KeyConfigButton1WBP.KeyConfigButton1WBP_C
// (None)

class UClass* UKeyConfigButton1WBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyConfigButton1WBP_C");

	return Clss;
}


// KeyConfigButton1WBP_C KeyConfigButton1WBP.Default__KeyConfigButton1WBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKeyConfigButton1WBP_C* UKeyConfigButton1WBP_C::GetDefaultObj()
{
	static class UKeyConfigButton1WBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyConfigButton1WBP_C*>(UKeyConfigButton1WBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KeyConfigButton1WBP.KeyConfigButton1WBP_C.SetDescriptionText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfigButton1WBP_C::SetDescriptionText(class FName Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KeyConfigButton1WBP_C", "SetDescriptionText");

	Params::UKeyConfigButton1WBP_C_SetDescriptionText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyConfigButton1WBP.KeyConfigButton1WBP_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKeyConfigButton1WBP_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KeyConfigButton1WBP_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KeyConfigButton1WBP.KeyConfigButton1WBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKeyConfigButton1WBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KeyConfigButton1WBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KeyConfigButton1WBP.KeyConfigButton1WBP_C.ChangeInputTypeEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UKeyConfigButton1WBP_C::ChangeInputTypeEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KeyConfigButton1WBP_C", "ChangeInputTypeEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KeyConfigButton1WBP.KeyConfigButton1WBP_C.InitExWidget_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UKeyConfigButton1WBP_C::InitExWidget_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KeyConfigButton1WBP_C", "InitExWidget_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KeyConfigButton1WBP.KeyConfigButton1WBP_C.ExecuteUbergraph_KeyConfigButton1WBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfigButton1WBP_C::ExecuteUbergraph_KeyConfigButton1WBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KeyConfigButton1WBP_C", "ExecuteUbergraph_KeyConfigButton1WBP");

	Params::UKeyConfigButton1WBP_C_ExecuteUbergraph_KeyConfigButton1WBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


