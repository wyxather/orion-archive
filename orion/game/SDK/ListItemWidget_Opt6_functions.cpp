#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Opt6.ListItemWidget_Opt6_C
// (None)

class UClass* UListItemWidget_Opt6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Opt6_C");

	return Clss;
}


// ListItemWidget_Opt6_C ListItemWidget_Opt6.Default__ListItemWidget_Opt6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Opt6_C* UListItemWidget_Opt6_C::GetDefaultObj()
{
	static class UListItemWidget_Opt6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Opt6_C*>(UListItemWidget_Opt6_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.RefreshGuideData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListItemWidget_Opt6_C::RefreshGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "RefreshGuideData");

	Params::UListItemWidget_Opt6_C_RefreshGuideData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt6_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "InitInstance");

	Params::UListItemWidget_Opt6_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt6_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt6_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt6_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt6_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.RefreshUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt6_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "RefreshUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt6_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt6_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.SetSpacerEnable
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt6_C::SetSpacerEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "SetSpacerEnable");

	Params::UListItemWidget_Opt6_C_SetSpacerEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Opt6.ListItemWidget_Opt6_C.ExecuteUbergraph_ListItemWidget_Opt6
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Opt6_C::ExecuteUbergraph_ListItemWidget_Opt6(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt6_C", "ExecuteUbergraph_ListItemWidget_Opt6");

	Params::UListItemWidget_Opt6_C_ExecuteUbergraph_ListItemWidget_Opt6_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


