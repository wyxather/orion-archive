#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleWipeAnimation.BattleWipeAnimation_C
// (None)

class UClass* UBattleWipeAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleWipeAnimation_C");

	return Clss;
}


// BattleWipeAnimation_C BattleWipeAnimation.Default__BattleWipeAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleWipeAnimation_C* UBattleWipeAnimation_C::GetDefaultObj()
{
	static class UBattleWipeAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleWipeAnimation_C*>(UBattleWipeAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleWipeAnimation.BattleWipeAnimation_C.IsBreakAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAnimarion                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleWipeAnimation_C::IsBreakAnimation(bool* IsAnimarion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipeAnimation_C", "IsBreakAnimation");

	Params::UBattleWipeAnimation_C_IsBreakAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsAnimarion != nullptr)
		*IsAnimarion = Parms.IsAnimarion;

}


// Function BattleWipeAnimation.BattleWipeAnimation_C.IsReadyAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAnimarion                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleWipeAnimation_C::IsReadyAnimation(bool* IsAnimarion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipeAnimation_C", "IsReadyAnimation");

	Params::UBattleWipeAnimation_C_IsReadyAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsAnimarion != nullptr)
		*IsAnimarion = Parms.IsAnimarion;

}


// Function BattleWipeAnimation.BattleWipeAnimation_C.PlayStartReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UBattleWipeAnimation_C::PlayStartReady(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipeAnimation_C", "PlayStartReady");

	Params::UBattleWipeAnimation_C_PlayStartReady_Params Parms{};

	Parms.Delegate = Delegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleWipeAnimation.BattleWipeAnimation_C.PlayStartBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UBattleWipeAnimation_C::PlayStartBreak(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipeAnimation_C", "PlayStartBreak");

	Params::UBattleWipeAnimation_C_PlayStartBreak_Params Parms{};

	Parms.Delegate = Delegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleWipeAnimation.BattleWipeAnimation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleWipeAnimation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipeAnimation_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipeAnimation.BattleWipeAnimation_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleWipeAnimation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipeAnimation_C", "Tick");

	Params::UBattleWipeAnimation_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleWipeAnimation.BattleWipeAnimation_C.ExecuteUbergraph_BattleWipeAnimation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleWipeAnimation_C::ExecuteUbergraph_BattleWipeAnimation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipeAnimation_C", "ExecuteUbergraph_BattleWipeAnimation");

	Params::UBattleWipeAnimation_C_ExecuteUbergraph_BattleWipeAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


