#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleAI_Supporter.BattleAI_Supporter_C
// (None)

class UClass* UBattleAI_Supporter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleAI_Supporter_C");

	return Clss;
}


// BattleAI_Supporter_C BattleAI_Supporter.Default__BattleAI_Supporter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleAI_Supporter_C* UBattleAI_Supporter_C::GetDefaultObj()
{
	static class UBattleAI_Supporter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleAI_Supporter_C*>(UBattleAI_Supporter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleAI_Supporter.BattleAI_Supporter_C.UpdateThink
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleAI_Supporter_C::UpdateThink(class FName* CommandName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleAI_Supporter_C", "UpdateThink");

	Params::UBattleAI_Supporter_C_UpdateThink_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

}


// Function BattleAI_Supporter.BattleAI_Supporter_C.SetBattleCommandTable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleAICommandData>AcCommandTable                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleAI_Supporter_C::SetBattleCommandTable(TArray<struct FBattleAICommandData>& AcCommandTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleAI_Supporter_C", "SetBattleCommandTable");

	Params::UBattleAI_Supporter_C_SetBattleCommandTable_Params Parms{};

	Parms.AcCommandTable = AcCommandTable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleAI_Supporter.BattleAI_Supporter_C.SelectBattleTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>PlayerList                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBase*>EnemyList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBATTLE_TARGET_TYPE     TargetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>TargetList                                                       (Parm, OutParm)

void UBattleAI_Supporter_C::SelectBattleTarget(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, enum class EBATTLE_TARGET_TYPE TargetType, TArray<class ABattleCharacterBase*>* TargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleAI_Supporter_C", "SelectBattleTarget");

	Params::UBattleAI_Supporter_C_SelectBattleTarget_Params Parms{};

	Parms.PlayerList = PlayerList;
	Parms.EnemyList = EnemyList;
	Parms.TargetType = TargetType;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetList != nullptr)
		*TargetList = std::move(Parms.TargetList);

}

}


