#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col4.ListItemWidget_Col4_C
// (None)

class UClass* UListItemWidget_Col4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col4_C");

	return Clss;
}


// ListItemWidget_Col4_C ListItemWidget_Col4.Default__ListItemWidget_Col4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col4_C* UListItemWidget_Col4_C::GetDefaultObj()
{
	static class UListItemWidget_Col4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col4_C*>(UListItemWidget_Col4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col4.ListItemWidget_Col4_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col4_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col4_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col4.ListItemWidget_Col4_C.GetTextOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   TextOffset                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col4_C::GetTextOffset(struct FVector2D* TextOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col4_C", "GetTextOffset");

	Params::UListItemWidget_Col4_C_GetTextOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextOffset != nullptr)
		*TextOffset = std::move(Parms.TextOffset);

}


// Function ListItemWidget_Col4.ListItemWidget_Col4_C.InitFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col4_C::InitFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col4_C", "InitFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col4.ListItemWidget_Col4_C.SetReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col4_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col4_C", "SetReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col4.ListItemWidget_Col4_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col4_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col4_C", "InitInstance");

	Params::UListItemWidget_Col4_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col4.ListItemWidget_Col4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemWidget_Col4_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col4_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col4.ListItemWidget_Col4_C.ExecuteUbergraph_ListItemWidget_Col4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col4_C::ExecuteUbergraph_ListItemWidget_Col4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col4_C", "ExecuteUbergraph_ListItemWidget_Col4");

	Params::UListItemWidget_Col4_C_ExecuteUbergraph_ListItemWidget_Col4_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


