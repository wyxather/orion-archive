#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BarImproveRelationship.BarImproveRelationship_C
// (None)

class UClass* UBarImproveRelationship_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BarImproveRelationship_C");

	return Clss;
}


// BarImproveRelationship_C BarImproveRelationship.Default__BarImproveRelationship_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBarImproveRelationship_C* UBarImproveRelationship_C::GetDefaultObj()
{
	static class UBarImproveRelationship_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBarImproveRelationship_C*>(UBarImproveRelationship_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BarImproveRelationship.BarImproveRelationship_C.RelationConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarImproveRelationship_C::RelationConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "RelationConfirmCallback");

	Params::UBarImproveRelationship_C_RelationConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarImproveRelationship.BarImproveRelationship_C.SetFooterVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarImproveRelationship_C::SetFooterVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "SetFooterVisibility");

	Params::UBarImproveRelationship_C_SetFooterVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarImproveRelationship.BarImproveRelationship_C.FinishTalk
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarImproveRelationship_C::FinishTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "FinishTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarImproveRelationship.BarImproveRelationship_C.Start
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarImproveRelationship_C::Start(class FName NPCLabel, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "Start");

	Params::UBarImproveRelationship_C_Start_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BarImproveRelationship.BarImproveRelationship_C.IsRunnning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Running                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarImproveRelationship_C::IsRunnning(bool* Running)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "IsRunnning");

	Params::UBarImproveRelationship_C_IsRunnning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Running != nullptr)
		*Running = Parms.Running;

}


// Function BarImproveRelationship.BarImproveRelationship_C.Init
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarImproveRelationship_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarImproveRelationship.BarImproveRelationship_C.UpdateTalk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarImproveRelationship_C::UpdateTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "UpdateTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarImproveRelationship.BarImproveRelationship_C.IsNpcTalking
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsTalking                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarImproveRelationship_C::IsNpcTalking(bool* IsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "IsNpcTalking");

	Params::UBarImproveRelationship_C_IsNpcTalking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsTalking != nullptr)
		*IsTalking = Parms.IsTalking;

}


// Function BarImproveRelationship.BarImproveRelationship_C.StartNpcTalk
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TalkLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarImproveRelationship_C::StartNpcTalk(class FName TalkLabel, class AActor* Target_Actor, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "StartNpcTalk");

	Params::UBarImproveRelationship_C_StartNpcTalk_Params Parms{};

	Parms.TalkLabel = TalkLabel;
	Parms.Target_Actor = Target_Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BarImproveRelationship.BarImproveRelationship_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBarImproveRelationship_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarImproveRelationship.BarImproveRelationship_C.ExecuteUbergraph_BarImproveRelationship
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarImproveRelationship_C::ExecuteUbergraph_BarImproveRelationship(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarImproveRelationship_C", "ExecuteUbergraph_BarImproveRelationship");

	Params::UBarImproveRelationship_C_ExecuteUbergraph_BarImproveRelationship_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


