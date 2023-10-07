#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibBattle.LibBattle_C
// (None)

class UClass* ULibBattle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibBattle_C");

	return Clss;
}


// LibBattle_C LibBattle.Default__LibBattle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibBattle_C* ULibBattle_C::GetDefaultObj()
{
	static class ULibBattle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibBattle_C*>(ULibBattle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibBattle.LibBattle_C.Support Ability Atk Buff on Break
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBreakAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::Support_Ability_Atk_Buff_on_Break(class ABattleCharacterBaseBP_C* Enforcer, bool IsBreakAttack, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "Support Ability Atk Buff on Break");

	Params::ULibBattle_C_Support_Ability_Atk_Buff_on_Break_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.IsBreakAttack = IsBreakAttack;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibBattle.LibBattle_C.SupportAbility_HpRecoveryOnBreak
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalBreakCountInAilment                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::SupportAbility_HpRecoveryOnBreak(class ABattleCharacterBase* Enforcer, int32 TotalBreakCountInAilment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "SupportAbility_HpRecoveryOnBreak");

	Params::ULibBattle_C_SupportAbility_HpRecoveryOnBreak_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.TotalBreakCountInAilment = TotalBreakCountInAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibBattle.LibBattle_C.SupportAbility_MpRecoveryOnBreak
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalBreakCountInAilment                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::SupportAbility_MpRecoveryOnBreak(class ABattleCharacterBase* Enforcer, int32 TotalBreakCountInAilment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "SupportAbility_MpRecoveryOnBreak");

	Params::ULibBattle_C_SupportAbility_MpRecoveryOnBreak_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.TotalBreakCountInAilment = TotalBreakCountInAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibBattle.LibBattle_C.CheckEnableOrderInActionOrder
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::CheckEnableOrderInActionOrder(class ABattleCharacterBase* CTarget, class UObject* __WorldContext, bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CheckEnableOrderInActionOrder");

	Params::ULibBattle_C_CheckEnableOrderInActionOrder_Params Parms{};

	Parms.CTarget = CTarget;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function LibBattle.LibBattle_C.AttachEffectRevisionForSPBattle
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        EnemyID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::AttachEffectRevisionForSPBattle(class FName EnemyID, class UObject* __WorldContext, bool* Enable, struct FVector* Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "AttachEffectRevisionForSPBattle");

	Params::ULibBattle_C_AttachEffectRevisionForSPBattle_Params Parms{};

	Parms.EnemyID = EnemyID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);

}


// Function LibBattle.LibBattle_C.ConvertBattleEnemyBP
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleEnemyBP_C*>    Return                                                           (Parm, OutParm)

void ULibBattle_C::ConvertBattleEnemyBP(TArray<class ABattleCharacterBase*>& Array, class UObject* __WorldContext, TArray<class ABattleEnemyBP_C*>* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "ConvertBattleEnemyBP");

	Params::ULibBattle_C_ConvertBattleEnemyBP_Params Parms{};

	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function LibBattle.LibBattle_C.SelectRandomTargetWithWeight
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>TargetCharacterList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>ResultTargetList                                                 (Parm, OutParm)

void ULibBattle_C::SelectRandomTargetWithWeight(TArray<class ABattleCharacterBase*>& TargetCharacterList, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* ResultTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "SelectRandomTargetWithWeight");

	Params::ULibBattle_C_SelectRandomTargetWithWeight_Params Parms{};

	Parms.TargetCharacterList = TargetCharacterList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultTargetList != nullptr)
		*ResultTargetList = std::move(Parms.ResultTargetList);

}


// Function LibBattle.LibBattle_C.CheckFullBoostModeCommandEnable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommandMenuItem            CommandMenuItem                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::CheckFullBoostModeCommandEnable(class ABattleCharacterBase* TargetCharacter, struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CheckFullBoostModeCommandEnable");

	Params::ULibBattle_C_CheckFullBoostModeCommandEnable_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.CommandMenuItem = CommandMenuItem;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function LibBattle.LibBattle_C.BattleCharacterFilterForStone
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               OnlyStone                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>Out                                                              (Parm, OutParm)

void ULibBattle_C::BattleCharacterFilterForStone(TArray<class ABattleCharacterBase*>& In, bool OnlyStone, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "BattleCharacterFilterForStone");

	Params::ULibBattle_C_BattleCharacterFilterForStone_Params Parms{};

	Parms.In = In;
	Parms.OnlyStone = OnlyStone;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function LibBattle.LibBattle_C.ConvertBattlePlayerBP
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattlePlayerBP_C*>   Return                                                           (Parm, OutParm)

void ULibBattle_C::ConvertBattlePlayerBP(TArray<class ABattleCharacterBase*>& Array, class UObject* __WorldContext, TArray<class ABattlePlayerBP_C*>* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "ConvertBattlePlayerBP");

	Params::ULibBattle_C_ConvertBattlePlayerBP_Params Parms{};

	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function LibBattle.LibBattle_C.ConvertInvadeCommandForAwaking
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommandMenuItem            CommandMenuItem                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommandMenuItem            ReturnMenuItem                                                   (Parm, OutParm, HasGetValueTypeHash)

void ULibBattle_C::ConvertInvadeCommandForAwaking(struct FCommandMenuItem& CommandMenuItem, int32 BoostLevel, class UObject* __WorldContext, struct FCommandMenuItem* ReturnMenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "ConvertInvadeCommandForAwaking");

	Params::ULibBattle_C_ConvertInvadeCommandForAwaking_Params Parms{};

	Parms.CommandMenuItem = CommandMenuItem;
	Parms.BoostLevel = BoostLevel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnMenuItem != nullptr)
		*ReturnMenuItem = std::move(Parms.ReturnMenuItem);

}


// Function LibBattle.LibBattle_C.Battle Character Filter For Stealth Target
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>Out                                                              (Parm, OutParm)

void ULibBattle_C::Battle_Character_Filter_For_Stealth_Target(TArray<class ABattleCharacterBase*>& In, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "Battle Character Filter For Stealth Target");

	Params::ULibBattle_C_Battle_Character_Filter_For_Stealth_Target_Params Parms{};

	Parms.In = In;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function LibBattle.LibBattle_C.CheckPotentialitySubMenuEnable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommandMenuItem            CommandMenuItem                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::CheckPotentialitySubMenuEnable(class ABattleCharacterBase* TargetCharacter, struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CheckPotentialitySubMenuEnable");

	Params::ULibBattle_C_CheckPotentialitySubMenuEnable_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.CommandMenuItem = CommandMenuItem;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function LibBattle.LibBattle_C.CheckPotentialityCommandEnable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommandMenuItem            CommandMenuItem                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FAbilityDataBase            AbilityDataBase                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::CheckPotentialityCommandEnable(class ABattleCharacterBase* TargetCharacter, struct FCommandMenuItem& CommandMenuItem, struct FAbilityDataBase& AbilityDataBase, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CheckPotentialityCommandEnable");

	Params::ULibBattle_C_CheckPotentialityCommandEnable_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.CommandMenuItem = CommandMenuItem;
	Parms.AbilityDataBase = AbilityDataBase;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function LibBattle.LibBattle_C.Play Battle Dash SE
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::Play_Battle_Dash_SE(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "Play Battle Dash SE");

	Params::ULibBattle_C_Play_Battle_Dash_SE_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibBattle.LibBattle_C.Battle Character Filter For Stealth Cursor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>Out                                                              (Parm, OutParm)

void ULibBattle_C::Battle_Character_Filter_For_Stealth_Cursor(TArray<class ABattleCharacterBase*>& In, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "Battle Character Filter For Stealth Cursor");

	Params::ULibBattle_C_Battle_Character_Filter_For_Stealth_Cursor_Params Parms{};

	Parms.In = In;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function LibBattle.LibBattle_C.CalcPotentialityActionPoint
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterHPMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActionPoint                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::CalcPotentialityActionPoint(int32 DamageValue, int32 CharacterHPMax, class UObject* __WorldContext, int32* ActionPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CalcPotentialityActionPoint");

	Params::ULibBattle_C_CalcPotentialityActionPoint_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.CharacterHPMax = CharacterHPMax;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionPoint != nullptr)
		*ActionPoint = Parms.ActionPoint;

}


// Function LibBattle.LibBattle_C.ConvertBattleCharacterBP
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Return                                                           (Parm, OutParm)

void ULibBattle_C::ConvertBattleCharacterBP(TArray<class ABattleCharacterBase*>& Array, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "ConvertBattleCharacterBP");

	Params::ULibBattle_C_ConvertBattleCharacterBP_Params Parms{};

	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function LibBattle.LibBattle_C.BattleCharacterFilterForDeadOrAlive
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               OnlyAlive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>Out                                                              (Parm, OutParm)

void ULibBattle_C::BattleCharacterFilterForDeadOrAlive(TArray<class ABattleCharacterBase*>& In, bool OnlyAlive, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "BattleCharacterFilterForDeadOrAlive");

	Params::ULibBattle_C_BattleCharacterFilterForDeadOrAlive_Params Parms{};

	Parms.In = In;
	Parms.OnlyAlive = OnlyAlive;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function LibBattle.LibBattle_C.CreatePreparationCommand
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MaterialItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindPreparationCommand                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        PreparationLabel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPreparationData            PreparationCommand                                               (Parm, OutParm)

void ULibBattle_C::CreatePreparationCommand(class FName MaterialItemID, class UObject* __WorldContext, bool* FindPreparationCommand, class FName* PreparationLabel, struct FPreparationData* PreparationCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CreatePreparationCommand");

	Params::ULibBattle_C_CreatePreparationCommand_Params Parms{};

	Parms.MaterialItemID = MaterialItemID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FindPreparationCommand != nullptr)
		*FindPreparationCommand = Parms.FindPreparationCommand;

	if (PreparationLabel != nullptr)
		*PreparationLabel = Parms.PreparationLabel;

	if (PreparationCommand != nullptr)
		*PreparationCommand = std::move(Parms.PreparationCommand);

}


// Function LibBattle.LibBattle_C.Calc Consume MP
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CompensationMagicAbility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::Calc_Consume_MP(class ABattleCharacterBaseBP_C* Character, int32 Base, bool CompensationMagicAbility, class UObject* __WorldContext, int32* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "Calc Consume MP");

	Params::ULibBattle_C_Calc_Consume_MP_Params Parms{};

	Parms.Character = Character;
	Parms.Base = Base;
	Parms.CompensationMagicAbility = CompensationMagicAbility;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibBattle.LibBattle_C.GetBattleManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleManager*              BattleManager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetBattleManager(class UObject* __WorldContext, class ABattleManager** BattleManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetBattleManager");

	Params::ULibBattle_C_GetBattleManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BattleManager != nullptr)
		*BattleManager = Parms.BattleManager;

}


// Function LibBattle.LibBattle_C.Battle Character Filter for POT Recovery
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Out                                                              (Parm, OutParm)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::Battle_Character_Filter_for_POT_Recovery(TArray<class ABattleCharacterBase*>& In, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Out, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "Battle Character Filter for POT Recovery");

	Params::ULibBattle_C_Battle_Character_Filter_for_POT_Recovery_Params Parms{};

	Parms.In = In;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function LibBattle.LibBattle_C.BattleCharacterFilterForRevive
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReviveAndRecovery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Out                                                              (Parm, OutParm)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::BattleCharacterFilterForRevive(TArray<class ABattleCharacterBase*>& In, bool ReviveAndRecovery, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Out, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "BattleCharacterFilterForRevive");

	Params::ULibBattle_C_BattleCharacterFilterForRevive_Params Parms{};

	Parms.In = In;
	Parms.ReviveAndRecovery = ReviveAndRecovery;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function LibBattle.LibBattle_C.GetStealRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StealRate                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetStealRate(class ABattleCharacterBaseBP_C* TargetCharacter, class UObject* __WorldContext, float* StealRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetStealRate");

	Params::ULibBattle_C_GetStealRate_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (StealRate != nullptr)
		*StealRate = Parms.StealRate;

}


// Function LibBattle.LibBattle_C.BattlePlayerFilterForStone
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattlePlayerBP_C*>   TargetList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Stone                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattlePlayerBP_C*>   Result                                                           (Parm, OutParm)

void ULibBattle_C::BattlePlayerFilterForStone(TArray<class ABattlePlayerBP_C*>& TargetList, bool Stone, class UObject* __WorldContext, TArray<class ABattlePlayerBP_C*>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "BattlePlayerFilterForStone");

	Params::ULibBattle_C_BattlePlayerFilterForStone_Params Parms{};

	Parms.TargetList = TargetList;
	Parms.Stone = Stone;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function LibBattle.LibBattle_C.Get Icon Texture From UI Resource
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ResourceLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::Get_Icon_Texture_From_UI_Resource(class FName ResourceLabel, class UObject* __WorldContext, class UTexture2D** Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "Get Icon Texture From UI Resource");

	Params::ULibBattle_C_Get_Icon_Texture_From_UI_Resource_Params Parms{};

	Parms.ResourceLabel = ResourceLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function LibBattle.LibBattle_C.CheckCoverEnableByDisease
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    CoverCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::CheckCoverEnableByDisease(class ABattleCharacterBaseBP_C* CoverCharacter, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CheckCoverEnableByDisease");

	Params::ULibBattle_C_CheckCoverEnableByDisease_Params Parms{};

	Parms.CoverCharacter = CoverCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibBattle.LibBattle_C.GetCalcHPBorderDamageRatio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Border                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RatioPer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Revision                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetCalcHPBorderDamageRatio(int32 NowHP, int32 MaxHP, float Border, float RatioPer, float Revision, class UObject* __WorldContext, bool* Enable, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetCalcHPBorderDamageRatio");

	Params::ULibBattle_C_GetCalcHPBorderDamageRatio_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.MaxHP = MaxHP;
	Parms.Border = Border;
	Parms.RatioPer = RatioPer;
	Parms.Revision = Revision;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function LibBattle.LibBattle_C.GetTameRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleEnemyBP_C*            TargetEnemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TameRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetTameRate(class ABattleEnemyBP_C* TargetEnemy, class UObject* __WorldContext, float* TameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetTameRate");

	Params::ULibBattle_C_GetTameRate_Params Parms{};

	Parms.TargetEnemy = TargetEnemy;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TameRate != nullptr)
		*TameRate = Parms.TameRate;

}


// Function LibBattle.LibBattle_C.BattleEnemyFilter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleEnemyBP_C*>    In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Alive                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleEnemyBP_C*>    Out                                                              (Parm, OutParm)

void ULibBattle_C::BattleEnemyFilter(TArray<class ABattleEnemyBP_C*>& In, bool Alive, class UObject* __WorldContext, TArray<class ABattleEnemyBP_C*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "BattleEnemyFilter");

	Params::ULibBattle_C_BattleEnemyFilter_Params Parms{};

	Parms.In = In;
	Parms.Alive = Alive;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function LibBattle.LibBattle_C.BattlePlayerFilter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattlePlayerBP_C*>   TargetList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Alive                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattlePlayerBP_C*>   Result                                                           (Parm, OutParm)

void ULibBattle_C::BattlePlayerFilter(TArray<class ABattlePlayerBP_C*>& TargetList, bool Alive, class UObject* __WorldContext, TArray<class ABattlePlayerBP_C*>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "BattlePlayerFilter");

	Params::ULibBattle_C_BattlePlayerFilter_Params Parms{};

	Parms.TargetList = TargetList;
	Parms.Alive = Alive;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function LibBattle.LibBattle_C.CheckEscapeSuccess
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>PlayerList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBase*>EnemyList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibBattle_C::CheckEscapeSuccess(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, int32 Count, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "CheckEscapeSuccess");

	Params::ULibBattle_C_CheckEscapeSuccess_Params Parms{};

	Parms.PlayerList = PlayerList;
	Parms.EnemyList = EnemyList;
	Parms.Count = Count;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibBattle.LibBattle_C.PlayGuardSE
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::PlayGuardSE(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "PlayGuardSE");

	Params::ULibBattle_C_PlayGuardSE_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibBattle.LibBattle_C.PlayHitSE
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActionCommandBase_C*     CommandActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::PlayHitSE(enum class EBATTLE_DAMAGE_TYPE DamageType, enum class EWEAPON_CATEGORY Weapon, class ABP_ActionCommandBase_C* CommandActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "PlayHitSE");

	Params::ULibBattle_C_PlayHitSE_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.Weapon = Weapon;
	Parms.CommandActor = CommandActor;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibBattle.LibBattle_C.GetCalcValueRandomRatio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetCalcValueRandomRatio(class UObject* __WorldContext, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetCalcValueRandomRatio");

	Params::ULibBattle_C_GetCalcValueRandomRatio_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function LibBattle.LibBattle_C.GetEnemyListFromEnemyGroup
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FEnemyGroup                 EnemyGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEnemySpawnData>     EnemyList                                                        (Parm, OutParm)

void ULibBattle_C::GetEnemyListFromEnemyGroup(const struct FEnemyGroup& EnemyGroup, class UObject* __WorldContext, TArray<struct FEnemySpawnData>* EnemyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetEnemyListFromEnemyGroup");

	Params::ULibBattle_C_GetEnemyListFromEnemyGroup_Params Parms{};

	Parms.EnemyGroup = EnemyGroup;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyList != nullptr)
		*EnemyList = std::move(Parms.EnemyList);

}


// Function LibBattle.LibBattle_C.GetBreakDecreaseNonBoost
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EATTRIBUTE_RESIST       Resist                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BreakDecrease                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetBreakDecreaseNonBoost(enum class EATTRIBUTE_RESIST Resist, class UObject* __WorldContext, int32* BreakDecrease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetBreakDecreaseNonBoost");

	Params::ULibBattle_C_GetBreakDecreaseNonBoost_Params Parms{};

	Parms.Resist = Resist;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BreakDecrease != nullptr)
		*BreakDecrease = Parms.BreakDecrease;

}


// Function LibBattle.LibBattle_C.GetBreakDecrease
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EATTRIBUTE_RESIST       Resist                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BreakDecrease                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetBreakDecrease(enum class EATTRIBUTE_RESIST Resist, int32 Boost, class UObject* __WorldContext, int32* BreakDecrease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetBreakDecrease");

	Params::ULibBattle_C_GetBreakDecrease_Params Parms{};

	Parms.Resist = Resist;
	Parms.Boost = Boost;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BreakDecrease != nullptr)
		*BreakDecrease = Parms.BreakDecrease;

}


// Function LibBattle.LibBattle_C.GetResistRatio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_RESIST       ResistType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DoubleWeak                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetResistRatio(enum class EATTRIBUTE_RESIST ResistType, bool DoubleWeak, class ABattleCharacterBaseBP_C* Enforcer, class UObject* __WorldContext, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetResistRatio");

	Params::ULibBattle_C_GetResistRatio_Params Parms{};

	Parms.ResistType = ResistType;
	Parms.DoubleWeak = DoubleWeak;
	Parms.Enforcer = Enforcer;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function LibBattle.LibBattle_C.GetEnemyListFromSpawnSet
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FEnemySpawnSet              SpawnSet                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEnemySpawnData>     EnemyList                                                        (Parm, OutParm)

void ULibBattle_C::GetEnemyListFromSpawnSet(const struct FEnemySpawnSet& SpawnSet, class UObject* __WorldContext, TArray<struct FEnemySpawnData>* EnemyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetEnemyListFromSpawnSet");

	Params::ULibBattle_C_GetEnemyListFromSpawnSet_Params Parms{};

	Parms.SpawnSet = SpawnSet;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyList != nullptr)
		*EnemyList = std::move(Parms.EnemyList);

}


// Function LibBattle.LibBattle_C.MakeDefaultTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  DefaultTransform                                                 (Parm, OutParm, IsPlainOldData, NoDestructor)

void ULibBattle_C::MakeDefaultTransform(class UObject* __WorldContext, struct FTransform* DefaultTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "MakeDefaultTransform");

	Params::ULibBattle_C_MakeDefaultTransform_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultTransform != nullptr)
		*DefaultTransform = std::move(Parms.DefaultTransform);

}


// Function LibBattle.LibBattle_C.SpawnHitEffect
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnemy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActionCommandBase_C*     CommandActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::SpawnHitEffect(class AActor* Owner, const struct FVector& Location, bool IsEnemy, enum class EBATTLE_DAMAGE_TYPE DamageType, class ABP_ActionCommandBase_C* CommandActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "SpawnHitEffect");

	Params::ULibBattle_C_SpawnHitEffect_Params Parms{};

	Parms.Owner = Owner;
	Parms.Location = Location;
	Parms.IsEnemy = IsEnemy;
	Parms.DamageType = DamageType;
	Parms.CommandActor = CommandActor;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibBattle.LibBattle_C.PlayBattleBGM
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyGroup                 EnemyGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundData                  CurrentData                                                      (Parm, OutParm, ContainsInstancedReference)

void ULibBattle_C::PlayBattleBGM(const struct FEnemyGroup& EnemyGroup, class UObject* __WorldContext, struct FSoundData* CurrentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "PlayBattleBGM");

	Params::ULibBattle_C_PlayBattleBGM_Params Parms{};

	Parms.EnemyGroup = EnemyGroup;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentData != nullptr)
		*CurrentData = std::move(Parms.CurrentData);

}


// Function LibBattle.LibBattle_C.GetAttributeResist
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetAttributeResist(class ABattleCharacterBaseBP_C* Target, enum class EATTRIBUTE_TYPE Attribute, class UObject* __WorldContext, enum class EATTRIBUTE_RESIST* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetAttributeResist");

	Params::ULibBattle_C_GetAttributeResist_Params Parms{};

	Parms.Target = Target;
	Parms.Attribute = Attribute;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibBattle.LibBattle_C.LotteryEncountData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleEncounterBase        EncountData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               FirstEncount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EnemyGroupID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::LotteryEncountData(const struct FBattleEncounterBase& EncountData, bool FirstEncount, class UObject* __WorldContext, class FName* EnemyGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "LotteryEncountData");

	Params::ULibBattle_C_LotteryEncountData_Params Parms{};

	Parms.EncountData = EncountData;
	Parms.FirstEncount = FirstEncount;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyGroupID != nullptr)
		*EnemyGroupID = Parms.EnemyGroupID;

}


// Function LibBattle.LibBattle_C.GetBattleManager_OLD
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleManagerBP_C*          BattleManager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibBattle_C::GetBattleManager_OLD(class UObject* __WorldContext, class ABattleManagerBP_C** BattleManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "GetBattleManager_OLD");

	Params::ULibBattle_C_GetBattleManager_OLD_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BattleManager != nullptr)
		*BattleManager = Parms.BattleManager;

}


// Function LibBattle.LibBattle_C.BattleCharacterFilter_OLD
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBaseBP_C*>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Alive                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Out                                                              (Parm, OutParm)

void ULibBattle_C::BattleCharacterFilter_OLD(TArray<class ABattleCharacterBaseBP_C*>& In, bool Alive, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibBattle_C", "BattleCharacterFilter_OLD");

	Params::ULibBattle_C_BattleCharacterFilter_OLD_Params Parms{};

	Parms.In = In;
	Parms.Alive = Alive;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}

}


