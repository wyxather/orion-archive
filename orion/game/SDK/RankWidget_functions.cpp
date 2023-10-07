#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass RankWidget.RankWidget_C
// (None)

class UClass* URankWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RankWidget_C");

	return Clss;
}


// RankWidget_C RankWidget.Default__RankWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URankWidget_C* URankWidget_C::GetDefaultObj()
{
	static class URankWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URankWidget_C*>(URankWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RankWidget.RankWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URankWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RankWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RankWidget.RankWidget_C.SetRank
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankWidget_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RankWidget_C", "SetRank");

	Params::URankWidget_C_SetRank_Params Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RankWidget.RankWidget_C.SetupRankList
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void URankWidget_C::SetupRankList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RankWidget_C", "SetupRankList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RankWidget.RankWidget_C.ExecuteUbergraph_RankWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankWidget_C::ExecuteUbergraph_RankWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RankWidget_C", "ExecuteUbergraph_RankWidget");

	Params::URankWidget_C_ExecuteUbergraph_RankWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


