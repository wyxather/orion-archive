#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TalkText_Balloon.TalkText_Balloon_C
// (None)

class UClass* UTalkText_Balloon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalkText_Balloon_C");

	return Clss;
}


// TalkText_Balloon_C TalkText_Balloon.Default__TalkText_Balloon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTalkText_Balloon_C* UTalkText_Balloon_C::GetDefaultObj()
{
	static class UTalkText_Balloon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalkText_Balloon_C*>(UTalkText_Balloon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TalkText_Balloon.TalkText_Balloon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTalkText_Balloon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_Balloon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText_Balloon.TalkText_Balloon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_Balloon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_Balloon_C", "Tick");

	Params::UTalkText_Balloon_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkText_Balloon.TalkText_Balloon_C.ExecuteUbergraph_TalkText_Balloon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_Balloon_C::ExecuteUbergraph_TalkText_Balloon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_Balloon_C", "ExecuteUbergraph_TalkText_Balloon");

	Params::UTalkText_Balloon_C_ExecuteUbergraph_TalkText_Balloon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


