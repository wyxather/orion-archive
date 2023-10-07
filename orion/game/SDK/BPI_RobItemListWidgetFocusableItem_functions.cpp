#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_RobItemListWidgetFocusableItem.BPI_RobItemListWidgetFocusableItem_C
// (None)

class UClass* IBPI_RobItemListWidgetFocusableItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_RobItemListWidgetFocusableItem_C");

	return Clss;
}


// BPI_RobItemListWidgetFocusableItem_C BPI_RobItemListWidgetFocusableItem.Default__BPI_RobItemListWidgetFocusableItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_RobItemListWidgetFocusableItem_C* IBPI_RobItemListWidgetFocusableItem_C::GetDefaultObj()
{
	static class IBPI_RobItemListWidgetFocusableItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_RobItemListWidgetFocusableItem_C*>(IBPI_RobItemListWidgetFocusableItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_RobItemListWidgetFocusableItem.BPI_RobItemListWidgetFocusableItem_C.BPI_IsListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_RobItemListWidgetFocusableItem_C::BPI_IsListItem(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_RobItemListWidgetFocusableItem_C", "BPI_IsListItem");

	Params::IBPI_RobItemListWidgetFocusableItem_C_BPI_IsListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BPI_RobItemListWidgetFocusableItem.BPI_RobItemListWidgetFocusableItem_C.BPI_ResetAppearance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_RobItemListWidgetFocusableItem_C::BPI_ResetAppearance(bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_RobItemListWidgetFocusableItem_C", "BPI_ResetAppearance");

	Params::IBPI_RobItemListWidgetFocusableItem_C_BPI_ResetAppearance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_RobItemListWidgetFocusableItem.BPI_RobItemListWidgetFocusableItem_C.BPI_OutFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_RobItemListWidgetFocusableItem_C::BPI_OutFocus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_RobItemListWidgetFocusableItem_C", "BPI_OutFocus");

	Params::IBPI_RobItemListWidgetFocusableItem_C_BPI_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_RobItemListWidgetFocusableItem.BPI_RobItemListWidgetFocusableItem_C.BPI_Focus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_RobItemListWidgetFocusableItem_C::BPI_Focus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_RobItemListWidgetFocusableItem_C", "BPI_Focus");

	Params::IBPI_RobItemListWidgetFocusableItem_C_BPI_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_RobItemListWidgetFocusableItem.BPI_RobItemListWidgetFocusableItem_C.BPI_Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_RobItemListWidgetFocusableItem_C::BPI_Decide(bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_RobItemListWidgetFocusableItem_C", "BPI_Decide");

	Params::IBPI_RobItemListWidgetFocusableItem_C_BPI_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}

}


