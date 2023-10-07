#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleManagerInterface.BattleManagerInterface_C
// (None)

class UClass* IBattleManagerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleManagerInterface_C");

	return Clss;
}


// BattleManagerInterface_C BattleManagerInterface.Default__BattleManagerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBattleManagerInterface_C* IBattleManagerInterface_C::GetDefaultObj()
{
	static class IBattleManagerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBattleManagerInterface_C*>(IBattleManagerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleManagerInterface.BattleManagerInterface_C.Debug_PlayAbilitty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            PlayAbilityData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnforcePlayerSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_SEQUENCE_PATTERN_TYPESequencePattern                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EnemyIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UseActionLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBattleManagerInterface_C::Debug_PlayAbilitty(const struct FAbilityDataBase& PlayAbilityData, int32 BoostLevel, bool EnforcePlayerSide, enum class EBATTLE_SEQUENCE_PATTERN_TYPE SequencePattern, int32 EnemyIndex, class FName UseActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "Debug_PlayAbilitty");

	Params::IBattleManagerInterface_C_Debug_PlayAbilitty_Params Parms{};

	Parms.PlayAbilityData = PlayAbilityData;
	Parms.BoostLevel = BoostLevel;
	Parms.EnforcePlayerSide = EnforcePlayerSide;
	Parms.SequencePattern = SequencePattern;
	Parms.EnemyIndex = EnemyIndex;
	Parms.UseActionLabel = UseActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerInterface.BattleManagerInterface_C.BattleReplayDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBattleManagerInterface_C::BattleReplayDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "BattleReplayDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerInterface.BattleManagerInterface_C.SuspendBattleReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBattleManagerInterface_C::SuspendBattleReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "SuspendBattleReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerInterface.BattleManagerInterface_C.CheckBattleReplayFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Finish                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBattleManagerInterface_C::CheckBattleReplayFinish(bool* Finish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "CheckBattleReplayFinish");

	Params::IBattleManagerInterface_C_CheckBattleReplayFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Finish != nullptr)
		*Finish = Parms.Finish;

}


// Function BattleManagerInterface.BattleManagerInterface_C.PlayBattleReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEndRollSegmentSet      ReplaySegment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBattleManagerInterface_C::PlayBattleReplay(enum class EEndRollSegmentSet ReplaySegment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "PlayBattleReplay");

	Params::IBattleManagerInterface_C_PlayBattleReplay_Params Parms{};

	Parms.ReplaySegment = ReplaySegment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerInterface.BattleManagerInterface_C.BattleReplayConstruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBattleManagerInterface_C::BattleReplayConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "BattleReplayConstruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerInterface.BattleManagerInterface_C.IsAllReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBattleManagerInterface_C::IsAllReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "IsAllReady");

	Params::IBattleManagerInterface_C_IsAllReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerInterface.BattleManagerInterface_C.IsRequestUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBattleManagerInterface_C::IsRequestUI(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "IsRequestUI");

	Params::IBattleManagerInterface_C_IsRequestUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerInterface.BattleManagerInterface_C.CreateUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBattleManagerInterface_C::CreateUI(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "CreateUI");

	Params::IBattleManagerInterface_C_CreateUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerInterface.BattleManagerInterface_C.IsAliveEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBattleManagerInterface_C::IsAliveEnemy(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "IsAliveEnemy");

	Params::IBattleManagerInterface_C_IsAliveEnemy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerInterface.BattleManagerInterface_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBattleManagerInterface_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "IsReady");

	Params::IBattleManagerInterface_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerInterface.BattleManagerInterface_C.StartBattleSequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPartyCharacterData> Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEventBGM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInvadeBattle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBattleManagerInterface_C::StartBattleSequence(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool IsEventBGM, bool IsInvadeBattle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "StartBattleSequence");

	Params::IBattleManagerInterface_C_StartBattleSequence_Params Parms{};

	Parms.Player = Player;
	Parms.EnemyGroupID = EnemyGroupID;
	Parms.IsEventBGM = IsEventBGM;
	Parms.IsInvadeBattle = IsInvadeBattle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerInterface.BattleManagerInterface_C.ClearBattleResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBattleManagerInterface_C::ClearBattleResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerInterface_C", "ClearBattleResource");



	UObject::ProcessEvent(Func, nullptr);

}

}


