#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass GameoverItemWidget.GameoverItemWidget_C
// (None)

class UClass* UGameoverItemWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameoverItemWidget_C");

	return Clss;
}


// GameoverItemWidget_C GameoverItemWidget.Default__GameoverItemWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameoverItemWidget_C* UGameoverItemWidget_C::GetDefaultObj()
{
	static class UGameoverItemWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameoverItemWidget_C*>(UGameoverItemWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameoverItemWidget.GameoverItemWidget_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MenuText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameoverItemWidget_C::SetText(class FText MenuText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameoverItemWidget_C", "SetText");

	Params::UGameoverItemWidget_C_SetText_Params Parms{};

	Parms.MenuText = MenuText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameoverItemWidget.GameoverItemWidget_C.OutForcus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameoverItemWidget_C::OutForcus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameoverItemWidget_C", "OutForcus");

	Params::UGameoverItemWidget_C_OutForcus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameoverItemWidget.GameoverItemWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameoverItemWidget_C::Focus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameoverItemWidget_C", "Focus");

	Params::UGameoverItemWidget_C_Focus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameoverItemWidget.GameoverItemWidget_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameoverItemWidget_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameoverItemWidget_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameoverItemWidget.GameoverItemWidget_C.ExecuteUbergraph_GameoverItemWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameoverItemWidget_C::ExecuteUbergraph_GameoverItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameoverItemWidget_C", "ExecuteUbergraph_GameoverItemWidget");

	Params::UGameoverItemWidget_C_ExecuteUbergraph_GameoverItemWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


