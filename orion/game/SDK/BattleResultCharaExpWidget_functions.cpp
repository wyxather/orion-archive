#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleResultCharaExpWidget.BattleResultCharaExpWidget_C
// (None)

class UClass* UBattleResultCharaExpWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleResultCharaExpWidget_C");

	return Clss;
}


// BattleResultCharaExpWidget_C BattleResultCharaExpWidget.Default__BattleResultCharaExpWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleResultCharaExpWidget_C* UBattleResultCharaExpWidget_C::GetDefaultObj()
{
	static class UBattleResultCharaExpWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleResultCharaExpWidget_C*>(UBattleResultCharaExpWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.IsCountMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CountMax                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleResultCharaExpWidget_C::IsCountMax(bool* CountMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "IsCountMax");

	Params::UBattleResultCharaExpWidget_C_IsCountMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CountMax != nullptr)
		*CountMax = Parms.CountMax;

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetLanguage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::SetLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "SetLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.ExecLevelMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::ExecLevelMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "ExecLevelMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.UpdateJobParameter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::UpdateJobParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "UpdateJobParameter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleResultPlayerWidget_C* Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultCharaExpWidget_C::SetParent(class UBattleResultPlayerWidget_C* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "SetParent");

	Params::UBattleResultCharaExpWidget_C_SetParent_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetupJobPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentJobPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddJobPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultCharaExpWidget_C::SetupJobPoint(int32 CharacterID, int32 CurrentJobPoint, int32 AddJobPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "SetupJobPoint");

	Params::UBattleResultCharaExpWidget_C_SetupJobPoint_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CurrentJobPoint = CurrentJobPoint;
	Parms.AddJobPoint = AddJobPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetNextExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextExp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultCharaExpWidget_C::SetNextExp(int32 NextExp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "SetNextExp");

	Params::UBattleResultCharaExpWidget_C_SetNextExp_Params Parms{};

	Parms.NextExp = NextExp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.UpdateExpParameter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::UpdateExpParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "UpdateExpParameter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SkipCountup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::SkipCountup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "SkipCountup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.IsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsUpdate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleResultCharaExpWidget_C::IsPlaying(bool* IsUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "IsPlaying");

	Params::UBattleResultCharaExpWidget_C_IsPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUpdate != nullptr)
		*IsUpdate = Parms.IsUpdate;

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.SetupExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentExp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NeedExp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LevelMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              GetExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultCharaExpWidget_C::SetupExp(int32 CurrentExp, int32 NeedExp, bool LevelMax, int32 GetExp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "SetupExp");

	Params::UBattleResultCharaExpWidget_C_SetupExp_Params Parms{};

	Parms.CurrentExp = CurrentExp;
	Parms.NeedExp = NeedExp;
	Parms.LevelMax = LevelMax;
	Parms.GetExp = GetExp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.StartCountup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::StartCountup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "StartCountup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.StopCountUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::StopCountUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "StopCountUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.WaitCountupUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultCharaExpWidget_C::WaitCountupUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "WaitCountupUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultCharaExpWidget.BattleResultCharaExpWidget_C.ExecuteUbergraph_BattleResultCharaExpWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultCharaExpWidget_C::ExecuteUbergraph_BattleResultCharaExpWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultCharaExpWidget_C", "ExecuteUbergraph_BattleResultCharaExpWidget");

	Params::UBattleResultCharaExpWidget_C_ExecuteUbergraph_BattleResultCharaExpWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


