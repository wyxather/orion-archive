#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_BattleAI_Base.BP_BattleAI_Base_C
// (None)

class UClass* UBP_BattleAI_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleAI_Base_C");

	return Clss;
}


// BP_BattleAI_Base_C BP_BattleAI_Base.Default__BP_BattleAI_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BattleAI_Base_C* UBP_BattleAI_Base_C::GetDefaultObj()
{
	static class UBP_BattleAI_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BattleAI_Base_C*>(UBP_BattleAI_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.UpdateThinkForConfusion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAI_Base_C::UpdateThinkForConfusion(class FName* CommandName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "UpdateThinkForConfusion");

	Params::UBP_BattleAI_Base_C_UpdateThinkForConfusion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.PostSignOfBoost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_BattleAI_Base_C::PostSignOfBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "PostSignOfBoost");

	Params::UBP_BattleAI_Base_C_PostSignOfBoost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetCounterAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAI_Base_C::GetCounterAbility(class FName* CommandName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "GetCounterAbility");

	Params::UBP_BattleAI_Base_C_GetCounterAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.PostUpdateThink
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_BattleAI_Base_C::PostUpdateThink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "PostUpdateThink");

	Params::UBP_BattleAI_Base_C_PostUpdateThink_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.SelectBattleTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>PlayerList                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBase*>EnemyList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBATTLE_TARGET_TYPE     TargetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>TargetList                                                       (Parm, OutParm)

void UBP_BattleAI_Base_C::SelectBattleTarget(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, enum class EBATTLE_TARGET_TYPE TargetType, TArray<class ABattleCharacterBase*>* TargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "SelectBattleTarget");

	Params::UBP_BattleAI_Base_C_SelectBattleTarget_Params Parms{};

	Parms.PlayerList = PlayerList;
	Parms.EnemyList = EnemyList;
	Parms.TargetType = TargetType;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetList != nullptr)
		*TargetList = std::move(Parms.TargetList);

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.UpdateThink
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAI_Base_C::UpdateThink(class FName* CommandName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "UpdateThink");

	Params::UBP_BattleAI_Base_C_UpdateThink_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.PreUpdateThink
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_BattleAI_Base_C::PreUpdateThink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "PreUpdateThink");

	Params::UBP_BattleAI_Base_C_PreUpdateThink_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.AIInitialize
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_BattleAI_Base_C::AIInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "AIInitialize");

	Params::UBP_BattleAI_Base_C_AIInitialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.SwitchPahse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HpRateOfPhase1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HpRateOfPhase2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HpRateOfPhase3                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Phase                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAI_Base_C::SwitchPahse(float HpRateOfPhase1, float HpRateOfPhase2, float HpRateOfPhase3, int32* Phase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "SwitchPahse");

	Params::UBP_BattleAI_Base_C_SwitchPahse_Params Parms{};

	Parms.HpRateOfPhase1 = HpRateOfPhase1;
	Parms.HpRateOfPhase2 = HpRateOfPhase2;
	Parms.HpRateOfPhase3 = HpRateOfPhase3;

	UObject::ProcessEvent(Func, &Parms);

	if (Phase != nullptr)
		*Phase = Parms.Phase;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.DoAnyTimes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ExecNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExecCondition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                               Exec                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAI_Base_C::DoAnyTimes(int32 ExecNum, bool& ExecCondition, bool* Exec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "DoAnyTimes");

	Params::UBP_BattleAI_Base_C_DoAnyTimes_Params Parms{};

	Parms.ExecNum = ExecNum;
	Parms.ExecCondition = ExecCondition;

	UObject::ProcessEvent(Func, &Parms);

	if (Exec != nullptr)
		*Exec = Parms.Exec;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.CountSpecialTurnVariable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SpecialTurn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TurnVariable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSpesialTurn                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAI_Base_C::CountSpecialTurnVariable(int32 SpecialTurn, int32& TurnVariable, bool* IsSpesialTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "CountSpecialTurnVariable");

	Params::UBP_BattleAI_Base_C_CountSpecialTurnVariable_Params Parms{};

	Parms.SpecialTurn = SpecialTurn;
	Parms.TurnVariable = TurnVariable;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSpesialTurn != nullptr)
		*IsSpesialTurn = Parms.IsSpesialTurn;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetAbilityPattern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      ActionPattern                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               MultiAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FinishAbilityPattern                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAI_Base_C::GetAbilityPattern(TArray<int32>& ActionPattern, bool MultiAction, bool* FinishAbilityPattern, class FName* AbilityName, int32* AbilityIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "GetAbilityPattern");

	Params::UBP_BattleAI_Base_C_GetAbilityPattern_Params Parms{};

	Parms.ActionPattern = ActionPattern;
	Parms.MultiAction = MultiAction;

	UObject::ProcessEvent(Func, &Parms);

	if (FinishAbilityPattern != nullptr)
		*FinishAbilityPattern = Parms.FinishAbilityPattern;

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

	if (AbilityIndex != nullptr)
		*AbilityIndex = Parms.AbilityIndex;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetFirstActionPattern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      FirstActionPattern                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Finish                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAI_Base_C::GetFirstActionPattern(TArray<int32>& FirstActionPattern, class FName* AbilityName, bool* Finish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "GetFirstActionPattern");

	Params::UBP_BattleAI_Base_C_GetFirstActionPattern_Params Parms{};

	Parms.FirstActionPattern = FirstActionPattern;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

	if (Finish != nullptr)
		*Finish = Parms.Finish;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetAbilityTable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      AbilityTable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               MultiAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FixFirstAbility                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FinishAbilityTable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAI_Base_C::GetAbilityTable(TArray<int32>& AbilityTable, bool MultiAction, bool FixFirstAbility, class FName* AbilityName, int32* AbilityIndex, bool* FinishAbilityTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "GetAbilityTable");

	Params::UBP_BattleAI_Base_C_GetAbilityTable_Params Parms{};

	Parms.AbilityTable = AbilityTable;
	Parms.MultiAction = MultiAction;
	Parms.FixFirstAbility = FixFirstAbility;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

	if (AbilityIndex != nullptr)
		*AbilityIndex = Parms.AbilityIndex;

	if (FinishAbilityTable != nullptr)
		*FinishAbilityTable = Parms.FinishAbilityTable;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.AddSignActionTurn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NotMultiActionSign                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAI_Base_C::AddSignActionTurn(bool NotMultiActionSign)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "AddSignActionTurn");

	Params::UBP_BattleAI_Base_C_AddSignActionTurn_Params Parms{};

	Parms.NotMultiActionSign = NotMultiActionSign;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.CheckUniqueAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               UseNormalAttack                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAI_Base_C::CheckUniqueAbility(bool* UseNormalAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "CheckUniqueAbility");

	Params::UBP_BattleAI_Base_C_CheckUniqueAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseNormalAttack != nullptr)
		*UseNormalAttack = Parms.UseNormalAttack;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.TakeDamage_Old
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAI_Base_C::TakeDamage_Old(int32 Damage, class ABattleCharacterBaseBP_C* Enforcer, enum class EATTRIBUTE_TYPE Attribute, enum class EWEAPON_CATEGORY Weapon, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "TakeDamage_Old");

	Params::UBP_BattleAI_Base_C_TakeDamage_Old_Params Parms{};

	Parms.Damage = Damage;
	Parms.Enforcer = Enforcer;
	Parms.Attribute = Attribute;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.SetOwner_old
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAI_Base_C::SetOwner_old(class ABattleCharacterBaseBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "SetOwner_old");

	Params::UBP_BattleAI_Base_C_SetOwner_old_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetHPRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              HPRate                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAI_Base_C::GetHPRate(float* HPRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAI_Base_C", "GetHPRate");

	Params::UBP_BattleAI_Base_C_GetHPRate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HPRate != nullptr)
		*HPRate = Parms.HPRate;

}

}


