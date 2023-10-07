#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C
// (None)

class UClass* UMonsterListWidget_ToggleItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonsterListWidget_ToggleItem_C");

	return Clss;
}


// MonsterListWidget_ToggleItem_C MonsterListWidget_ToggleItem.Default__MonsterListWidget_ToggleItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonsterListWidget_ToggleItem_C* UMonsterListWidget_ToggleItem_C::GetDefaultObj()
{
	static class UMonsterListWidget_ToggleItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonsterListWidget_ToggleItem_C*>(UMonsterListWidget_ToggleItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.BPI_ResetAppearance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::BPI_ResetAppearance(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "BPI_ResetAppearance");

	Params::UMonsterListWidget_ToggleItem_C_BPI_ResetAppearance_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.BPI_Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDecided                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::BPI_Decide(bool* IsDecided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "BPI_Decide");

	Params::UMonsterListWidget_ToggleItem_C_BPI_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDecided != nullptr)
		*IsDecided = Parms.IsDecided;

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.BPI_Focus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::BPI_Focus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "BPI_Focus");

	Params::UMonsterListWidget_ToggleItem_C_BPI_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.BPI_OutFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::BPI_OutFocus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "BPI_OutFocus");

	Params::UMonsterListWidget_ToggleItem_C_BPI_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.BPI_OnRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::BPI_OnRight(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "BPI_OnRight");

	Params::UMonsterListWidget_ToggleItem_C_BPI_OnRight_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.BPI_OnLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::BPI_OnLeft(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "BPI_OnLeft");

	Params::UMonsterListWidget_ToggleItem_C_BPI_OnLeft_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToggleSwitch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::SetValue(bool ToggleSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "SetValue");

	Params::UMonsterListWidget_ToggleItem_C_SetValue_Params Parms{};

	Parms.ToggleSwitch = ToggleSwitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMonsterListWidget_ToggleItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.OnChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_ToggleItem_C::OnChangeValue(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "OnChangeValue");

	Params::UMonsterListWidget_ToggleItem_C_OnChangeValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterListWidget_ToggleItem.MonsterListWidget_ToggleItem_C.ExecuteUbergraph_MonsterListWidget_ToggleItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterListWidget_ToggleItem_C::ExecuteUbergraph_MonsterListWidget_ToggleItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_ToggleItem_C", "ExecuteUbergraph_MonsterListWidget_ToggleItem");

	Params::UMonsterListWidget_ToggleItem_C_ExecuteUbergraph_MonsterListWidget_ToggleItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


