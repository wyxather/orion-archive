#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate13.UITutorialTemplate13_C
// (None)

class UClass* UUITutorialTemplate13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate13_C");

	return Clss;
}


// UITutorialTemplate13_C UITutorialTemplate13.Default__UITutorialTemplate13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate13_C* UUITutorialTemplate13_C::GetDefaultObj()
{
	static class UUITutorialTemplate13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate13_C*>(UUITutorialTemplate13_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate13.UITutorialTemplate13_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate13_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate13_C", "GetTemplateType");

	Params::UUITutorialTemplate13_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate13.UITutorialTemplate13_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate13_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate13_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate13.UITutorialTemplate13_C.ExecuteUbergraph_UITutorialTemplate13
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate13_C::ExecuteUbergraph_UITutorialTemplate13(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate13_C", "ExecuteUbergraph_UITutorialTemplate13");

	Params::UUITutorialTemplate13_C_ExecuteUbergraph_UITutorialTemplate13_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


