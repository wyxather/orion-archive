#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate19.UITutorialTemplate19_C
// (None)

class UClass* UUITutorialTemplate19_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate19_C");

	return Clss;
}


// UITutorialTemplate19_C UITutorialTemplate19.Default__UITutorialTemplate19_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate19_C* UUITutorialTemplate19_C::GetDefaultObj()
{
	static class UUITutorialTemplate19_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate19_C*>(UUITutorialTemplate19_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate19.UITutorialTemplate19_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate19_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate19_C", "GetTemplateType");

	Params::UUITutorialTemplate19_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate19.UITutorialTemplate19_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate19_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate19_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate19.UITutorialTemplate19_C.ExecuteUbergraph_UITutorialTemplate19
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate19_C::ExecuteUbergraph_UITutorialTemplate19(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate19_C", "ExecuteUbergraph_UITutorialTemplate19");

	Params::UUITutorialTemplate19_C_ExecuteUbergraph_UITutorialTemplate19_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


