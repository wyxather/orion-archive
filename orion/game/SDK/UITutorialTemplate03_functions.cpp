#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate03.UITutorialTemplate03_C
// (None)

class UClass* UUITutorialTemplate03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate03_C");

	return Clss;
}


// UITutorialTemplate03_C UITutorialTemplate03.Default__UITutorialTemplate03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate03_C* UUITutorialTemplate03_C::GetDefaultObj()
{
	static class UUITutorialTemplate03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate03_C*>(UUITutorialTemplate03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate03.UITutorialTemplate03_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate03_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate03_C", "GetTemplateType");

	Params::UUITutorialTemplate03_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate03.UITutorialTemplate03_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate03_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate03_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate03.UITutorialTemplate03_C.ExecuteUbergraph_UITutorialTemplate03
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate03_C::ExecuteUbergraph_UITutorialTemplate03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate03_C", "ExecuteUbergraph_UITutorialTemplate03");

	Params::UUITutorialTemplate03_C_ExecuteUbergraph_UITutorialTemplate03_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


