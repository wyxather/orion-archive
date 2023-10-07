#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col1_3.ListItemWidget_Col1_3_C
// (None)

class UClass* UListItemWidget_Col1_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col1_3_C");

	return Clss;
}


// ListItemWidget_Col1_3_C ListItemWidget_Col1_3.Default__ListItemWidget_Col1_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col1_3_C* UListItemWidget_Col1_3_C::GetDefaultObj()
{
	static class UListItemWidget_Col1_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col1_3_C*>(UListItemWidget_Col1_3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col1_3.ListItemWidget_Col1_3_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_3_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_3_C", "InitInstance");

	Params::UListItemWidget_Col1_3_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col1_3.ListItemWidget_Col1_3_C.SetRefrence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_3_C::SetRefrence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_3_C", "SetRefrence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_3.ListItemWidget_Col1_3_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_3_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_3_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_3.ListItemWidget_Col1_3_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_3_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_3_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_3.ListItemWidget_Col1_3_C.ExecuteUbergraph_ListItemWidget_Col1_3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col1_3_C::ExecuteUbergraph_ListItemWidget_Col1_3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_3_C", "ExecuteUbergraph_ListItemWidget_Col1_3");

	Params::UListItemWidget_Col1_3_C_ExecuteUbergraph_ListItemWidget_Col1_3_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


