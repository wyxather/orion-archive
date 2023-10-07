#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate05.UITutorialTemplate05_C
// (None)

class UClass* UUITutorialTemplate05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate05_C");

	return Clss;
}


// UITutorialTemplate05_C UITutorialTemplate05.Default__UITutorialTemplate05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate05_C* UUITutorialTemplate05_C::GetDefaultObj()
{
	static class UUITutorialTemplate05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate05_C*>(UUITutorialTemplate05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate05.UITutorialTemplate05_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate05_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate05_C", "GetTemplateType");

	Params::UUITutorialTemplate05_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate05.UITutorialTemplate05_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate05_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate05_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate05.UITutorialTemplate05_C.ExecuteUbergraph_UITutorialTemplate05
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate05_C::ExecuteUbergraph_UITutorialTemplate05(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate05_C", "ExecuteUbergraph_UITutorialTemplate05");

	Params::UUITutorialTemplate05_C_ExecuteUbergraph_UITutorialTemplate05_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


