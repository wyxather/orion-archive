#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate09.UITutorialTemplate09_C
// (None)

class UClass* UUITutorialTemplate09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate09_C");

	return Clss;
}


// UITutorialTemplate09_C UITutorialTemplate09.Default__UITutorialTemplate09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate09_C* UUITutorialTemplate09_C::GetDefaultObj()
{
	static class UUITutorialTemplate09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate09_C*>(UUITutorialTemplate09_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate09.UITutorialTemplate09_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate09_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate09_C", "GetTemplateType");

	Params::UUITutorialTemplate09_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate09.UITutorialTemplate09_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate09_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate09_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate09.UITutorialTemplate09_C.ExecuteUbergraph_UITutorialTemplate09
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate09_C::ExecuteUbergraph_UITutorialTemplate09(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate09_C", "ExecuteUbergraph_UITutorialTemplate09");

	Params::UUITutorialTemplate09_C_ExecuteUbergraph_UITutorialTemplate09_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


