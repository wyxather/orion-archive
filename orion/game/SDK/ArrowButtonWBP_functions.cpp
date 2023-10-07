#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ArrowButtonWBP.ArrowButtonWBP_C
// (None)

class UClass* UArrowButtonWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowButtonWBP_C");

	return Clss;
}


// ArrowButtonWBP_C ArrowButtonWBP.Default__ArrowButtonWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArrowButtonWBP_C* UArrowButtonWBP_C::GetDefaultObj()
{
	static class UArrowButtonWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArrowButtonWBP_C*>(UArrowButtonWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArrowButtonWBP.ArrowButtonWBP_C.SetPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArrowButtonWBP_C::SetPreset(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "SetPreset");

	Params::UArrowButtonWBP_C_SetPreset_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.SetTextList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                TextList                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UArrowButtonWBP_C::SetTextList(TArray<class FName>& TextList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "SetTextList");

	Params::UArrowButtonWBP_C_SetTextList_Params Parms{};

	Parms.TextList = TextList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArrowButtonWBP_C::SetIndex(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "SetIndex");

	Params::UArrowButtonWBP_C_SetIndex_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArrowButtonWBP_C::GetIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "GetIndex");

	Params::UArrowButtonWBP_C_GetIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.InputRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArrowButtonWBP_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.InputLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArrowButtonWBP_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArrowButtonWBP_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArrowButtonWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArrowButtonWBP_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArrowButtonWBP_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.InitExWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArrowButtonWBP_C::InitExWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "InitExWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArrowButtonWBP.ArrowButtonWBP_C.ExecuteUbergraph_ArrowButtonWBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArrowButtonWBP_C::ExecuteUbergraph_ArrowButtonWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ArrowButtonWBP_C", "ExecuteUbergraph_ArrowButtonWBP");

	Params::UArrowButtonWBP_C_ExecuteUbergraph_ArrowButtonWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


