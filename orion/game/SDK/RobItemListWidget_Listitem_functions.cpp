#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass RobItemListWidget_Listitem.RobItemListWidget_Listitem_C
// (None)

class UClass* URobItemListWidget_Listitem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RobItemListWidget_Listitem_C");

	return Clss;
}


// RobItemListWidget_Listitem_C RobItemListWidget_Listitem.Default__RobItemListWidget_Listitem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URobItemListWidget_Listitem_C* URobItemListWidget_Listitem_C::GetDefaultObj()
{
	static class URobItemListWidget_Listitem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URobItemListWidget_Listitem_C*>(URobItemListWidget_Listitem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RobItemListWidget_Listitem.RobItemListWidget_Listitem_C.BPI_Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_Listitem_C::BPI_Decide(bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_Listitem_C", "BPI_Decide");

	Params::URobItemListWidget_Listitem_C_BPI_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function RobItemListWidget_Listitem.RobItemListWidget_Listitem_C.BPI_Focus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_Listitem_C::BPI_Focus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_Listitem_C", "BPI_Focus");

	Params::URobItemListWidget_Listitem_C_BPI_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function RobItemListWidget_Listitem.RobItemListWidget_Listitem_C.BPI_OutFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_Listitem_C::BPI_OutFocus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_Listitem_C", "BPI_OutFocus");

	Params::URobItemListWidget_Listitem_C_BPI_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function RobItemListWidget_Listitem.RobItemListWidget_Listitem_C.BPI_ResetAppearance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_Listitem_C::BPI_ResetAppearance(bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_Listitem_C", "BPI_ResetAppearance");

	Params::URobItemListWidget_Listitem_C_BPI_ResetAppearance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function RobItemListWidget_Listitem.RobItemListWidget_Listitem_C.BPI_IsListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URobItemListWidget_Listitem_C::BPI_IsListItem(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RobItemListWidget_Listitem_C", "BPI_IsListItem");

	Params::URobItemListWidget_Listitem_C_BPI_IsListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}

}


