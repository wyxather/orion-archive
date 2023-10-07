#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_LevelManager_Others.BPI_LevelManager_Others_C
// (None)

class UClass* IBPI_LevelManager_Others_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LevelManager_Others_C");

	return Clss;
}


// BPI_LevelManager_Others_C BPI_LevelManager_Others.Default__BPI_LevelManager_Others_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LevelManager_Others_C* IBPI_LevelManager_Others_C::GetDefaultObj()
{
	static class IBPI_LevelManager_Others_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LevelManager_Others_C*>(IBPI_LevelManager_Others_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_LevelManager_Others.BPI_LevelManager_Others_C.RequestBattleFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_LevelManager_Others_C::RequestBattleFinish(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_LevelManager_Others_C", "RequestBattleFinish");

	Params::IBPI_LevelManager_Others_C_RequestBattleFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPI_LevelManager_Others.BPI_LevelManager_Others_C.RequestBattleStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPartyCharacterData> Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvadeBattle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEventBGM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              BattleMapIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_LevelManager_Others_C::RequestBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool InvadeBattle, bool IsEventBGM, int32 BattleMapIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_LevelManager_Others_C", "RequestBattleStart");

	Params::IBPI_LevelManager_Others_C_RequestBattleStart_Params Parms{};

	Parms.Player = Player;
	Parms.EnemyGroupID = EnemyGroupID;
	Parms.InvadeBattle = InvadeBattle;
	Parms.IsEventBGM = IsEventBGM;
	Parms.BattleMapIndex = BattleMapIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


