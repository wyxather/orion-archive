#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibRareEnemy.LibRareEnemy_C
// (None)

class UClass* ULibRareEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibRareEnemy_C");

	return Clss;
}


// LibRareEnemy_C LibRareEnemy.Default__LibRareEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibRareEnemy_C* ULibRareEnemy_C::GetDefaultObj()
{
	static class ULibRareEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibRareEnemy_C*>(ULibRareEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibRareEnemy.LibRareEnemy_C.GetAdditionalOctlinRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>Players                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ContainSupportAbility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AdditionalRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibRareEnemy_C::GetAdditionalOctlinRate(TArray<class ABattleCharacterBase*>& Players, bool ContainSupportAbility, class UObject* __WorldContext, int32* AdditionalRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibRareEnemy_C", "GetAdditionalOctlinRate");

	Params::ULibRareEnemy_C_GetAdditionalOctlinRate_Params Parms{};

	Parms.Players = Players;
	Parms.ContainSupportAbility = ContainSupportAbility;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalRate != nullptr)
		*AdditionalRate = Parms.AdditionalRate;

}


// Function LibRareEnemy.LibRareEnemy_C.GetAdditionalCatlinRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>Players                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ContainSupportAbility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AdditionalRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibRareEnemy_C::GetAdditionalCatlinRate(TArray<class ABattleCharacterBase*>& Players, bool ContainSupportAbility, class UObject* __WorldContext, int32* AdditionalRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibRareEnemy_C", "GetAdditionalCatlinRate");

	Params::ULibRareEnemy_C_GetAdditionalCatlinRate_Params Parms{};

	Parms.Players = Players;
	Parms.ContainSupportAbility = ContainSupportAbility;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalRate != nullptr)
		*AdditionalRate = Parms.AdditionalRate;

}


// Function LibRareEnemy.LibRareEnemy_C.GetAdditionalRareEnemyRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>Players                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AdditionalRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibRareEnemy_C::GetAdditionalRareEnemyRate(TArray<class ABattleCharacterBase*>& Players, class UObject* __WorldContext, int32* AdditionalRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibRareEnemy_C", "GetAdditionalRareEnemyRate");

	Params::ULibRareEnemy_C_GetAdditionalRareEnemyRate_Params Parms{};

	Parms.Players = Players;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalRate != nullptr)
		*AdditionalRate = Parms.AdditionalRate;

}


// Function LibRareEnemy.LibRareEnemy_C.GetRareEnemyLabel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAreaID                 Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RareEnemyCatlin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_Low                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_Middle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_High                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibRareEnemy_C::GetRareEnemyLabel(enum class EAreaID Area, bool RareEnemyCatlin, class UObject* __WorldContext, class FName* RareEnemy_Low, class FName* RareEnemy_Middle, class FName* RareEnemy_High)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibRareEnemy_C", "GetRareEnemyLabel");

	Params::ULibRareEnemy_C_GetRareEnemyLabel_Params Parms{};

	Parms.Area = Area;
	Parms.RareEnemyCatlin = RareEnemyCatlin;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RareEnemy_Low != nullptr)
		*RareEnemy_Low = Parms.RareEnemy_Low;

	if (RareEnemy_Middle != nullptr)
		*RareEnemy_Middle = Parms.RareEnemy_Middle;

	if (RareEnemy_High != nullptr)
		*RareEnemy_High = Parms.RareEnemy_High;

}


// Function LibRareEnemy.LibRareEnemy_C.GetRareOctlinLabelByArea
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAreaID                 Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_Low                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_Middle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_High                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibRareEnemy_C::GetRareOctlinLabelByArea(enum class EAreaID Area, class UObject* __WorldContext, class FName* RareEnemy_Low, class FName* RareEnemy_Middle, class FName* RareEnemy_High)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibRareEnemy_C", "GetRareOctlinLabelByArea");

	Params::ULibRareEnemy_C_GetRareOctlinLabelByArea_Params Parms{};

	Parms.Area = Area;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RareEnemy_Low != nullptr)
		*RareEnemy_Low = Parms.RareEnemy_Low;

	if (RareEnemy_Middle != nullptr)
		*RareEnemy_Middle = Parms.RareEnemy_Middle;

	if (RareEnemy_High != nullptr)
		*RareEnemy_High = Parms.RareEnemy_High;

}


// Function LibRareEnemy.LibRareEnemy_C.GetRareCatlinLabelByArea
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAreaID                 Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_Low                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_Middle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RareEnemy_High                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibRareEnemy_C::GetRareCatlinLabelByArea(enum class EAreaID Area, class UObject* __WorldContext, class FName* RareEnemy_Low, class FName* RareEnemy_Middle, class FName* RareEnemy_High)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibRareEnemy_C", "GetRareCatlinLabelByArea");

	Params::ULibRareEnemy_C_GetRareCatlinLabelByArea_Params Parms{};

	Parms.Area = Area;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RareEnemy_Low != nullptr)
		*RareEnemy_Low = Parms.RareEnemy_Low;

	if (RareEnemy_Middle != nullptr)
		*RareEnemy_Middle = Parms.RareEnemy_Middle;

	if (RareEnemy_High != nullptr)
		*RareEnemy_High = Parms.RareEnemy_High;

}

}


