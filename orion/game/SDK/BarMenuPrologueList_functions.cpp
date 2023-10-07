#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BarMenuPrologueList.BarMenuPrologueList_C
// (None)

class UClass* UBarMenuPrologueList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BarMenuPrologueList_C");

	return Clss;
}


// BarMenuPrologueList_C BarMenuPrologueList.Default__BarMenuPrologueList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBarMenuPrologueList_C* UBarMenuPrologueList_C::GetDefaultObj()
{
	static class UBarMenuPrologueList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBarMenuPrologueList_C*>(UBarMenuPrologueList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BarMenuPrologueList.BarMenuPrologueList_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuPrologueList_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPrologueList_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPrologueList.BarMenuPrologueList_C.UpdatePrologueList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BeforeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuPrologueList_C::UpdatePrologueList(int32 CurrentIndex, int32 BeforeIndex, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPrologueList_C", "UpdatePrologueList");

	Params::UBarMenuPrologueList_C_UpdatePrologueList_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.BeforeIndex = BeforeIndex;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPrologueList.BarMenuPrologueList_C.SetPrologueCharaIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BeforeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuPrologueList_C::SetPrologueCharaIndex(int32 NewIndex, int32 BeforeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPrologueList_C", "SetPrologueCharaIndex");

	Params::UBarMenuPrologueList_C_SetPrologueCharaIndex_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.BeforeIndex = BeforeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPrologueList.BarMenuPrologueList_C.MovePrologueCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuPrologueList_C::MovePrologueCursor(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPrologueList_C", "MovePrologueCursor");

	Params::UBarMenuPrologueList_C_MovePrologueCursor_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPrologueList.BarMenuPrologueList_C.Setup Prologue Chara List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBarMenuPrologueList_C::Setup_Prologue_Chara_List(TArray<int32>& CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPrologueList_C", "Setup Prologue Chara List");

	Params::UBarMenuPrologueList_C_Setup_Prologue_Chara_List_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPrologueList.BarMenuPrologueList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBarMenuPrologueList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPrologueList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPrologueList.BarMenuPrologueList_C.ExecuteUbergraph_BarMenuPrologueList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuPrologueList_C::ExecuteUbergraph_BarMenuPrologueList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPrologueList_C", "ExecuteUbergraph_BarMenuPrologueList");

	Params::UBarMenuPrologueList_C_ExecuteUbergraph_BarMenuPrologueList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


