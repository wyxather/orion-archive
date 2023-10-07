#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate08.UITutorialTemplate08_C
// (None)

class UClass* UUITutorialTemplate08_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate08_C");

	return Clss;
}


// UITutorialTemplate08_C UITutorialTemplate08.Default__UITutorialTemplate08_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate08_C* UUITutorialTemplate08_C::GetDefaultObj()
{
	static class UUITutorialTemplate08_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate08_C*>(UUITutorialTemplate08_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate08.UITutorialTemplate08_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate08_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate08_C", "GetTemplateType");

	Params::UUITutorialTemplate08_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate08.UITutorialTemplate08_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate08_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate08_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate08.UITutorialTemplate08_C.ExecuteUbergraph_UITutorialTemplate08
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate08_C::ExecuteUbergraph_UITutorialTemplate08(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate08_C", "ExecuteUbergraph_UITutorialTemplate08");

	Params::UUITutorialTemplate08_C_ExecuteUbergraph_UITutorialTemplate08_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


