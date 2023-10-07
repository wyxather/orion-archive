#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate11.UITutorialTemplate11_C
// (None)

class UClass* UUITutorialTemplate11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate11_C");

	return Clss;
}


// UITutorialTemplate11_C UITutorialTemplate11.Default__UITutorialTemplate11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate11_C* UUITutorialTemplate11_C::GetDefaultObj()
{
	static class UUITutorialTemplate11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate11_C*>(UUITutorialTemplate11_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate11.UITutorialTemplate11_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate11_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate11_C", "GetTemplateType");

	Params::UUITutorialTemplate11_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate11.UITutorialTemplate11_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate11_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate11_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate11.UITutorialTemplate11_C.ExecuteUbergraph_UITutorialTemplate11
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate11_C::ExecuteUbergraph_UITutorialTemplate11(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate11_C", "ExecuteUbergraph_UITutorialTemplate11");

	Params::UUITutorialTemplate11_C_ExecuteUbergraph_UITutorialTemplate11_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


