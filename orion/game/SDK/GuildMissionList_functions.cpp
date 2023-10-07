#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMissionList.GuildMissionList_C
// (None)

class UClass* UGuildMissionList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuildMissionList_C");

	return Clss;
}


// GuildMissionList_C GuildMissionList.Default__GuildMissionList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuildMissionList_C* UGuildMissionList_C::GetDefaultObj()
{
	static class UGuildMissionList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuildMissionList_C*>(UGuildMissionList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GuildMissionList.GuildMissionList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GuildLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMissionList_C::Setup(class FName GuildLabel, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMissionList_C", "Setup");

	Params::UGuildMissionList_C_Setup_Params Parms{};

	Parms.GuildLabel = GuildLabel;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMissionList.GuildMissionList_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMissionList_C::PlayOutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMissionList_C", "PlayOutFocus");

	Params::UGuildMissionList_C_PlayOutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMissionList.GuildMissionList_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMissionList_C::PlayFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMissionList_C", "PlayFocus");

	Params::UGuildMissionList_C_PlayFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMissionList.GuildMissionList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGuildMissionList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMissionList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMissionList.GuildMissionList_C.ExecuteUbergraph_GuildMissionList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMissionList_C::ExecuteUbergraph_GuildMissionList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMissionList_C", "ExecuteUbergraph_GuildMissionList");

	Params::UGuildMissionList_C_ExecuteUbergraph_GuildMissionList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


