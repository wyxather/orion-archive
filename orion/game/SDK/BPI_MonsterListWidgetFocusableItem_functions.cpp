#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C
// (None)

class UClass* IBPI_MonsterListWidgetFocusableItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MonsterListWidgetFocusableItem_C");

	return Clss;
}


// BPI_MonsterListWidgetFocusableItem_C BPI_MonsterListWidgetFocusableItem.Default__BPI_MonsterListWidgetFocusableItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MonsterListWidgetFocusableItem_C* IBPI_MonsterListWidgetFocusableItem_C::GetDefaultObj()
{
	static class IBPI_MonsterListWidgetFocusableItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MonsterListWidgetFocusableItem_C*>(IBPI_MonsterListWidgetFocusableItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C.BPI_ResetAppearance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MonsterListWidgetFocusableItem_C::BPI_ResetAppearance(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_MonsterListWidgetFocusableItem_C", "BPI_ResetAppearance");

	Params::IBPI_MonsterListWidgetFocusableItem_C_BPI_ResetAppearance_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C.BPI_OnLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MonsterListWidgetFocusableItem_C::BPI_OnLeft(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_MonsterListWidgetFocusableItem_C", "BPI_OnLeft");

	Params::IBPI_MonsterListWidgetFocusableItem_C_BPI_OnLeft_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C.BPI_OnRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MonsterListWidgetFocusableItem_C::BPI_OnRight(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_MonsterListWidgetFocusableItem_C", "BPI_OnRight");

	Params::IBPI_MonsterListWidgetFocusableItem_C_BPI_OnRight_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C.BPI_OutFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MonsterListWidgetFocusableItem_C::BPI_OutFocus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_MonsterListWidgetFocusableItem_C", "BPI_OutFocus");

	Params::IBPI_MonsterListWidgetFocusableItem_C_BPI_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C.BPI_Focus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MonsterListWidgetFocusableItem_C::BPI_Focus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_MonsterListWidgetFocusableItem_C", "BPI_Focus");

	Params::IBPI_MonsterListWidgetFocusableItem_C_BPI_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function BPI_MonsterListWidgetFocusableItem.BPI_MonsterListWidgetFocusableItem_C.BPI_Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDecided                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MonsterListWidgetFocusableItem_C::BPI_Decide(bool* IsDecided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_MonsterListWidgetFocusableItem_C", "BPI_Decide");

	Params::IBPI_MonsterListWidgetFocusableItem_C_BPI_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDecided != nullptr)
		*IsDecided = Parms.IsDecided;

}

}


