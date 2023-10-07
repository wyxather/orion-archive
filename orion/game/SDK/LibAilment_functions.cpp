#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAilment.LibAilment_C
// (None)

class UClass* ULibAilment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAilment_C");

	return Clss;
}


// LibAilment_C LibAilment.Default__LibAilment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAilment_C* ULibAilment_C::GetDefaultObj()
{
	static class ULibAilment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAilment_C*>(ULibAilment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAilment.LibAilment_C.GetBattleAllCharacterList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>PartyList                                                        (Parm, OutParm)

void ULibAilment_C::GetBattleAllCharacterList(class ABattleCharacterBase* Enforcer, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* PartyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetBattleAllCharacterList");

	Params::ULibAilment_C_GetBattleAllCharacterList_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyList != nullptr)
		*PartyList = std::move(Parms.PartyList);

}


// Function LibAilment.LibAilment_C.CheckSelfDamage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FExecAilmentHandler         ExecAilmentHandler                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelfDamage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckSelfDamage(struct FExecAilmentHandler& ExecAilmentHandler, class UObject* __WorldContext, bool* IsSelfDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckSelfDamage");

	Params::ULibAilment_C_CheckSelfDamage_Params Parms{};

	Parms.ExecAilmentHandler = ExecAilmentHandler;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelfDamage != nullptr)
		*IsSelfDamage = Parms.IsSelfDamage;

}


// Function LibAilment.LibAilment_C.Menu_CheckUseAilmentTypeMultiple
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FAilmentHandler>     CheckAilmentList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FMainMenuAilmentData        TargetAilment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanUse                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckUseAilmentTypeMultiple(TArray<struct FAilmentHandler>& CheckAilmentList, struct FMainMenuAilmentData& TargetAilment, class UObject* __WorldContext, bool* CanUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckUseAilmentTypeMultiple");

	Params::ULibAilment_C_Menu_CheckUseAilmentTypeMultiple_Params Parms{};

	Parms.CheckAilmentList = CheckAilmentList;
	Parms.TargetAilment = TargetAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUse != nullptr)
		*CanUse = Parms.CanUse;

}


// Function LibAilment.LibAilment_C.Menu_CheckParamaterMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FCharacterParam             CharaParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckParamaterMax(const struct FMenuAilmentHandler& Ailment, struct FCharacterParam& CharaParam, class UObject* __WorldContext, bool* IsMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckParamaterMax");

	Params::ULibAilment_C_Menu_CheckParamaterMax_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.CharaParam = CharaParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMax != nullptr)
		*IsMax = Parms.IsMax;

}


// Function LibAilment.LibAilment_C.RandomBoolForAilment
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibAilment_C::RandomBoolForAilment(int32 InvocationValue, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "RandomBoolForAilment");

	Params::ULibAilment_C_RandomBoolForAilment_Params Parms{};

	Parms.InvocationValue = InvocationValue;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibAilment.LibAilment_C.ConvertEquipmentToWeaponCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEquipmentCategory      Equipment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        WeaponCategory                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::ConvertEquipmentToWeaponCategory(enum class EEquipmentCategory Equipment, class UObject* __WorldContext, enum class EWEAPON_CATEGORY* WeaponCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "ConvertEquipmentToWeaponCategory");

	Params::ULibAilment_C_ConvertEquipmentToWeaponCategory_Params Parms{};

	Parms.Equipment = Equipment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponCategory != nullptr)
		*WeaponCategory = Parms.WeaponCategory;

}


// Function LibAilment.LibAilment_C.GetEnemyDeseaseListinUI
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FExecDiseaseHandler> OutDeseaseList                                                   (Parm, OutParm, ContainsInstancedReference)

void ULibAilment_C::GetEnemyDeseaseListinUI(class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* OutDeseaseList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetEnemyDeseaseListinUI");

	Params::ULibAilment_C_GetEnemyDeseaseListinUI_Params Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDeseaseList != nullptr)
		*OutDeseaseList = std::move(Parms.OutDeseaseList);

}


// Function LibAilment.LibAilment_C.GetPlayerDebuffListinUI
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FExecDiseaseHandler> OutDebuffList                                                    (Parm, OutParm, ContainsInstancedReference)

void ULibAilment_C::GetPlayerDebuffListinUI(class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* OutDebuffList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetPlayerDebuffListinUI");

	Params::ULibAilment_C_GetPlayerDebuffListinUI_Params Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDebuffList != nullptr)
		*OutDebuffList = std::move(Parms.OutDebuffList);

}


// Function LibAilment.LibAilment_C.GetPlayerBuffListinUI
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FExecDiseaseHandler> OutBuffList                                                      (Parm, OutParm, ContainsInstancedReference)

void ULibAilment_C::GetPlayerBuffListinUI(class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* OutBuffList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetPlayerBuffListinUI");

	Params::ULibAilment_C_GetPlayerBuffListinUI_Params Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBuffList != nullptr)
		*OutBuffList = std::move(Parms.OutBuffList);

}


// Function LibAilment.LibAilment_C.CheckCharacterInvisibleForDamage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseDamageUI                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInvisible                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckCharacterInvisibleForDamage(class ABattleCharacterBase* Target, class ABattleCharacterBase* Enforcer, bool UseDamageUI, class UObject* __WorldContext, bool* IsInvisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckCharacterInvisibleForDamage");

	Params::ULibAilment_C_CheckCharacterInvisibleForDamage_Params Parms{};

	Parms.Target = Target;
	Parms.Enforcer = Enforcer;
	Parms.UseDamageUI = UseDamageUI;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInvisible != nullptr)
		*IsInvisible = Parms.IsInvisible;

}


// Function LibAilment.LibAilment_C.SetupVoiceFlag_OnRecovered
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>TargetList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FExecAilmentHandler         ExecAilmentHandler                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::SetupVoiceFlag_OnRecovered(TArray<class ABattleCharacterBase*>& TargetList, struct FExecAilmentHandler& ExecAilmentHandler, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "SetupVoiceFlag_OnRecovered");

	Params::ULibAilment_C_SetupVoiceFlag_OnRecovered_Params Parms{};

	Parms.TargetList = TargetList;
	Parms.ExecAilmentHandler = ExecAilmentHandler;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.GetBattleOtherList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>PartyList                                                        (Parm, OutParm)

void ULibAilment_C::GetBattleOtherList(class ABattleCharacterBase* Enforcer, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* PartyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetBattleOtherList");

	Params::ULibAilment_C_GetBattleOtherList_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyList != nullptr)
		*PartyList = std::move(Parms.PartyList);

}


// Function LibAilment.LibAilment_C.GetBattlePartyList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>PartyList                                                        (Parm, OutParm)

void ULibAilment_C::GetBattlePartyList(class ABattleCharacterBase* Enforcer, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* PartyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetBattlePartyList");

	Params::ULibAilment_C_GetBattlePartyList_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyList != nullptr)
		*PartyList = std::move(Parms.PartyList);

}


// Function LibAilment.LibAilment_C.Menu_CheckParamaterMaxWithEquip
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckParamaterMaxWithEquip(const struct FMenuAilmentHandler& Ailment, int32 CharaID, class UObject* __WorldContext, bool* IsMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckParamaterMaxWithEquip");

	Params::ULibAilment_C_Menu_CheckParamaterMaxWithEquip_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMax != nullptr)
		*IsMax = Parms.IsMax;

}


// Function LibAilment.LibAilment_C.Battle_ExecStealMoneyEnemy
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecStealMoneyEnemy(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecStealMoneyEnemy");

	Params::ULibAilment_C_Battle_ExecStealMoneyEnemy_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecLostMoney
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecLostMoney(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecLostMoney");

	Params::ULibAilment_C_Battle_ExecLostMoney_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecSealActionOrder
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecSealActionOrder(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecSealActionOrder");

	Params::ULibAilment_C_Battle_ExecSealActionOrder_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecShrinkDisease
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecShrinkDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecShrinkDisease");

	Params::ULibAilment_C_Battle_ExecShrinkDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecAddMoney
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddMoney(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddMoney");

	Params::ULibAilment_C_Battle_ExecAddMoney_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecDamagePOT
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDamagePOT(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDamagePOT");

	Params::ULibAilment_C_Battle_ExecDamagePOT_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_GetRecoveryType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAilment                    CheckAilment                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERECOVERY_EFFECT_TYPE   Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_GetRecoveryType(const struct FAilment& CheckAilment, class UObject* __WorldContext, enum class ERECOVERY_EFFECT_TYPE* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_GetRecoveryType");

	Params::ULibAilment_C_Menu_GetRecoveryType_Params Parms{};

	Parms.CheckAilment = CheckAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function LibAilment.LibAilment_C.Battle_ExecDamageHPMaxFixed
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDamageHPMaxFixed(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDamageHPMaxFixed");

	Params::ULibAilment_C_Battle_ExecDamageHPMaxFixed_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecAccelInventorItem
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAccelInventorItem(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAccelInventorItem");

	Params::ULibAilment_C_Battle_ExecAccelInventorItem_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Convert Ailment to Attribute
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_ATTRIBUTE_TYPE AilmentAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Convert_Ailment_to_Attribute(enum class EAILMENT_ATTRIBUTE_TYPE AilmentAttribute, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Convert Ailment to Attribute");

	Params::ULibAilment_C_Convert_Ailment_to_Attribute_Params Parms{};

	Parms.AilmentAttribute = AilmentAttribute;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Attribute != nullptr)
		*Attribute = Parms.Attribute;

}


// Function LibAilment.LibAilment_C.Battle_ExecAddFieldDisease
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddFieldDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddFieldDisease");

	Params::ULibAilment_C_Battle_ExecAddFieldDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecExtensionDisease
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecExtensionDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecExtensionDisease");

	Params::ULibAilment_C_Battle_ExecExtensionDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecChangePermanent
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecChangePermanent(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecChangePermanent");

	Params::ULibAilment_C_Battle_ExecChangePermanent_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.SortDiseaseListForReverse
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExecDiseaseHandler> TargetDiseaseList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FExecDiseaseHandler> SortedDiseaseList                                                (Parm, OutParm, ContainsInstancedReference)

void ULibAilment_C::SortDiseaseListForReverse(TArray<struct FExecDiseaseHandler>& TargetDiseaseList, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* SortedDiseaseList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "SortDiseaseListForReverse");

	Params::ULibAilment_C_SortDiseaseListForReverse_Params Parms{};

	Parms.TargetDiseaseList = TargetDiseaseList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SortedDiseaseList != nullptr)
		*SortedDiseaseList = std::move(Parms.SortedDiseaseList);

}


// Function LibAilment.LibAilment_C.GetDiseaseByDiseaseType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           SearchDiseaseType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindDisease                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        DiseaseLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDisease                    DiseaseData                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::GetDiseaseByDiseaseType(enum class EDISEASE_TYPE SearchDiseaseType, class UObject* __WorldContext, bool* FindDisease, class FName* DiseaseLabel, struct FDisease* DiseaseData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetDiseaseByDiseaseType");

	Params::ULibAilment_C_GetDiseaseByDiseaseType_Params Parms{};

	Parms.SearchDiseaseType = SearchDiseaseType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FindDisease != nullptr)
		*FindDisease = Parms.FindDisease;

	if (DiseaseLabel != nullptr)
		*DiseaseLabel = Parms.DiseaseLabel;

	if (DiseaseData != nullptr)
		*DiseaseData = std::move(Parms.DiseaseData);

}


// Function LibAilment.LibAilment_C.Battle_ExecReverseDisease
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecReverseDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecReverseDisease");

	Params::ULibAilment_C_Battle_ExecReverseDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecCovered
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecCovered(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecCovered");

	Params::ULibAilment_C_Battle_ExecCovered_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecBuffCopy
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecBuffCopy(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecBuffCopy");

	Params::ULibAilment_C_Battle_ExecBuffCopy_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.CheckOrderControlDisease
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OrderControl                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EACTION_ORDER_TYPE      MoveType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MoveCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BuffControl                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckOrderControlDisease(enum class EDISEASE_TYPE DiseaseType, class UObject* __WorldContext, bool* OrderControl, enum class EACTION_ORDER_TYPE* MoveType, int32* MoveCount, bool* BuffControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckOrderControlDisease");

	Params::ULibAilment_C_CheckOrderControlDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OrderControl != nullptr)
		*OrderControl = Parms.OrderControl;

	if (MoveType != nullptr)
		*MoveType = Parms.MoveType;

	if (MoveCount != nullptr)
		*MoveCount = Parms.MoveCount;

	if (BuffControl != nullptr)
		*BuffControl = Parms.BuffControl;

}


// Function LibAilment.LibAilment_C.Battle_ExecBribe
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecBribe(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecBribe");

	Params::ULibAilment_C_Battle_ExecBribe_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecGetLuckyReward
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ELUCKY_REWARD_TYPE      LuckyType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecGetLuckyReward(const struct FExecAilmentHandler& Ailment, enum class ELUCKY_REWARD_TYPE LuckyType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecGetLuckyReward");

	Params::ULibAilment_C_Battle_ExecGetLuckyReward_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.LuckyType = LuckyType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.ConvertWeaponToEquipmentPart
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         CommandAttribute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::ConvertWeaponToEquipmentPart(enum class EWEAPON_CATEGORY Weapon, class UObject* __WorldContext, enum class EEQUIPMENT_PART* CommandAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "ConvertWeaponToEquipmentPart");

	Params::ULibAilment_C_ConvertWeaponToEquipmentPart_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CommandAttribute != nullptr)
		*CommandAttribute = Parms.CommandAttribute;

}


// Function LibAilment.LibAilment_C.Menu_CheckUseGrowSCP
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FAilmentHandler>     CheckAilmentList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseSGrowSCP                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckUseGrowSCP(TArray<struct FAilmentHandler>& CheckAilmentList, class UObject* __WorldContext, bool* UseSGrowSCP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckUseGrowSCP");

	Params::ULibAilment_C_Menu_CheckUseGrowSCP_Params Parms{};

	Parms.CheckAilmentList = CheckAilmentList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (UseSGrowSCP != nullptr)
		*UseSGrowSCP = Parms.UseSGrowSCP;

}


// Function LibAilment.LibAilment_C.Menu Recovery POTSingle
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecoveryValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_Recovery_POTSingle(int32 CharacterID, int32 RecoveryValue, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu Recovery POTSingle");

	Params::ULibAilment_C_Menu_Recovery_POTSingle_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.RecoveryValue = RecoveryValue;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_ExecGrowSCPMax
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EnforcerID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_ExecGrowSCPMax(const struct FMenuAilmentHandler& Ailment, int32 EnforcerID, int32 TargetID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_ExecGrowSCPMax");

	Params::ULibAilment_C_Menu_ExecGrowSCPMax_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.EnforcerID = EnforcerID;
	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_CheckGrowSCPMax
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEffective                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckGrowSCPMax(int32 TargetID, class UObject* __WorldContext, bool* IsEffective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckGrowSCPMax");

	Params::ULibAilment_C_Menu_CheckGrowSCPMax_Params Parms{};

	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEffective != nullptr)
		*IsEffective = Parms.IsEffective;

}


// Function LibAilment.LibAilment_C.Menu_CheckRecoveryTOP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEffective                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckRecoveryTOP(int32 TargetID, class UObject* __WorldContext, bool* IsEffective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckRecoveryTOP");

	Params::ULibAilment_C_Menu_CheckRecoveryTOP_Params Parms{};

	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEffective != nullptr)
		*IsEffective = Parms.IsEffective;

}


// Function LibAilment.LibAilment_C.Menu_ExecRecoveryTOP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EnforceerID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_ExecRecoveryTOP(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_ExecRecoveryTOP");

	Params::ULibAilment_C_Menu_ExecRecoveryTOP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.EnforceerID = EnforceerID;
	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecRecoveryPOT
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRecoveryPOT(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRecoveryPOT");

	Params::ULibAilment_C_Battle_ExecRecoveryPOT_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecForceBreak
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecForceBreak(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecForceBreak");

	Params::ULibAilment_C_Battle_ExecForceBreak_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_OrderCountDown
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_OrderCountDown(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_OrderCountDown");

	Params::ULibAilment_C_Battle_OrderCountDown_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_OrderCountUp
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_OrderCountUp(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_OrderCountUp");

	Params::ULibAilment_C_Battle_OrderCountUp_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_CheckDamageSuccessForHP1
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ActionCommandBase_C*     CommandActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExecAilmentHandler         ExecAilment                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Battle_CheckDamageSuccessForHP1(class ABP_ActionCommandBase_C* CommandActor, class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, const struct FExecAilmentHandler& ExecAilment, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_CheckDamageSuccessForHP1");

	Params::ULibAilment_C_Battle_CheckDamageSuccessForHP1_Params Parms{};

	Parms.CommandActor = CommandActor;
	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.ExecAilment = ExecAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibAilment.LibAilment_C.GetExDisableMagicTarget
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>ResultTarget                                                     (Parm, OutParm)

void ULibAilment_C::GetExDisableMagicTarget(class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* ResultTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetExDisableMagicTarget");

	Params::ULibAilment_C_GetExDisableMagicTarget_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultTarget != nullptr)
		*ResultTarget = std::move(Parms.ResultTarget);

}


// Function LibAilment.LibAilment_C.Battle_ExecPassMP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecPassMP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecPassMP");

	Params::ULibAilment_C_Battle_ExecPassMP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.CalcLotteryIndex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      RateList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::CalcLotteryIndex(TArray<int32>& RateList, class UObject* __WorldContext, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CalcLotteryIndex");

	Params::ULibAilment_C_CalcLotteryIndex_Params Parms{};

	Parms.RateList = RateList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function LibAilment.LibAilment_C.CheckPriorityForExDisableMagicAbility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EJOB_TYPE               JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckPriorityForExDisableMagicAbility(enum class EJOB_TYPE JobID, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckPriorityForExDisableMagicAbility");

	Params::ULibAilment_C_CheckPriorityForExDisableMagicAbility_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.Battle_ExecAddEXDisableMagicAbility
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddEXDisableMagicAbility(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddEXDisableMagicAbility");

	Params::ULibAilment_C_Battle_ExecAddEXDisableMagicAbility_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecAddInfection
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddInfection(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddInfection");

	Params::ULibAilment_C_Battle_ExecAddInfection_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecAddEXCurseOfDead
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddEXCurseOfDead(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddEXCurseOfDead");

	Params::ULibAilment_C_Battle_ExecAddEXCurseOfDead_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.CalcDamageType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Break                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       TotalResist                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Critical                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsBreak                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsForceWeakness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::CalcDamageType(bool Break, enum class EATTRIBUTE_RESIST TotalResist, bool Critical, bool IsBreak, bool IsForceWeakness, class UObject* __WorldContext, enum class EBATTLE_DAMAGE_TYPE* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CalcDamageType");

	Params::ULibAilment_C_CalcDamageType_Params Parms{};

	Parms.Break = Break;
	Parms.TotalResist = TotalResist;
	Parms.Critical = Critical;
	Parms.IsBreak = IsBreak;
	Parms.IsForceWeakness = IsForceWeakness;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageType != nullptr)
		*DamageType = Parms.DamageType;

}


// Function LibAilment.LibAilment_C.Battle_ExecDragIn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDragIn(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDragIn");

	Params::ULibAilment_C_Battle_ExecDragIn_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecNegateAll
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecNegateAll(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecNegateAll");

	Params::ULibAilment_C_Battle_ExecNegateAll_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.CalcAilmentTarget
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         AilmentHandler                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>TargetList                                                       (Parm, OutParm)

void ULibAilment_C::CalcAilmentTarget(struct FExecAilmentHandler& AilmentHandler, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* TargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CalcAilmentTarget");

	Params::ULibAilment_C_CalcAilmentTarget_Params Parms{};

	Parms.AilmentHandler = AilmentHandler;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetList != nullptr)
		*TargetList = std::move(Parms.TargetList);

}


// Function LibAilment.LibAilment_C.Battle_ExecAddDiseaseDivideTurn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddDiseaseDivideTurn(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddDiseaseDivideTurn");

	Params::ULibAilment_C_Battle_ExecAddDiseaseDivideTurn_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecAddActionOrderBlind
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddActionOrderBlind(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddActionOrderBlind");

	Params::ULibAilment_C_Battle_ExecAddActionOrderBlind_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecBlowAway
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecBlowAway(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecBlowAway");

	Params::ULibAilment_C_Battle_ExecBlowAway_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecEscape
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecEscape(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecEscape");

	Params::ULibAilment_C_Battle_ExecEscape_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecRestoreBreak
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRestoreBreak(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRestoreBreak");

	Params::ULibAilment_C_Battle_ExecRestoreBreak_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_CheckShowAilmentType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FAilmentHandler>     CheckAilmentList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowAilmentType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckShowAilmentType(TArray<struct FAilmentHandler>& CheckAilmentList, class UObject* __WorldContext, bool* ShowAilmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckShowAilmentType");

	Params::ULibAilment_C_Menu_CheckShowAilmentType_Params Parms{};

	Parms.CheckAilmentList = CheckAilmentList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowAilmentType != nullptr)
		*ShowAilmentType = Parms.ShowAilmentType;

}


// Function LibAilment.LibAilment_C.Menu_GetRecoveryLevelRatio
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_GetRecoveryLevelRatio(int32 CharacterID, enum class EAILMENT_CALC_TYPE_OLD CalcType, class UObject* __WorldContext, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_GetRecoveryLevelRatio");

	Params::ULibAilment_C_Menu_GetRecoveryLevelRatio_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CalcType = CalcType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function LibAilment.LibAilment_C.Battle_CheckDamageSuccess
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ActionCommandBase_C*     CommandActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExecAilmentHandler         ExecAilment                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Critical                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               INVISIBLE                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Battle_CheckDamageSuccess(class ABP_ActionCommandBase_C* CommandActor, class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, const struct FExecAilmentHandler& ExecAilment, bool Critical, class UObject* __WorldContext, bool* Success, bool* INVISIBLE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_CheckDamageSuccess");

	Params::ULibAilment_C_Battle_CheckDamageSuccess_Params Parms{};

	Parms.CommandActor = CommandActor;
	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.ExecAilment = ExecAilment;
	Parms.Critical = Critical;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (INVISIBLE != nullptr)
		*INVISIBLE = Parms.INVISIBLE;

}


// Function LibAilment.LibAilment_C.Menu_ExecStatusGrow
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EnforcerID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_ExecStatusGrow(const struct FMenuAilmentHandler& Ailment, int32 EnforcerID, int32 TargetID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_ExecStatusGrow");

	Params::ULibAilment_C_Menu_ExecStatusGrow_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.EnforcerID = EnforcerID;
	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecCover
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecCover(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecCover");

	Params::ULibAilment_C_Battle_ExecCover_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.GetWeaponToAttributeList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   WeaponData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>AttributeList                                                    (Parm, OutParm)

void ULibAilment_C::GetWeaponToAttributeList(const struct FItemData& WeaponData, class UObject* __WorldContext, TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>* AttributeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetWeaponToAttributeList");

	Params::ULibAilment_C_GetWeaponToAttributeList_Params Parms{};

	Parms.WeaponData = WeaponData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeList != nullptr)
		*AttributeList = std::move(Parms.AttributeList);

}


// Function LibAilment.LibAilment_C.ConvertAttributeTypeToCommandAttribute
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_ATTRIBUTE_TYPE AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         AttributeType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_COMMAND_ATTRIBUTE_ICONCommandAttribute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::ConvertAttributeTypeToCommandAttribute(enum class EAILMENT_ATTRIBUTE_TYPE AilmentType, enum class EATTRIBUTE_TYPE AttributeType, class UObject* __WorldContext, enum class EBATTLE_COMMAND_ATTRIBUTE_ICON* CommandAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "ConvertAttributeTypeToCommandAttribute");

	Params::ULibAilment_C_ConvertAttributeTypeToCommandAttribute_Params Parms{};

	Parms.AilmentType = AilmentType;
	Parms.AttributeType = AttributeType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CommandAttribute != nullptr)
		*CommandAttribute = Parms.CommandAttribute;

}


// Function LibAilment.LibAilment_C.ConvertWeaponToCommoandAttribute
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_COMMAND_ATTRIBUTE_ICONCommandAttribute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::ConvertWeaponToCommoandAttribute(enum class EWEAPON_CATEGORY Weapon, class UObject* __WorldContext, enum class EBATTLE_COMMAND_ATTRIBUTE_ICON* CommandAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "ConvertWeaponToCommoandAttribute");

	Params::ULibAilment_C_ConvertWeaponToCommoandAttribute_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CommandAttribute != nullptr)
		*CommandAttribute = Parms.CommandAttribute;

}


// Function LibAilment.LibAilment_C.GetAbilityToAttributeList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EWEAPON_CATEGORY        EnforcerWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>AttributeList                                                    (Parm, OutParm)

void ULibAilment_C::GetAbilityToAttributeList(const struct FAbilityDataBase& ABILITY, enum class EWEAPON_CATEGORY EnforcerWeapon, class UObject* __WorldContext, TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>* AttributeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetAbilityToAttributeList");

	Params::ULibAilment_C_GetAbilityToAttributeList_Params Parms{};

	Parms.ABILITY = ABILITY;
	Parms.EnforcerWeapon = EnforcerWeapon;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeList != nullptr)
		*AttributeList = std::move(Parms.AttributeList);

}


// Function LibAilment.LibAilment_C.Battle_ExecJPUp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecJPUp(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecJPUp");

	Params::ULibAilment_C_Battle_ExecJPUp_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecEXPUp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecEXPUp(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecEXPUp");

	Params::ULibAilment_C_Battle_ExecEXPUp_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_GetSupportRecoveryRate
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rate                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_GetSupportRecoveryRate(int32 TargetID, class UObject* __WorldContext, float* Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_GetSupportRecoveryRate");

	Params::ULibAilment_C_Menu_GetSupportRecoveryRate_Params Parms{};

	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;

}


// Function LibAilment.LibAilment_C.Battle_ExecForceSetHPTo1
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecForceSetHPTo1(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecForceSetHPTo1");

	Params::ULibAilment_C_Battle_ExecForceSetHPTo1_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecInstantDeath
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecInstantDeath(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecInstantDeath");

	Params::ULibAilment_C_Battle_ExecInstantDeath_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.AilmentToAbilityType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FAilmentHandler>     AilmentList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EABILITY_TYPE           AbilityType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::AilmentToAbilityType(TArray<struct FAilmentHandler>& AilmentList, class UObject* __WorldContext, enum class EABILITY_TYPE* AbilityType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "AilmentToAbilityType");

	Params::ULibAilment_C_AilmentToAbilityType_Params Parms{};

	Parms.AilmentList = AilmentList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityType != nullptr)
		*AbilityType = Parms.AbilityType;

}


// Function LibAilment.LibAilment_C.Battle_ExecRemoveDisease
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRemoveDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRemoveDisease");

	Params::ULibAilment_C_Battle_ExecRemoveDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecMoneyDrain
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecMoneyDrain(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecMoneyDrain");

	Params::ULibAilment_C_Battle_ExecMoneyDrain_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecMPLimitOver
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecMPLimitOver(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecMPLimitOver");

	Params::ULibAilment_C_Battle_ExecMPLimitOver_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecInevitablyCritical
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecInevitablyCritical(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecInevitablyCritical");

	Params::ULibAilment_C_Battle_ExecInevitablyCritical_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecSetRandomAttackCount
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecSetRandomAttackCount(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecSetRandomAttackCount");

	Params::ULibAilment_C_Battle_ExecSetRandomAttackCount_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecDamege_Stop
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDamege_Stop(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDamege_Stop");

	Params::ULibAilment_C_Battle_ExecDamege_Stop_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecStealMoney
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecStealMoney(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecStealMoney");

	Params::ULibAilment_C_Battle_ExecStealMoney_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecStealItem
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecStealItem(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecStealItem");

	Params::ULibAilment_C_Battle_ExecStealItem_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecRecoverySP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRecoverySP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRecoverySP");

	Params::ULibAilment_C_Battle_ExecRecoverySP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecRecoveryBP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRecoveryBP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRecoveryBP");

	Params::ULibAilment_C_Battle_ExecRecoveryBP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecDamageBP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDamageBP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDamageBP");

	Params::ULibAilment_C_Battle_ExecDamageBP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecDamageSP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDamageSP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDamageSP");

	Params::ULibAilment_C_Battle_ExecDamageSP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecDamageMP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDamageMP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDamageMP");

	Params::ULibAilment_C_Battle_ExecDamageMP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_GetPartyAilmentData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMainMenuAilmentData>PartyAilmentData                                                 (Parm, OutParm)

void ULibAilment_C::Menu_GetPartyAilmentData(class UObject* __WorldContext, TArray<struct FMainMenuAilmentData>* PartyAilmentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_GetPartyAilmentData");

	Params::ULibAilment_C_Menu_GetPartyAilmentData_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyAilmentData != nullptr)
		*PartyAilmentData = std::move(Parms.PartyAilmentData);

}


// Function LibAilment.LibAilment_C.Menu_CheckUseAbilityType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EABILITY_TYPE           CheckAilmentList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMainMenuAilmentData        TargetAilment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanUse                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckUseAbilityType(enum class EABILITY_TYPE CheckAilmentList, const struct FMainMenuAilmentData& TargetAilment, class UObject* __WorldContext, bool* CanUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckUseAbilityType");

	Params::ULibAilment_C_Menu_CheckUseAbilityType_Params Parms{};

	Parms.CheckAilmentList = CheckAilmentList;
	Parms.TargetAilment = TargetAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUse != nullptr)
		*CanUse = Parms.CanUse;

}


// Function LibAilment.LibAilment_C.Menu_CheckUseAilmentType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FAilmentHandler>     CheckAilmentList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FMainMenuAilmentData        TargetAilment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanUse                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckUseAilmentType(TArray<struct FAilmentHandler>& CheckAilmentList, const struct FMainMenuAilmentData& TargetAilment, class FName ItemLabel, class UObject* __WorldContext, bool* CanUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckUseAilmentType");

	Params::ULibAilment_C_Menu_CheckUseAilmentType_Params Parms{};

	Parms.CheckAilmentList = CheckAilmentList;
	Parms.TargetAilment = TargetAilment;
	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUse != nullptr)
		*CanUse = Parms.CanUse;

}


// Function LibAilment.LibAilment_C.Battle_ExecRecoveryMP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRecoveryMP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRecoveryMP");

	Params::ULibAilment_C_Battle_ExecRecoveryMP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.SelectAilmentValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ValueA                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValueB                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::SelectAilmentValue(int32 ValueA, int32 ValueB, class UObject* __WorldContext, int32* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "SelectAilmentValue");

	Params::ULibAilment_C_SelectAilmentValue_Params Parms{};

	Parms.ValueA = ValueA;
	Parms.ValueB = ValueB;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.Menu_GetRemoveDisease
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EAILMENT_REMOVE_DISEASE_TYPE>DiseaseTypeList                                                  (Parm, OutParm)

void ULibAilment_C::Menu_GetRemoveDisease(int32 CharacterID, class UObject* __WorldContext, TArray<enum class EAILMENT_REMOVE_DISEASE_TYPE>* DiseaseTypeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_GetRemoveDisease");

	Params::ULibAilment_C_Menu_GetRemoveDisease_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseTypeList != nullptr)
		*DiseaseTypeList = std::move(Parms.DiseaseTypeList);

}


// Function LibAilment.LibAilment_C.Menu_GetEffectiveAilmentList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMainMenuAilmentData        EffectiveAilment                                                 (Parm, OutParm, HasGetValueTypeHash)

void ULibAilment_C::Menu_GetEffectiveAilmentList(int32 CharacterID, class UObject* __WorldContext, struct FMainMenuAilmentData* EffectiveAilment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_GetEffectiveAilmentList");

	Params::ULibAilment_C_Menu_GetEffectiveAilmentList_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EffectiveAilment != nullptr)
		*EffectiveAilment = std::move(Parms.EffectiveAilment);

}


// Function LibAilment.LibAilment_C.Menu_CheckRevive
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEffective                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckRevive(int32 CharacterID, class UObject* __WorldContext, bool* IsEffective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckRevive");

	Params::ULibAilment_C_Menu_CheckRevive_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEffective != nullptr)
		*IsEffective = Parms.IsEffective;

}


// Function LibAilment.LibAilment_C.Menu_CheckRemoveDisease
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAilment                    Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEffective                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckRemoveDisease(const struct FAilment& Ailment, int32 CharacterID, class UObject* __WorldContext, bool* IsEffective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckRemoveDisease");

	Params::ULibAilment_C_Menu_CheckRemoveDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEffective != nullptr)
		*IsEffective = Parms.IsEffective;

}


// Function LibAilment.LibAilment_C.Menu_CheckRecoveryMP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEffective                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckRecoveryMP(int32 TargetID, class UObject* __WorldContext, bool* IsEffective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckRecoveryMP");

	Params::ULibAilment_C_Menu_CheckRecoveryMP_Params Parms{};

	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEffective != nullptr)
		*IsEffective = Parms.IsEffective;

}


// Function LibAilment.LibAilment_C.Menu_CheckRecoveryHP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRevive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEffective                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Menu_CheckRecoveryHP(int32 TargetID, bool IsRevive, class UObject* __WorldContext, bool* IsEffective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_CheckRecoveryHP");

	Params::ULibAilment_C_Menu_CheckRecoveryHP_Params Parms{};

	Parms.TargetID = TargetID;
	Parms.IsRevive = IsRevive;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEffective != nullptr)
		*IsEffective = Parms.IsEffective;

}


// Function LibAilment.LibAilment_C.Menu_ExecRevive
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EnforceerID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_ExecRevive(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, int32 AbilityRatio, bool UseItem, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_ExecRevive");

	Params::ULibAilment_C_Menu_ExecRevive_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.EnforceerID = EnforceerID;
	Parms.TargetID = TargetID;
	Parms.AbilityRatio = AbilityRatio;
	Parms.UseItem = UseItem;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecRevive
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRevive(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRevive");

	Params::ULibAilment_C_Battle_ExecRevive_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_ExecRecoveryMP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EnforcerID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_ExecRecoveryMP(const struct FMenuAilmentHandler& Ailment, int32 EnforcerID, int32 TargetID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_ExecRecoveryMP");

	Params::ULibAilment_C_Menu_ExecRecoveryMP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.EnforcerID = EnforcerID;
	Parms.TargetID = TargetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.CalcRecoveryValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AilmentRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::CalcRecoveryValue(float Base, float AilmentRatio, class UObject* __WorldContext, float* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CalcRecoveryValue");

	Params::ULibAilment_C_CalcRecoveryValue_Params Parms{};

	Parms.Base = Base;
	Parms.AilmentRatio = AilmentRatio;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.CalcMenuRecoveryValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              EnforcerID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::CalcMenuRecoveryValue(int32 EnforcerID, int32 InvocationValue, enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 AbilityRatio, class UObject* __WorldContext, int32* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CalcMenuRecoveryValue");

	Params::ULibAilment_C_CalcMenuRecoveryValue_Params Parms{};

	Parms.EnforcerID = EnforcerID;
	Parms.InvocationValue = InvocationValue;
	Parms.CalcType = CalcType;
	Parms.AbilityRatio = AbilityRatio;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.Battle_ExecRecoveryHP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecRecoveryHP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecRecoveryHP");

	Params::ULibAilment_C_Battle_ExecRecoveryHP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.CalcItemValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::CalcItemValue(int32 InvocationValue, class UObject* __WorldContext, int32* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CalcItemValue");

	Params::ULibAilment_C_CalcItemValue_Params Parms{};

	Parms.InvocationValue = InvocationValue;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.CheckAddDisease
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckAddDisease(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckAddDisease");

	Params::ULibAilment_C_CheckAddDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.Battle_ExecAddDisease
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Random                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAddDisease(const struct FExecAilmentHandler& Ailment, bool Random, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAddDisease");

	Params::ULibAilment_C_Battle_ExecAddDisease_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.Random = Random;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.CheckCritical
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActionCommandBase_C*     Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckCritical(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class ABP_ActionCommandBase_C* Command, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckCritical");

	Params::ULibAilment_C_CheckCritical_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.Target = Target;
	Parms.Command = Command;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.CheckHit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActionCommandBase_C*     Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckHit(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class ABP_ActionCommandBase_C* Command, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckHit");

	Params::ULibAilment_C_CheckHit_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.Target = Target;
	Parms.Command = Command;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.CheckResistance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         AttackAttribute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        WeaponAttribute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       AttributeResist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       WeaponResist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       TotalResist                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewOpenWeakness                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckResistance(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* AttackAttribute, enum class EWEAPON_CATEGORY* WeaponAttribute, enum class EATTRIBUTE_RESIST* AttributeResist, enum class EATTRIBUTE_RESIST* WeaponResist, enum class EATTRIBUTE_RESIST* TotalResist, bool* NewOpenWeakness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckResistance");

	Params::ULibAilment_C_CheckResistance_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AttackAttribute != nullptr)
		*AttackAttribute = Parms.AttackAttribute;

	if (WeaponAttribute != nullptr)
		*WeaponAttribute = Parms.WeaponAttribute;

	if (AttributeResist != nullptr)
		*AttributeResist = Parms.AttributeResist;

	if (WeaponResist != nullptr)
		*WeaponResist = Parms.WeaponResist;

	if (TotalResist != nullptr)
		*TotalResist = Parms.TotalResist;

	if (NewOpenWeakness != nullptr)
		*NewOpenWeakness = Parms.NewOpenWeakness;

}


// Function LibAilment.LibAilment_C.CheckReflection
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ActionCommandBase_C*     Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::CheckReflection(class ABP_ActionCommandBase_C* Command, class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "CheckReflection");

	Params::ULibAilment_C_CheckReflection_Params Parms{};

	Parms.Command = Command;
	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.Check Counter Attack
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ActionCommandBase_C*     Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExecAilmentHandler         ExecAilment                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               AttackHit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibAilment_C::Check_Counter_Attack(class ABP_ActionCommandBase_C* Command, class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, const struct FExecAilmentHandler& ExecAilment, bool AttackHit, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Check Counter Attack");

	Params::ULibAilment_C_Check_Counter_Attack_Params Parms{};

	Parms.Command = Command;
	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.ExecAilment = ExecAilment;
	Parms.AttackHit = AttackHit;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAilment.LibAilment_C.GetAilmentTarget
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_TARGET_TYPE_OLDTargetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>DefaultTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ExceptDisease                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActionCommandBase_C*     Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Return                                                           (Parm, OutParm)

void ULibAilment_C::GetAilmentTarget(enum class EAILMENT_TARGET_TYPE_OLD TargetType, class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& DefaultTarget, class FName ExceptDisease, class ABP_ActionCommandBase_C* Command, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "GetAilmentTarget");

	Params::ULibAilment_C_GetAilmentTarget_Params Parms{};

	Parms.TargetType = TargetType;
	Parms.Enforcer = Enforcer;
	Parms.DefaultTarget = DefaultTarget;
	Parms.ExceptDisease = ExceptDisease;
	Parms.Command = Command;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function LibAilment.LibAilment_C.AppendCharacterArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABattleCharacterBase*>ArrayA                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBase*>ArrayB                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>Result                                                           (Parm, OutParm)

void ULibAilment_C::AppendCharacterArray(TArray<class ABattleCharacterBase*>& ArrayA, TArray<class ABattleCharacterBase*>& ArrayB, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "AppendCharacterArray");

	Params::ULibAilment_C_AppendCharacterArray_Params Parms{};

	Parms.ArrayA = ArrayA;
	Parms.ArrayB = ArrayB;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function LibAilment.LibAilment_C.Menu_ExecRecoveryHP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EnforceerID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRevive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasCompesationMagic                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_ExecRecoveryHP(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, int32 AbilityRatio, bool IsRevive, bool HasCompesationMagic, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_ExecRecoveryHP");

	Params::ULibAilment_C_Menu_ExecRecoveryHP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.EnforceerID = EnforceerID;
	Parms.TargetID = TargetID;
	Parms.AbilityRatio = AbilityRatio;
	Parms.IsRevive = IsRevive;
	Parms.HasCompesationMagic = HasCompesationMagic;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Menu_ExecAilment
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EnforceerID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasCompensationMagic                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Menu_ExecAilment(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, int32 AbilityRatio, bool UseItem, bool HasCompensationMagic, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Menu_ExecAilment");

	Params::ULibAilment_C_Menu_ExecAilment_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.EnforceerID = EnforceerID;
	Parms.TargetID = TargetID;
	Parms.AbilityRatio = AbilityRatio;
	Parms.UseItem = UseItem;
	Parms.HasCompensationMagic = HasCompensationMagic;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecDamageHP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecDamageHP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecDamageHP");

	Params::ULibAilment_C_Battle_ExecDamageHP_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibAilment.LibAilment_C.Battle_ExecAilment
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecAilmentHandler         Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAilment_C::Battle_ExecAilment(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAilment_C", "Battle_ExecAilment");

	Params::ULibAilment_C_Battle_ExecAilment_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


