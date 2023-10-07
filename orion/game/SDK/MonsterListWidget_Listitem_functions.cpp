#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MonsterListWidget_Listitem.MonsterListWidget_Listitem_C
// (None)

class UClass* UMonsterListWidget_Listitem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonsterListWidget_Listitem_C");

	return Clss;
}


// MonsterListWidget_Listitem_C MonsterListWidget_Listitem.Default__MonsterListWidget_Listitem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonsterListWidget_Listitem_C* UMonsterListWidget_Listitem_C::GetDefaultObj()
{
	static class UMonsterListWidget_Listitem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonsterListWidget_Listitem_C*>(UMonsterListWidget_Listitem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MonsterListWidget_Listitem.MonsterListWidget_Listitem_C.BPI_ResetAppearance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_Listitem_C::BPI_ResetAppearance(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_Listitem_C", "BPI_ResetAppearance");

	Params::UMonsterListWidget_Listitem_C_BPI_ResetAppearance_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_Listitem.MonsterListWidget_Listitem_C.BPI_Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDecided                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_Listitem_C::BPI_Decide(bool* IsDecided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_Listitem_C", "BPI_Decide");

	Params::UMonsterListWidget_Listitem_C_BPI_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDecided != nullptr)
		*IsDecided = Parms.IsDecided;

}


// Function MonsterListWidget_Listitem.MonsterListWidget_Listitem_C.BPI_Focus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_Listitem_C::BPI_Focus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_Listitem_C", "BPI_Focus");

	Params::UMonsterListWidget_Listitem_C_BPI_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_Listitem.MonsterListWidget_Listitem_C.BPI_OutFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_Listitem_C::BPI_OutFocus(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_Listitem_C", "BPI_OutFocus");

	Params::UMonsterListWidget_Listitem_C_BPI_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_Listitem.MonsterListWidget_Listitem_C.BPI_OnRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_Listitem_C::BPI_OnRight(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_Listitem_C", "BPI_OnRight");

	Params::UMonsterListWidget_Listitem_C_BPI_OnRight_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}


// Function MonsterListWidget_Listitem.MonsterListWidget_Listitem_C.BPI_OnLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterListWidget_Listitem_C::BPI_OnLeft(bool IsFast, bool* _)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterListWidget_Listitem_C", "BPI_OnLeft");

	Params::UMonsterListWidget_Listitem_C_BPI_OnLeft_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (_ != nullptr)
		*_ = Parms._;

}

}


