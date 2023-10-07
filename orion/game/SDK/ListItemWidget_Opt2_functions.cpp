#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Opt2.ListItemWidget_Opt2_C
// (None)

class UClass* UListItemWidget_Opt2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Opt2_C");

	return Clss;
}


// ListItemWidget_Opt2_C ListItemWidget_Opt2.Default__ListItemWidget_Opt2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Opt2_C* UListItemWidget_Opt2_C::GetDefaultObj()
{
	static class UListItemWidget_Opt2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Opt2_C*>(UListItemWidget_Opt2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.Focus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt2_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "Focus");

	Params::UListItemWidget_Opt2_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.OutFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt2_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "OutFocus");

	Params::UListItemWidget_Opt2_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.RefreshGuideData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListItemWidget_Opt2_C::RefreshGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "RefreshGuideData");

	Params::UListItemWidget_Opt2_C_RefreshGuideData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt2_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "InitInstance");

	Params::UListItemWidget_Opt2_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt2_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt2_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt2_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt2_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Opt2_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.SetSpacerEnable
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Opt2_C::SetSpacerEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "SetSpacerEnable");

	Params::UListItemWidget_Opt2_C_SetSpacerEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Opt2.ListItemWidget_Opt2_C.ExecuteUbergraph_ListItemWidget_Opt2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Opt2_C::ExecuteUbergraph_ListItemWidget_Opt2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Opt2_C", "ExecuteUbergraph_ListItemWidget_Opt2");

	Params::UListItemWidget_Opt2_C_ExecuteUbergraph_ListItemWidget_Opt2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


