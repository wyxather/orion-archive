#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass RobItemListWidget_DialogItem.RobItemListWidget_DialogItem_C
// (None)

class UClass* URobItemListWidget_DialogItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RobItemListWidget_DialogItem_C");

	return Clss;
}


// RobItemListWidget_DialogItem_C RobItemListWidget_DialogItem.Default__RobItemListWidget_DialogItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URobItemListWidget_DialogItem_C* URobItemListWidget_DialogItem_C::GetDefaultObj()
{
	static class URobItemListWidget_DialogItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URobItemListWidget_DialogItem_C*>(URobItemListWidget_DialogItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RobItemListWidget_DialogItem.RobItemListWidget_DialogItem_C.BPI_IsListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_DialogItem_C::BPI_IsListItem(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_DialogItem_C", "BPI_IsListItem");

	Params::URobItemListWidget_DialogItem_C_BPI_IsListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function RobItemListWidget_DialogItem.RobItemListWidget_DialogItem_C.BPI_Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_DialogItem_C::BPI_Decide(bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_DialogItem_C", "BPI_Decide");

	Params::URobItemListWidget_DialogItem_C_BPI_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function RobItemListWidget_DialogItem.RobItemListWidget_DialogItem_C.BPI_Focus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_DialogItem_C::BPI_Focus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_DialogItem_C", "BPI_Focus");

	Params::URobItemListWidget_DialogItem_C_BPI_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function RobItemListWidget_DialogItem.RobItemListWidget_DialogItem_C.BPI_OutFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_DialogItem_C::BPI_OutFocus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_DialogItem_C", "BPI_OutFocus");

	Params::URobItemListWidget_DialogItem_C_BPI_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function RobItemListWidget_DialogItem.RobItemListWidget_DialogItem_C.BPI_ResetAppearance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_DialogItem_C::BPI_ResetAppearance(bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_DialogItem_C", "BPI_ResetAppearance");

	Params::URobItemListWidget_DialogItem_C_BPI_ResetAppearance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}

}


