#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col3_2.ListItemWidget_Col3_2_C
// (None)

class UClass* UListItemWidget_Col3_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col3_2_C");

	return Clss;
}


// ListItemWidget_Col3_2_C ListItemWidget_Col3_2.Default__ListItemWidget_Col3_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col3_2_C* UListItemWidget_Col3_2_C::GetDefaultObj()
{
	static class UListItemWidget_Col3_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col3_2_C*>(UListItemWidget_Col3_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col3_2.ListItemWidget_Col3_2_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col3_2_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_2_C", "InitInstance");

	Params::UListItemWidget_Col3_2_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col3_2.ListItemWidget_Col3_2_C.SetLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visiblity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col3_2_C::SetLine(bool Visiblity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_2_C", "SetLine");

	Params::UListItemWidget_Col3_2_C_SetLine_Params Parms{};

	Parms.Visiblity = Visiblity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col3_2.ListItemWidget_Col3_2_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col3_2_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_2_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col3_2.ListItemWidget_Col3_2_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col3_2_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_2_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col3_2.ListItemWidget_Col3_2_C.ExecuteUbergraph_ListItemWidget_Col3_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col3_2_C::ExecuteUbergraph_ListItemWidget_Col3_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_2_C", "ExecuteUbergraph_ListItemWidget_Col3_2");

	Params::UListItemWidget_Col3_2_C_ExecuteUbergraph_ListItemWidget_Col3_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


