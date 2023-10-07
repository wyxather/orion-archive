#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate16_PS5.UITutorialTemplate16_PS5_C
// (None)

class UClass* UUITutorialTemplate16_PS5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate16_PS5_C");

	return Clss;
}


// UITutorialTemplate16_PS5_C UITutorialTemplate16_PS5.Default__UITutorialTemplate16_PS5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate16_PS5_C* UUITutorialTemplate16_PS5_C::GetDefaultObj()
{
	static class UUITutorialTemplate16_PS5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate16_PS5_C*>(UUITutorialTemplate16_PS5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate16_PS5.UITutorialTemplate16_PS5_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate16_PS5_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate16_PS5_C", "GetTemplateType");

	Params::UUITutorialTemplate16_PS5_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate16_PS5.UITutorialTemplate16_PS5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate16_PS5_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate16_PS5_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate16_PS5.UITutorialTemplate16_PS5_C.ExecuteUbergraph_UITutorialTemplate16_PS5
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate16_PS5_C::ExecuteUbergraph_UITutorialTemplate16_PS5(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate16_PS5_C", "ExecuteUbergraph_UITutorialTemplate16_PS5");

	Params::UUITutorialTemplate16_PS5_C_ExecuteUbergraph_UITutorialTemplate16_PS5_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


