#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleSupporterBP.BattleSupporterBP_C
// (Actor)

class UClass* ABattleSupporterBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleSupporterBP_C");

	return Clss;
}


// BattleSupporterBP_C BattleSupporterBP.Default__BattleSupporterBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleSupporterBP_C* ABattleSupporterBP_C::GetDefaultObj()
{
	static class ABattleSupporterBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleSupporterBP_C*>(ABattleSupporterBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleSupporterBP.BattleSupporterBP_C.IsSupporterComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSupporterBP_C::IsSupporterComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "IsSupporterComplete");

	Params::ABattleSupporterBP_C_IsSupporterComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSupporterBP.BattleSupporterBP_C.ChangeMainWeapon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        ETargetWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseWeaponTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSupporterBP_C::ChangeMainWeapon(enum class EWEAPON_CATEGORY ETargetWeapon, bool bUseWeaponTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ChangeMainWeapon");

	Params::ABattleSupporterBP_C_ChangeMainWeapon_Params Parms{};

	Parms.ETargetWeapon = ETargetWeapon;
	Parms.bUseWeaponTexture = bUseWeaponTexture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSupporterBP.BattleSupporterBP_C.IsCharacterSupporter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSupporterBP_C::IsCharacterSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "IsCharacterSupporter");

	Params::ABattleSupporterBP_C_IsCharacterSupporter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetAbilityData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NIndex                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABattleSupporterBP_C::GetAbilityData(int32 NIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetAbilityData");

	Params::ABattleSupporterBP_C_GetAbilityData_Params Parms{};

	Parms.NIndex = NIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetCurrentPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattleSupporterBP_C::GetCurrentPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetCurrentPosition");

	Params::ABattleSupporterBP_C_GetCurrentPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetReplayStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsSelfTurn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_REPLAY_CHARA_STATUSEReplayStatus                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetReplayStatus(bool bIsSelfTurn, enum class EBATTLE_REPLAY_CHARA_STATUS* EReplayStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetReplayStatus");

	Params::ABattleSupporterBP_C_GetReplayStatus_Params Parms{};

	Parms.bIsSelfTurn = bIsSelfTurn;

	UObject::ProcessEvent(Func, &Parms);

	if (EReplayStatus != nullptr)
		*EReplayStatus = Parms.EReplayStatus;

}


// Function BattleSupporterBP.BattleSupporterBP_C.OverrideSupporterDataByNPCData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCData                    NPCData                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleSupporterBP_C::OverrideSupporterDataByNPCData(struct FNPCData& NPCData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "OverrideSupporterDataByNPCData");

	Params::ABattleSupporterBP_C_OverrideSupporterDataByNPCData_Params Parms{};

	Parms.NPCData = NPCData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetSessionSEType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESESSION_SE_TYPE        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESESSION_SE_TYPE ABattleSupporterBP_C::GetSessionSEType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetSessionSEType");

	Params::ABattleSupporterBP_C_GetSessionSEType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetCharacterName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        StrCharacterName                                                 (Parm, OutParm)

void ABattleSupporterBP_C::GetCharacterName(class FText* StrCharacterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetCharacterName");

	Params::ABattleSupporterBP_C_GetCharacterName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StrCharacterName != nullptr)
		*StrCharacterName = Parms.StrCharacterName;

}


// Function BattleSupporterBP.BattleSupporterBP_C.InitCallSupporter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::InitCallSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "InitCallSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.InitSupporter_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::InitSupporter_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "InitSupporter_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetPlayableCharacterID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    ECharaID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetPlayableCharacterID(enum class EPlayableCharacterID* ECharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetPlayableCharacterID");

	Params::ABattleSupporterBP_C_GetPlayableCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ECharaID != nullptr)
		*ECharaID = Parms.ECharaID;

}


// Function BattleSupporterBP.BattleSupporterBP_C.OnHitDamageHP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsBreakAttack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBreakTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       ETotalResist                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       EWeaponResist                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSupporterBP_C::OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, enum class EATTRIBUTE_RESIST ETotalResist, enum class EATTRIBUTE_RESIST EWeaponResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "OnHitDamageHP");

	Params::ABattleSupporterBP_C_OnHitDamageHP_Params Parms{};

	Parms.bIsBreakAttack = bIsBreakAttack;
	Parms.bIsBreakTarget = bIsBreakTarget;
	Parms.ETotalResist = ETotalResist;
	Parms.EWeaponResist = EWeaponResist;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSupporterBP.BattleSupporterBP_C.IsSupporterDash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ExecDash                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::IsSupporterDash(bool* ExecDash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "IsSupporterDash");

	Params::ABattleSupporterBP_C_IsSupporterDash_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecDash != nullptr)
		*ExecDash = Parms.ExecDash;

}


// Function BattleSupporterBP.BattleSupporterBP_C.IsUltimatedSupporter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUltimatedSupportr                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::IsUltimatedSupporter(bool* IsUltimatedSupportr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "IsUltimatedSupporter");

	Params::ABattleSupporterBP_C_IsUltimatedSupporter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUltimatedSupportr != nullptr)
		*IsUltimatedSupportr = Parms.IsUltimatedSupportr;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetSessionAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetSessionAbility(class FName* AbilityLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetSessionAbility");

	Params::ABattleSupporterBP_C_GetSessionAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

}


// Function BattleSupporterBP.BattleSupporterBP_C.InitEquimentWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        WeaponItemLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::InitEquimentWeapon(enum class EWEAPON_CATEGORY WeaponCategory, class FName WeaponItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "InitEquimentWeapon");

	Params::ABattleSupporterBP_C_InitEquimentWeapon_Params Parms{};

	Parms.WeaponCategory = WeaponCategory;
	Parms.WeaponItemLabel = WeaponItemLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.Debug_GetSupportCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::Debug_GetSupportCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "Debug_GetSupportCount");

	Params::ABattleSupporterBP_C_Debug_GetSupportCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function BattleSupporterBP.BattleSupporterBP_C.Debug_GetSupportPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Point                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::Debug_GetSupportPoint(int32* Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "Debug_GetSupportPoint");

	Params::ABattleSupporterBP_C_Debug_GetSupportPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Point != nullptr)
		*Point = Parms.Point;

}


// Function BattleSupporterBP.BattleSupporterBP_C.Debug_GetUseAbilityList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                AbilityLabelList                                                 (Parm, OutParm)
// int32                              SelectIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::Debug_GetUseAbilityList(TArray<class FText>* AbilityLabelList, int32* SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "Debug_GetUseAbilityList");

	Params::ABattleSupporterBP_C_Debug_GetUseAbilityList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabelList != nullptr)
		*AbilityLabelList = std::move(Parms.AbilityLabelList);

	if (SelectIndex != nullptr)
		*SelectIndex = Parms.SelectIndex;

}


// Function BattleSupporterBP.BattleSupporterBP_C.InstantStepInForReplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::InstantStepInForReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "InstantStepInForReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.InitializeReplayMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSupportCharacterData       SupportData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABattlePlayerBP_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SupporterRowID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BattleCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_REPLAY_CHARA_STATUSCharaStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::InitializeReplayMode(const struct FSupportCharacterData& SupportData, class ABattlePlayerBP_C* Player, class FName SupporterRowID, int32 BattleCharaID, enum class EBATTLE_REPLAY_CHARA_STATUS CharaStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "InitializeReplayMode");

	Params::ABattleSupporterBP_C_InitializeReplayMode_Params Parms{};

	Parms.SupportData = SupportData;
	Parms.Player = Player;
	Parms.SupporterRowID = SupporterRowID;
	Parms.BattleCharaID = BattleCharaID;
	Parms.CharaStatus = CharaStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetMainAbilityNameID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetMainAbilityNameID(class FName* AbilityLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetMainAbilityNameID");

	Params::ABattleSupporterBP_C_GetMainAbilityNameID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

}


// Function BattleSupporterBP.BattleSupporterBP_C.SetSupportCharacterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::SetSupportCharacterVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "SetSupportCharacterVisibility");

	Params::ABattleSupporterBP_C_SetSupportCharacterVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CheckDiseaseSuccess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDisease                    DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::CheckDiseaseSuccess(const struct FDisease& DiseaseData, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CheckDiseaseSuccess");

	Params::ABattleSupporterBP_C_CheckDiseaseSuccess_Params Parms{};

	Parms.DiseaseData = DiseaseData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetRecoveryLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseDEF                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetRecoveryLevelRatio");

	Params::ABattleSupporterBP_C_GetRecoveryLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseDEF != nullptr)
		*BaseDEF = Parms.BaseDEF;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetDamageLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseATK                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetDamageLevelRatio");

	Params::ABattleSupporterBP_C_GetDamageLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseATK != nullptr)
		*BaseATK = Parms.BaseATK;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetEffectSpawnPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ground                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetEffectSpawnPosition(bool Ground, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetEffectSpawnPosition");

	Params::ABattleSupporterBP_C_GetEffectSpawnPosition_Params Parms{};

	Parms.Ground = Ground;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleSupporterBP.BattleSupporterBP_C.BeginCharacterTurn_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::BeginCharacterTurn_OLD(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "BeginCharacterTurn_OLD");

	Params::ABattleSupporterBP_C_BeginCharacterTurn_OLD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleSupporterBP.BattleSupporterBP_C.GetCharacterNameID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        TextID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::GetCharacterNameID(class FName* TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "GetCharacterNameID");

	Params::ABattleSupporterBP_C_GetCharacterNameID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextID != nullptr)
		*TextID = Parms.TextID;

}


// Function BattleSupporterBP.BattleSupporterBP_C.JudgeCover
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::JudgeCover(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "JudgeCover");

	Params::ABattleSupporterBP_C_JudgeCover_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattleSupporterBP.BattleSupporterBP_C.InitSupporter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::InitSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "InitSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.UpdateSupportTurn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SupportFinish                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::UpdateSupportTurn(bool* SupportFinish, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "UpdateSupportTurn");

	Params::ABattleSupporterBP_C_UpdateSupportTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SupportFinish != nullptr)
		*SupportFinish = Parms.SupportFinish;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleSupporterBP.BattleSupporterBP_C.CharacterStepOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CharacterStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CharacterStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CharacterStepIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CharacterStepIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CharacterStepIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSupportCharacterData       SupportData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABattlePlayerBP_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CharaStepPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SupporterRowID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WaterSide                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::Initialize(const struct FSupportCharacterData& SupportData, class ABattlePlayerBP_C* Player, const struct FVector& CharaStepPoint, class FName SupporterRowID, bool WaterSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "Initialize");

	Params::ABattleSupporterBP_C_Initialize_Params Parms{};

	Parms.SupportData = SupportData;
	Parms.Player = Player;
	Parms.CharaStepPoint = CharaStepPoint;
	Parms.SupporterRowID = SupporterRowID;
	Parms.WaterSide = WaterSide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.StartDashTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::StartDashTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "StartDashTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.StartDashTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::StartDashTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "StartDashTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepInTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepInTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepInTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepInTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepInTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepInTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepOutTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepOutTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepOutTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepOutTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepOutTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepOutTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.VictoryFadeOutTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::VictoryFadeOutTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "VictoryFadeOutTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.VictoryFadeOutTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::VictoryFadeOutTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "VictoryFadeOutTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.ReturnDashTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::ReturnDashTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ReturnDashTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.ReturnDashTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::ReturnDashTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ReturnDashTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CreateAnimCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::CreateAnimCharacter(class FName ActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CreateAnimCharacter");

	Params::ABattleSupporterBP_C_CreateAnimCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.SetDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InstantDeath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "SetDamage");

	Params::ABattleSupporterBP_C_SetDamage_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;
	Parms.InstantDeath = InstantDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.ExecStartDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::ExecStartDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ExecStartDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.SupportStartDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::SupportStartDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "SupportStartDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.VictoryFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::VictoryFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "VictoryFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.FinishStepOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::FinishStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "FinishStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.SupportReturnDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Escape                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::SupportReturnDash(bool Escape)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "SupportReturnDash");

	Params::ABattleSupporterBP_C_SupportReturnDash_Params Parms{};

	Parms.Escape = Escape;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.Update Animation State OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::Update_Animation_State_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "Update Animation State OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.NoticePlayActionCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::NoticePlayActionCommand(class FName ActionCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "NoticePlayActionCommand");

	Params::ABattleSupporterBP_C_NoticePlayActionCommand_Params Parms{};

	Parms.ActionCommand = ActionCommand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.ExecReturnDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::ExecReturnDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ExecReturnDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.ExecSupporterReturn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::ExecSupporterReturn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ExecSupporterReturn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.OnFinish_CreateBattleAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::OnFinish_CreateBattleAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "OnFinish_CreateBattleAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.LoadWeaponTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::LoadWeaponTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "LoadWeaponTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.LoadedWeaponTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::LoadedWeaponTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "LoadedWeaponTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepInForRandom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepInForRandom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepInForRandom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.SetDefaultLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInMainParty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSupporterBP_C::SetDefaultLocation(bool bInMainParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "SetDefaultLocation");

	Params::ABattleSupporterBP_C_SetDefaultLocation_Params Parms{};

	Parms.bInMainParty = bInMainParty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSupporterBP.BattleSupporterBP_C.FinishChangePartySequence
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::FinishChangePartySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "FinishChangePartySequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.CoverStepOutForRandom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSupporterBP_C::CoverStepOutForRandom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "CoverStepOutForRandom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSupporterBP.BattleSupporterBP_C.ExecuteUbergraph_BattleSupporterBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSupporterBP_C::ExecuteUbergraph_BattleSupporterBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSupporterBP_C", "ExecuteUbergraph_BattleSupporterBP");

	Params::ABattleSupporterBP_C_ExecuteUbergraph_BattleSupporterBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


