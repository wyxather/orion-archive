#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TutorialManagerBP.TutorialManagerBP_C
// (Actor)

class UClass* ATutorialManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialManagerBP_C");

	return Clss;
}


// TutorialManagerBP_C TutorialManagerBP.Default__TutorialManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATutorialManagerBP_C* ATutorialManagerBP_C::GetDefaultObj()
{
	static class ATutorialManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATutorialManagerBP_C*>(ATutorialManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TutorialManagerBP.TutorialManagerBP_C.OpenEndCard
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETUTORIAL_TYPE          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForcedDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialManagerBP_C::OpenEndCard(enum class ETUTORIAL_TYPE Type, bool ForcedDisplay, bool* IsOpen, int32 CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "OpenEndCard");

	Params::ATutorialManagerBP_C_OpenEndCard_Params Parms{};

	Parms.Type = Type;
	Parms.ForcedDisplay = ForcedDisplay;
	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function TutorialManagerBP.TutorialManagerBP_C.OpenTutorialListData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableTutorialList      ListData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               AutoPushPop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForcedDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUITutorialBase*             Tutorial                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialManagerBP_C::OpenTutorialListData(const struct FDataTableTutorialList& ListData, bool AutoPushPop, bool ForcedDisplay, bool* IsOpen, class UUITutorialBase** Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "OpenTutorialListData");

	Params::ATutorialManagerBP_C_OpenTutorialListData_Params Parms{};

	Parms.ListData = ListData;
	Parms.AutoPushPop = AutoPushPop;
	Parms.ForcedDisplay = ForcedDisplay;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

	if (Tutorial != nullptr)
		*Tutorial = Parms.Tutorial;

}


// Function TutorialManagerBP.TutorialManagerBP_C.IsRunningTutorial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATutorialManagerBP_C::IsRunningTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "IsRunningTutorial");

	Params::ATutorialManagerBP_C_IsRunningTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TutorialManagerBP.TutorialManagerBP_C.OpenTutorial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETUTORIAL_TYPE          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForcedDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialManagerBP_C::OpenTutorial(enum class ETUTORIAL_TYPE Type, bool ForcedDisplay, bool* IsOpen, int32 CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "OpenTutorial");

	Params::ATutorialManagerBP_C_OpenTutorial_Params Parms{};

	Parms.Type = Type;
	Parms.ForcedDisplay = ForcedDisplay;
	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function TutorialManagerBP.TutorialManagerBP_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATutorialManagerBP_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialManagerBP.TutorialManagerBP_C.UpdateFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATutorialManagerBP_C::UpdateFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "UpdateFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialManagerBP.TutorialManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "ReceiveTick");

	Params::ATutorialManagerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialManagerBP.TutorialManagerBP_C.ExecuteUbergraph_TutorialManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialManagerBP_C::ExecuteUbergraph_TutorialManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TutorialManagerBP_C", "ExecuteUbergraph_TutorialManagerBP");

	Params::ATutorialManagerBP_C_ExecuteUbergraph_TutorialManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


