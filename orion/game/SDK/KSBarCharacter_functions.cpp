#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSBarCharacter.KSBarCharacter_C
// (Actor, Pawn)

class UClass* AKSBarCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSBarCharacter_C");

	return Clss;
}


// KSBarCharacter_C KSBarCharacter.Default__KSBarCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSBarCharacter_C* AKSBarCharacter_C::GetDefaultObj()
{
	static class AKSBarCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSBarCharacter_C*>(AKSBarCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSBarCharacter.KSBarCharacter_C.CallTalkEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSBarCharacter_C::CallTalkEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "CallTalkEvent");

	Params::AKSBarCharacter_C_CallTalkEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSBarCharacter.KSBarCharacter_C.CloseDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBarCharacter_C::CloseDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "CloseDialog");

	Params::AKSBarCharacter_C_CloseDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBarCharacter.KSBarCharacter_C.ChangeCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemTalkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      NormalTalkEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AKSBarCharacter_C::ChangeCharacter(int32 CharacterID, const class FString& ItemTalkEvent, const class FString& NormalTalkEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "ChangeCharacter");

	Params::AKSBarCharacter_C_ChangeCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ItemTalkEvent = ItemTalkEvent;
	Parms.NormalTalkEvent = NormalTalkEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBarCharacter.KSBarCharacter_C.CalcItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSBarCharacter_C::CalcItemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "CalcItemData");

	Params::AKSBarCharacter_C_CalcItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSBarCharacter.KSBarCharacter_C.SetupCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemEventLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      NormalEventLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      ItemCnt                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AKSBarCharacter_C::SetupCharacter(int32 CharacterID, const class FString& ItemEventLabel, const class FString& NormalEventLabel, TArray<class FName>& ItemLabel, TArray<int32>& ItemCnt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "SetupCharacter");

	Params::AKSBarCharacter_C_SetupCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ItemEventLabel = ItemEventLabel;
	Parms.NormalEventLabel = NormalEventLabel;
	Parms.ItemLabel = ItemLabel;
	Parms.ItemCnt = ItemCnt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBarCharacter.KSBarCharacter_C.TalkEventFinish
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBarCharacter_C::TalkEventFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "TalkEventFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBarCharacter.KSBarCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBarCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "ReceiveTick");

	Params::AKSBarCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBarCharacter.KSBarCharacter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AKSBarCharacter_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBarCharacter.KSBarCharacter_C.ExecuteUbergraph_KSBarCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBarCharacter_C::ExecuteUbergraph_KSBarCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBarCharacter_C", "ExecuteUbergraph_KSBarCharacter");

	Params::AKSBarCharacter_C_ExecuteUbergraph_KSBarCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


