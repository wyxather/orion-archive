#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate04.UITutorialTemplate04_C
// (None)

class UClass* UUITutorialTemplate04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate04_C");

	return Clss;
}


// UITutorialTemplate04_C UITutorialTemplate04.Default__UITutorialTemplate04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate04_C* UUITutorialTemplate04_C::GetDefaultObj()
{
	static class UUITutorialTemplate04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate04_C*>(UUITutorialTemplate04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate04.UITutorialTemplate04_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate04_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate04_C", "GetTemplateType");

	Params::UUITutorialTemplate04_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate04.UITutorialTemplate04_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate04_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate04_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate04.UITutorialTemplate04_C.ExecuteUbergraph_UITutorialTemplate04
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate04_C::ExecuteUbergraph_UITutorialTemplate04(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate04_C", "ExecuteUbergraph_UITutorialTemplate04");

	Params::UUITutorialTemplate04_C_ExecuteUbergraph_UITutorialTemplate04_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


