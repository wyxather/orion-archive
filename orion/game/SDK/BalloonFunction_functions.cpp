#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BalloonFunction.BalloonFunction_C
// (None)

class UClass* UBalloonFunction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalloonFunction_C");

	return Clss;
}


// BalloonFunction_C BalloonFunction.Default__BalloonFunction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalloonFunction_C* UBalloonFunction_C::GetDefaultObj()
{
	static class UBalloonFunction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalloonFunction_C*>(UBalloonFunction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BalloonFunction.BalloonFunction_C.GetActorHeightCheck
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasAction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonFunction_C::GetActorHeightCheck(class AActor* Actor, class UObject* __WorldContext, float* Height, bool* HasAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonFunction_C", "GetActorHeightCheck");

	Params::UBalloonFunction_C_GetActorHeightCheck_Params Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

	if (HasAction != nullptr)
		*HasAction = Parms.HasAction;

}


// Function BalloonFunction.BalloonFunction_C.GetActorHeight
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonFunction_C::GetActorHeight(class AActor* Actor, class UObject* __WorldContext, float* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonFunction_C", "GetActorHeight");

	Params::UBalloonFunction_C_GetActorHeight_Params Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function BalloonFunction.BalloonFunction_C.GetBalloonDirOffset
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventBalloonDir        BalloonDir                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonFunction_C::GetBalloonDirOffset(enum class EEventBalloonDir BalloonDir, class UObject* __WorldContext, struct FVector2D* Offset, struct FVector2D* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonFunction_C", "GetBalloonDirOffset");

	Params::UBalloonFunction_C_GetBalloonDirOffset_Params Parms{};

	Parms.BalloonDir = BalloonDir;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

}

}


