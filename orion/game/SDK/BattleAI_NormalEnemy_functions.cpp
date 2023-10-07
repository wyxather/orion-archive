#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleAI_NormalEnemy.BattleAI_NormalEnemy_C
// (None)

class UClass* UBattleAI_NormalEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleAI_NormalEnemy_C");

	return Clss;
}


// BattleAI_NormalEnemy_C BattleAI_NormalEnemy.Default__BattleAI_NormalEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleAI_NormalEnemy_C* UBattleAI_NormalEnemy_C::GetDefaultObj()
{
	static class UBattleAI_NormalEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleAI_NormalEnemy_C*>(UBattleAI_NormalEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.SelectBattleTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>PlayerList                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBase*>EnemyList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBATTLE_TARGET_TYPE     TargetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>TargetList                                                       (Parm, OutParm)

void UBattleAI_NormalEnemy_C::SelectBattleTarget(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, enum class EBATTLE_TARGET_TYPE TargetType, TArray<class ABattleCharacterBase*>* TargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleAI_NormalEnemy_C", "SelectBattleTarget");

	Params::UBattleAI_NormalEnemy_C_SelectBattleTarget_Params Parms{};

	Parms.PlayerList = PlayerList;
	Parms.EnemyList = EnemyList;
	Parms.TargetType = TargetType;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetList != nullptr)
		*TargetList = std::move(Parms.TargetList);

}


// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.AIInitialize
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBattleAI_NormalEnemy_C::AIInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleAI_NormalEnemy_C", "AIInitialize");

	Params::UBattleAI_NormalEnemy_C_AIInitialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.UpdateThink
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleAI_NormalEnemy_C::UpdateThink(class FName* CommandName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleAI_NormalEnemy_C", "UpdateThink");

	Params::UBattleAI_NormalEnemy_C_UpdateThink_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

}


// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.BoostActionCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseBoostAction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleAI_NormalEnemy_C::BoostActionCheck(bool* UseBoostAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleAI_NormalEnemy_C", "BoostActionCheck");

	Params::UBattleAI_NormalEnemy_C_BoostActionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseBoostAction != nullptr)
		*UseBoostAction = Parms.UseBoostAction;

}

}


