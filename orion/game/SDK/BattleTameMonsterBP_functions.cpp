#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleTameMonsterBP.BattleTameMonsterBP_C
// (Actor)

class UClass* ABattleTameMonsterBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleTameMonsterBP_C");

	return Clss;
}


// BattleTameMonsterBP_C BattleTameMonsterBP.Default__BattleTameMonsterBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleTameMonsterBP_C* ABattleTameMonsterBP_C::GetDefaultObj()
{
	static class ABattleTameMonsterBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleTameMonsterBP_C*>(ABattleTameMonsterBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.CheckEnableSetCharaTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleTameMonsterBP_C::CheckEnableSetCharaTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "CheckEnableSetCharaTransform");

	Params::ABattleTameMonsterBP_C_CheckEnableSetCharaTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.IsCharacterTameMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleTameMonsterBP_C::IsCharacterTameMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "IsCharacterTameMonster");

	Params::ABattleTameMonsterBP_C_IsCharacterTameMonster_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetPartnerDefaultAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetPartnerDefaultAbility(class FName* AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetPartnerDefaultAbility");

	Params::ABattleTameMonsterBP_C_GetPartnerDefaultAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.PlayBattleVoice
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      EBattleVoiceType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleVoiceSetData         CPlayCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIsSkipDiseaseCheck                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleTameMonsterBP_C::PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition, bool bIsSkipDiseaseCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "PlayBattleVoice");

	Params::ABattleTameMonsterBP_C_PlayBattleVoice_Params Parms{};

	Parms.EBattleVoiceType = EBattleVoiceType;
	Parms.CPlayCondition = CPlayCondition;
	Parms.bIsSkipDiseaseCheck = bIsSkipDiseaseCheck;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetMP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MPMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetMP(int32* MP, int32* MPMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetMP");

	Params::ABattleTameMonsterBP_C_GetMP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MP != nullptr)
		*MP = Parms.MP;

	if (MPMax != nullptr)
		*MPMax = Parms.MPMax;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              HP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HPMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetHP(int32* HP, int32* HPMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetHP");

	Params::ABattleTameMonsterBP_C_GetHP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HP != nullptr)
		*HP = Parms.HP;

	if (HPMax != nullptr)
		*HPMax = Parms.HPMax;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.CheckSupportAilment
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESUPPORT_AILMENT_TYPE   ESupportAilment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSupportAbilityDataBase     CSupportAbilityData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleTameMonsterBP_C::CheckSupportAilment(enum class ESUPPORT_AILMENT_TYPE ESupportAilment, struct FSupportAbilityDataBase* CSupportAbilityData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "CheckSupportAilment");

	Params::ABattleTameMonsterBP_C_CheckSupportAilment_Params Parms{};

	Parms.ESupportAilment = ESupportAilment;

	UObject::ProcessEvent(Func, &Parms);

	if (CSupportAbilityData != nullptr)
		*CSupportAbilityData = std::move(Parms.CSupportAbilityData);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCurrentPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattleTameMonsterBP_C::GetCurrentPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetCurrentPosition");

	Params::ABattleTameMonsterBP_C_GetCurrentPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        StrCharacterName                                                 (Parm, OutParm)

void ABattleTameMonsterBP_C::GetCharacterName(class FText* StrCharacterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetCharacterName");

	Params::ABattleTameMonsterBP_C_GetCharacterName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StrCharacterName != nullptr)
		*StrCharacterName = Parms.StrCharacterName;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetDelayEnemyActionSE
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FActionDelaySEData>  AcActionDelaySEData                                              (Parm, OutParm)
// bool                               bEnable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::GetDelayEnemyActionSE(TArray<struct FActionDelaySEData>* AcActionDelaySEData, bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetDelayEnemyActionSE");

	Params::ABattleTameMonsterBP_C_GetDelayEnemyActionSE_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AcActionDelaySEData != nullptr)
		*AcActionDelaySEData = std::move(Parms.AcActionDelaySEData);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetWaitEnemyActionFrame
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NWaitFrame                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetWaitEnemyActionFrame(int32* NWaitFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetWaitEnemyActionFrame");

	Params::ABattleTameMonsterBP_C_GetWaitEnemyActionFrame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NWaitFrame != nullptr)
		*NWaitFrame = Parms.NWaitFrame;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterVoice_BattleStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrVoiceID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFindVoiceID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::GetCharacterVoice_BattleStart(class FName* StrVoiceID, bool* bFindVoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetCharacterVoice_BattleStart");

	Params::ABattleTameMonsterBP_C_GetCharacterVoice_BattleStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StrVoiceID != nullptr)
		*StrVoiceID = Parms.StrVoiceID;

	if (bFindVoiceID != nullptr)
		*bFindVoiceID = Parms.bFindVoiceID;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetOnHitDamageDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBoost                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsConvergence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EABILITY_TYPE           AbilityType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCompensation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCritical                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActionCommandBase*          ActionCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetOnHitDamageDiseaseRatio(class ABattleCharacterBaseBP_C* Target, bool IsBoost, bool IsConvergence, enum class EAILMENT_CALC_TYPE CalcType, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, enum class EABILITY_TYPE AbilityType, bool IsCompensation, bool IsCritical, class AActionCommandBase* ActionCommand, float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetOnHitDamageDiseaseRatio");

	Params::ABattleTameMonsterBP_C_GetOnHitDamageDiseaseRatio_Params Parms{};

	Parms.Target = Target;
	Parms.IsBoost = IsBoost;
	Parms.IsConvergence = IsConvergence;
	Parms.CalcType = CalcType;
	Parms.Weapon = Weapon;
	Parms.Attribute = Attribute;
	Parms.AbilityType = AbilityType;
	Parms.IsCompensation = IsCompensation;
	Parms.IsCritical = IsCritical;
	Parms.ActionCommand = ActionCommand;

	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterAccuracy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetCharacterAccuracy(int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetCharacterAccuracy");

	Params::ABattleTameMonsterBP_C_GetCharacterAccuracy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetCharacterAttack(enum class EAILMENT_CALC_TYPE CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetCharacterAttack");

	Params::ABattleTameMonsterBP_C_GetCharacterAttack_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.DamageTarget = DamageTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.OnHitDamageHP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsBreakAttack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBreakTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       ETotalResist                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       EWeaponResist                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleTameMonsterBP_C::OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, enum class EATTRIBUTE_RESIST ETotalResist, enum class EATTRIBUTE_RESIST EWeaponResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "OnHitDamageHP");

	Params::ABattleTameMonsterBP_C_OnHitDamageHP_Params Parms{};

	Parms.bIsBreakAttack = bIsBreakAttack;
	Parms.bIsBreakTarget = bIsBreakTarget;
	Parms.ETotalResist = ETotalResist;
	Parms.EWeaponResist = EWeaponResist;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetMonsterEffectPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     EffectPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetMonsterEffectPosition(struct FVector* EffectPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetMonsterEffectPosition");

	Params::ABattleTameMonsterBP_C_GetMonsterEffectPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EffectPosition != nullptr)
		*EffectPosition = std::move(Parms.EffectPosition);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetIsInventorItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleTameMonsterBP_C::GetIsInventorItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetIsInventorItem");

	Params::ABattleTameMonsterBP_C_GetIsInventorItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.PlayCharacterAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::PlayCharacterAction(enum class EKSCharacterAction ActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "PlayCharacterAction");

	Params::ABattleTameMonsterBP_C_PlayCharacterAction_Params Parms{};

	Parms.ActionType = ActionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.IsCharacterNPC
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleTameMonsterBP_C::IsCharacterNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "IsCharacterNPC");

	Params::ABattleTameMonsterBP_C_IsCharacterNPC_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterNPCFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               NPCFlag                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::GetCharacterNPCFlag(bool* NPCFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetCharacterNPCFlag");

	Params::ABattleTameMonsterBP_C_GetCharacterNPCFlag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCFlag != nullptr)
		*NPCFlag = Parms.NPCFlag;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.SetWeaponTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTameMonsterBP_C::SetWeaponTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "SetWeaponTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.InitializeReplayMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInvadeData                 InvadeData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        InvadeRowID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::InitializeReplayMode(const struct FInvadeData& InvadeData, class FName InvadeRowID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "InitializeReplayMode");

	Params::ABattleTameMonsterBP_C_InitializeReplayMode_Params Parms{};

	Parms.InvadeData = InvadeData;
	Parms.InvadeRowID = InvadeRowID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.CheckDiseaseSuccess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDisease                    DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::CheckDiseaseSuccess(const struct FDisease& DiseaseData, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "CheckDiseaseSuccess");

	Params::ABattleTameMonsterBP_C_CheckDiseaseSuccess_Params Parms{};

	Parms.DiseaseData = DiseaseData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetInvadeTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>Target                                                           (Parm, OutParm)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::GetInvadeTarget(TArray<class ABattleCharacterBase*>* Target, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetInvadeTarget");

	Params::ABattleTameMonsterBP_C_GetInvadeTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = std::move(Parms.Target);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetRecoveryLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseDEF                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetRecoveryLevelRatio");

	Params::ABattleTameMonsterBP_C_GetRecoveryLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseDEF != nullptr)
		*BaseDEF = Parms.BaseDEF;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetDamageLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseATK                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetDamageLevelRatio");

	Params::ABattleTameMonsterBP_C_GetDamageLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseATK != nullptr)
		*BaseATK = Parms.BaseATK;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetInvadeAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetInvadeAbility(int32 BoostLevel, class FName* AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetInvadeAbility");

	Params::ABattleTameMonsterBP_C_GetInvadeAbility_Params Parms{};

	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetInvadeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInvadeData                 EnemyData                                                        (Parm, OutParm)

void ABattleTameMonsterBP_C::GetInvadeData(struct FInvadeData* EnemyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetInvadeData");

	Params::ABattleTameMonsterBP_C_GetInvadeData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnemyData != nullptr)
		*EnemyData = std::move(Parms.EnemyData);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetEffectSpawnPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ground                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::GetEffectSpawnPosition(bool Ground, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "GetEffectSpawnPosition");

	Params::ABattleTameMonsterBP_C_GetEffectSpawnPosition_Params Parms{};

	Parms.Ground = Ground;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.InitializeTameMonster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInvadeData                 InvadeData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        InvadeRowID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        OwnerPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayCharacterEnter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPlayerSide                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsInvadeMonster                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::InitializeTameMonster(const struct FInvadeData& InvadeData, class FName InvadeRowID, class ABattleCharacterBase* OwnerPlayer, bool PlayCharacterEnter, bool IsPlayerSide, bool IsInvadeMonster)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "InitializeTameMonster");

	Params::ABattleTameMonsterBP_C_InitializeTameMonster_Params Parms{};

	Parms.InvadeData = InvadeData;
	Parms.InvadeRowID = InvadeRowID;
	Parms.OwnerPlayer = OwnerPlayer;
	Parms.PlayCharacterEnter = PlayCharacterEnter;
	Parms.IsPlayerSide = IsPlayerSide;
	Parms.IsInvadeMonster = IsInvadeMonster;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.WaitEnemyResourceLoadFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTameMonsterBP_C::WaitEnemyResourceLoadFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "WaitEnemyResourceLoadFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.LoadEnemyResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayerSide                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::LoadEnemyResource(bool IsPlayerSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "LoadEnemyResource");

	Params::ABattleTameMonsterBP_C_LoadEnemyResource_Params Parms{};

	Parms.IsPlayerSide = IsPlayerSide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABattleTameMonsterBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.InvadeMonsterReturnAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTameMonsterBP_C::InvadeMonsterReturnAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "InvadeMonsterReturnAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.RecoveryHP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::RecoveryHP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "RecoveryHP");

	Params::ABattleTameMonsterBP_C_RecoveryHP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.RecoveryMP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTameMonsterBP_C::RecoveryMP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "RecoveryMP");

	Params::ABattleTameMonsterBP_C_RecoveryMP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.LoadInvadeResourceForBattleReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTameMonsterBP_C::LoadInvadeResourceForBattleReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "LoadInvadeResourceForBattleReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTameMonsterBP.BattleTameMonsterBP_C.ExecuteUbergraph_BattleTameMonsterBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTameMonsterBP_C::ExecuteUbergraph_BattleTameMonsterBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTameMonsterBP_C", "ExecuteUbergraph_BattleTameMonsterBP");

	Params::ABattleTameMonsterBP_C_ExecuteUbergraph_BattleTameMonsterBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


