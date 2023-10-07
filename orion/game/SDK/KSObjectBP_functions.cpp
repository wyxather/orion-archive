#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSObjectBP.KSObjectBP_C
// (Actor)

class UClass* AKSObjectBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSObjectBP_C");

	return Clss;
}


// KSObjectBP_C KSObjectBP.Default__KSObjectBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSObjectBP_C* AKSObjectBP_C::GetDefaultObj()
{
	static class AKSObjectBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSObjectBP_C*>(AKSObjectBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSObjectBP.KSObjectBP_C.SetObjectData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSObjectData               ObjectData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AKSObjectBP_C::SetObjectData(const struct FKSObjectData& ObjectData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSObjectBP_C", "SetObjectData");

	Params::AKSObjectBP_C_SetObjectData_Params Parms{};

	Parms.ObjectData = ObjectData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSObjectBP.KSObjectBP_C.SetInitLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSObjectBP_C::SetInitLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSObjectBP_C", "SetInitLocation");

	Params::AKSObjectBP_C_SetInitLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSObjectBP.KSObjectBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSObjectBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSObjectBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSObjectBP.KSObjectBP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSObjectBP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSObjectBP_C", "ReceiveEndPlay");

	Params::AKSObjectBP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSObjectBP.KSObjectBP_C.ExecuteUbergraph_KSObjectBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSObjectBP_C::ExecuteUbergraph_KSObjectBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSObjectBP_C", "ExecuteUbergraph_KSObjectBP");

	Params::AKSObjectBP_C_ExecuteUbergraph_KSObjectBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


