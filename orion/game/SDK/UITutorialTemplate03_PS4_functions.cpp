#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate03_PS4.UITutorialTemplate03_PS4_C
// (None)

class UClass* UUITutorialTemplate03_PS4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate03_PS4_C");

	return Clss;
}


// UITutorialTemplate03_PS4_C UITutorialTemplate03_PS4.Default__UITutorialTemplate03_PS4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate03_PS4_C* UUITutorialTemplate03_PS4_C::GetDefaultObj()
{
	static class UUITutorialTemplate03_PS4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate03_PS4_C*>(UUITutorialTemplate03_PS4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate03_PS4.UITutorialTemplate03_PS4_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate03_PS4_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate03_PS4_C", "GetTemplateType");

	Params::UUITutorialTemplate03_PS4_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate03_PS4.UITutorialTemplate03_PS4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate03_PS4_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate03_PS4_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate03_PS4.UITutorialTemplate03_PS4_C.ExecuteUbergraph_UITutorialTemplate03_PS4
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate03_PS4_C::ExecuteUbergraph_UITutorialTemplate03_PS4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate03_PS4_C", "ExecuteUbergraph_UITutorialTemplate03_PS4");

	Params::UUITutorialTemplate03_PS4_C_ExecuteUbergraph_UITutorialTemplate03_PS4_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


