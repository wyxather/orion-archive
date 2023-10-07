#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate15.UITutorialTemplate15_C
// (None)

class UClass* UUITutorialTemplate15_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate15_C");

	return Clss;
}


// UITutorialTemplate15_C UITutorialTemplate15.Default__UITutorialTemplate15_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate15_C* UUITutorialTemplate15_C::GetDefaultObj()
{
	static class UUITutorialTemplate15_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate15_C*>(UUITutorialTemplate15_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate15.UITutorialTemplate15_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate15_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate15_C", "GetTemplateType");

	Params::UUITutorialTemplate15_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate15.UITutorialTemplate15_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate15_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate15_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate15.UITutorialTemplate15_C.ExecuteUbergraph_UITutorialTemplate15
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate15_C::ExecuteUbergraph_UITutorialTemplate15(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate15_C", "ExecuteUbergraph_UITutorialTemplate15");

	Params::UUITutorialTemplate15_C_ExecuteUbergraph_UITutorialTemplate15_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


