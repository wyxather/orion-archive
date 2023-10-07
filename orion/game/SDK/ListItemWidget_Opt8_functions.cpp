#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Opt8.ListItemWidget_Opt8_C
// (None)

class UClass* UListItemWidget_Opt8_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Opt8_C");

	return Clss;
}


// ListItemWidget_Opt8_C ListItemWidget_Opt8.Default__ListItemWidget_Opt8_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Opt8_C* UListItemWidget_Opt8_C::GetDefaultObj()
{
	static class UListItemWidget_Opt8_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Opt8_C*>(UListItemWidget_Opt8_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.GetSelectedResolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint                   Resolution                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Opt8_C::GetSelectedResolution(struct FIntPoint* Resolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "GetSelectedResolution");

	Params::UListItemWidget_Opt8_C_GetSelectedResolution_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Resolution != nullptr)
		*Resolution = std::move(Parms.Resolution);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.SetupWindowResolution
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   CurrentResolution                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListItemWidget_Opt8_C::SetupWindowResolution(const struct FIntPoint& CurrentResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "SetupWindowResolution");

	Params::UListItemWidget_Opt8_C_SetupWindowResolution_Params Parms{};

	Parms.CurrentResolution = CurrentResolution;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.RefreshGuideData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListItemWidget_Opt8_C::RefreshGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "RefreshGuideData");

	Params::UListItemWidget_Opt8_C_RefreshGuideData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt8_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "InitInstance");

	Params::UListItemWidget_Opt8_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt8_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt8_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt8_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt8_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.RefreshUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt8_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "RefreshUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt8_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt8_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.SetSpacerEnable
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt8_C::SetSpacerEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "SetSpacerEnable");

	Params::UListItemWidget_Opt8_C_SetSpacerEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.ExecuteUbergraph_ListItemWidget_Opt8
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Opt8_C::ExecuteUbergraph_ListItemWidget_Opt8(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt8_C", "ExecuteUbergraph_ListItemWidget_Opt8");

	Params::UListItemWidget_Opt8_C_ExecuteUbergraph_ListItemWidget_Opt8_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


