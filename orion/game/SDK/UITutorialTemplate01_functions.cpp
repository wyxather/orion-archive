#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate01.UITutorialTemplate01_C
// (None)

class UClass* UUITutorialTemplate01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate01_C");

	return Clss;
}


// UITutorialTemplate01_C UITutorialTemplate01.Default__UITutorialTemplate01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate01_C* UUITutorialTemplate01_C::GetDefaultObj()
{
	static class UUITutorialTemplate01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate01_C*>(UUITutorialTemplate01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate01.UITutorialTemplate01_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate01_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate01_C", "GetTemplateType");

	Params::UUITutorialTemplate01_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate01.UITutorialTemplate01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate01_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate01_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate01.UITutorialTemplate01_C.ExecuteUbergraph_UITutorialTemplate01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate01_C::ExecuteUbergraph_UITutorialTemplate01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate01_C", "ExecuteUbergraph_UITutorialTemplate01");

	Params::UUITutorialTemplate01_C_ExecuteUbergraph_UITutorialTemplate01_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


