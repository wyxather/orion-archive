#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate18.UITutorialTemplate18_C
// (None)

class UClass* UUITutorialTemplate18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate18_C");

	return Clss;
}


// UITutorialTemplate18_C UITutorialTemplate18.Default__UITutorialTemplate18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate18_C* UUITutorialTemplate18_C::GetDefaultObj()
{
	static class UUITutorialTemplate18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate18_C*>(UUITutorialTemplate18_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate18.UITutorialTemplate18_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate18_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate18_C", "GetTemplateType");

	Params::UUITutorialTemplate18_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate18.UITutorialTemplate18_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate18_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate18_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate18.UITutorialTemplate18_C.ExecuteUbergraph_UITutorialTemplate18
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate18_C::ExecuteUbergraph_UITutorialTemplate18(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate18_C", "ExecuteUbergraph_UITutorialTemplate18");

	Params::UUITutorialTemplate18_C_ExecuteUbergraph_UITutorialTemplate18_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


