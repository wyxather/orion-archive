#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate06.UITutorialTemplate06_C
// (None)

class UClass* UUITutorialTemplate06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate06_C");

	return Clss;
}


// UITutorialTemplate06_C UITutorialTemplate06.Default__UITutorialTemplate06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate06_C* UUITutorialTemplate06_C::GetDefaultObj()
{
	static class UUITutorialTemplate06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate06_C*>(UUITutorialTemplate06_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate06.UITutorialTemplate06_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate06_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate06_C", "GetTemplateType");

	Params::UUITutorialTemplate06_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate06.UITutorialTemplate06_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate06_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate06_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate06.UITutorialTemplate06_C.ExecuteUbergraph_UITutorialTemplate06
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate06_C::ExecuteUbergraph_UITutorialTemplate06(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate06_C", "ExecuteUbergraph_UITutorialTemplate06");

	Params::UUITutorialTemplate06_C_ExecuteUbergraph_UITutorialTemplate06_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


