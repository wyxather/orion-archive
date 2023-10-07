#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate02.UITutorialTemplate02_C
// (None)

class UClass* UUITutorialTemplate02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate02_C");

	return Clss;
}


// UITutorialTemplate02_C UITutorialTemplate02.Default__UITutorialTemplate02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate02_C* UUITutorialTemplate02_C::GetDefaultObj()
{
	static class UUITutorialTemplate02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate02_C*>(UUITutorialTemplate02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate02.UITutorialTemplate02_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate02_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate02_C", "GetTemplateType");

	Params::UUITutorialTemplate02_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate02.UITutorialTemplate02_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate02_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate02_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate02.UITutorialTemplate02_C.ExecuteUbergraph_UITutorialTemplate02
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate02_C::ExecuteUbergraph_UITutorialTemplate02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate02_C", "ExecuteUbergraph_UITutorialTemplate02");

	Params::UUITutorialTemplate02_C_ExecuteUbergraph_UITutorialTemplate02_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


