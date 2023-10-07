#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col2_2.ListItemWidget_Col2_2_C
// (None)

class UClass* UListItemWidget_Col2_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col2_2_C");

	return Clss;
}


// ListItemWidget_Col2_2_C ListItemWidget_Col2_2.Default__ListItemWidget_Col2_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col2_2_C* UListItemWidget_Col2_2_C::GetDefaultObj()
{
	static class UListItemWidget_Col2_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col2_2_C*>(UListItemWidget_Col2_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col2_2.ListItemWidget_Col2_2_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col2_2_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_2_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col2_2.ListItemWidget_Col2_2_C.OutFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_2_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_2_C", "OutFocus");

	Params::UListItemWidget_Col2_2_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2_2.ListItemWidget_Col2_2_C.Focus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_2_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_2_C", "Focus");

	Params::UListItemWidget_Col2_2_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2_2.ListItemWidget_Col2_2_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_2_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_2_C", "InitInstance");

	Params::UListItemWidget_Col2_2_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col2_2.ListItemWidget_Col2_2_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col2_2_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_2_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}

}


