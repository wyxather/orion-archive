#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass Movie_Actor.Movie_Actor_C
// (Actor)

class UClass* AMovie_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Movie_Actor_C");

	return Clss;
}


// Movie_Actor_C Movie_Actor.Default__Movie_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMovie_Actor_C* AMovie_Actor_C::GetDefaultObj()
{
	static class AMovie_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMovie_Actor_C*>(AMovie_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Movie_Actor.Movie_Actor_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMovie_Actor_C::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Movie_Actor_C", "Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Movie_Actor.Movie_Actor_C.GetStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EManaComponentStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EManaComponentStatus AMovie_Actor_C::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Movie_Actor_C", "GetStatus");

	Params::AMovie_Actor_C_GetStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Movie_Actor.Movie_Actor_C.StopMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMovie_Actor_C::StopMovie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Movie_Actor_C", "StopMovie");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Movie_Actor.Movie_Actor_C.Prepare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UManaTexture*                Texuter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMovie_Actor_C::Prepare(class UManaTexture* Texuter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Movie_Actor_C", "Prepare");

	Params::AMovie_Actor_C_Prepare_Params Parms{};

	Parms.Texuter = Texuter;

	UObject::ProcessEvent(Func, &Parms);

}

}


