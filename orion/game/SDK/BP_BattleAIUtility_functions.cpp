#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_BattleAIUtility.BP_BattleAIUtility_C
// (None)

class UClass* UBP_BattleAIUtility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleAIUtility_C");

	return Clss;
}


// BP_BattleAIUtility_C BP_BattleAIUtility.Default__BP_BattleAIUtility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BattleAIUtility_C* UBP_BattleAIUtility_C::GetDefaultObj()
{
	static class UBP_BattleAIUtility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BattleAIUtility_C*>(UBP_BattleAIUtility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.ShuffleActionTable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ActionTable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               FixedFirstAbility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAIUtility_C::ShuffleActionTable(TArray<class FName>& ActionTable, bool FixedFirstAbility, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "ShuffleActionTable");

	Params::UBP_BattleAIUtility_C_ShuffleActionTable_Params Parms{};

	Parms.ActionTable = ActionTable;
	Parms.FixedFirstAbility = FixedFirstAbility;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.PopActionTable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ActionTable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAIUtility_C::PopActionTable(TArray<class FName>& ActionTable, class UObject* __WorldContext, class FName* AbilityLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "PopActionTable");

	Params::UBP_BattleAIUtility_C_PopActionTable_Params Parms{};

	Parms.ActionTable = ActionTable;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.CreateActionTable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      IndexList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ExecShuffle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FixedFirstAbility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                ActionTable                                                      (Parm, OutParm)

void UBP_BattleAIUtility_C::CreateActionTable(class ABattleCharacterBase* Target, TArray<int32>& IndexList, bool ExecShuffle, bool FixedFirstAbility, class UObject* __WorldContext, TArray<class FName>* ActionTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "CreateActionTable");

	Params::UBP_BattleAIUtility_C_CreateActionTable_Params Parms{};

	Parms.Target = Target;
	Parms.IndexList = IndexList;
	Parms.ExecShuffle = ExecShuffle;
	Parms.FixedFirstAbility = FixedFirstAbility;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionTable != nullptr)
		*ActionTable = std::move(Parms.ActionTable);

}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.ReplaceFirstAbilityIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      TargetTable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ReplaceIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAIUtility_C::ReplaceFirstAbilityIndex(TArray<int32>& TargetTable, int32 ReplaceIndex, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "ReplaceFirstAbilityIndex");

	Params::UBP_BattleAIUtility_C_ReplaceFirstAbilityIndex_Params Parms{};

	Parms.TargetTable = TargetTable;
	Parms.ReplaceIndex = ReplaceIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.GetMultiAbilityData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      BaseAbilityTable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      WorkingAbilityTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ResetAbilityTable                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                               SetupNewTable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class ABattleCharacterBase*        OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FinishAbilityTable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattleAIUtility_C::GetMultiAbilityData(TArray<int32>& BaseAbilityTable, TArray<int32>& WorkingAbilityTable, bool& ResetAbilityTable, bool& SetupNewTable, class ABattleCharacterBase* OwnerCharacter, class UObject* __WorldContext, class FName* AbilityName, int32* AbilityIndex, bool* FinishAbilityTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "GetMultiAbilityData");

	Params::UBP_BattleAIUtility_C_GetMultiAbilityData_Params Parms{};

	Parms.BaseAbilityTable = BaseAbilityTable;
	Parms.WorkingAbilityTable = WorkingAbilityTable;
	Parms.ResetAbilityTable = ResetAbilityTable;
	Parms.SetupNewTable = SetupNewTable;
	Parms.OwnerCharacter = OwnerCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

	if (AbilityIndex != nullptr)
		*AbilityIndex = Parms.AbilityIndex;

	if (FinishAbilityTable != nullptr)
		*FinishAbilityTable = Parms.FinishAbilityTable;

}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.DrawLotsForIndex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      RateList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAIUtility_C::DrawLotsForIndex(TArray<int32>& RateList, class UObject* __WorldContext, int32* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "DrawLotsForIndex");

	Params::UBP_BattleAIUtility_C_DrawLotsForIndex_Params Parms{};

	Parms.RateList = RateList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.DrawLots
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleAICommandData>CommandList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAIUtility_C::DrawLots(TArray<struct FBattleAICommandData>& CommandList, class UObject* __WorldContext, class FName* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "DrawLots");

	Params::UBP_BattleAIUtility_C_DrawLots_Params Parms{};

	Parms.CommandList = CommandList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_BattleAIUtility.BP_BattleAIUtility_C.GetHPRatio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HPRate                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleAIUtility_C::GetHPRatio(class ABattleCharacterBase* Target, class UObject* __WorldContext, float* HPRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleAIUtility_C", "GetHPRatio");

	Params::UBP_BattleAIUtility_C_GetHPRatio_Params Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HPRate != nullptr)
		*HPRate = Parms.HPRate;

}

}


