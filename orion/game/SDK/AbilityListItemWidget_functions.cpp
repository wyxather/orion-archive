#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass AbilityListItemWidget.AbilityListItemWidget_C
// (None)

class UClass* UAbilityListItemWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityListItemWidget_C");

	return Clss;
}


// AbilityListItemWidget_C AbilityListItemWidget.Default__AbilityListItemWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityListItemWidget_C* UAbilityListItemWidget_C::GetDefaultObj()
{
	static class UAbilityListItemWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityListItemWidget_C*>(UAbilityListItemWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AbilityListItemWidget.AbilityListItemWidget_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilityListItemWidget_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AbilityListItemWidget_C", "InitInstance");

	Params::UAbilityListItemWidget_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AbilityListItemWidget.AbilityListItemWidget_C.SetParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityListItemWidget_C::SetParams(class FName AbilityLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AbilityListItemWidget_C", "SetParams");

	Params::UAbilityListItemWidget_C_SetParams_Params Parms{};

	Parms.AbilityLabel = AbilityLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityListItemWidget.AbilityListItemWidget_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilityListItemWidget_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AbilityListItemWidget_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityListItemWidget.AbilityListItemWidget_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilityListItemWidget_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AbilityListItemWidget_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityListItemWidget.AbilityListItemWidget_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilityListItemWidget_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AbilityListItemWidget_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityListItemWidget.AbilityListItemWidget_C.ExecuteUbergraph_AbilityListItemWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityListItemWidget_C::ExecuteUbergraph_AbilityListItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AbilityListItemWidget_C", "ExecuteUbergraph_AbilityListItemWidget");

	Params::UAbilityListItemWidget_C_ExecuteUbergraph_AbilityListItemWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


