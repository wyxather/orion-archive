#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass PlacedSequencerBP.PlacedSequencerBP_C
// (Actor)

class UClass* APlacedSequencerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlacedSequencerBP_C");

	return Clss;
}


// PlacedSequencerBP_C PlacedSequencerBP.Default__PlacedSequencerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlacedSequencerBP_C* APlacedSequencerBP_C::GetDefaultObj()
{
	static class APlacedSequencerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlacedSequencerBP_C*>(APlacedSequencerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlacedSequencerBP.PlacedSequencerBP_C.PauseSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlacedSequencerBP_C::PauseSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "PauseSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlacedSequencerBP.PlacedSequencerBP_C.PlaySequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlacedSequencerBP_C::PlaySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "PlaySequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlacedSequencerBP.PlacedSequencerBP_C.ChangeInputMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APlacedSequencerBP_C::ChangeInputMode(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "ChangeInputMode");

	Params::APlacedSequencerBP_C_ChangeInputMode_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlacedSequencerBP.PlacedSequencerBP_C.UpdateSequencer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlacedSequencerBP_C::UpdateSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "UpdateSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlacedSequencerBP.PlacedSequencerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlacedSequencerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlacedSequencerBP.PlacedSequencerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlacedSequencerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "ReceiveTick");

	Params::APlacedSequencerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlacedSequencerBP.PlacedSequencerBP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlacedSequencerBP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "ReceiveEndPlay");

	Params::APlacedSequencerBP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlacedSequencerBP.PlacedSequencerBP_C.ExecuteUbergraph_PlacedSequencerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlacedSequencerBP_C::ExecuteUbergraph_PlacedSequencerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlacedSequencerBP_C", "ExecuteUbergraph_PlacedSequencerBP");

	Params::APlacedSequencerBP_C_ExecuteUbergraph_PlacedSequencerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


