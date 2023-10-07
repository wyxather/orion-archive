#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate10.UITutorialTemplate10_C
// (None)

class UClass* UUITutorialTemplate10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate10_C");

	return Clss;
}


// UITutorialTemplate10_C UITutorialTemplate10.Default__UITutorialTemplate10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate10_C* UUITutorialTemplate10_C::GetDefaultObj()
{
	static class UUITutorialTemplate10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate10_C*>(UUITutorialTemplate10_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate10.UITutorialTemplate10_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate10_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate10_C", "GetTemplateType");

	Params::UUITutorialTemplate10_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate10.UITutorialTemplate10_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate10_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate10_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate10.UITutorialTemplate10_C.ExecuteUbergraph_UITutorialTemplate10
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate10_C::ExecuteUbergraph_UITutorialTemplate10(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate10_C", "ExecuteUbergraph_UITutorialTemplate10");

	Params::UUITutorialTemplate10_C_ExecuteUbergraph_UITutorialTemplate10_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


