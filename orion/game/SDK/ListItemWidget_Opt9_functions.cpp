#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Opt9.ListItemWidget_Opt9_C
// (None)

class UClass* UListItemWidget_Opt9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Opt9_C");

	return Clss;
}


// ListItemWidget_Opt9_C ListItemWidget_Opt9.Default__ListItemWidget_Opt9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Opt9_C* UListItemWidget_Opt9_C::GetDefaultObj()
{
	static class UListItemWidget_Opt9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Opt9_C*>(UListItemWidget_Opt9_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.RefreshGuideData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListItemWidget_Opt9_C::RefreshGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "RefreshGuideData");

	Params::UListItemWidget_Opt9_C_RefreshGuideData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt9_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "InitInstance");

	Params::UListItemWidget_Opt9_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt9_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt9_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt9_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt9_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.RefreshUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt9_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "RefreshUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt9_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt9_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.SetSpacerEnable
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt9_C::SetSpacerEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "SetSpacerEnable");

	Params::UListItemWidget_Opt9_C_SetSpacerEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Opt9.ListItemWidget_Opt9_C.ExecuteUbergraph_ListItemWidget_Opt9
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Opt9_C::ExecuteUbergraph_ListItemWidget_Opt9(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt9_C", "ExecuteUbergraph_ListItemWidget_Opt9");

	Params::UListItemWidget_Opt9_C_ExecuteUbergraph_ListItemWidget_Opt9_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


