#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ToggleButtonItem.ToggleButtonItem_C
// (None)

class UClass* UToggleButtonItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToggleButtonItem_C");

	return Clss;
}


// ToggleButtonItem_C ToggleButtonItem.Default__ToggleButtonItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToggleButtonItem_C* UToggleButtonItem_C::GetDefaultObj()
{
	static class UToggleButtonItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToggleButtonItem_C*>(UToggleButtonItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToggleButtonItem.ToggleButtonItem_C.PlayOutFocus_Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonItem_C::PlayOutFocus_Active(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonItem_C", "PlayOutFocus_Active");

	Params::UToggleButtonItem_C_PlayOutFocus_Active_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonItem.ToggleButtonItem_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GameText                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToggleButtonItem_C::SetText(class FName GameText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonItem_C", "SetText");

	Params::UToggleButtonItem_C_SetText_Params Parms{};

	Parms.GameText = GameText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonItem.ToggleButtonItem_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonItem_C::PlayOutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonItem_C", "PlayOutFocus");

	Params::UToggleButtonItem_C_PlayOutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonItem.ToggleButtonItem_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonItem_C::PlayFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonItem_C", "PlayFocus");

	Params::UToggleButtonItem_C_PlayFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}

}


