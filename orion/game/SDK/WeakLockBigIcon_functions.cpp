#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WeakLockBigIcon.WeakLockBigIcon_C
// (None)

class UClass* UWeakLockBigIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeakLockBigIcon_C");

	return Clss;
}


// WeakLockBigIcon_C WeakLockBigIcon.Default__WeakLockBigIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeakLockBigIcon_C* UWeakLockBigIcon_C::GetDefaultObj()
{
	static class UWeakLockBigIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeakLockBigIcon_C*>(UWeakLockBigIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeakLockBigIcon.WeakLockBigIcon_C.FinishWeakLockFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeakLockBigIcon_C::FinishWeakLockFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "FinishWeakLockFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.SetupIconPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeakLockBigIcon_C::SetupIconPosition(int32 IconNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "SetupIconPosition");

	Params::UWeakLockBigIcon_C_SetupIconPosition_Params Parms{};

	Parms.IconNum = IconNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.SetupWeakLockIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleEnemyStatus_C*        Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeakLockBigIcon_C::SetupWeakLockIcon(class UBattleEnemyStatus_C* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "SetupWeakLockIcon");

	Params::UWeakLockBigIcon_C_SetupWeakLockIcon_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.FinishWeakLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeakLockBigIcon_C::FinishWeakLockStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "FinishWeakLockStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.FadeOutStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeakLockBigIcon_C::FadeOutStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "FadeOutStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.StartLockIconMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeakLockBigIcon_C::StartLockIconMove(int32 IconIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "StartLockIconMove");

	Params::UWeakLockBigIcon_C_StartLockIconMove_Params Parms{};

	Parms.IconIndex = IconIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.PlayWeakLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeakLockBigIcon_C::PlayWeakLockStart(int32 IconNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "PlayWeakLockStart");

	Params::UWeakLockBigIcon_C_PlayWeakLockStart_Params Parms{};

	Parms.IconNum = IconNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.StartMoveTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeakLockBigIcon_C::StartMoveTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "StartMoveTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeakLockBigIcon.WeakLockBigIcon_C.ExecuteUbergraph_WeakLockBigIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeakLockBigIcon_C::ExecuteUbergraph_WeakLockBigIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WeakLockBigIcon_C", "ExecuteUbergraph_WeakLockBigIcon");

	Params::UWeakLockBigIcon_C_ExecuteUbergraph_WeakLockBigIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


