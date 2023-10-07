#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleManagerBP.BattleManagerBP_C
// (Actor)

class UClass* ABattleManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleManagerBP_C");

	return Clss;
}


// BattleManagerBP_C BattleManagerBP.Default__BattleManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleManagerBP_C* ABattleManagerBP_C::GetDefaultObj()
{
	static class ABattleManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleManagerBP_C*>(ABattleManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleManagerBP.BattleManagerBP_C.CheckBattleReplayFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Finish                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckBattleReplayFinish(bool* Finish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckBattleReplayFinish");

	Params::ABattleManagerBP_C_CheckBattleReplayFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Finish != nullptr)
		*Finish = Parms.Finish;

}


// Function BattleManagerBP.BattleManagerBP_C.IsAllReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsAllReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsAllReady");

	Params::ABattleManagerBP_C_IsAllReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.IsRequestUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsRequestUI(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsRequestUI");

	Params::ABattleManagerBP_C_IsRequestUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.CreateUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CreateUI(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateUI");

	Params::ABattleManagerBP_C_CreateUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.IsAliveEnemy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsAliveEnemy(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsAliveEnemy");

	Params::ABattleManagerBP_C_IsAliveEnemy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsReady");

	Params::ABattleManagerBP_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.GetMJPostProcessVignette
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Vignette                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetMJPostProcessVignette(float* Vignette)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetMJPostProcessVignette");

	Params::ABattleManagerBP_C_GetMJPostProcessVignette_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Vignette != nullptr)
		*Vignette = Parms.Vignette;

}


// Function BattleManagerBP.BattleManagerBP_C.GetAutoTameTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CAutoTameTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::GetAutoTameTarget(class ABattleCharacterBase** CAutoTameTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetAutoTameTarget");

	Params::ABattleManagerBP_C_GetAutoTameTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CAutoTameTarget != nullptr)
		*CAutoTameTarget = Parms.CAutoTameTarget;

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.SetupAutoTameMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::SetupAutoTameMonster(class ABattleCharacterBase* CTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetupAutoTameMonster");

	Params::ABattleManagerBP_C_SetupAutoTameMonster_Params Parms{};

	Parms.CTarget = CTarget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.IsAutoTameMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::IsAutoTameMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsAutoTameMonster");

	Params::ABattleManagerBP_C_IsAutoTameMonster_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.BattleDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateWeakControl_BeginTurn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecWeakControl                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UpdateWeakControl_BeginTurn(bool* ExecWeakControl, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateWeakControl_BeginTurn");

	Params::ABattleManagerBP_C_UpdateWeakControl_BeginTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecWeakControl != nullptr)
		*ExecWeakControl = Parms.ExecWeakControl;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleManagerBP.BattleManagerBP_C.GetCurrentActionOrderData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionOrderData            CActionData                                                      (Parm, OutParm, NoDestructor, ContainsInstancedReference)

void ABattleManagerBP_C::GetCurrentActionOrderData(struct FActionOrderData* CActionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetCurrentActionOrderData");

	Params::ABattleManagerBP_C_GetCurrentActionOrderData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CActionData != nullptr)
		*CActionData = std::move(Parms.CActionData);

}


// Function BattleManagerBP.BattleManagerBP_C.CollectSPBattleObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CollectSPBattleObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CollectSPBattleObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Set Weapon Texture Unload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              UnloadType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UnloadWeaponCnt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::Set_Weapon_Texture_Unload(uint8 UnloadType, int32 UnloadWeaponCnt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Set Weapon Texture Unload");

	Params::ABattleManagerBP_C_Set_Weapon_Texture_Unload_Params Parms{};

	Parms.UnloadType = UnloadType;
	Parms.UnloadWeaponCnt = UnloadWeaponCnt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.UnLoadWeaponTextureList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_UNLOAD_GC_TYPE  GCTiming                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UnLoadWeaponTextureList(enum class EWEAPON_UNLOAD_GC_TYPE GCTiming)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UnLoadWeaponTextureList");

	Params::ABattleManagerBP_C_UnLoadWeaponTextureList_Params Parms{};

	Parms.GCTiming = GCTiming;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.GetEnemyGroupID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABattleManagerBP_C::GetEnemyGroupID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetEnemyGroupID");

	Params::ABattleManagerBP_C_GetEnemyGroupID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ConvertEnemyPositionForReplay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        EnemyID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RowPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ConvertEnemyPositionForReplay(class FName EnemyID, const struct FVector& RowPosition, struct FVector* ReturnPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ConvertEnemyPositionForReplay");

	Params::ABattleManagerBP_C_ConvertEnemyPositionForReplay_Params Parms{};

	Parms.EnemyID = EnemyID;
	Parms.RowPosition = RowPosition;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnPosition != nullptr)
		*ReturnPosition = std::move(Parms.ReturnPosition);

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleStartType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_START_TYPE      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EBATTLE_START_TYPE ABattleManagerBP_C::GetBattleStartType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleStartType");

	Params::ABattleManagerBP_C_GetBattleStartType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.PlayVictoryVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayVictoryVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayVictoryVoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetCommandMenuActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCommandMenuActor*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ABattleCommandMenuActor* ABattleManagerBP_C::GetCommandMenuActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetCommandMenuActor");

	Params::ABattleManagerBP_C_GetCommandMenuActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetCurrentActionCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActionCommandBase*          CActionCommand                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::GetCurrentActionCommand(class AActionCommandBase** CActionCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetCurrentActionCommand");

	Params::ABattleManagerBP_C_GetCurrentActionCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CActionCommand != nullptr)
		*CActionCommand = Parms.CActionCommand;

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.InitializeBattleUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::InitializeBattleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitializeBattleUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ChangeBattlePartyForAbility
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ChangeBattlePartyForAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ChangeBattlePartyForAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.IsDiseasePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsDiseasePlayer(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsDiseasePlayer");

	Params::ABattleManagerBP_C_IsDiseasePlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.AddUsedOnceMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrUsedMonsterLabel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddUsedOnceMonster(class FName StrUsedMonsterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddUsedOnceMonster");

	Params::ABattleManagerBP_C_AddUsedOnceMonster_Params Parms{};

	Parms.StrUsedMonsterLabel = StrUsedMonsterLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckUsedOnceMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrCheckMonsterLabel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::CheckUsedOnceMonster(class FName StrCheckMonsterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckUsedOnceMonster");

	Params::ABattleManagerBP_C_CheckUsedOnceMonster_Params Parms{};

	Parms.StrCheckMonsterLabel = StrCheckMonsterLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ExecActionOrderBlind
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPlayerOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::ExecActionOrderBlind(bool bEnable, bool bPlayerOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecActionOrderBlind");

	Params::ABattleManagerBP_C_ExecActionOrderBlind_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.bPlayerOnly = bPlayerOnly;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForAutoTameMonster
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForAutoTameMonster(class ABattleCharacterBase* CEnforcer, class ABattleCharacterBase* CTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForAutoTameMonster");

	Params::ABattleManagerBP_C_AddAdditiveOrderForAutoTameMonster_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.CTarget = CTarget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.InitBattleOrderCount
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::InitBattleOrderCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitBattleOrderCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SearchEnemyCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrEnemyID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        EnemyCharacter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFindCharacter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCharacterAlive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SearchEnemyCharacter(class FName StrEnemyID, class ABattleCharacterBase** EnemyCharacter, bool* bFindCharacter, bool* bCharacterAlive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SearchEnemyCharacter");

	Params::ABattleManagerBP_C_SearchEnemyCharacter_Params Parms{};

	Parms.StrEnemyID = StrEnemyID;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyCharacter != nullptr)
		*EnemyCharacter = Parms.EnemyCharacter;

	if (bFindCharacter != nullptr)
		*bFindCharacter = Parms.bFindCharacter;

	if (bCharacterAlive != nullptr)
		*bCharacterAlive = Parms.bCharacterAlive;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckSupportAilmentInParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESUPPORT_AILMENT_TYPE   EAilmentType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSupportAbilityDataBase     CAbilityData                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::CheckSupportAilmentInParty(enum class ESUPPORT_AILMENT_TYPE EAilmentType, struct FSupportAbilityDataBase* CAbilityData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckSupportAilmentInParty");

	Params::ABattleManagerBP_C_CheckSupportAilmentInParty_Params Parms{};

	Parms.EAilmentType = EAilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (CAbilityData != nullptr)
		*CAbilityData = std::move(Parms.CAbilityData);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetRecoveryCutCurve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveVector*                MaskCurve                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveVector*                ScrollCurve                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetRecoveryCutCurve(int32 CurrentLevel, int32 NewLevel, class UCurveVector** MaskCurve, class UCurveVector** ScrollCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetRecoveryCutCurve");

	Params::ABattleManagerBP_C_GetRecoveryCutCurve_Params Parms{};

	Parms.CurrentLevel = CurrentLevel;
	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (MaskCurve != nullptr)
		*MaskCurve = Parms.MaskCurve;

	if (ScrollCurve != nullptr)
		*ScrollCurve = Parms.ScrollCurve;

}


// Function BattleManagerBP.BattleManagerBP_C.InitUsedInvadeMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::InitUsedInvadeMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitUsedInvadeMonster");

	Params::ABattleManagerBP_C_InitUsedInvadeMonster_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckUsedAwakingMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrCheckMonsterLabel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::CheckUsedAwakingMonster(class FName StrCheckMonsterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckUsedAwakingMonster");

	Params::ABattleManagerBP_C_CheckUsedAwakingMonster_Params Parms{};

	Parms.StrCheckMonsterLabel = StrCheckMonsterLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddUsedAwakingMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrUsedMonsterLabel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddUsedAwakingMonster(class FName StrUsedMonsterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddUsedAwakingMonster");

	Params::ABattleManagerBP_C_AddUsedAwakingMonster_Params Parms{};

	Parms.StrUsedMonsterLabel = StrUsedMonsterLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetCurrentAdditiveOrderData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBattleAdditiveOrderData    CAdditiveOrderData                                               (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::GetCurrentAdditiveOrderData(struct FBattleAdditiveOrderData* CAdditiveOrderData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetCurrentAdditiveOrderData");

	Params::ABattleManagerBP_C_GetCurrentAdditiveOrderData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CAdditiveOrderData != nullptr)
		*CAdditiveOrderData = std::move(Parms.CAdditiveOrderData);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.CreateRareEnemyReplaceList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyGroup                 EnemyGroup                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FRareEnemyParam             RareEnemyParam                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                               RareEnemyCatlin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                ReplaceList                                                      (Parm, OutParm)

void ABattleManagerBP_C::CreateRareEnemyReplaceList(struct FEnemyGroup& EnemyGroup, struct FRareEnemyParam& RareEnemyParam, bool RareEnemyCatlin, TArray<class FName>* ReplaceList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateRareEnemyReplaceList");

	Params::ABattleManagerBP_C_CreateRareEnemyReplaceList_Params Parms{};

	Parms.EnemyGroup = EnemyGroup;
	Parms.RareEnemyParam = RareEnemyParam;
	Parms.RareEnemyCatlin = RareEnemyCatlin;

	UObject::ProcessEvent(Func, &Parms);

	if (ReplaceList != nullptr)
		*ReplaceList = std::move(Parms.ReplaceList);

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleBoostMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bBoostMode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::GetBattleBoostMode(bool* bBoostMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleBoostMode");

	Params::ABattleManagerBP_C_GetBattleBoostMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bBoostMode != nullptr)
		*bBoostMode = Parms.bBoostMode;

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleActiveCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CActiveCharacter                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetBattleActiveCharacter(class ABattleCharacterBase** CActiveCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleActiveCharacter");

	Params::ABattleManagerBP_C_GetBattleActiveCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CActiveCharacter != nullptr)
		*CActiveCharacter = Parms.CActiveCharacter;

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleFieldDiseaseParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFIELD_DISEASE_TYPE     DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExecDiseaseHandler         GetDisease                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::GetBattleFieldDiseaseParam(enum class EFIELD_DISEASE_TYPE DiseaseType, struct FExecDiseaseHandler* GetDisease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleFieldDiseaseParam");

	Params::ABattleManagerBP_C_GetBattleFieldDiseaseParam_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (GetDisease != nullptr)
		*GetDisease = std::move(Parms.GetDisease);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetMapObjectRoot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      CMapObjectRoot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetMapObjectRoot(class AActor** CMapObjectRoot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetMapObjectRoot");

	Params::ABattleManagerBP_C_GetMapObjectRoot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CMapObjectRoot != nullptr)
		*CMapObjectRoot = Parms.CMapObjectRoot;

}


// Function BattleManagerBP.BattleManagerBP_C.PlayVictoryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayVictoryAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayVictoryAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CheckBattleTutorial_OpenCommandMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::CheckBattleTutorial_OpenCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckBattleTutorial_OpenCommandMenu");

	Params::ABattleManagerBP_C_CheckBattleTutorial_OpenCommandMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckConditionSpecialAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESpecialActionType      SpecialActionType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindSpecialAction                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckConditionSpecialAction(enum class ESpecialActionType SpecialActionType, bool* FindSpecialAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckConditionSpecialAction");

	Params::ABattleManagerBP_C_CheckConditionSpecialAction_Params Parms{};

	Parms.SpecialActionType = SpecialActionType;

	UObject::ProcessEvent(Func, &Parms);

	if (FindSpecialAction != nullptr)
		*FindSpecialAction = Parms.FindSpecialAction;

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleSequencerObject_SteamEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEmitter*                    CSteamAuraA                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEmitter*                    CSteamFieldA                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetBattleSequencerObject_SteamEffect(class AEmitter** CSteamAuraA, class AEmitter** CSteamFieldA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleSequencerObject_SteamEffect");

	Params::ABattleManagerBP_C_GetBattleSequencerObject_SteamEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CSteamAuraA != nullptr)
		*CSteamAuraA = Parms.CSteamAuraA;

	if (CSteamFieldA != nullptr)
		*CSteamFieldA = Parms.CSteamFieldA;

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleSequencerObject_AntlionSand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AStaticMeshActor*            CAntlionSandA                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshActor*            CAntlionSandB                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetBattleSequencerObject_AntlionSand(class AStaticMeshActor** CAntlionSandA, class AStaticMeshActor** CAntlionSandB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleSequencerObject_AntlionSand");

	Params::ABattleManagerBP_C_GetBattleSequencerObject_AntlionSand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CAntlionSandA != nullptr)
		*CAntlionSandA = Parms.CAntlionSandA;

	if (CAntlionSandB != nullptr)
		*CAntlionSandB = Parms.CAntlionSandB;

}


// Function BattleManagerBP.BattleManagerBP_C.CreateBattleVoiceList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CreateBattleVoiceList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateBattleVoiceList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleVoiceSetList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrCharacterID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                AstrBattleVoiceLabel                                             (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::GetBattleVoiceSetList(class FName StrCharacterID, TArray<class FName>* AstrBattleVoiceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleVoiceSetList");

	Params::ABattleManagerBP_C_GetBattleVoiceSetList_Params Parms{};

	Parms.StrCharacterID = StrCharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (AstrBattleVoiceLabel != nullptr)
		*AstrBattleVoiceLabel = std::move(Parms.AstrBattleVoiceLabel);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleInfomation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrEnemyGroupID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bBossBattle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bFieldCommandBattle                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::GetBattleInfomation(class FName* StrEnemyGroupID, bool* bBossBattle, bool* bFieldCommandBattle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleInfomation");

	Params::ABattleManagerBP_C_GetBattleInfomation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StrEnemyGroupID != nullptr)
		*StrEnemyGroupID = Parms.StrEnemyGroupID;

	if (bBossBattle != nullptr)
		*bBossBattle = Parms.bBossBattle;

	if (bFieldCommandBattle != nullptr)
		*bFieldCommandBattle = Parms.bFieldCommandBattle;

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.Update Disease for Disable Action
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableAction                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DiseaseWaitTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::Update_Disease_for_Disable_Action(bool* DisableAction, float* DiseaseWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Update Disease for Disable Action");

	Params::ABattleManagerBP_C_Update_Disease_for_Disable_Action_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DisableAction != nullptr)
		*DisableAction = Parms.DisableAction;

	if (DiseaseWaitTime != nullptr)
		*DiseaseWaitTime = Parms.DiseaseWaitTime;

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_IsReadyBattleSuspend
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::Debug_IsReadyBattleSuspend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_IsReadyBattleSuspend");

	Params::ABattleManagerBP_C_Debug_IsReadyBattleSuspend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetRespawnableEnemy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NIndex                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CRespawnableEnemy                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFindEnemy                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::GetRespawnableEnemy(int32 NIndex, class ABattleCharacterBase** CRespawnableEnemy, bool* bFindEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetRespawnableEnemy");

	Params::ABattleManagerBP_C_GetRespawnableEnemy_Params Parms{};

	Parms.NIndex = NIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (CRespawnableEnemy != nullptr)
		*CRespawnableEnemy = Parms.CRespawnableEnemy;

	if (bFindEnemy != nullptr)
		*bFindEnemy = Parms.bFindEnemy;

}


// Function BattleManagerBP.BattleManagerBP_C.IsChangeBattlePartyEnable
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bEnable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bExecutable                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsChangeBattlePartyEnable(bool* bEnable, bool* bExecutable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsChangeBattlePartyEnable");

	Params::ABattleManagerBP_C_IsChangeBattlePartyEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

	if (bExecutable != nullptr)
		*bExecutable = Parms.bExecutable;

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateEightBattle_DecideAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UpdateEightBattle_DecideAction(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateEightBattle_DecideAction");

	Params::ABattleManagerBP_C_UpdateEightBattle_DecideAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleManagerBP.BattleManagerBP_C.ChangeBattlePartyForDefeatChange
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ChangeBattlePartyForDefeatChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ChangeBattlePartyForDefeatChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateEightBattle_EndTurn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UpdateEightBattle_EndTurn(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateEightBattle_EndTurn");

	Params::ABattleManagerBP_C_UpdateEightBattle_EndTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForSong
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForSong(class ABattleCharacterBase* Enforcer, class FName AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForSong");

	Params::ABattleManagerBP_C_AddAdditiveOrderForSong_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.RequestChangeBattleParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::RequestChangeBattleParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestChangeBattleParty");

	Params::ABattleManagerBP_C_RequestChangeBattleParty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ChangeBattleParty
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ChangeBattleParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ChangeBattleParty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayEnemySideVoice_BattleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayEnemySideVoice_BattleStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayEnemySideVoice_BattleStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.InitBattleFirstActionCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::InitBattleFirstActionCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitBattleFirstActionCharacter");

	Params::ABattleManagerBP_C_InitBattleFirstActionCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddBattleFirstActionCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CActionCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddBattleFirstActionCharacter(class ABattleCharacterBase* CActionCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddBattleFirstActionCharacter");

	Params::ABattleManagerBP_C_AddBattleFirstActionCharacter_Params Parms{};

	Parms.CActionCharacter = CActionCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForChaseAttack
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>AcTargetList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForChaseAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForChaseAttack");

	Params::ABattleManagerBP_C_AddAdditiveOrderForChaseAttack_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;
	Parms.AcTargetList = AcTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForReraise
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForReraise(class ABattleCharacterBase* Enforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForReraise");

	Params::ABattleManagerBP_C_AddAdditiveOrderForReraise_Params Parms{};

	Parms.Enforcer = Enforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForReflection
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StrAbilityName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StrAilmentName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInvocationValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         EAttribute                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTargetList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForReflection(class ABattleCharacterBase* Enforcer, class FName StrAbilityName, class FName StrAilmentName, int32 NInvocationValue, enum class EATTRIBUTE_TYPE EAttribute, class ABattleCharacterBase* CTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForReflection");

	Params::ABattleManagerBP_C_AddAdditiveOrderForReflection_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.StrAbilityName = StrAbilityName;
	Parms.StrAilmentName = StrAilmentName;
	Parms.NInvocationValue = NInvocationValue;
	Parms.EAttribute = EAttribute;
	Parms.CTargetList = CTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForCounter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOnDead                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCounterOnce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABattleCharacterBase*        CTargetList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForCounter(class ABattleCharacterBase* Enforcer, class FName AbilityName, bool bOnDead, bool bCounterOnce, class ABattleCharacterBase* CTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForCounter");

	Params::ABattleManagerBP_C_AddAdditiveOrderForCounter_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;
	Parms.bOnDead = bOnDead;
	Parms.bCounterOnce = bCounterOnce;
	Parms.CTargetList = CTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.RequestBattleEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>EventSequence                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// class ABattleCharacterBase*        MainActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        EventEnforcer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::RequestBattleEvent(TSoftObjectPtr<class ULevelSequence>& EventSequence, class ABattleCharacterBase* MainActor, class ABattleCharacterBase* EventEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestBattleEvent");

	Params::ABattleManagerBP_C_RequestBattleEvent_Params Parms{};

	Parms.EventSequence = EventSequence;
	Parms.MainActor = MainActor;
	Parms.EventEnforcer = EventEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.CheckCondition_LastAct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               EnableLastAct                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckCondition_LastAct(bool* EnableLastAct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckCondition_LastAct");

	Params::ABattleManagerBP_C_CheckCondition_LastAct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnableLastAct != nullptr)
		*EnableLastAct = Parms.EnableLastAct;

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateBattleFieldDisease
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::UpdateBattleFieldDisease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateBattleFieldDisease");

	Params::ABattleManagerBP_C_UpdateBattleFieldDisease_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleFieldDisease
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFIELD_DISEASE_TYPE     DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::ExecBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleFieldDisease");

	Params::ABattleManagerBP_C_ExecBattleFieldDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.SearchBattleFieldDisease
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFIELD_DISEASE_TYPE     DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::SearchBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SearchBattleFieldDisease");

	Params::ABattleManagerBP_C_SearchBattleFieldDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.RemoveBattleFieldDisease
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFIELD_DISEASE_TYPE     DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::RemoveBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RemoveBattleFieldDisease");

	Params::ABattleManagerBP_C_RemoveBattleFieldDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddBattleFieldDisease
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFIELD_DISEASE_TYPE     DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationTurn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DiseaseLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType, int32 InvocationValue, int32 InvocationTurn, int32 DiseaseLevel, class ABattleCharacterBase* Enforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddBattleFieldDisease");

	Params::ABattleManagerBP_C_AddBattleFieldDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;
	Parms.InvocationValue = InvocationValue;
	Parms.InvocationTurn = InvocationTurn;
	Parms.DiseaseLevel = DiseaseLevel;
	Parms.Enforcer = Enforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.IsAllowChangeBattleSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::IsAllowChangeBattleSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsAllowChangeBattleSpeed");

	Params::ABattleManagerBP_C_IsAllowChangeBattleSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ExecChangeBattleSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::ExecChangeBattleSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecChangeBattleSpeed");

	Params::ABattleManagerBP_C_ExecChangeBattleSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ReleasePotentialityAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ReleasePotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ReleasePotentialityAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.InitializeBeginOrder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::InitializeBeginOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitializeBeginOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForRepeat
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>AcTargetList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForRepeat(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForRepeat");

	Params::ABattleManagerBP_C_AddAdditiveOrderForRepeat_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;
	Parms.AcTargetList = AcTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForEnchant
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>AcTargetList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForEnchant(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForEnchant");

	Params::ABattleManagerBP_C_AddAdditiveOrderForEnchant_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;
	Parms.AcTargetList = AcTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForLastAttack
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>AcTargetList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForLastAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForLastAttack");

	Params::ABattleManagerBP_C_AddAdditiveOrderForLastAttack_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;
	Parms.AcTargetList = AcTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForFirstAttack
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>AcTargetList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForFirstAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForFirstAttack");

	Params::ABattleManagerBP_C_AddAdditiveOrderForFirstAttack_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;
	Parms.AcTargetList = AcTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ExecDebugPlayBattleEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>CEventSequence                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// class ABattleCharacterBase*        CMainActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CEventEnforcer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ExecDebugPlayBattleEvent(TSoftObjectPtr<class ULevelSequence>& CEventSequence, class ABattleCharacterBase* CMainActor, class ABattleCharacterBase* CEventEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecDebugPlayBattleEvent");

	Params::ABattleManagerBP_C_ExecDebugPlayBattleEvent_Params Parms{};

	Parms.CEventSequence = CEventSequence;
	Parms.CMainActor = CMainActor;
	Parms.CEventEnforcer = CEventEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestPlayActionWaitTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FWaitTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::RequestPlayActionWaitTime(float FWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestPlayActionWaitTime");

	Params::ABattleManagerBP_C_RequestPlayActionWaitTime_Params Parms{};

	Parms.FWaitTime = FWaitTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckSpecialActionTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    ECharaID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActiveCharaCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETUTORIAL_TYPE          OpenTutorialType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindTutorial                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckSpecialActionTutorial(enum class EPlayableCharacterID ECharaID, bool IsActiveCharaCheck, enum class ETUTORIAL_TYPE* OpenTutorialType, bool* FindTutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckSpecialActionTutorial");

	Params::ABattleManagerBP_C_CheckSpecialActionTutorial_Params Parms{};

	Parms.ECharaID = ECharaID;
	Parms.IsActiveCharaCheck = IsActiveCharaCheck;

	UObject::ProcessEvent(Func, &Parms);

	if (OpenTutorialType != nullptr)
		*OpenTutorialType = Parms.OpenTutorialType;

	if (FindTutorial != nullptr)
		*FindTutorial = Parms.FindTutorial;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckBattleTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_FLOW_STATE      CurrentFlow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETUTORIAL_TYPE          OpenTutorialType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindTutorial                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckBattleTutorial(enum class EBATTLE_FLOW_STATE CurrentFlow, enum class ETUTORIAL_TYPE* OpenTutorialType, bool* FindTutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckBattleTutorial");

	Params::ABattleManagerBP_C_CheckBattleTutorial_Params Parms{};

	Parms.CurrentFlow = CurrentFlow;

	UObject::ProcessEvent(Func, &Parms);

	if (OpenTutorialType != nullptr)
		*OpenTutorialType = Parms.OpenTutorialType;

	if (FindTutorial != nullptr)
		*FindTutorial = Parms.FindTutorial;

}


// Function BattleManagerBP.BattleManagerBP_C.BattleTutorial
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Check Battle Job in Party
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJOB_TYPE               TargetJob                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindJob                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABattleCharacterBase*>JobCharacter                                                     (Parm, OutParm)

void ABattleManagerBP_C::Check_Battle_Job_in_Party(enum class EJOB_TYPE TargetJob, bool* FindJob, TArray<class ABattleCharacterBase*>* JobCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Check Battle Job in Party");

	Params::ABattleManagerBP_C_Check_Battle_Job_in_Party_Params Parms{};

	Parms.TargetJob = TargetJob;

	UObject::ProcessEvent(Func, &Parms);

	if (FindJob != nullptr)
		*FindJob = Parms.FindJob;

	if (JobCharacter != nullptr)
		*JobCharacter = std::move(Parms.JobCharacter);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestLoadBattleCharacterResouce
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::RequestLoadBattleCharacterResouce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestLoadBattleCharacterResouce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecSpecialAction_BuffInNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    ActionEnforcer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ExecSpecialAction_BuffInNight(class ABattleCharacterBaseBP_C* ActionEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecSpecialAction_BuffInNight");

	Params::ABattleManagerBP_C_ExecSpecialAction_BuffInNight_Params Parms{};

	Parms.ActionEnforcer = ActionEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecSpecialAction_DebuffInNight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    ActionEnforcer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ExecSpecialAction_DebuffInNight(class ABattleCharacterBaseBP_C* ActionEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecSpecialAction_DebuffInNight");

	Params::ABattleManagerBP_C_ExecSpecialAction_DebuffInNight_Params Parms{};

	Parms.ActionEnforcer = ActionEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.CheckSpecialActionInParty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESpecialActionType      SpecialActionType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindSpecialAction                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABattleCharacterBaseBP_C*    SpecialActionEnforcer                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::CheckSpecialActionInParty(enum class ESpecialActionType SpecialActionType, bool* FindSpecialAction, class ABattleCharacterBaseBP_C** SpecialActionEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckSpecialActionInParty");

	Params::ABattleManagerBP_C_CheckSpecialActionInParty_Params Parms{};

	Parms.SpecialActionType = SpecialActionType;

	UObject::ProcessEvent(Func, &Parms);

	if (FindSpecialAction != nullptr)
		*FindSpecialAction = Parms.FindSpecialAction;

	if (SpecialActionEnforcer != nullptr)
		*SpecialActionEnforcer = Parms.SpecialActionEnforcer;

}


// Function BattleManagerBP.BattleManagerBP_C.ExecDebugPlayAbility
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrAbilityLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPlayerSide                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::ExecDebugPlayAbility(class FName StrAbilityLabel, int32 NBoostLevel, bool bPlayerSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecDebugPlayAbility");

	Params::ABattleManagerBP_C_ExecDebugPlayAbility_Params Parms{};

	Parms.StrAbilityLabel = StrAbilityLabel;
	Parms.NBoostLevel = NBoostLevel;
	Parms.bPlayerSide = bPlayerSide;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForSignOfBoost
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::AddAdditiveOrderForSignOfBoost(class ABattleCharacterBase* Enforcer, class FName AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddAdditiveOrderForSignOfBoost");

	Params::ABattleManagerBP_C_AddAdditiveOrderForSignOfBoost_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilityName = AbilityName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.ExecInitializeEnemyResourceList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::ExecInitializeEnemyResourceList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecInitializeEnemyResourceList");

	Params::ABattleManagerBP_C_ExecInitializeEnemyResourceList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.CreateStationaryBattleUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::CreateStationaryBattleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateStationaryBattleUI");

	Params::ABattleManagerBP_C_CreateStationaryBattleUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.SetBattleStartType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_START_TYPE      StartType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WaterSide                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::SetBattleStartType(enum class EBATTLE_START_TYPE StartType, bool WaterSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetBattleStartType");

	Params::ABattleManagerBP_C_SetBattleStartType_Params Parms{};

	Parms.StartType = StartType;
	Parms.WaterSide = WaterSide;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.FinishDebugPlayAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::FinishDebugPlayAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishDebugPlayAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecDebugPlayAbility_Implemantation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            ActionCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnforcePlayerSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_SEQUENCE_PATTERN_TYPESequencePattern                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EnemyIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UseActionLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ExecDebugPlayAbility_Implemantation(const struct FAbilityDataBase& ActionCommand, int32 BoostLevel, bool EnforcePlayerSide, enum class EBATTLE_SEQUENCE_PATTERN_TYPE SequencePattern, int32 EnemyIndex, class FName UseActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecDebugPlayAbility_Implemantation");

	Params::ABattleManagerBP_C_ExecDebugPlayAbility_Implemantation_Params Parms{};

	Parms.ActionCommand = ActionCommand;
	Parms.BoostLevel = BoostLevel;
	Parms.EnforcePlayerSide = EnforcePlayerSide;
	Parms.SequencePattern = SequencePattern;
	Parms.EnemyIndex = EnemyIndex;
	Parms.UseActionLabel = UseActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.IsBoostCommandEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::IsBoostCommandEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsBoostCommandEnable");

	Params::ABattleManagerBP_C_IsBoostCommandEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.BattleSuspend
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleSuspend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleSuspend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.InitializeRewardData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::InitializeRewardData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitializeRewardData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CheckBattleDefeat
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bBattleDefeat                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEightBattleChange                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckBattleDefeat(bool* bBattleDefeat, bool* bEightBattleChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckBattleDefeat");

	Params::ABattleManagerBP_C_CheckBattleDefeat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bBattleDefeat != nullptr)
		*bBattleDefeat = Parms.bBattleDefeat;

	if (bEightBattleChange != nullptr)
		*bEightBattleChange = Parms.bEightBattleChange;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckBattleVictory
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::CheckBattleVictory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckBattleVictory");

	Params::ABattleManagerBP_C_CheckBattleVictory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetActionOrderTimeline
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionOrderTimeLine_C*      ActionOrderTimeLine                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetActionOrderTimeline(class UActionOrderTimeLine_C** ActionOrderTimeLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetActionOrderTimeline");

	Params::ABattleManagerBP_C_GetActionOrderTimeline_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionOrderTimeLine != nullptr)
		*ActionOrderTimeLine = Parms.ActionOrderTimeLine;

}


// Function BattleManagerBP.BattleManagerBP_C.SearchPlayerCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    ECharaID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        PlayerCharacter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFindCharacter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCharacterAlive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SearchPlayerCharacter(enum class EPlayableCharacterID ECharaID, class ABattleCharacterBase** PlayerCharacter, bool* bFindCharacter, bool* bCharacterAlive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SearchPlayerCharacter");

	Params::ABattleManagerBP_C_SearchPlayerCharacter_Params Parms{};

	Parms.ECharaID = ECharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerCharacter != nullptr)
		*PlayerCharacter = Parms.PlayerCharacter;

	if (bFindCharacter != nullptr)
		*bFindCharacter = Parms.bFindCharacter;

	if (bCharacterAlive != nullptr)
		*bCharacterAlive = Parms.bCharacterAlive;

}


// Function BattleManagerBP.BattleManagerBP_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SequenceRequestCallback");

	Params::ABattleManagerBP_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.IsItemCommandEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::IsItemCommandEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsItemCommandEnable");

	Params::ABattleManagerBP_C_IsItemCommandEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.IsGuardCommandEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::IsGuardCommandEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsGuardCommandEnable");

	Params::ABattleManagerBP_C_IsGuardCommandEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.IsEscapeCommandEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleManagerBP_C::IsEscapeCommandEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsEscapeCommandEnable");

	Params::ABattleManagerBP_C_IsEscapeCommandEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleManagerBP.BattleManagerBP_C.GetLevelupActionEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::GetLevelupActionEnable(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetLevelupActionEnable");

	Params::ABattleManagerBP_C_GetLevelupActionEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleManagerBP.BattleManagerBP_C.GetLastActionPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    LastActionPlayer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetLastActionPlayer(class ABattleCharacterBaseBP_C** LastActionPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetLastActionPlayer");

	Params::ABattleManagerBP_C_GetLastActionPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LastActionPlayer != nullptr)
		*LastActionPlayer = Parms.LastActionPlayer;

}


// Function BattleManagerBP.BattleManagerBP_C.BattleStartEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleStartEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Get Battle Supporter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleSupporterBP_C*>BattleSupporter                                                  (Parm, OutParm)

void ABattleManagerBP_C::Get_Battle_Supporter(TArray<class ABattleSupporterBP_C*>* BattleSupporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Get Battle Supporter");

	Params::ABattleManagerBP_C_Get_Battle_Supporter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleSupporter != nullptr)
		*BattleSupporter = std::move(Parms.BattleSupporter);

}


// Function BattleManagerBP.BattleManagerBP_C.DialogCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::DialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "DialogCallback");

	Params::ABattleManagerBP_C_DialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetLastEnemyOverKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOverKillEnemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetLastEnemyOverKill(bool IsOverKillEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetLastEnemyOverKill");

	Params::ABattleManagerBP_C_SetLastEnemyOverKill_Params Parms{};

	Parms.IsOverKillEnemy = IsOverKillEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.On Change Potentiality Action
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::On_Change_Potentiality_Action()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "On Change Potentiality Action");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SettingReplayCallSupporter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SupporterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SettingReplayCallSupporter(int32 SupporterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SettingReplayCallSupporter");

	Params::ABattleManagerBP_C_SettingReplayCallSupporter_Params Parms{};

	Parms.SupporterID = SupporterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.GetEnemyWeaknessOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeaknessOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::GetEnemyWeaknessOpen(int32 CharacterID, int32* WeaknessOpen, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetEnemyWeaknessOpen");

	Params::ABattleManagerBP_C_GetEnemyWeaknessOpen_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaknessOpen != nullptr)
		*WeaknessOpen = Parms.WeaknessOpen;

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateEnemyWeaknessOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::UpdateEnemyWeaknessOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateEnemyWeaknessOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CreateBattleReplay_PostPlayAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CreateBattleReplay_PostPlayAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateBattleReplay_PostPlayAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetPassSPValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetPassSPValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetPassSPValue");

	Params::ABattleManagerBP_C_GetPassSPValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BattleManagerBP.BattleManagerBP_C.SetPassSPValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SetPassSPValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetPassSPValue");

	Params::ABattleManagerBP_C_SetPassSPValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateBackPackItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::UpdateBackPackItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateBackPackItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.InitializeEndrollSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::InitializeEndrollSaveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitializeEndrollSaveData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CheckBattleEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BattleEnd                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckBattleEnd(bool* BattleEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckBattleEnd");

	Params::ABattleManagerBP_C_CheckBattleEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleEnd != nullptr)
		*BattleEnd = Parms.BattleEnd;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckAdditiveOrderBody
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleAdditiveOrderData>OrderList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EADDITIVE_ORDER_CATEGORYCheckOrderCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExecAdditiveTurn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckAdditiveOrderBody(TArray<struct FBattleAdditiveOrderData>& OrderList, enum class EADDITIVE_ORDER_CATEGORY CheckOrderCategory, bool* ExecAdditiveTurn, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckAdditiveOrderBody");

	Params::ABattleManagerBP_C_CheckAdditiveOrderBody_Params Parms{};

	Parms.OrderList = OrderList;
	Parms.CheckOrderCategory = CheckOrderCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (ExecAdditiveTurn != nullptr)
		*ExecAdditiveTurn = Parms.ExecAdditiveTurn;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.CheckAdditiveOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleAdditiveOrderData>OrderList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EADDITIVE_ORDER_CATEGORYCheckOrderCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExecAdditiveTurn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckAdditiveOrder(TArray<struct FBattleAdditiveOrderData>& OrderList, enum class EADDITIVE_ORDER_CATEGORY CheckOrderCategory, bool* ExecAdditiveTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckAdditiveOrder");

	Params::ABattleManagerBP_C_CheckAdditiveOrder_Params Parms{};

	Parms.OrderList = OrderList;
	Parms.CheckOrderCategory = CheckOrderCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (ExecAdditiveTurn != nullptr)
		*ExecAdditiveTurn = Parms.ExecAdditiveTurn;

}


// Function BattleManagerBP.BattleManagerBP_C.SetDebugDisableSubSupportCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetDebugDisableSubSupportCounter(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetDebugDisableSubSupportCounter");

	Params::ABattleManagerBP_C_SetDebugDisableSubSupportCounter_Params Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetSupporterReturn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetSupporterReturn(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetSupporterReturn");

	Params::ABattleManagerBP_C_SetSupporterReturn_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.EscapeFailed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::EscapeFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "EscapeFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleEndDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleEndDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleEndDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayPlayerSideVoice_BattleStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayPlayerSideVoice_BattleStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayPlayerSideVoice_BattleStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetBoostMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsBoost                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::GetBoostMode(bool* IsBoost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBoostMode");

	Params::ABattleManagerBP_C_GetBoostMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsBoost != nullptr)
		*IsBoost = Parms.IsBoost;

}


// Function BattleManagerBP.BattleManagerBP_C.SetBoostMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBoost                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetBoostMode(bool IsBoost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetBoostMode");

	Params::ABattleManagerBP_C_SetBoostMode_Params Parms{};

	Parms.IsBoost = IsBoost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.InitializeCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::InitializeCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitializeCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.InitializeBattleFieldDisease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::InitializeBattleFieldDisease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "InitializeBattleFieldDisease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Initialize Additive Order
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Initialize_Additive_Order()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Initialize Additive Order");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CheckBattleEventPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CheckBattleEventPlay(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CheckBattleEventPlay");

	Params::ABattleManagerBP_C_CheckBattleEventPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.GetCharacterByBattleID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BattleID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetCharacterByBattleID(int32 BattleID, class ABattleCharacterBaseBP_C** Enforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetCharacterByBattleID");

	Params::ABattleManagerBP_C_GetCharacterByBattleID_Params Parms{};

	Parms.BattleID = BattleID;

	UObject::ProcessEvent(Func, &Parms);

	if (Enforcer != nullptr)
		*Enforcer = Parms.Enforcer;

}


// Function BattleManagerBP.BattleManagerBP_C.CreateBattleReplay_BeginTurn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CreateBattleReplay_BeginTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateBattleReplay_BeginTurn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SaveBattleReplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SaveBattleReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SaveBattleReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.DebugRareCat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::DebugRareCat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "DebugRareCat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SettingReplayBattleField
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SettingReplayBattleField()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SettingReplayBattleField");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SetSupporterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetSupporterVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetSupporterVisibility");

	Params::ABattleManagerBP_C_SetSupporterVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SettingReplayCharacterStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SettingReplayCharacterStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SettingReplayCharacterStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SetDebugEnemyUseAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SetDebugEnemyUseAbility(class FName ABILITY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetDebugEnemyUseAbility");

	Params::ABattleManagerBP_C_SetDebugEnemyUseAbility_Params Parms{};

	Parms.ABILITY = ABILITY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetDebugResultEXPValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SetDebugResultEXPValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetDebugResultEXPValue");

	Params::ABattleManagerBP_C_SetDebugResultEXPValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestBattleEvent_Old
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>EventSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABattleCharacterBase*        MainActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        EventEnforcer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::RequestBattleEvent_Old(TSoftObjectPtr<class ULevelSequence> EventSequence, class ABattleCharacterBase* MainActor, class ABattleCharacterBase* EventEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestBattleEvent_Old");

	Params::ABattleManagerBP_C_RequestBattleEvent_Old_Params Parms{};

	Parms.EventSequence = EventSequence;
	Parms.MainActor = MainActor;
	Parms.EventEnforcer = EventEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetCallEnemyWeaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HPRatio                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SubShieldPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SetCallEnemyWeaken(int32 HPRatio, int32 SubShieldPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetCallEnemyWeaken");

	Params::ABattleManagerBP_C_SetCallEnemyWeaken_Params Parms{};

	Parms.HPRatio = HPRatio;
	Parms.SubShieldPoint = SubShieldPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.GetCallEnemyWeaken
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HPRatio                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShieldPoint                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::GetCallEnemyWeaken(int32* HPRatio, int32* ShieldPoint, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetCallEnemyWeaken");

	Params::ABattleManagerBP_C_GetCallEnemyWeaken_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HPRatio != nullptr)
		*HPRatio = Parms.HPRatio;

	if (ShieldPoint != nullptr)
		*ShieldPoint = Parms.ShieldPoint;

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleManagerBP.BattleManagerBP_C.FinishDoomStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleDeathCount_C*         DoomUI                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::FinishDoomStatusUI(class UBattleDeathCount_C* DoomUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishDoomStatusUI");

	Params::ABattleManagerBP_C_FinishDoomStatusUI_Params Parms{};

	Parms.DoomUI = DoomUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.GetDoomStatusUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattleDeathCount_C*         DoomUI                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetDoomStatusUI(bool* Enable, class UBattleDeathCount_C** DoomUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetDoomStatusUI");

	Params::ABattleManagerBP_C_GetDoomStatusUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (DoomUI != nullptr)
		*DoomUI = Parms.DoomUI;

}


// Function BattleManagerBP.BattleManagerBP_C.CalcBonusReward
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GetExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GetJobPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GetMoney                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BreakBonus                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OneTurnKillBonus                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoDamageBonus                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OverKillBonus                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::CalcBonusReward(int32 GetExp, int32 GetJobPoint, int32 GetMoney, int32* BreakBonus, int32* OneTurnKillBonus, int32* NoDamageBonus, int32* OverKillBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CalcBonusReward");

	Params::ABattleManagerBP_C_CalcBonusReward_Params Parms{};

	Parms.GetExp = GetExp;
	Parms.GetJobPoint = GetJobPoint;
	Parms.GetMoney = GetMoney;

	UObject::ProcessEvent(Func, &Parms);

	if (BreakBonus != nullptr)
		*BreakBonus = Parms.BreakBonus;

	if (OneTurnKillBonus != nullptr)
		*OneTurnKillBonus = Parms.OneTurnKillBonus;

	if (NoDamageBonus != nullptr)
		*NoDamageBonus = Parms.NoDamageBonus;

	if (OverKillBonus != nullptr)
		*OverKillBonus = Parms.OverKillBonus;

}


// Function BattleManagerBP.BattleManagerBP_C.AddPlayerDamageCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::AddPlayerDamageCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddPlayerDamageCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Set Character Harden Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::Set_Character_Harden_Dead(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Set Character Harden Dead");

	Params::ABattleManagerBP_C_Set_Character_Harden_Dead_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateDiseaseByCharacterState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UpdateDiseaseByCharacterState(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateDiseaseByCharacterState");

	Params::ABattleManagerBP_C_UpdateDiseaseByCharacterState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleManagerBP.BattleManagerBP_C.ReplaceRareEnemy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyData                  EnemyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        EnemyRowID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RareEnemyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnemyData                  NewEnemyData                                                     (Parm, OutParm, HasGetValueTypeHash)
// class FName                        NewEnemyRowID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnemyData                  OutputPin                                                        (Parm, OutParm, HasGetValueTypeHash)

void ABattleManagerBP_C::ReplaceRareEnemy(struct FEnemyData& EnemyData, class FName EnemyRowID, int32 RareEnemyType, struct FEnemyData* NewEnemyData, class FName* NewEnemyRowID, struct FEnemyData* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ReplaceRareEnemy");

	Params::ABattleManagerBP_C_ReplaceRareEnemy_Params Parms{};

	Parms.EnemyData = EnemyData;
	Parms.EnemyRowID = EnemyRowID;
	Parms.RareEnemyType = RareEnemyType;

	UObject::ProcessEvent(Func, &Parms);

	if (NewEnemyData != nullptr)
		*NewEnemyData = std::move(Parms.NewEnemyData);

	if (NewEnemyRowID != nullptr)
		*NewEnemyRowID = Parms.NewEnemyRowID;

	if (OutputPin != nullptr)
		*OutputPin = std::move(Parms.OutputPin);

}


// Function BattleManagerBP.BattleManagerBP_C.FinishBattleDamageUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleDamageNumber_C*       DamageUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::FinishBattleDamageUI(class UBattleDamageNumber_C* DamageUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishBattleDamageUI");

	Params::ABattleManagerBP_C_FinishBattleDamageUI_Params Parms{};

	Parms.DamageUI = DamageUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.GetBattleDamageUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattleDamageNumber_C*       DamageUI                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetBattleDamageUI(bool* Enable, class UBattleDamageNumber_C** DamageUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetBattleDamageUI");

	Params::ABattleManagerBP_C_GetBattleDamageUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (DamageUI != nullptr)
		*DamageUI = Parms.DamageUI;

}


// Function BattleManagerBP.BattleManagerBP_C.BreakCharacterOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BreakCharacterOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BreakCharacterOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetUseActionLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ActionLabel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetUseActionLabel(class FName* ActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetUseActionLabel");

	Params::ABattleManagerBP_C_GetUseActionLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionLabel != nullptr)
		*ActionLabel = Parms.ActionLabel;

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateWeakControl_PostCharaOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecWeakControl                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UpdateWeakControl_PostCharaOrder(bool* ExecWeakControl, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateWeakControl_PostCharaOrder");

	Params::ABattleManagerBP_C_UpdateWeakControl_PostCharaOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecWeakControl != nullptr)
		*ExecWeakControl = Parms.ExecWeakControl;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleManagerBP.BattleManagerBP_C.ResetCharacter_PreAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ResetCharacter_PreAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ResetCharacter_PreAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecSpecialAction_Preparation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionEnforcer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::ExecSpecialAction_Preparation(class ABattleCharacterBase* ActionEnforcer, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecSpecialAction_Preparation");

	Params::ABattleManagerBP_C_ExecSpecialAction_Preparation_Params Parms{};

	Parms.ActionEnforcer = ActionEnforcer;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattleManagerBP.BattleManagerBP_C.SetPlayActionInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InfoText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABattleManagerBP_C::SetPlayActionInfoText(class FText InfoText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetPlayActionInfoText");

	Params::ABattleManagerBP_C_SetPlayActionInfoText_Params Parms{};

	Parms.InfoText = InfoText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetSupportCoverCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SetSupportCoverCharacter(class ABattlePlayerBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetSupportCoverCharacter");

	Params::ABattleManagerBP_C_SetSupportCoverCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.GetSupportCoverCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    CoverTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    CoverCharacter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindCharacter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::GetSupportCoverCharacter(class ABattleCharacterBaseBP_C* CoverTarget, class ABattleCharacterBaseBP_C** CoverCharacter, bool* FindCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetSupportCoverCharacter");

	Params::ABattleManagerBP_C_GetSupportCoverCharacter_Params Parms{};

	Parms.CoverTarget = CoverTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (CoverCharacter != nullptr)
		*CoverCharacter = Parms.CoverCharacter;

	if (FindCharacter != nullptr)
		*FindCharacter = Parms.FindCharacter;

}


// Function BattleManagerBP.BattleManagerBP_C.PostAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PostAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PostAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateCharacterList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::UpdateCharacterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateCharacterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.AdditiveOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::AdditiveOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AdditiveOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PostCharacterOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PostCharacterOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PostCharacterOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PreCharacterOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PreCharacterOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PreCharacterOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.IsBattleManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsBattleManagerReady(bool* Ready)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsBattleManagerReady");

	Params::ABattleManagerBP_C_IsBattleManagerReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_GetBattleCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::Debug_GetBattleCharacter(int32 Index, class ABattleCharacterBaseBP_C** Character, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_GetBattleCharacter");

	Params::ABattleManagerBP_C_Debug_GetBattleCharacter_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_GetAllBattleCharaName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                NameList                                                         (Parm, OutParm)

void ABattleManagerBP_C::Debug_GetAllBattleCharaName(TArray<class FText>* NameList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_GetAllBattleCharaName");

	Params::ABattleManagerBP_C_Debug_GetAllBattleCharaName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NameList != nullptr)
		*NameList = std::move(Parms.NameList);

}


// Function BattleManagerBP.BattleManagerBP_C.SaveEnemyData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SaveEnemyData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SaveEnemyData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.IsBreakEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsBreakEnemy(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsBreakEnemy");

	Params::ABattleManagerBP_C_IsBreakEnemy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.SetInvadeBattleTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BattleTurn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SetInvadeBattleTurn(int32 BattleTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetInvadeBattleTurn");

	Params::ABattleManagerBP_C_SetInvadeBattleTurn_Params Parms{};

	Parms.BattleTurn = BattleTurn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.GetAllBattleParty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ContainDead                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABattlePlayerBP_C*>   TargetSelect                                                     (Parm, OutParm)

void ABattleManagerBP_C::GetAllBattleParty(bool ContainDead, TArray<class ABattlePlayerBP_C*>* TargetSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetAllBattleParty");

	Params::ABattleManagerBP_C_GetAllBattleParty_Params Parms{};

	Parms.ContainDead = ContainDead;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetSelect != nullptr)
		*TargetSelect = std::move(Parms.TargetSelect);

}


// Function BattleManagerBP.BattleManagerBP_C.GetAllBattleEnemy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ContainDead                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABattleEnemyBP_C*>    TargetSelect                                                     (Parm, OutParm)

void ABattleManagerBP_C::GetAllBattleEnemy(bool ContainDead, TArray<class ABattleEnemyBP_C*>* TargetSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetAllBattleEnemy");

	Params::ABattleManagerBP_C_GetAllBattleEnemy_Params Parms{};

	Parms.ContainDead = ContainDead;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetSelect != nullptr)
		*TargetSelect = std::move(Parms.TargetSelect);

}


// Function BattleManagerBP.BattleManagerBP_C.ChangeBattleTurn
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ChangeBattleTurn(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ChangeBattleTurn");

	Params::ABattleManagerBP_C_ChangeBattleTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleManagerBP.BattleManagerBP_C.OpenCharacterStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::OpenCharacterStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "OpenCharacterStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetDefaultTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_TARGET_TYPE     TargetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>Target                                                           (Parm, OutParm)

void ABattleManagerBP_C::GetDefaultTarget(enum class EBATTLE_TARGET_TYPE TargetType, class ABattleCharacterBase* Enforcer, TArray<class ABattleCharacterBase*>* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetDefaultTarget");

	Params::ABattleManagerBP_C_GetDefaultTarget_Params Parms{};

	Parms.TargetType = TargetType;
	Parms.Enforcer = Enforcer;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = std::move(Parms.Target);

}


// Function BattleManagerBP.BattleManagerBP_C.RemoveBattleUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::RemoveBattleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RemoveBattleUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetDeadCharacterNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               PlayerSide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetDeadCharacterNum(bool PlayerSide, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetDeadCharacterNum");

	Params::ABattleManagerBP_C_GetDeadCharacterNum_Params Parms{};

	Parms.PlayerSide = PlayerSide;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function BattleManagerBP.BattleManagerBP_C.CreateManagerForBattle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CreateManagerForBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateManagerForBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CreateBattleUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CreateBattleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateBattleUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CreateBattleCharacter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CreateBattleCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateBattleCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SaveBattleResult
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVictory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SaveBattleResult(bool IsVictory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SaveBattleResult");

	Params::ABattleManagerBP_C_SaveBattleResult_Params Parms{};

	Parms.IsVictory = IsVictory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SupporterOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SupporterOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SupporterOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.GetTargetSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleTargetSelectBP_C*     TargetSelect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetTargetSelect(class ABattleTargetSelectBP_C** TargetSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetTargetSelect");

	Params::ABattleManagerBP_C_GetTargetSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetSelect != nullptr)
		*TargetSelect = Parms.TargetSelect;

}


// Function BattleManagerBP.BattleManagerBP_C.EndPlayAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::EndPlayAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "EndPlayAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.DebugBoostMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::DebugBoostMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "DebugBoostMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CanBattleResultSkip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               CanResultSkip                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::CanBattleResultSkip(bool* CanResultSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CanBattleResultSkip");

	Params::ABattleManagerBP_C_CanBattleResultSkip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanResultSkip != nullptr)
		*CanResultSkip = Parms.CanResultSkip;

}


// Function BattleManagerBP.BattleManagerBP_C.SetVictoryCamera
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SetVictoryCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetVictoryCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Get Current Flow Old
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EBATTLE_FLOW_STATE      CurrentFlow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::Get_Current_Flow_Old(enum class EBATTLE_FLOW_STATE* CurrentFlow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Get Current Flow Old");

	Params::ABattleManagerBP_C_Get_Current_Flow_Old_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFlow != nullptr)
		*CurrentFlow = Parms.CurrentFlow;

}


// Function BattleManagerBP.BattleManagerBP_C.CalcGetReward
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Exp                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Money                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::CalcGetReward(int32* Exp, int32* JobPoint, int32* Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CalcGetReward");

	Params::ABattleManagerBP_C_CalcGetReward_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exp != nullptr)
		*Exp = Parms.Exp;

	if (JobPoint != nullptr)
		*JobPoint = Parms.JobPoint;

	if (Money != nullptr)
		*Money = Parms.Money;

}


// Function BattleManagerBP.BattleManagerBP_C.LotteryDropItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FBattleResultItemDropData>DropItem                                                         (Parm, OutParm)

void ABattleManagerBP_C::LotteryDropItem(TArray<struct FBattleResultItemDropData>* DropItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "LotteryDropItem");

	Params::ABattleManagerBP_C_LotteryDropItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DropItem != nullptr)
		*DropItem = std::move(Parms.DropItem);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateHPState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::UpdateHPState(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateHPState");

	Params::ABattleManagerBP_C_UpdateHPState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleManagerBP.BattleManagerBP_C.DebugBattleEnd
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::DebugBattleEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "DebugBattleEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SetBattleCharacterReadyPosition
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SetBattleCharacterReadyPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetBattleCharacterReadyPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.IsBattleEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::IsBattleEnd(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "IsBattleEnd");

	Params::ABattleManagerBP_C_IsBattleEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function BattleManagerBP.BattleManagerBP_C.GetPlayerBattlePosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartyMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PartyOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WaitPosition                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     StepPosition                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::GetPlayerBattlePosition(int32 Index, int32 PartyMax, const struct FVector& PartyOffset, struct FVector* WaitPosition, struct FVector* StepPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "GetPlayerBattlePosition");

	Params::ABattleManagerBP_C_GetPlayerBattlePosition_Params Parms{};

	Parms.Index = Index;
	Parms.PartyMax = PartyMax;
	Parms.PartyOffset = PartyOffset;

	UObject::ProcessEvent(Func, &Parms);

	if (WaitPosition != nullptr)
		*WaitPosition = std::move(Parms.WaitPosition);

	if (StepPosition != nullptr)
		*StepPosition = std::move(Parms.StepPosition);

}


// Function BattleManagerBP.BattleManagerBP_C.StartNormalBattle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StartNormalBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StartNormalBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.EndProcess
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::EndProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "EndProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CreateEnemyCharacter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyGroup                 EnemyGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABattleManagerBP_C::CreateEnemyCharacter(const struct FEnemyGroup& EnemyGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreateEnemyCharacter");

	Params::ABattleManagerBP_C_CreateEnemyCharacter_Params Parms{};

	Parms.EnemyGroup = EnemyGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.CreatePlayerCharacter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPartyCharacterData> CreatePlayerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsFrontParty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABattlePlayerBP_C*>   CreatePlayerList                                                 (Parm, OutParm)
// TArray<class ABattleSupporterBP_C*>CreateSupporterList                                              (Parm, OutParm)

void ABattleManagerBP_C::CreatePlayerCharacter(TArray<struct FPartyCharacterData>& CreatePlayerData, bool IsFrontParty, TArray<class ABattlePlayerBP_C*>* CreatePlayerList, TArray<class ABattleSupporterBP_C*>* CreateSupporterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CreatePlayerCharacter");

	Params::ABattleManagerBP_C_CreatePlayerCharacter_Params Parms{};

	Parms.CreatePlayerData = CreatePlayerData;
	Parms.IsFrontParty = IsFrontParty;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatePlayerList != nullptr)
		*CreatePlayerList = std::move(Parms.CreatePlayerList);

	if (CreateSupporterList != nullptr)
		*CreateSupporterList = std::move(Parms.CreateSupporterList);

}


// Function BattleManagerBP.BattleManagerBP_C.Escape
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Escape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Escape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleDefeat
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleDefeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleDefeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleResult
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleVictory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleVictory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleVictory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.EndOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::EndOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "EndOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.EnemyOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::EnemyOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "EnemyOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayerOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayerOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayerOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BeginOrder
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BeginOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BeginOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BeginTurn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BeginTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BeginTurn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Start
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Init
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ChangeBattleFlow
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_FLOW_STATE      NextFlow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_FLOW_STATE      CurrentFlow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChange                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::ChangeBattleFlow(enum class EBATTLE_FLOW_STATE NextFlow, enum class EBATTLE_FLOW_STATE* CurrentFlow, bool* IsChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ChangeBattleFlow");

	Params::ABattleManagerBP_C_ChangeBattleFlow_Params Parms{};

	Parms.NextFlow = NextFlow;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFlow != nullptr)
		*CurrentFlow = Parms.CurrentFlow;

	if (IsChange != nullptr)
		*IsChange = Parms.IsChange;

}


// Function BattleManagerBP.BattleManagerBP_C.StatusIconLoop__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StatusIconLoop__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StatusIconLoop__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.StatusIconLoop__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StatusIconLoop__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StatusIconLoop__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleFieldDiseaseMaterialCurve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleFieldDiseaseMaterialCurve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleFieldDiseaseMaterialCurve__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleFieldDiseaseMaterialCurve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleFieldDiseaseMaterialCurve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleFieldDiseaseMaterialCurve__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RecoveryCutDiseaseMaterialCurve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::RecoveryCutDiseaseMaterialCurve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RecoveryCutDiseaseMaterialCurve__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RecoveryCutDiseaseMaterialCurve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::RecoveryCutDiseaseMaterialCurve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RecoveryCutDiseaseMaterialCurve__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleFieldDiseaseMaterialCross__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleFieldDiseaseMaterialCross__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleFieldDiseaseMaterialCross__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleFieldDiseaseMaterialCross__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleFieldDiseaseMaterialCross__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleFieldDiseaseMaterialCross__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.OnLoaded_B4D68C0543DB3287EFCB8EAACE22D2EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABattleManagerBP_C::OnLoaded_B4D68C0543DB3287EFCB8EAACE22D2EE(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "OnLoaded_B4D68C0543DB3287EFCB8EAACE22D2EE");

	Params::ABattleManagerBP_C_OnLoaded_B4D68C0543DB3287EFCB8EAACE22D2EE_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.OnLoaded_63829E714E605D48FF2624940DA26FCD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::OnLoaded_63829E714E605D48FF2624940DA26FCD(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "OnLoaded_63829E714E605D48FF2624940DA26FCD");

	Params::ABattleManagerBP_C_OnLoaded_63829E714E605D48FF2624940DA26FCD_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.OnLoaded_A07274004BA3016F97BDEEAA3D9B33C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABattleManagerBP_C::OnLoaded_A07274004BA3016F97BDEEAA3D9B33C1(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "OnLoaded_A07274004BA3016F97BDEEAA3D9B33C1");

	Params::ABattleManagerBP_C_OnLoaded_A07274004BA3016F97BDEEAA3D9B33C1_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.StartBattleSequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPartyCharacterData> Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEventBGM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInvadeBattle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::StartBattleSequence(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool IsEventBGM, bool IsInvadeBattle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StartBattleSequence");

	Params::ABattleManagerBP_C_StartBattleSequence_Params Parms{};

	Parms.Player = Player;
	Parms.EnemyGroupID = EnemyGroupID;
	Parms.IsEventBGM = IsEventBGM;
	Parms.IsInvadeBattle = IsInvadeBattle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_PlusButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Debug_PlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_PlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_ActionOrderChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Debug_ActionOrderChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_ActionOrderChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_PlayerStatusChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Debug_PlayerStatusChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_PlayerStatusChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_PlayOpenSubIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Debug_PlayOpenSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_PlayOpenSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_PlayCloseSubIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::Debug_PlayCloseSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_PlayCloseSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.StartAutoSelectCommandMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StartAutoSelectCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StartAutoSelectCommandMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.StartAutoProgressResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StartAutoProgressResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StartAutoProgressResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.StartAutoProgressTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StartAutoProgressTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StartAutoProgressTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleReplayInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecBattleReplayInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleReplayInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleReplayStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecBattleReplayStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleReplayStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleReplayAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecBattleReplayAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleReplayAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleReplayEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecBattleReplayEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleReplayEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleReplayConstruction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecBattleReplayConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleReplayConstruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.WaitBattleReplayPreAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::WaitBattleReplayPreAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "WaitBattleReplayPreAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.WaitBattleReplayAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::WaitBattleReplayAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "WaitBattleReplayAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.WaitBattleReplayPostAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::WaitBattleReplayPostAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "WaitBattleReplayPostAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecReplayPoison
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecReplayPoison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecReplayPoison");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleReplayEnemyAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecBattleReplayEnemyAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleReplayEnemyAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestLoadForEndroll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEndRollSegmentSet      ESegment                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::RequestLoadForEndroll(enum class EEndRollSegmentSet ESegment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestLoadForEndroll");

	Params::ABattleManagerBP_C_RequestLoadForEndroll_Params Parms{};

	Parms.ESegment = ESegment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestLoadCalback
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleManagerBP_C::RequestLoadCalback(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestLoadCalback");

	Params::ABattleManagerBP_C_RequestLoadCalback_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.ClearBattleResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ClearBattleResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ClearBattleResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleReplayConstruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleReplayConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleReplayConstruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayBattleReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEndRollSegmentSet      ReplaySegment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::PlayBattleReplay(enum class EEndRollSegmentSet ReplaySegment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayBattleReplay");

	Params::ABattleManagerBP_C_PlayBattleReplay_Params Parms{};

	Parms.ReplaySegment = ReplaySegment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SuspendBattleReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::SuspendBattleReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SuspendBattleReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleReplayDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleReplayDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleReplayDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.StartBattleRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StartBattleRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StartBattleRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.Debug_PlayAbilitty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            PlayAbilityData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnforcePlayerSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_SEQUENCE_PATTERN_TYPESequencePattern                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EnemyIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UseActionLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::Debug_PlayAbilitty(const struct FAbilityDataBase& PlayAbilityData, int32 BoostLevel, bool EnforcePlayerSide, enum class EBATTLE_SEQUENCE_PATTERN_TYPE SequencePattern, int32 EnemyIndex, class FName UseActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "Debug_PlayAbilitty");

	Params::ABattleManagerBP_C_Debug_PlayAbilitty_Params Parms{};

	Parms.PlayAbilityData = PlayAbilityData;
	Parms.BoostLevel = BoostLevel;
	Parms.EnforcePlayerSide = EnforcePlayerSide;
	Parms.SequencePattern = SequencePattern;
	Parms.EnemyIndex = EnemyIndex;
	Parms.UseActionLabel = UseActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecInitializeBattleUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecInitializeBattleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecInitializeBattleUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecInitializeBattleResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecInitializeBattleResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecInitializeBattleResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ActionInfoOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InfoText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABattleManagerBP_C::ActionInfoOpen(class FText InfoText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ActionInfoOpen");

	Params::ABattleManagerBP_C_ActionInfoOpen_Params Parms{};

	Parms.InfoText = InfoText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.ActionInfoClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceClose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::ActionInfoClose(bool ForceClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ActionInfoClose");

	Params::ABattleManagerBP_C_ActionInfoClose_Params Parms{};

	Parms.ForceClose = ForceClose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleDialogOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ConfirmText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABattleManagerBP_C::BattleDialogOpen(class FText ConfirmText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleDialogOpen");

	Params::ABattleManagerBP_C_BattleDialogOpen_Params Parms{};

	Parms.ConfirmText = ConfirmText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleDialogClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleDialogClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleDialogClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.TameConfirmDialogOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATameMonsterCommand_C*       Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::TameConfirmDialogOpen(class ATameMonsterCommand_C* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "TameConfirmDialogOpen");

	Params::ABattleManagerBP_C_TameConfirmDialogOpen_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.TameCancelDialogOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATameMonsterCommand_C*       Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::TameCancelDialogOpen(class ATameMonsterCommand_C* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "TameCancelDialogOpen");

	Params::ABattleManagerBP_C_TameCancelDialogOpen_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleDialogDecide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::BattleDialogDecide(bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleDialogDecide");

	Params::ABattleManagerBP_C_BattleDialogDecide_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.TameReleaseMenuDecide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::TameReleaseMenuDecide(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "TameReleaseMenuDecide");

	Params::ABattleManagerBP_C_TameReleaseMenuDecide_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.TameReleaseMenuCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::TameReleaseMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "TameReleaseMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.TameReleaseMenuOpen
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMonsterListData>    MonsterList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleManagerBP_C::TameReleaseMenuOpen(TArray<struct FMonsterListData>& MonsterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "TameReleaseMenuOpen");

	Params::ABattleManagerBP_C_TameReleaseMenuOpen_Params Parms{};

	Parms.MonsterList = MonsterList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.TameReleaseMenuClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::TameReleaseMenuClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "TameReleaseMenuClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BattleDialogWait
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::BattleDialogWait()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BattleDialogWait");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestUpdateNextOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseDelay                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::RequestUpdateNextOrderIcon(bool bUseDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestUpdateNextOrderIcon");

	Params::ABattleManagerBP_C_RequestUpdateNextOrderIcon_Params Parms{};

	Parms.bUseDelay = bUseDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetPlayerStatusUIVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetPlayerStatusUIVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetPlayerStatusUIVisible");

	Params::ABattleManagerBP_C_SetPlayerStatusUIVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetEnemyNameVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetEnemyNameVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetEnemyNameVisible");

	Params::ABattleManagerBP_C_SetEnemyNameVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestUpdateActionOrderAnnounce
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdateCurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdateNextOrder                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::RequestUpdateActionOrderAnnounce(bool Enable, bool UpdateCurrentOrder, bool UpdateNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestUpdateActionOrderAnnounce");

	Params::ABattleManagerBP_C_RequestUpdateActionOrderAnnounce_Params Parms{};

	Parms.Enable = Enable;
	Parms.UpdateCurrentOrder = UpdateCurrentOrder;
	Parms.UpdateNextOrder = UpdateNextOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.ResetNextOrderAnnounce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ResetNextOrderAnnounce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ResetNextOrderAnnounce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ActionInfoMultiLineOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TopInfoText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        LowInfoText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABattleManagerBP_C::ActionInfoMultiLineOpen(class FText TopInfoText, class FText LowInfoText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ActionInfoMultiLineOpen");

	Params::ABattleManagerBP_C_ActionInfoMultiLineOpen_Params Parms{};

	Parms.TopInfoText = TopInfoText;
	Parms.LowInfoText = LowInfoText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.StartStatusIconLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StartStatusIconLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StartStatusIconLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.StopStatusIconLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::StopStatusIconLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "StopStatusIconLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestUpdateCurrentOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDelay                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::RequestUpdateCurrentOrderIcon(bool UseDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestUpdateCurrentOrderIcon");

	Params::ABattleManagerBP_C_RequestUpdateCurrentOrderIcon_Params Parms{};

	Parms.UseDelay = UseDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateActiveCharacterIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    ActiveCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UpdateActiveCharacterIcon(class ABattleCharacterBaseBP_C* ActiveCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateActiveCharacterIcon");

	Params::ABattleManagerBP_C_UpdateActiveCharacterIcon_Params Parms{};

	Parms.ActiveCharacter = ActiveCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.OpenActionInfomation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StrInfomationText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleManagerBP_C::OpenActionInfomation(class FText& StrInfomationText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "OpenActionInfomation");

	Params::ABattleManagerBP_C_OpenActionInfomation_Params Parms{};

	Parms.StrInfomationText = StrInfomationText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.OpenMultiLineInfomation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StrFirstText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        StrSecondText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleManagerBP_C::OpenMultiLineInfomation(class FText& StrFirstText, class FText& StrSecondText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "OpenMultiLineInfomation");

	Params::ABattleManagerBP_C_OpenMultiLineInfomation_Params Parms{};

	Parms.StrFirstText = StrFirstText;
	Parms.StrSecondText = StrSecondText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.CloseActionInfomation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CloseActionInfomation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CloseActionInfomation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.OpenChainInfomation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                AstrInfomationText                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              FShowTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::OpenChainInfomation(TArray<class FText>& AstrInfomationText, float FShowTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "OpenChainInfomation");

	Params::ABattleManagerBP_C_OpenChainInfomation_Params Parms{};

	Parms.AstrInfomationText = AstrInfomationText;
	Parms.FShowTime = FShowTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetActionInfoAutoCloseTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SetActionInfoAutoCloseTimer(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetActionInfoAutoCloseTimer");

	Params::ABattleManagerBP_C_SetActionInfoAutoCloseTimer_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ChangePlayerAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Set                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ChangePlayerAnimation(int32 Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ChangePlayerAnimation");

	Params::ABattleManagerBP_C_ChangePlayerAnimation_Params Parms{};

	Parms.Set = Set;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.CameraVibration
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::CameraVibration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CameraVibration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.CharacterStepOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::CharacterStepOut(class ABattleCharacterBaseBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "CharacterStepOut");

	Params::ABattleManagerBP_C_CharacterStepOut_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayBreakCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBREAK_CAMERA_TYPE      EBreakType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::PlayBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayBreakCamera");

	Params::ABattleManagerBP_C_PlayBreakCamera_Params Parms{};

	Parms.EBreakType = EBreakType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.FinishBreakCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::FinishBreakCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishBreakCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayFinishBlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayFinishBlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayFinishBlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.FinishFinishBlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::FinishFinishBlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishFinishBlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayBoostCountupSE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayBoostCountupSE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayBoostCountupSE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.TakeDamageVibration
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::TakeDamageVibration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "TakeDamageVibration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayEscapeSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayEscapeSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayEscapeSuccess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayEscapeFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayEscapeFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayEscapeFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.BeginAddBoostPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DelayBase                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::BeginAddBoostPoint(float DelayBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "BeginAddBoostPoint");

	Params::ABattleManagerBP_C_BeginAddBoostPoint_Params Parms{};

	Parms.DelayBase = DelayBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecAllEnemyForceDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecAllEnemyForceDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecAllEnemyForceDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayEnemyDeadCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBREAK_CAMERA_TYPE      EBreakType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::PlayEnemyDeadCamera(enum class EBREAK_CAMERA_TYPE EBreakType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayEnemyDeadCamera");

	Params::ABattleManagerBP_C_PlayEnemyDeadCamera_Params Parms{};

	Parms.EBreakType = EBreakType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.FinishEnemyDeadSlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::FinishEnemyDeadSlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishEnemyDeadSlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayNormalDamageCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::PlayNormalDamageCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayNormalDamageCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestLoadBattleEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>CEventSequence                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void ABattleManagerBP_C::RequestLoadBattleEvent(TSoftObjectPtr<class ULevelSequence>& CEventSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestLoadBattleEvent");

	Params::ABattleManagerBP_C_RequestLoadBattleEvent_Params Parms{};

	Parms.CEventSequence = CEventSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.FinishBattleEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::FinishBattleEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishBattleEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecBattleSuspend
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::ExecBattleSuspend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecBattleSuspend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.RequestLoadActionCommandClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UObject>       AssetClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABattleManagerBP_C::RequestLoadActionCommandClass(TSoftClassPtr<class UObject> AssetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "RequestLoadActionCommandClass");

	Params::ABattleManagerBP_C_RequestLoadActionCommandClass_Params Parms{};

	Parms.AssetClass = AssetClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::UpdateManager(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateManager");

	Params::ABattleManagerBP_C_UpdateManager_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.FinishBattleStartDash
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::FinishBattleStartDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishBattleStartDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayBoostSE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayBoostLv                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::PlayBoostSE(int32 PlayBoostLv)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayBoostSE");

	Params::ABattleManagerBP_C_PlayBoostSE_Params Parms{};

	Parms.PlayBoostLv = PlayBoostLv;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SetPostProcessMaterialPrameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APostProcessVolume*          TargetVolume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MaterialName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              WeightParam                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SetAllMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SetPostProcessMaterialPrameter(class APostProcessVolume* TargetVolume, const class FString& MaterialName, float WeightParam, bool SetAllMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SetPostProcessMaterialPrameter");

	Params::ABattleManagerBP_C_SetPostProcessMaterialPrameter_Params Parms{};

	Parms.TargetVolume = TargetVolume;
	Parms.MaterialName = MaterialName;
	Parms.WeightParam = WeightParam;
	Parms.SetAllMaterial = SetAllMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SwitchBattleFieldDiseaseMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APostProcessVolume*          TargetVolume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MaterialName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 ParameterCurve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnDisease                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SwitchBattleFieldDiseaseMaterial(class APostProcessVolume* TargetVolume, const class FString& MaterialName, class FName ParameterName, class UCurveFloat* ParameterCurve, bool OnDisease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SwitchBattleFieldDiseaseMaterial");

	Params::ABattleManagerBP_C_SwitchBattleFieldDiseaseMaterial_Params Parms{};

	Parms.TargetVolume = TargetVolume;
	Parms.MaterialName = MaterialName;
	Parms.ParameterName = ParameterName;
	Parms.ParameterCurve = ParameterCurve;
	Parms.OnDisease = OnDisease;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.FinishChangePartySequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::FinishChangePartySequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "FinishChangePartySequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.SwitchRecoveryCutDiseaseMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveVector*                MaskParameterCurve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveVector*                ScrollParameterCurve                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnDisease                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleManagerBP_C::SwitchRecoveryCutDiseaseMaterial(class UCurveVector* MaskParameterCurve, class UCurveVector* ScrollParameterCurve, bool OnDisease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SwitchRecoveryCutDiseaseMaterial");

	Params::ABattleManagerBP_C_SwitchRecoveryCutDiseaseMaterial_Params Parms{};

	Parms.MaskParameterCurve = MaskParameterCurve;
	Parms.ScrollParameterCurve = ScrollParameterCurve;
	Parms.OnDisease = OnDisease;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.PlayReturnDragInEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CReturnCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DRAG_IN_TYPE    EDragInType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::PlayReturnDragInEffect(class ABattleCharacterBase* CReturnCharacter, enum class EBATTLE_DRAG_IN_TYPE EDragInType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "PlayReturnDragInEffect");

	Params::ABattleManagerBP_C_PlayReturnDragInEffect_Params Parms{};

	Parms.CReturnCharacter = CReturnCharacter;
	Parms.EDragInType = EDragInType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.SwitchBattleFieldDiseaseMaterialForCross
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APostProcessVolume*          TargetVolume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MaterialName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 ParameterCurve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::SwitchBattleFieldDiseaseMaterialForCross(class APostProcessVolume* TargetVolume, const class FString& MaterialName, class FName ParameterName, class UCurveFloat* ParameterCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "SwitchBattleFieldDiseaseMaterialForCross");

	Params::ABattleManagerBP_C_SwitchBattleFieldDiseaseMaterialForCross_Params Parms{};

	Parms.TargetVolume = TargetVolume;
	Parms.MaterialName = MaterialName;
	Parms.ParameterName = ParameterName;
	Parms.ParameterCurve = ParameterCurve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleManagerBP.BattleManagerBP_C.UpdateBattleNumberUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::UpdateBattleNumberUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "UpdateBattleNumberUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.AddBoostPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleManagerBP_C::AddBoostPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "AddBoostPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleManagerBP.BattleManagerBP_C.ExecuteUbergraph_BattleManagerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleManagerBP_C::ExecuteUbergraph_BattleManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleManagerBP_C", "ExecuteUbergraph_BattleManagerBP");

	Params::ABattleManagerBP_C_ExecuteUbergraph_BattleManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


