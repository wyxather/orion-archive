#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate01_PS4.UITutorialTemplate01_PS4_C
// (None)

class UClass* UUITutorialTemplate01_PS4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate01_PS4_C");

	return Clss;
}


// UITutorialTemplate01_PS4_C UITutorialTemplate01_PS4.Default__UITutorialTemplate01_PS4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate01_PS4_C* UUITutorialTemplate01_PS4_C::GetDefaultObj()
{
	static class UUITutorialTemplate01_PS4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate01_PS4_C*>(UUITutorialTemplate01_PS4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate01_PS4.UITutorialTemplate01_PS4_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate01_PS4_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate01_PS4_C", "GetTemplateType");

	Params::UUITutorialTemplate01_PS4_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate01_PS4.UITutorialTemplate01_PS4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate01_PS4_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate01_PS4_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate01_PS4.UITutorialTemplate01_PS4_C.CheckReplaceText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableTutorialPageData  PageData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UUITutorialTemplate01_PS4_C::CheckReplaceText(const struct FDataTableTutorialPageData& PageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate01_PS4_C", "CheckReplaceText");

	Params::UUITutorialTemplate01_PS4_C_CheckReplaceText_Params Parms{};

	Parms.PageData = PageData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorialTemplate01_PS4.UITutorialTemplate01_PS4_C.ExecuteUbergraph_UITutorialTemplate01_PS4
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate01_PS4_C::ExecuteUbergraph_UITutorialTemplate01_PS4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate01_PS4_C", "ExecuteUbergraph_UITutorialTemplate01_PS4");

	Params::UUITutorialTemplate01_PS4_C_ExecuteUbergraph_UITutorialTemplate01_PS4_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


