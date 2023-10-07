#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate17.UITutorialTemplate17_C
// (None)

class UClass* UUITutorialTemplate17_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate17_C");

	return Clss;
}


// UITutorialTemplate17_C UITutorialTemplate17.Default__UITutorialTemplate17_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate17_C* UUITutorialTemplate17_C::GetDefaultObj()
{
	static class UUITutorialTemplate17_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate17_C*>(UUITutorialTemplate17_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate17.UITutorialTemplate17_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate17_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate17_C", "GetTemplateType");

	Params::UUITutorialTemplate17_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate17.UITutorialTemplate17_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate17_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate17_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate17.UITutorialTemplate17_C.ExecuteUbergraph_UITutorialTemplate17
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate17_C::ExecuteUbergraph_UITutorialTemplate17(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate17_C", "ExecuteUbergraph_UITutorialTemplate17");

	Params::UUITutorialTemplate17_C_ExecuteUbergraph_UITutorialTemplate17_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


