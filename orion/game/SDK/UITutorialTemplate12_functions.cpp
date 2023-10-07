#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate12.UITutorialTemplate12_C
// (None)

class UClass* UUITutorialTemplate12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate12_C");

	return Clss;
}


// UITutorialTemplate12_C UITutorialTemplate12.Default__UITutorialTemplate12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate12_C* UUITutorialTemplate12_C::GetDefaultObj()
{
	static class UUITutorialTemplate12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate12_C*>(UUITutorialTemplate12_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate12.UITutorialTemplate12_C.GetUseBackGround
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUITutorialTemplate12_C::GetUseBackGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate12_C", "GetUseBackGround");

	Params::UUITutorialTemplate12_C_GetUseBackGround_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate12.UITutorialTemplate12_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate12_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate12_C", "GetTemplateType");

	Params::UUITutorialTemplate12_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate12.UITutorialTemplate12_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate12_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate12_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate12.UITutorialTemplate12_C.ExecuteUbergraph_UITutorialTemplate12
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate12_C::ExecuteUbergraph_UITutorialTemplate12(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate12_C", "ExecuteUbergraph_UITutorialTemplate12");

	Params::UUITutorialTemplate12_C_ExecuteUbergraph_UITutorialTemplate12_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


