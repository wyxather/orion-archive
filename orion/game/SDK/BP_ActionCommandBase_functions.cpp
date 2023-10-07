#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_ActionCommandBase.BP_ActionCommandBase_C
// (Actor)

class UClass* ABP_ActionCommandBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionCommandBase_C");

	return Clss;
}


// BP_ActionCommandBase_C BP_ActionCommandBase.Default__BP_ActionCommandBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionCommandBase_C* ABP_ActionCommandBase_C::GetDefaultObj()
{
	static class ABP_ActionCommandBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionCommandBase_C*>(ABP_ActionCommandBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnAttackDamageSP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::OnAttackDamageSP(class ABattleCharacterBase* CEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "OnAttackDamageSP");

	Params::ABP_ActionCommandBase_C_OnAttackDamageSP_Params Parms{};

	Parms.CEnforcer = CEnforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckCoverTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Cover                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABattleCharacterBaseBP_C*    Target                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CheckCoverTarget(class ABattleCharacterBaseBP_C* TargetCharacter, bool* Cover, class ABattleCharacterBaseBP_C** Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckCoverTarget");

	Params::ABP_ActionCommandBase_C_CheckCoverTarget_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (Cover != nullptr)
		*Cover = Parms.Cover;

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableExcitementBuff
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckEnableExcitementBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckEnableExcitementBuff");

	Params::ABP_ActionCommandBase_C_CheckEnableExcitementBuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecExcitementBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::ExecExcitementBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecExcitementBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetPlayableCharacterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    ECharaID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetPlayableCharacterID(class ABattleCharacterBase* Target, enum class EPlayableCharacterID* ECharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetPlayableCharacterID");

	Params::ABP_ActionCommandBase_C_GetPlayableCharacterID_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (ECharaID != nullptr)
		*ECharaID = Parms.ECharaID;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnHitDamageSP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBreakAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::OnHitDamageSP(class ABattleCharacterBaseBP_C* Enforcer, bool IsBreakAttack, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "OnHitDamageSP");

	Params::ABP_ActionCommandBase_C_OnHitDamageSP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.IsBreakAttack = IsBreakAttack;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetGrachesSummonAbility 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGrachesSummonAbility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::SetGrachesSummonAbility_(bool IsGrachesSummonAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetGrachesSummonAbility ");

	Params::ABP_ActionCommandBase_C_SetGrachesSummonAbility__Params Parms{};

	Parms.IsGrachesSummonAbility = IsGrachesSummonAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableConpensation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckEnableConpensation(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckEnableConpensation");

	Params::ABP_ActionCommandBase_C_CheckEnableConpensation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableConvergence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckEnableConvergence(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckEnableConvergence");

	Params::ABP_ActionCommandBase_C_CheckEnableConvergence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableSupportFullHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckEnableSupportFullHP(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckEnableSupportFullHP");

	Params::ABP_ActionCommandBase_C_CheckEnableSupportFullHP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecPlayDiseaseMissUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ExecPlayDiseaseMissUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecPlayDiseaseMissUI");

	Params::ABP_ActionCommandBase_C_ExecPlayDiseaseMissUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetDebugATKText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ATKNumber                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ATKText                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetDebugATKText(class ABattleCharacterBase* Enforcer, enum class EAILMENT_CALC_TYPE CalcType, class ABattleCharacterBase* DamageTarget, int32 InvocationValue, class FString* ATKNumber, class FString* ATKText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetDebugATKText");

	Params::ABP_ActionCommandBase_C_GetDebugATKText_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.CalcType = CalcType;
	Parms.DamageTarget = DamageTarget;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ATKNumber != nullptr)
		*ATKNumber = std::move(Parms.ATKNumber);

	if (ATKText != nullptr)
		*ATKText = std::move(Parms.ATKText);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSessionTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBaseBP_C*>Return                                                           (Parm, OutParm)

void ABP_ActionCommandBase_C::GetSessionTarget(TArray<class ABattleCharacterBaseBP_C*>* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetSessionTarget");

	Params::ABP_ActionCommandBase_C_GetSessionTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableAutoTameMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckEnableAutoTameMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckEnableAutoTameMonster");

	Params::ABP_ActionCommandBase_C_CheckEnableAutoTameMonster_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetRecoveryRatio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        RecoveryEnforcer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        RecoveryTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            AbilityData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              RecoveryRatio                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetRecoveryRatio(class ABattleCharacterBase* RecoveryEnforcer, class ABattleCharacterBase* RecoveryTarget, struct FAbilityDataBase& AbilityData, float* RecoveryRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetRecoveryRatio");

	Params::ABP_ActionCommandBase_C_GetRecoveryRatio_Params Parms{};

	Parms.RecoveryEnforcer = RecoveryEnforcer;
	Parms.RecoveryTarget = RecoveryTarget;
	Parms.AbilityData = AbilityData;

	UObject::ProcessEvent(Func, &Parms);

	if (RecoveryRatio != nullptr)
		*RecoveryRatio = Parms.RecoveryRatio;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SuspendActionCommand
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::SuspendActionCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SuspendActionCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSettledPlayOnce_OnRecovered
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::GetSettledPlayOnce_OnRecovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetSettledPlayOnce_OnRecovered");

	Params::ABP_ActionCommandBase_C_GetSettledPlayOnce_OnRecovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSettledPlayOnce_OnRecovered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::SetSettledPlayOnce_OnRecovered(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetSettledPlayOnce_OnRecovered");

	Params::ABP_ActionCommandBase_C_SetSettledPlayOnce_OnRecovered_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitSessionSupporterCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::WaitSessionSupporterCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitSessionSupporterCommand");

	Params::ABP_ActionCommandBase_C_WaitSessionSupporterCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ReturnSessionSupporterCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ReturnSessionSupporterCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ReturnSessionSupporterCommand");

	Params::ABP_ActionCommandBase_C_ReturnSessionSupporterCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CallSessionSupporterCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CallSessionSupporterCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CallSessionSupporterCommand");

	Params::ABP_ActionCommandBase_C_CallSessionSupporterCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.IsMusicalCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsSong                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsDance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::IsMusicalCommand(bool* bIsSong, bool* bIsDance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "IsMusicalCommand");

	Params::ABP_ActionCommandBase_C_IsMusicalCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsSong != nullptr)
		*bIsSong = Parms.bIsSong;

	if (bIsDance != nullptr)
		*bIsDance = Parms.bIsDance;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.IsUseItemCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsUseItemCommand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::IsUseItemCommand(bool* bIsUseItemCommand, bool* bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "IsUseItemCommand");

	Params::ABP_ActionCommandBase_C_IsUseItemCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsUseItemCommand != nullptr)
		*bIsUseItemCommand = Parms.bIsUseItemCommand;

	if (bIsMeatItem != nullptr)
		*bIsMeatItem = Parms.bIsMeatItem;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetActionLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_ActionCommandBase_C::GetActionLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetActionLabel");

	Params::ABP_ActionCommandBase_C_GetActionLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.InitTotalParameterInAilment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::InitTotalParameterInAilment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "InitTotalParameterInAilment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnAttackDamageHP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::OnAttackDamageHP(class ABattleCharacterBase* CEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "OnAttackDamageHP");

	Params::ABP_ActionCommandBase_C_OnAttackDamageHP_Params Parms{};

	Parms.CEnforcer = CEnforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayActionForSelfOnlyCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleSelfActionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleOtherActionID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bExceptEnforcer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlayActionForSelfOnlyCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleSelfActionID, enum class EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayActionForSelfOnlyCommand");

	Params::ABP_ActionCommandBase_C_PlayActionForSelfOnlyCommand_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;
	Parms.BattleSelfActionID = BattleSelfActionID;
	Parms.BattleOtherActionID = BattleOtherActionID;
	Parms.bExceptEnforcer = bExceptEnforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PostExecCommandSequencer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::PostExecCommandSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PostExecCommandSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitEnemyActionCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::WaitEnemyActionCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitEnemyActionCommand");

	Params::ABP_ActionCommandBase_C_WaitEnemyActionCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcBreakDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_RESIST       EAttributeWeak                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       EWeaponWeak                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutBreakDamage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcBreakDamage(enum class EATTRIBUTE_RESIST EAttributeWeak, enum class EATTRIBUTE_RESIST EWeaponWeak, int32* OutBreakDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcBreakDamage");

	Params::ABP_ActionCommandBase_C_CalcBreakDamage_Params Parms{};

	Parms.EAttributeWeak = EAttributeWeak;
	Parms.EWeaponWeak = EWeaponWeak;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBreakDamage != nullptr)
		*OutBreakDamage = Parms.OutBreakDamage;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ShowBusinessSupportInfomationCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ShowBusinessSupportInfomationCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ShowBusinessSupportInfomationCommand");

	Params::ABP_ActionCommandBase_C_ShowBusinessSupportInfomationCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CallBusinessSupporterCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CallBusinessSupporterCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CallBusinessSupporterCommand");

	Params::ABP_ActionCommandBase_C_CallBusinessSupporterCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitBusinessSupporterCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::WaitBusinessSupporterCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitBusinessSupporterCommand");

	Params::ABP_ActionCommandBase_C_WaitBusinessSupporterCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ReturnBusinessSupporterCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ReturnBusinessSupporterCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ReturnBusinessSupporterCommand");

	Params::ABP_ActionCommandBase_C_ReturnBusinessSupporterCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayBusinessSupportActionCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlayBusinessSupportActionCommand(enum class EKSCharacterAction BattleActionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayBusinessSupportActionCommand");

	Params::ABP_ActionCommandBase_C_PlayBusinessSupportActionCommand_Params Parms{};

	Parms.BattleActionID = BattleActionID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetOptionDataList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                AstrOptionDataList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        StrActionLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NOptionIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseGrowMagicBuff                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::SetOptionDataList(TArray<class FName>& AstrOptionDataList, class FName StrActionLabel, int32 NOptionIndex, bool bUseGrowMagicBuff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetOptionDataList");

	Params::ABP_ActionCommandBase_C_SetOptionDataList_Params Parms{};

	Parms.AstrOptionDataList = AstrOptionDataList;
	Parms.StrActionLabel = StrActionLabel;
	Parms.NOptionIndex = NOptionIndex;
	Parms.bUseGrowMagicBuff = bUseGrowMagicBuff;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecEndCharacterWarpCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ExecEndCharacterWarpCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecEndCharacterWarpCommand");

	Params::ABP_ActionCommandBase_C_ExecEndCharacterWarpCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecStartCharacterWarpCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CCommandOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ExecStartCharacterWarpCommand(const struct FVector& CCommandOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecStartCharacterWarpCommand");

	Params::ABP_ActionCommandBase_C_ExecStartCharacterWarpCommand_Params Parms{};

	Parms.CCommandOffset = CCommandOffset;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlaySessionActionCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlaySessionActionCommand(enum class EKSCharacterAction BattleActionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlaySessionActionCommand");

	Params::ABP_ActionCommandBase_C_PlaySessionActionCommand_Params Parms{};

	Parms.BattleActionID = BattleActionID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitSessionAbilityCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::WaitSessionAbilityCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitSessionAbilityCommand");

	Params::ABP_ActionCommandBase_C_WaitSessionAbilityCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecSessionAbilityCommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ExecSessionAbilityCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecSessionAbilityCommand");

	Params::ABP_ActionCommandBase_C_ExecSessionAbilityCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetTargetList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcTargetList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ActionCommandBase_C::SetTargetList(TArray<class ABattleCharacterBase*>& AcTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetTargetList");

	Params::ABP_ActionCommandBase_C_SetTargetList_Params Parms{};

	Parms.AcTargetList = AcTargetList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetupRandomTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::SetupRandomTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetupRandomTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecStepCounter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ExecStepCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecStepCounter");

	Params::ABP_ActionCommandBase_C_ExecStepCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckAttackCounter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckAttackCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckAttackCounter");

	Params::ABP_ActionCommandBase_C_CheckAttackCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSubTargetList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcSubTargetList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ActionCommandBase_C::SetSubTargetList(TArray<class ABattleCharacterBase*>& AcSubTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetSubTargetList");

	Params::ABP_ActionCommandBase_C_SetSubTargetList_Params Parms{};

	Parms.AcSubTargetList = AcSubTargetList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSubTargetList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class ABattleCharacterBase*> ABP_ActionCommandBase_C::GetSubTargetList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetSubTargetList");

	Params::ABP_ActionCommandBase_C_GetSubTargetList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckAbilityHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckAbilityHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckAbilityHit");

	Params::ABP_ActionCommandBase_C_CheckAbilityHit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSummonAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLastHit                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        StrActionLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          COwnerAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::SetSummonAbility(bool bEnable, bool bLastHit, class FName StrActionLabel, class AActionCommandBase* COwnerAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetSummonAbility");

	Params::ABP_ActionCommandBase_C_SetSummonAbility_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.bLastHit = bLastHit;
	Parms.StrActionLabel = StrActionLabel;
	Parms.COwnerAbility = COwnerAbility;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckBoostLevelLess
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBorderLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bContainEqual                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckBoostLevelLess(int32 NBorderLevel, bool bContainEqual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckBoostLevelLess");

	Params::ABP_ActionCommandBase_C_CheckBoostLevelLess_Params Parms{};

	Parms.NBorderLevel = NBorderLevel;
	Parms.bContainEqual = bContainEqual;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSubEnforcerList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class ABattleCharacterBase*> ABP_ActionCommandBase_C::GetSubEnforcerList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetSubEnforcerList");

	Params::ABP_ActionCommandBase_C_GetSubEnforcerList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSubEnforcerList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcSubEnforcerList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ActionCommandBase_C::SetSubEnforcerList(TArray<class ABattleCharacterBase*>& AcSubEnforcerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetSubEnforcerList");

	Params::ABP_ActionCommandBase_C_SetSubEnforcerList_Params Parms{};

	Parms.AcSubEnforcerList = AcSubEnforcerList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetEnforcer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::SetEnforcer(class ABattleCharacterBase* CEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetEnforcer");

	Params::ABP_ActionCommandBase_C_SetEnforcer_Params Parms{};

	Parms.CEnforcer = CEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckBoostLevelGreater
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBorderLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bContainEqual                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckBoostLevelGreater(int32 NBorderLevel, bool bContainEqual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckBoostLevelGreater");

	Params::ABP_ActionCommandBase_C_CheckBoostLevelGreater_Params Parms{};

	Parms.NBorderLevel = NBorderLevel;
	Parms.bContainEqual = bContainEqual;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckStealMoney
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CStealTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NStealRateMin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckStealMoney(class ABattleCharacterBase* CStealTarget, int32 NStealRateMin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckStealMoney");

	Params::ABP_ActionCommandBase_C_CheckStealMoney_Params Parms{};

	Parms.CStealTarget = CStealTarget;
	Parms.NStealRateMin = NStealRateMin;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckStealItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CStealTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NStealRateMin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckStealItem(class ABattleCharacterBase* CStealTarget, int32 NStealRateMin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckStealItem");

	Params::ABP_ActionCommandBase_C_CheckStealItem_Params Parms{};

	Parms.CStealTarget = CStealTarget;
	Parms.NStealRateMin = NStealRateMin;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayAbilitySECommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlayAbilitySECommand(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayAbilitySECommand");

	Params::ABP_ActionCommandBase_C_PlayAbilitySECommand_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayWeaponAttackCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlayWeaponAttackCommand(class ABattleCharacterBase* ActionCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayWeaponAttackCommand");

	Params::ABP_ActionCommandBase_C_PlayWeaponAttackCommand_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckLastHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::CheckLastHit(class ABattleCharacterBase* CTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckLastHit");

	Params::ABP_ActionCommandBase_C_CheckLastHit_Params Parms{};

	Parms.CTarget = CTarget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecPayPostCost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::ExecPayPostCost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecPayPostCost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetTargetList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class ABattleCharacterBase*> ABP_ActionCommandBase_C::GetTargetList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetTargetList");

	Params::ABP_ActionCommandBase_C_GetTargetList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetEnforcer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ABattleCharacterBase* ABP_ActionCommandBase_C::GetEnforcer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetEnforcer");

	Params::ABP_ActionCommandBase_C_GetEnforcer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecSpecialAilmentCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ExecSpecialAilmentCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecSpecialAilmentCommand");

	Params::ABP_ActionCommandBase_C_ExecSpecialAilmentCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.RegisterOnHitSECommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::RegisterOnHitSECommand(class FName SEID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "RegisterOnHitSECommand");

	Params::ABP_ActionCommandBase_C_RegisterOnHitSECommand_Params Parms{};

	Parms.SEID = SEID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayActionCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    UniqueCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      UniqueActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bExceptEnforcer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlayActionCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool bExceptEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayActionCommand");

	Params::ABP_ActionCommandBase_C_PlayActionCommand_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;
	Parms.BattleActionID = BattleActionID;
	Parms.UniqueCharaID = UniqueCharaID;
	Parms.UniqueActionID = UniqueActionID;
	Parms.bExceptEnforcer = bExceptEnforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WeaponChangeCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::WeaponChangeCommand(enum class EWEAPON_CATEGORY WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WeaponChangeCommand");

	Params::ABP_ActionCommandBase_C_WeaponChangeCommand_Params Parms{};

	Parms.WeaponType = WeaponType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayVibrationCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VibrationID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVibrationPower         Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlayVibrationCommand(class FName VibrationID, enum class EVibrationPower Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayVibrationCommand");

	Params::ABP_ActionCommandBase_C_PlayVibrationCommand_Params Parms{};

	Parms.VibrationID = VibrationID;
	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayVoiceCommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    UniqueCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_VOICE_TYPE      UniqueVoiceID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlayVoiceCommand(enum class EBATTLE_VOICE_TYPE VoiceID, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayVoiceCommand");

	Params::ABP_ActionCommandBase_C_PlayVoiceCommand_Params Parms{};

	Parms.VoiceID = VoiceID;
	Parms.UniqueCharaID = UniqueCharaID;
	Parms.UniqueVoiceID = UniqueVoiceID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlaySECommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::PlaySECommand(class FName SEID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlaySECommand");

	Params::ABP_ActionCommandBase_C_PlaySECommand_Params Parms{};

	Parms.SEID = SEID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.HideInfomationCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::HideInfomationCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "HideInfomationCommand");

	Params::ABP_ActionCommandBase_C_HideInfomationCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ShowInfomationCommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ShowInfomationCommand(class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ShowInfomationCommand");

	Params::ABP_ActionCommandBase_C_ShowInfomationCommand_Params Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecAilmentCommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllAilment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ActionCommandBase_C::ExecAilmentCommand(int32 Index, bool AllAilment, bool LastHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecAilmentCommand");

	Params::ABP_ActionCommandBase_C_ExecAilmentCommand_Params Parms{};

	Parms.Index = Index;
	Parms.AllAilment = AllAilment;
	Parms.LastHit = LastHit;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetForceBreak
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::GetForceBreak(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetForceBreak");

	Params::ABP_ActionCommandBase_C_GetForceBreak_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetForceBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::SetForceBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetForceBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetCriticalPower
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCritical                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OutRatio                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetCriticalPower(bool bCritical, float* OutRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetCriticalPower");

	Params::ABP_ActionCommandBase_C_GetCriticalPower_Params Parms{};

	Parms.bCritical = bCritical;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRatio != nullptr)
		*OutRatio = Parms.OutRatio;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableCommandWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckEnableCommandWeapon(enum class EWEAPON_CATEGORY* Weapon, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckEnableCommandWeapon");

	Params::ABP_ActionCommandBase_C_CheckEnableCommandWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Weapon != nullptr)
		*Weapon = Parms.Weapon;

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetBattleReplayParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      ParamList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::SetBattleReplayParam(TArray<int32>& ParamList, class FName ActionLabel, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetBattleReplayParam");

	Params::ABP_ActionCommandBase_C_SetBattleReplayParam_Params Parms{};

	Parms.ParamList = ParamList;
	Parms.ActionLabel = ActionLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetBattleReplayParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Param1                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param2                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param3                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param4                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetBattleReplayParam(int32* Param1, int32* Param2, int32* Param3, int32* Param4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetBattleReplayParam");

	Params::ABP_ActionCommandBase_C_GetBattleReplayParam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param1 != nullptr)
		*Param1 = Parms.Param1;

	if (Param2 != nullptr)
		*Param2 = Parms.Param2;

	if (Param3 != nullptr)
		*Param3 = Parms.Param3;

	if (Param4 != nullptr)
		*Param4 = Parms.Param4;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetTotalDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetTotalDamage(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetTotalDamage");

	Params::ABP_ActionCommandBase_C_GetTotalDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetRandomTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBaseBP_C*>RandomTarget                                                     (Parm, OutParm)
// bool                               EnableRandomTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::GetRandomTarget(TArray<class ABattleCharacterBaseBP_C*>* RandomTarget, bool* EnableRandomTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetRandomTarget");

	Params::ABP_ActionCommandBase_C_GetRandomTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RandomTarget != nullptr)
		*RandomTarget = std::move(Parms.RandomTarget);

	if (EnableRandomTarget != nullptr)
		*EnableRandomTarget = Parms.EnableRandomTarget;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetInevitablyCritical
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCritical                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::GetInevitablyCritical(bool* Enable, bool* IsCritical)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetInevitablyCritical");

	Params::ABP_ActionCommandBase_C_GetInevitablyCritical_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (IsCritical != nullptr)
		*IsCritical = Parms.IsCritical;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetChaseTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBaseBP_C*>ChaseTarget                                                      (Parm, OutParm)
// bool                               EnableChaseTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::GetChaseTarget(TArray<class ABattleCharacterBaseBP_C*>* ChaseTarget, bool* EnableChaseTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetChaseTarget");

	Params::ABP_ActionCommandBase_C_GetChaseTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ChaseTarget != nullptr)
		*ChaseTarget = std::move(Parms.ChaseTarget);

	if (EnableChaseTarget != nullptr)
		*EnableChaseTarget = Parms.EnableChaseTarget;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetChaseTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBaseBP_C*>ChaseTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ActionCommandBase_C::SetChaseTarget(TArray<class ABattleCharacterBaseBP_C*>& ChaseTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetChaseTarget");

	Params::ABP_ActionCommandBase_C_SetChaseTarget_Params Parms{};

	Parms.ChaseTarget = ChaseTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcEnforcerAttack
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        DamageEnforcer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AttackValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageRatio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcEnforcerAttack(class ABattleCharacterBase* DamageEnforcer, class ABattleCharacterBase* DamageTarget, enum class EAILMENT_CALC_TYPE DamageType, int32 InvocationValue, float* AttackValue, float* DamageRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcEnforcerAttack");

	Params::ABP_ActionCommandBase_C_CalcEnforcerAttack_Params Parms{};

	Parms.DamageEnforcer = DamageEnforcer;
	Parms.DamageTarget = DamageTarget;
	Parms.DamageType = DamageType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AttackValue != nullptr)
		*AttackValue = Parms.AttackValue;

	if (DamageRatio != nullptr)
		*DamageRatio = Parms.DamageRatio;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetTotalDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::SetTotalDamage(enum class EAILMENT_CALC_TYPE CalcType, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetTotalDamage");

	Params::ABP_ActionCommandBase_C_SetTotalDamage_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnHitDamageHP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBreakAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::OnHitDamageHP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* DamageTarget, int32 DamageValue, bool IsBreakAttack, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "OnHitDamageHP");

	Params::ABP_ActionCommandBase_C_OnHitDamageHP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.DamageTarget = DamageTarget;
	Parms.DamageValue = DamageValue;
	Parms.IsBreakAttack = IsBreakAttack;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckReflectionEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckReflectionEnable(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckReflectionEnable");

	Params::ABP_ActionCommandBase_C_CheckReflectionEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckCounterEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckCounterEnable(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckCounterEnable");

	Params::ABP_ActionCommandBase_C_CheckCounterEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetAdditiveTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AdditiveTurn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EADDITIVE_ORDER_TYPE    OrderType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::SetAdditiveTurn(bool AdditiveTurn, enum class EADDITIVE_ORDER_TYPE OrderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetAdditiveTurn");

	Params::ABP_ActionCommandBase_C_SetAdditiveTurn_Params Parms{};

	Parms.AdditiveTurn = AdditiveTurn;
	Parms.OrderType = OrderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecCheckAdditiveTurn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecAdditiveTurn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::ExecCheckAdditiveTurn(bool* ExecAdditiveTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecCheckAdditiveTurn");

	Params::ABP_ActionCommandBase_C_ExecCheckAdditiveTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecAdditiveTurn != nullptr)
		*ExecAdditiveTurn = Parms.ExecAdditiveTurn;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckDiseaseSpecialHit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    DiseaseTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnHit                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               INVISIBLE                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckDiseaseSpecialHit(class ABattleCharacterBaseBP_C* DiseaseTarget, bool* OnHit, bool* INVISIBLE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckDiseaseSpecialHit");

	Params::ABP_ActionCommandBase_C_CheckDiseaseSpecialHit_Params Parms{};

	Parms.DiseaseTarget = DiseaseTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (OnHit != nullptr)
		*OnHit = Parms.OnHit;

	if (INVISIBLE != nullptr)
		*INVISIBLE = Parms.INVISIBLE;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetAbilityRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageRatio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetAbilityRatio(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, float* DamageRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetAbilityRatio");

	Params::ABP_ActionCommandBase_C_GetAbilityRatio_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageRatio != nullptr)
		*DamageRatio = Parms.DamageRatio;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableHideOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckEnableHideOut(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckEnableHideOut");

	Params::ABP_ActionCommandBase_C_CheckEnableHideOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetInevitablyCritical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::SetInevitablyCritical()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetInevitablyCritical");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.InitAbilityCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BaseCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinimumCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RandomMin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RandomMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::InitAbilityCounter(int32 BaseCount, int32 MinimumCount, int32 RandomMin, int32 RandomMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "InitAbilityCounter");

	Params::ABP_ActionCommandBase_C_InitAbilityCounter_Params Parms{};

	Parms.BaseCount = BaseCount;
	Parms.MinimumCount = MinimumCount;
	Parms.RandomMin = RandomMin;
	Parms.RandomMax = RandomMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.DamegeStopAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::DamegeStopAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "DamegeStopAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetReviveCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               REVIVE                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::SetReviveCommand(bool REVIVE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetReviveCommand");

	Params::ABP_ActionCommandBase_C_SetReviveCommand_Params Parms{};

	Parms.REVIVE = REVIVE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.JudgeSpecialHitRate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::JudgeSpecialHitRate(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, bool* Enable, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "JudgeSpecialHitRate");

	Params::ABP_ActionCommandBase_C_JudgeSpecialHitRate_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetOnHitEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OnHit                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        EffectLabel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetOnHitEffect(bool* OnHit, class FName* EffectLabel, struct FVector* Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetOnHitEffect");

	Params::ABP_ActionCommandBase_C_GetOnHitEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OnHit != nullptr)
		*OnHit = Parms.OnHit;

	if (EffectLabel != nullptr)
		*EffectLabel = Parms.EffectLabel;

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetOnHitSE
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OnHit                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        SELabel                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetOnHitSE(bool* OnHit, class FName* SELabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetOnHitSE");

	Params::ABP_ActionCommandBase_C_GetOnHitSE_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OnHit != nullptr)
		*OnHit = Parms.OnHit;

	if (SELabel != nullptr)
		*SELabel = Parms.SELabel;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoverySP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Recovery                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentRecoverySP(enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 InvocationValue, int32* Recovery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentRecoverySP");

	Params::ABP_ActionCommandBase_C_CalcAilmentRecoverySP_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Recovery != nullptr)
		*Recovery = Parms.Recovery;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoveryBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Recovery                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentRecoveryBP(enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 InvocationValue, int32* Recovery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentRecoveryBP");

	Params::ABP_ActionCommandBase_C_CalcAilmentRecoveryBP_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Recovery != nullptr)
		*Recovery = Parms.Recovery;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoveryMP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Recovery                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentRecoveryMP(class ABattleCharacterBase* Enforcer, class ABattleCharacterBase* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, int32* Recovery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentRecoveryMP");

	Params::ABP_ActionCommandBase_C_CalcAilmentRecoveryMP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Recovery != nullptr)
		*Recovery = Parms.Recovery;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    AbilityEnfocer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    AilmentTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentDamageBP(class ABattleCharacterBaseBP_C* AbilityEnfocer, class ABattleCharacterBaseBP_C* AilmentTarget, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, int32* Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentDamageBP");

	Params::ABP_ActionCommandBase_C_CalcAilmentDamageBP_Params Parms{};

	Parms.AbilityEnfocer = AbilityEnfocer;
	Parms.AilmentTarget = AilmentTarget;
	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageSP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentDamageSP(enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 InvocationValue, int32* Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentDamageSP");

	Params::ABP_ActionCommandBase_C_CalcAilmentDamageSP_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageMP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentDamageMP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, int32* Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentDamageMP");

	Params::ABP_ActionCommandBase_C_CalcAilmentDamageMP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoveryHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Critical                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Recovery                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentRecoveryHP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, bool Critical, int32* Recovery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentRecoveryHP");

	Params::ABP_ActionCommandBase_C_CalcAilmentRecoveryHP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;
	Parms.Critical = Critical;

	UObject::ProcessEvent(Func, &Parms);

	if (Recovery != nullptr)
		*Recovery = Parms.Recovery;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageHP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       WeaponResist                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       AttributeResist                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Critical                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddDrain                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::CalcAilmentDamageHP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, enum class EATTRIBUTE_RESIST WeaponResist, enum class EATTRIBUTE_RESIST AttributeResist, bool Critical, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, bool AddDrain, int32* Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CalcAilmentDamageHP");

	Params::ABP_ActionCommandBase_C_CalcAilmentDamageHP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.CalcType = CalcType;
	Parms.InvocationValue = InvocationValue;
	Parms.WeaponResist = WeaponResist;
	Parms.AttributeResist = AttributeResist;
	Parms.Critical = Critical;
	Parms.Weapon = Weapon;
	Parms.Attribute = Attribute;
	Parms.AddDrain = AddDrain;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.AbilityStartEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::AbilityStartEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "AbilityStartEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecPayCommandCost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::ExecPayCommandCost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecPayCommandCost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartCharacterAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartCharacterAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartCharacterAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetPositionByPositionType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EACTION_COMMAND_POSITION_TYPEPositionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SpqwnGround                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABattleCharacterBaseBP_C*    FocusTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::GetPositionByPositionType(enum class EACTION_COMMAND_POSITION_TYPE PositionType, const struct FVector& Offset, bool SpqwnGround, class ABattleCharacterBaseBP_C* FocusTarget, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "GetPositionByPositionType");

	Params::ABP_ActionCommandBase_C_GetPositionByPositionType_Params Parms{};

	Parms.PositionType = PositionType;
	Parms.Offset = Offset;
	Parms.SpqwnGround = SpqwnGround;
	Parms.FocusTarget = FocusTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckExecCommand
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Exec                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::CheckExecCommand(bool* Exec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "CheckExecCommand");

	Params::ABP_ActionCommandBase_C_CheckExecCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exec != nullptr)
		*Exec = Parms.Exec;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.Setup Action Command
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAbilityDataBase            NewCommand                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandBase_C::Setup_Action_Command(class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& Target, const struct FAbilityDataBase& NewCommand, int32 BoostLevel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "Setup Action Command");

	Params::ABP_ActionCommandBase_C_Setup_Action_Command_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.NewCommand = NewCommand;
	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnLoaded_080220B84804514B7ADD9986D199D1E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::OnLoaded_080220B84804514B7ADD9986D199D1E1(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "OnLoaded_080220B84804514B7ADD9986D199D1E1");

	Params::ABP_ActionCommandBase_C_OnLoaded_080220B84804514B7ADD9986D199D1E1_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnLoaded_831328EB48DE85CC2DC1F291800135A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::OnLoaded_831328EB48DE85CC2DC1F291800135A0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "OnLoaded_831328EB48DE85CC2DC1F291800135A0");

	Params::ABP_ActionCommandBase_C_OnLoaded_831328EB48DE85CC2DC1F291800135A0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartPreAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartPreAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartPreAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartPostAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartPostAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartPostAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartMainAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartMainAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartMainAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitMainAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::WaitMainAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitMainAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitPreAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::WaitPreAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitPreAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitPostAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::WaitPostAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitPostAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitTimeEffecterInfomation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::WaitTimeEffecterInfomation(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitTimeEffecterInfomation");

	Params::ABP_ActionCommandBase_C_WaitTimeEffecterInfomation_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartPreActionForBattleReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartPreActionForBattleReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartPreActionForBattleReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartMainActionForBattleReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartMainActionForBattleReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartMainActionForBattleReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartPostActionForBattleReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartPostActionForBattleReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartPostActionForBattleReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayAbilitySEWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::PlayAbilitySEWithDelay(float Duration, class FName SELabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PlayAbilitySEWithDelay");

	Params::ABP_ActionCommandBase_C_PlayAbilitySEWithDelay_Params Parms{};

	Parms.Duration = Duration;
	Parms.SELabel = SELabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecSessionAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::ExecSessionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecSessionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitSessionAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::WaitSessionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitSessionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitSupporterDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::WaitSupporterDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitSupporterDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitEnemyAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::WaitEnemyAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitEnemyAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetupDelayActionSE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::SetupDelayActionSE(class ABattleCharacterBase* ActionCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "SetupDelayActionSE");

	Params::ABP_ActionCommandBase_C_SetupDelayActionSE_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartVideAbilityCameraSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartVideAbilityCameraSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartVideAbilityCameraSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.RequestLoadCommandSequence
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>CCommandSequence                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::RequestLoadCommandSequence(TSoftObjectPtr<class ULevelSequence>& CCommandSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "RequestLoadCommandSequence");

	Params::ABP_ActionCommandBase_C_RequestLoadCommandSequence_Params Parms{};

	Parms.CCommandSequence = CCommandSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.StartCommandSequence
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::StartCommandSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "StartCommandSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.FinishCommandSequence
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::FinishCommandSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "FinishCommandSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitLoadCommandSequence
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::WaitLoadCommandSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "WaitLoadCommandSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.UpdateRandomTargetEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::UpdateRandomTargetEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "UpdateRandomTargetEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PauseActionCommandSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::PauseActionCommandSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "PauseActionCommandSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ResumeActionCommandSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandBase_C::ResumeActionCommandSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ResumeActionCommandSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecuteUbergraph_BP_ActionCommandBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionCommandBase_C::ExecuteUbergraph_BP_ActionCommandBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ActionCommandBase_C", "ExecuteUbergraph_BP_ActionCommandBase");

	Params::ABP_ActionCommandBase_C_ExecuteUbergraph_BP_ActionCommandBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


