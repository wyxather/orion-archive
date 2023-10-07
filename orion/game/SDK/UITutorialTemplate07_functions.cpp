#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate07.UITutorialTemplate07_C
// (None)

class UClass* UUITutorialTemplate07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate07_C");

	return Clss;
}


// UITutorialTemplate07_C UITutorialTemplate07.Default__UITutorialTemplate07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate07_C* UUITutorialTemplate07_C::GetDefaultObj()
{
	static class UUITutorialTemplate07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate07_C*>(UUITutorialTemplate07_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate07.UITutorialTemplate07_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate07_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate07_C", "GetTemplateType");

	Params::UUITutorialTemplate07_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate07.UITutorialTemplate07_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate07_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate07_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate07.UITutorialTemplate07_C.ExecuteUbergraph_UITutorialTemplate07
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate07_C::ExecuteUbergraph_UITutorialTemplate07(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate07_C", "ExecuteUbergraph_UITutorialTemplate07");

	Params::UUITutorialTemplate07_C_ExecuteUbergraph_UITutorialTemplate07_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


