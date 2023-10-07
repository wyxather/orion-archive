#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleEnemyBP.BattleEnemyBP_C
// (Actor)

class UClass* ABattleEnemyBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEnemyBP_C");

	return Clss;
}


// BattleEnemyBP_C BattleEnemyBP.Default__BattleEnemyBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleEnemyBP_C* ABattleEnemyBP_C::GetDefaultObj()
{
	static class ABattleEnemyBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleEnemyBP_C*>(ABattleEnemyBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeStatusUIIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleEnemyStatus_C*        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::InitializeStatusUIIfNeeded(class UBattleEnemyStatus_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeStatusUIIfNeeded");

	Params::ABattleEnemyBP_C_InitializeStatusUIIfNeeded_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetSuccessRateRenderPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetSuccessRateRenderPosition(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetSuccessRateRenderPosition");

	Params::ABattleEnemyBP_C_SetSuccessRateRenderPosition_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeMultiActionOrderData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::InitializeMultiActionOrderData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeMultiActionOrderData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.UpdateRequestSettingNextOrder_PostOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::UpdateRequestSettingNextOrder_PostOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UpdateRequestSettingNextOrder_PostOrder");

	Params::ABattleEnemyBP_C_UpdateRequestSettingNextOrder_PostOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckExecDiseaseForPostOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::CheckExecDiseaseForPostOrder(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckExecDiseaseForPostOrder");

	Params::ABattleEnemyBP_C_CheckExecDiseaseForPostOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function BattleEnemyBP.BattleEnemyBP_C.ChangeMainWeapon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        ETargetWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseWeaponTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::ChangeMainWeapon(enum class EWEAPON_CATEGORY ETargetWeapon, bool bUseWeaponTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ChangeMainWeapon");

	Params::ABattleEnemyBP_C_ChangeMainWeapon_Params Parms{};

	Parms.ETargetWeapon = ETargetWeapon;
	Parms.bUseWeaponTexture = bUseWeaponTexture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetAbilityData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NIndex                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABattleEnemyBP_C::GetAbilityData(int32 NIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetAbilityData");

	Params::ABattleEnemyBP_C_GetAbilityData_Params Parms{};

	Parms.NIndex = NIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.UpdateDiseaseTurnCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::UpdateDiseaseTurnCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UpdateDiseaseTurnCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.UpdateStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::UpdateStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UpdateStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeDisease
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           EDiseaseType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_CATEGORY       EDiseaseCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInvocationValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsNewDisease                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::OnTakeDisease(class ABattleCharacterBase* CEnforcer, enum class EDISEASE_TYPE EDiseaseType, enum class EDISEASE_CATEGORY EDiseaseCategory, int32 NInvocationValue, int32 NBoostLevel, bool bIsNewDisease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnTakeDisease");

	Params::ABattleEnemyBP_C_OnTakeDisease_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.EDiseaseType = EDiseaseType;
	Parms.EDiseaseCategory = EDiseaseCategory;
	Parms.NInvocationValue = NInvocationValue;
	Parms.NBoostLevel = NBoostLevel;
	Parms.bIsNewDisease = bIsNewDisease;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeNewDisease
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           EDiseaseType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::OnTakeNewDisease(enum class EDISEASE_TYPE EDiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnTakeNewDisease");

	Params::ABattleEnemyBP_C_OnTakeNewDisease_Params Parms{};

	Parms.EDiseaseType = EDiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.ChangeActionModeForGaldera
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::ChangeActionModeForGaldera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ChangeActionModeForGaldera");

	Params::ABattleEnemyBP_C_ChangeActionModeForGaldera_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCursorPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattleEnemyBP_C::GetCursorPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCursorPosition");

	Params::ABattleEnemyBP_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCurrentPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattleEnemyBP_C::GetCurrentPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCurrentPosition");

	Params::ABattleEnemyBP_C_GetCurrentPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.IsCharacterNonPartsBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::IsCharacterNonPartsBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "IsCharacterNonPartsBattle");

	Params::ABattleEnemyBP_C_IsCharacterNonPartsBattle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetTameMonsterData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bTameEnable                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FTameRateBase                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetTameMonsterData(bool* bTameEnable, float* FTameRateBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetTameMonsterData");

	Params::ABattleEnemyBP_C_GetTameMonsterData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bTameEnable != nullptr)
		*bTameEnable = Parms.bTameEnable;

	if (FTameRateBase != nullptr)
		*FTameRateBase = Parms.FTameRateBase;

}


// Function BattleEnemyBP.BattleEnemyBP_C.OverrideEnemyDataByNPCData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCData                    NPCData                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleEnemyBP_C::OverrideEnemyDataByNPCData(struct FNPCData& NPCData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OverrideEnemyDataByNPCData");

	Params::ABattleEnemyBP_C_OverrideEnemyDataByNPCData_Params Parms{};

	Parms.NPCData = NPCData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ExecRevive
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NReviveHP                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseReviveVoice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::ExecRevive(class ABattleCharacterBase* CEnforcer, int32 NReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ExecRevive");

	Params::ABattleEnemyBP_C_ExecRevive_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NReviveHP = NReviveHP;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bUseReviveVoice = bUseReviveVoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeDiseaseResist
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EATTRIBUTE_RESIST>DiseaseResist                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleEnemyBP_C::InitializeDiseaseResist(TArray<enum class EATTRIBUTE_RESIST>& DiseaseResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeDiseaseResist");

	Params::ABattleEnemyBP_C_InitializeDiseaseResist_Params Parms{};

	Parms.DiseaseResist = DiseaseResist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetCharacterName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrCharacterNameLabel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::SetCharacterName(class FName StrCharacterNameLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetCharacterName");

	Params::ABattleEnemyBP_C_SetCharacterName_Params Parms{};

	Parms.StrCharacterNameLabel = StrCharacterNameLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        StrCharacterName                                                 (Parm, OutParm)

void ABattleEnemyBP_C::GetCharacterName(class FText* StrCharacterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCharacterName");

	Params::ABattleEnemyBP_C_GetCharacterName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StrCharacterName != nullptr)
		*StrCharacterName = Parms.StrCharacterName;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetEquipStanceOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D ABattleEnemyBP_C::GetEquipStanceOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetEquipStanceOffset");

	Params::ABattleEnemyBP_C_GetEquipStanceOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.ApplyChangeActionMode
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::ApplyChangeActionMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ApplyChangeActionMode");

	Params::ABattleEnemyBP_C_ApplyChangeActionMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.Debug_SetEnemyData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyData                  NewEnemyData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABattleEnemyBP_C::Debug_SetEnemyData(const struct FEnemyData& NewEnemyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Debug_SetEnemyData");

	Params::ABattleEnemyBP_C_Debug_SetEnemyData_Params Parms{};

	Parms.NewEnemyData = NewEnemyData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.Debug_SetActionDelaySEData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionDelaySEData>  CSEData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::Debug_SetActionDelaySEData(TArray<struct FActionDelaySEData>& CSEData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Debug_SetActionDelaySEData");

	Params::ABattleEnemyBP_C_Debug_SetActionDelaySEData_Params Parms{};

	Parms.CSEData = CSEData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetActionDelaySEData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FActionDelaySEData>  CSEData                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::Debug_GetActionDelaySEData(TArray<struct FActionDelaySEData>* CSEData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Debug_GetActionDelaySEData");

	Params::ABattleEnemyBP_C_Debug_GetActionDelaySEData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CSEData != nullptr)
		*CSEData = std::move(Parms.CSEData);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.Get Battle Idle from Equip Category
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSCharacterAction      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EKSCharacterAction ABattleEnemyBP_C::Get_Battle_Idle_from_Equip_Category()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Get Battle Idle from Equip Category");

	Params::ABattleEnemyBP_C_Get_Battle_Idle_from_Equip_Category_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckWeaponWeakOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        EWeaponCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOpened                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::CheckWeaponWeakOpen(enum class EWEAPON_CATEGORY EWeaponCategory, bool* bOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckWeaponWeakOpen");

	Params::ABattleEnemyBP_C_CheckWeaponWeakOpen_Params Parms{};

	Parms.EWeaponCategory = EWeaponCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (bOpened != nullptr)
		*bOpened = Parms.bOpened;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckAttributeWeakOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_TYPE         EAttributeType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOpened                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::CheckAttributeWeakOpen(enum class EATTRIBUTE_TYPE EAttributeType, bool* bOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckAttributeWeakOpen");

	Params::ABattleEnemyBP_C_CheckAttributeWeakOpen_Params Parms{};

	Parms.EAttributeType = EAttributeType;

	UObject::ProcessEvent(Func, &Parms);

	if (bOpened != nullptr)
		*bOpened = Parms.bOpened;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetWeaponResist
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        EAttackWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCheckWeakLock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       EResistResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetWeaponResist(enum class EWEAPON_CATEGORY EAttackWeapon, bool bCheckWeakLock, enum class EATTRIBUTE_RESIST* EResistResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetWeaponResist");

	Params::ABattleEnemyBP_C_GetWeaponResist_Params Parms{};

	Parms.EAttackWeapon = EAttackWeapon;
	Parms.bCheckWeakLock = bCheckWeakLock;

	UObject::ProcessEvent(Func, &Parms);

	if (EResistResult != nullptr)
		*EResistResult = Parms.EResistResult;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetAttributeResist
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_TYPE         EAttackAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCheckWeakLock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       EResistResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetAttributeResist(enum class EATTRIBUTE_TYPE EAttackAttribute, bool bCheckWeakLock, enum class EATTRIBUTE_RESIST* EResistResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetAttributeResist");

	Params::ABattleEnemyBP_C_GetAttributeResist_Params Parms{};

	Parms.EAttackAttribute = EAttackAttribute;
	Parms.bCheckWeakLock = bCheckWeakLock;

	UObject::ProcessEvent(Func, &Parms);

	if (EResistResult != nullptr)
		*EResistResult = Parms.EResistResult;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetDelayEnemyActionSE
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FActionDelaySEData>  AcActionDelaySEData                                              (Parm, OutParm)
// bool                               bEnable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::GetDelayEnemyActionSE(TArray<struct FActionDelaySEData>* AcActionDelaySEData, bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetDelayEnemyActionSE");

	Params::ABattleEnemyBP_C_GetDelayEnemyActionSE_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AcActionDelaySEData != nullptr)
		*AcActionDelaySEData = std::move(Parms.AcActionDelaySEData);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetWaitEnemyActionFrame
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NWaitFrame                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetWaitEnemyActionFrame(int32* NWaitFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetWaitEnemyActionFrame");

	Params::ABattleEnemyBP_C_GetWaitEnemyActionFrame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NWaitFrame != nullptr)
		*NWaitFrame = Parms.NWaitFrame;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterVoice_BattleStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrVoiceID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFindVoiceID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::GetCharacterVoice_BattleStart(class FName* StrVoiceID, bool* bFindVoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCharacterVoice_BattleStart");

	Params::ABattleEnemyBP_C_GetCharacterVoice_BattleStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StrVoiceID != nullptr)
		*StrVoiceID = Parms.StrVoiceID;

	if (bFindVoiceID != nullptr)
		*bFindVoiceID = Parms.bFindVoiceID;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SurveyOpenedWeakPoint
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NOpenedNum                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NWeakPointMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::SurveyOpenedWeakPoint(int32* NOpenedNum, int32* NWeakPointMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SurveyOpenedWeakPoint");

	Params::ABattleEnemyBP_C_SurveyOpenedWeakPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NOpenedNum != nullptr)
		*NOpenedNum = Parms.NOpenedNum;

	if (NWeakPointMax != nullptr)
		*NWeakPointMax = Parms.NWeakPointMax;

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.Exec Disease Pointing Weapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDisease                    DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRandom                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              WeakLockNum                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EnemyWaitTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::Exec_Disease_Pointing_Weapon(const struct FDisease& DiseaseData, bool IsRandom, int32 WeakLockNum, float* EnemyWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Exec Disease Pointing Weapon");

	Params::ABattleEnemyBP_C_Exec_Disease_Pointing_Weapon_Params Parms{};

	Parms.DiseaseData = DiseaseData;
	Parms.IsRandom = IsRandom;
	Parms.WeakLockNum = WeakLockNum;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyWaitTime != nullptr)
		*EnemyWaitTime = Parms.EnemyWaitTime;

}


// Function BattleEnemyBP.BattleEnemyBP_C.ConvertWeaponListToWeakLock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EWEAPON_CATEGORY>WeaponList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              WeakAttributeMask                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::ConvertWeaponListToWeakLock(TArray<enum class EWEAPON_CATEGORY>& WeaponList, int32* WeakAttributeMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ConvertWeaponListToWeakLock");

	Params::ABattleEnemyBP_C_ConvertWeaponListToWeakLock_Params Parms{};

	Parms.WeaponList = WeaponList;

	UObject::ProcessEvent(Func, &Parms);

	if (WeakAttributeMask != nullptr)
		*WeakAttributeMask = Parms.WeakAttributeMask;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckEnableStealthActionOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::CheckEnableStealthActionOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckEnableStealthActionOrder");

	Params::ABattleEnemyBP_C_CheckEnableStealthActionOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.AddEquipmentWeaponList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WeaponIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::AddEquipmentWeaponList(int32 WeaponIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "AddEquipmentWeaponList");

	Params::ABattleEnemyBP_C_AddEquipmentWeaponList_Params Parms{};

	Parms.WeaponIndex = WeaponIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.UpdateWeakLock_PostOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::UpdateWeakLock_PostOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UpdateWeakLock_PostOrder");

	Params::ABattleEnemyBP_C_UpdateWeakLock_PostOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.UpdateWeakChange_PostOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::UpdateWeakChange_PostOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UpdateWeakChange_PostOrder");

	Params::ABattleEnemyBP_C_UpdateWeakChange_PostOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.UpdateShieldChange_PostOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::UpdateShieldChange_PostOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UpdateShieldChange_PostOrder");

	Params::ABattleEnemyBP_C_UpdateShieldChange_PostOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeDisease_ForStealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnTakeDisease_ForStealth(enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnTakeDisease_ForStealth");

	Params::ABattleEnemyBP_C_OnTakeDisease_ForStealth_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckEnableStealthTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::CheckEnableStealthTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckEnableStealthTarget");

	Params::ABattleEnemyBP_C_CheckEnableStealthTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckEnableStealthCursor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::CheckEnableStealthCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckEnableStealthCursor");

	Params::ABattleEnemyBP_C_CheckEnableStealthCursor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.On Post Remove Disease
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecDiseaseHandler         DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::On_Post_Remove_Disease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "On Post Remove Disease");

	Params::ABattleEnemyBP_C_On_Post_Remove_Disease_Params Parms{};

	Parms.DiseaseData = DiseaseData;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetOpenedAttribute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NIndex                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         EResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::GetOpenedAttribute(int32 NIndex, enum class EATTRIBUTE_TYPE* EResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetOpenedAttribute");

	Params::ABattleEnemyBP_C_GetOpenedAttribute_Params Parms{};

	Parms.NIndex = NIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (EResult != nullptr)
		*EResult = Parms.EResult;

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CreateOpenedAttributeList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NAttributeNum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NAttributeMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::CreateOpenedAttributeList(int32* NAttributeNum, int32* NAttributeMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CreateOpenedAttributeList");

	Params::ABattleEnemyBP_C_CreateOpenedAttributeList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NAttributeNum != nullptr)
		*NAttributeNum = Parms.NAttributeNum;

	if (NAttributeMax != nullptr)
		*NAttributeMax = Parms.NAttributeMax;

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetDiseaseEffectPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetDiseaseEffectPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetDiseaseEffectPosition");

	Params::ABattleEnemyBP_C_GetDiseaseEffectPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeSpriteSocketData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::InitializeSpriteSocketData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeSpriteSocketData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetDamageUIPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RevisionCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldPos                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetDamageUIPosition(int32 RevisionCount, struct FVector* WorldPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetDamageUIPosition");

	Params::ABattleEnemyBP_C_GetDamageUIPosition_Params Parms{};

	Parms.RevisionCount = RevisionCount;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldPos != nullptr)
		*WorldPos = std::move(Parms.WorldPos);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetEnemyEffectPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     EffectPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetEnemyEffectPosition(struct FVector* EffectPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetEnemyEffectPosition");

	Params::ABattleEnemyBP_C_GetEnemyEffectPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EffectPosition != nullptr)
		*EffectPosition = std::move(Parms.EffectPosition);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetStatusUIPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     UIPosition                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetStatusUIPosition(struct FVector* UIPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetStatusUIPosition");

	Params::ABattleEnemyBP_C_GetStatusUIPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UIPosition != nullptr)
		*UIPosition = std::move(Parms.UIPosition);

}


// Function BattleEnemyBP.BattleEnemyBP_C.RestoreGroggy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::RestoreGroggy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RestoreGroggy");

	Params::ABattleEnemyBP_C_RestoreGroggy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CommandPreview
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       AttributeList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleEnemyBP_C::CommandPreview(class ABattleCharacterBaseBP_C* Enforcer, TArray<bool>& AttributeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CommandPreview");

	Params::ABattleEnemyBP_C_CommandPreview_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AttributeList = AttributeList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetDefaultWarpPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattleEnemyBP_C::GetDefaultWarpPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetDefaultWarpPosition");

	Params::ABattleEnemyBP_C_GetDefaultWarpPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.IsPlayBattleAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Playing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::IsPlayBattleAction(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "IsPlayBattleAction");

	Params::ABattleEnemyBP_C_IsPlayBattleAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;

}


// Function BattleEnemyBP.BattleEnemyBP_C.IsCharacterReady
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::IsCharacterReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "IsCharacterReady");

	Params::ABattleEnemyBP_C_IsCharacterReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetWeakIconFullOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFullOpen                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::SetWeakIconFullOpen(bool bIsFullOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetWeakIconFullOpen");

	Params::ABattleEnemyBP_C_SetWeakIconFullOpen_Params Parms{};

	Parms.bIsFullOpen = bIsFullOpen;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.IsWeakIconFullOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::IsWeakIconFullOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "IsWeakIconFullOpen");

	Params::ABattleEnemyBP_C_IsWeakIconFullOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckExecedPreparation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::CheckExecedPreparation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckExecedPreparation");

	Params::ABattleEnemyBP_C_CheckExecedPreparation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.OpenWeakIcon
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NIndex                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRandom                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPreparation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPlay2nd                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              bOpenIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::OpenWeakIcon(int32 NIndex, bool bRandom, bool bPreparation, bool bPlay2nd, int32* bOpenIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OpenWeakIcon");

	Params::ABattleEnemyBP_C_OpenWeakIcon_Params Parms{};

	Parms.NIndex = NIndex;
	Parms.bRandom = bRandom;
	Parms.bPreparation = bPreparation;
	Parms.bPlay2nd = bPlay2nd;

	UObject::ProcessEvent(Func, &Parms);

	if (bOpenIndex != nullptr)
		*bOpenIndex = Parms.bOpenIndex;

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetWeaponTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::SetWeaponTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetWeaponTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetBribeData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               BribeEnable                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              BribeMoney                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::GetBribeData(bool* BribeEnable, int32* BribeMoney)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetBribeData");

	Params::ABattleEnemyBP_C_GetBribeData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BribeEnable != nullptr)
		*BribeEnable = Parms.BribeEnable;

	if (BribeMoney != nullptr)
		*BribeMoney = Parms.BribeMoney;

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.IsCharacterNPC
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::IsCharacterNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "IsCharacterNPC");

	Params::ABattleEnemyBP_C_IsCharacterNPC_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.AddBribeCounter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::AddBribeCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "AddBribeCounter");

	Params::ABattleEnemyBP_C_AddBribeCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetEnableWeakChangeData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::SetEnableWeakChangeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetEnableWeakChangeData");

	Params::ABattleEnemyBP_C_SetEnableWeakChangeData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetEnableShieldChangeData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::SetEnableShieldChangeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetEnableShieldChangeData");

	Params::ABattleEnemyBP_C_SetEnableShieldChangeData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.RequestWeakChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeakChangeData             CNewWeakChangeData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::RequestWeakChange(const struct FWeakChangeData& CNewWeakChangeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RequestWeakChange");

	Params::ABattleEnemyBP_C_RequestWeakChange_Params Parms{};

	Parms.CNewWeakChangeData = CNewWeakChangeData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.RequestShieldChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShieldChangeData           CNewShieldChangeData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::RequestShieldChange(const struct FShieldChangeData& CNewShieldChangeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RequestShieldChange");

	Params::ABattleEnemyBP_C_RequestShieldChange_Params Parms{};

	Parms.CNewShieldChangeData = CNewShieldChangeData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.RequestWeakLock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeakLockData               CNewWeakLockData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::RequestWeakLock(const struct FWeakLockData& CNewWeakLockData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RequestWeakLock");

	Params::ABattleEnemyBP_C_RequestWeakLock_Params Parms{};

	Parms.CNewWeakLockData = CNewWeakLockData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetEnableWeakLockData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::SetEnableWeakLockData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetEnableWeakLockData");

	Params::ABattleEnemyBP_C_SetEnableWeakLockData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.PlayCharacterAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::PlayCharacterAction(enum class EKSCharacterAction ActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "PlayCharacterAction");

	Params::ABattleEnemyBP_C_PlayCharacterAction_Params Parms{};

	Parms.ActionType = ActionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.CreateAnimCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::CreateAnimCharacter(class FName ActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CreateAnimCharacter");

	Params::ABattleEnemyBP_C_CreateAnimCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterNPCFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               NPCFlag                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::GetCharacterNPCFlag(bool* NPCFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCharacterNPCFlag");

	Params::ABattleEnemyBP_C_GetCharacterNPCFlag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCFlag != nullptr)
		*NPCFlag = Parms.NPCFlag;

}


// Function BattleEnemyBP.BattleEnemyBP_C.ChangeActionMode
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSpecial                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NModeIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::ChangeActionMode(bool bIsSpecial, int32 NModeIndex, bool bUseTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ChangeActionMode");

	Params::ABattleEnemyBP_C_ChangeActionMode_Params Parms{};

	Parms.bIsSpecial = bIsSpecial;
	Parms.NModeIndex = NModeIndex;
	Parms.bUseTransition = bUseTransition;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.RemoveBreakEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::RemoveBreakEffect(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RemoveBreakEffect");

	Params::ABattleEnemyBP_C_RemoveBreakEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetDebugDrawParameterPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetDebugDrawParameterPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetDebugDrawParameterPosition");

	Params::ABattleEnemyBP_C_GetDebugDrawParameterPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleEnemyBP.BattleEnemyBP_C.AddDiseaseForReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_TYPE_BITMASK   DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::AddDiseaseForReplay(int32 Status, enum class EDISEASE_TYPE_BITMASK DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "AddDiseaseForReplay");

	Params::ABattleEnemyBP_C_AddDiseaseForReplay_Params Parms{};

	Parms.Status = Status;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetDamageForEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPoison                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InstantDeath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetDamageForEnemy(int32 Value, enum class EBATTLE_DAMAGE_TYPE Type, bool LastHit, bool IsPoison, bool InstantDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetDamageForEnemy");

	Params::ABattleEnemyBP_C_SetDamageForEnemy_Params Parms{};

	Parms.Value = Value;
	Parms.Type = Type;
	Parms.LastHit = LastHit;
	Parms.IsPoison = IsPoison;
	Parms.InstantDeath = InstantDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetMoney
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Money                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::Debug_GetMoney(int32* Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Debug_GetMoney");

	Params::ABattleEnemyBP_C_Debug_GetMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Money != nullptr)
		*Money = Parms.Money;

}


// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetJobPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::Debug_GetJobPoint(int32* JobPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Debug_GetJobPoint");

	Params::ABattleEnemyBP_C_Debug_GetJobPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JobPoint != nullptr)
		*JobPoint = Parms.JobPoint;

}


// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetExp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Exp                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::Debug_GetExp(int32* Exp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Debug_GetExp");

	Params::ABattleEnemyBP_C_Debug_GetExp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exp != nullptr)
		*Exp = Parms.Exp;

}


// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetUseAbilityList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                AbilityLabelList                                                 (Parm, OutParm)
// int32                              SelectIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::Debug_GetUseAbilityList(TArray<class FText>* AbilityLabelList, int32* SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Debug_GetUseAbilityList");

	Params::ABattleEnemyBP_C_Debug_GetUseAbilityList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabelList != nullptr)
		*AbilityLabelList = std::move(Parms.AbilityLabelList);

	if (SelectIndex != nullptr)
		*SelectIndex = Parms.SelectIndex;

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeReplayModeStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::InitializeReplayModeStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeReplayModeStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeReplayMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyData                  EnemyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        EnemyRowID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleReplayEnemyData      ReplayData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::InitializeReplayMode(const struct FEnemyData& EnemyData, class FName EnemyRowID, const struct FBattleReplayEnemyData& ReplayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeReplayMode");

	Params::ABattleEnemyBP_C_InitializeReplayMode_Params Parms{};

	Parms.EnemyData = EnemyData;
	Parms.EnemyRowID = EnemyRowID;
	Parms.ReplayData = ReplayData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetCallEnemyWeaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HPRatio                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SubShieldPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::SetCallEnemyWeaken(int32 HPRatio, int32 SubShieldPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetCallEnemyWeaken");

	Params::ABattleEnemyBP_C_SetCallEnemyWeaken_Params Parms{};

	Parms.HPRatio = HPRatio;
	Parms.SubShieldPoint = SubShieldPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.RestoreBreak
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleEnemyBP_C::RestoreBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RestoreBreak");

	Params::ABattleEnemyBP_C_RestoreBreak_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetAttributeWeakOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::SetAttributeWeakOpen(enum class EATTRIBUTE_TYPE Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetAttributeWeakOpen");

	Params::ABattleEnemyBP_C_SetAttributeWeakOpen_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetWeaponWeakOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::SetWeaponWeakOpen(enum class EWEAPON_CATEGORY Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetWeaponWeakOpen");

	Params::ABattleEnemyBP_C_SetWeaponWeakOpen_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckAttributeWeakOpen_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Open                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::CheckAttributeWeakOpen_OLD(enum class EATTRIBUTE_TYPE Attribute, bool* Open)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckAttributeWeakOpen_OLD");

	Params::ABattleEnemyBP_C_CheckAttributeWeakOpen_OLD_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

	if (Open != nullptr)
		*Open = Parms.Open;

}


// Function BattleEnemyBP.BattleEnemyBP_C.CheckWeaponWeakOpen_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Open                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::CheckWeaponWeakOpen_OLD(enum class EWEAPON_CATEGORY Weapon, bool* Open)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CheckWeaponWeakOpen_OLD");

	Params::ABattleEnemyBP_C_CheckWeaponWeakOpen_OLD_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

	if (Open != nullptr)
		*Open = Parms.Open;

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeDamageHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         AttributeType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::OnTakeDamageHP(class ABattleCharacterBaseBP_C* Enforcer, int32 DamageValue, enum class EWEAPON_CATEGORY WeaponType, enum class EATTRIBUTE_TYPE AttributeType, enum class EAILMENT_CALC_TYPE_OLD CalcType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnTakeDamageHP");

	Params::ABattleEnemyBP_C_OnTakeDamageHP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.DamageValue = DamageValue;
	Parms.WeaponType = WeaponType;
	Parms.AttributeType = AttributeType;
	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetRecoveryLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseDEF                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetRecoveryLevelRatio");

	Params::ABattleEnemyBP_C_GetRecoveryLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseDEF != nullptr)
		*BaseDEF = Parms.BaseDEF;

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeWeakControlData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::InitializeWeakControlData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeWeakControlData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ClearEnableWeakLockData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::ClearEnableWeakLockData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ClearEnableWeakLockData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.JudgeCover
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::JudgeCover(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "JudgeCover");

	Params::ABattleEnemyBP_C_JudgeCover_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetDamageLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseATK                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetDamageLevelRatio");

	Params::ABattleEnemyBP_C_GetDamageLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseATK != nullptr)
		*BaseATK = Parms.BaseATK;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetDebugTameRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              TameRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetDebugTameRate(float* TameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetDebugTameRate");

	Params::ABattleEnemyBP_C_GetDebugTameRate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TameRate != nullptr)
		*TameRate = Parms.TameRate;

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeForReserve
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TargetPriority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::InitializeForReserve(int32 TargetPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeForReserve");

	Params::ABattleEnemyBP_C_InitializeForReserve_Params Parms{};

	Parms.TargetPriority = TargetPriority;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.RespawnInitialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyData                  EnemyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        EnemyRowID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EquipmentWeaponID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TransformEnemy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::RespawnInitialize(const struct FEnemyData& EnemyData, class FName EnemyRowID, class FName EquipmentWeaponID, bool TransformEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RespawnInitialize");

	Params::ABattleEnemyBP_C_RespawnInitialize_Params Parms{};

	Parms.EnemyData = EnemyData;
	Parms.EnemyRowID = EnemyRowID;
	Parms.EquipmentWeaponID = EquipmentWeaponID;
	Parms.TransformEnemy = TransformEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetEnemyData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FEnemyData                  EnemyData                                                        (Parm, OutParm, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetEnemyData(struct FEnemyData* EnemyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetEnemyData");

	Params::ABattleEnemyBP_C_GetEnemyData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnemyData != nullptr)
		*EnemyData = std::move(Parms.EnemyData);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetTakeDamageDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageRatio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetTakeDamageDiseaseRatio(enum class EAILMENT_CALC_TYPE CalcType, enum class EATTRIBUTE_TYPE Attribute, float* DamageRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetTakeDamageDiseaseRatio");

	Params::ABattleEnemyBP_C_GetTakeDamageDiseaseRatio_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageRatio != nullptr)
		*DamageRatio = Parms.DamageRatio;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetSaveEnemyData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveEnemyData              EnemyData                                                        (Parm, OutParm, NoDestructor)

void ABattleEnemyBP_C::GetSaveEnemyData(struct FSaveEnemyData* EnemyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetSaveEnemyData");

	Params::ABattleEnemyBP_C_GetSaveEnemyData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnemyData != nullptr)
		*EnemyData = std::move(Parms.EnemyData);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterNameID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        TextID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetCharacterNameID(class FName* TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCharacterNameID");

	Params::ABattleEnemyBP_C_GetCharacterNameID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextID != nullptr)
		*TextID = Parms.TextID;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetBreakPointDamage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Break                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetBreakPointDamage(int32 DamageValue, bool* Break)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetBreakPointDamage");

	Params::ABattleEnemyBP_C_SetBreakPointDamage_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Break != nullptr)
		*Break = Parms.Break;

}


// Function BattleEnemyBP.BattleEnemyBP_C.BeginBattleTurn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::BeginBattleTurn(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "BeginBattleTurn");

	Params::ABattleEnemyBP_C_BeginBattleTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetBattleAI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_BattleAI_Base_C*         BattleAI                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetBattleAI(class UBP_BattleAI_Base_C** BattleAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetBattleAI");

	Params::ABattleEnemyBP_C_GetBattleAI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleAI != nullptr)
		*BattleAI = Parms.BattleAI;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterOrderIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   IconUV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PixelScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaFootPivot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CharacterSwitch                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::GetCharacterOrderIcon(class UTexture2D** OrderIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* Scale, float* InvertX, struct FVector2D* CharaFootPivot, bool* CharacterSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCharacterOrderIcon");

	Params::ABattleEnemyBP_C_GetCharacterOrderIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

	if (IconUV != nullptr)
		*IconUV = std::move(Parms.IconUV);

	if (PixelScale != nullptr)
		*PixelScale = std::move(Parms.PixelScale);

	if (CharaOffset != nullptr)
		*CharaOffset = std::move(Parms.CharaOffset);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

	if (InvertX != nullptr)
		*InvertX = Parms.InvertX;

	if (CharaFootPivot != nullptr)
		*CharaFootPivot = std::move(Parms.CharaFootPivot);

	if (CharacterSwitch != nullptr)
		*CharacterSwitch = Parms.CharacterSwitch;

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterActiveIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  FrontIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   IconUV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PixelScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CharaScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  WeaponIcon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaFootPivot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetCharacterActiveIcon(class UTexture2D** OrderIcon, class UTexture2D** FrontIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* CharaScale, float* InvertX, class UTexture2D** WeaponIcon, struct FVector2D* CharaFootPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetCharacterActiveIcon");

	Params::ABattleEnemyBP_C_GetCharacterActiveIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

	if (FrontIcon != nullptr)
		*FrontIcon = Parms.FrontIcon;

	if (IconUV != nullptr)
		*IconUV = std::move(Parms.IconUV);

	if (PixelScale != nullptr)
		*PixelScale = std::move(Parms.PixelScale);

	if (CharaOffset != nullptr)
		*CharaOffset = std::move(Parms.CharaOffset);

	if (CharaScale != nullptr)
		*CharaScale = Parms.CharaScale;

	if (InvertX != nullptr)
		*InvertX = Parms.InvertX;

	if (WeaponIcon != nullptr)
		*WeaponIcon = Parms.WeaponIcon;

	if (CharaFootPivot != nullptr)
		*CharaFootPivot = std::move(Parms.CharaFootPivot);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetEffectSpawnPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ground                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetEffectSpawnPosition(bool Ground, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetEffectSpawnPosition");

	Params::ABattleEnemyBP_C_GetEffectSpawnPosition_Params Parms{};

	Parms.Ground = Ground;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetWeaponRegist_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        AttackWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckWeakLock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       AttributeResist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetWeaponRegist_OLD(enum class EWEAPON_CATEGORY AttackWeapon, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetWeaponRegist_OLD");

	Params::ABattleEnemyBP_C_GetWeaponRegist_OLD_Params Parms{};

	Parms.AttackWeapon = AttackWeapon;
	Parms.CheckWeakLock = CheckWeakLock;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeResist != nullptr)
		*AttributeResist = Parms.AttributeResist;

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetTameMonster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::SetTameMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetTameMonster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.BeginCharacterTurn_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::BeginCharacterTurn_OLD(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "BeginCharacterTurn_OLD");

	Params::ABattleEnemyBP_C_BeginCharacterTurn_OLD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleEnemyBP.BattleEnemyBP_C.IsShowFadePlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Playing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::IsShowFadePlaying(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "IsShowFadePlaying");

	Params::ABattleEnemyBP_C_IsShowFadePlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;

}


// Function BattleEnemyBP.BattleEnemyBP_C.ShowFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::ShowFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ShowFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.HiddenBattleEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::HiddenBattleEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "HiddenBattleEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.GetAttributeResist_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_TYPE         AttackAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckWeakLock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       AttributeResist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::GetAttributeResist_OLD(enum class EATTRIBUTE_TYPE AttackAttribute, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "GetAttributeResist_OLD");

	Params::ABattleEnemyBP_C_GetAttributeResist_OLD_Params Parms{};

	Parms.AttackAttribute = AttackAttribute;
	Parms.CheckWeakLock = CheckWeakLock;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeResist != nullptr)
		*AttributeResist = Parms.AttributeResist;

}


// Function BattleEnemyBP.BattleEnemyBP_C.InitializeEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyData                  EnemyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        EnemyRowID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetPriority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_ENCOUNT_TYPE    BattleMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::InitializeEnemy(const struct FEnemyData& EnemyData, class FName EnemyRowID, int32 TargetPriority, enum class EBATTLE_ENCOUNT_TYPE BattleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "InitializeEnemy");

	Params::ABattleEnemyBP_C_InitializeEnemy_Params Parms{};

	Parms.EnemyData = EnemyData;
	Parms.EnemyRowID = EnemyRowID;
	Parms.TargetPriority = TargetPriority;
	Parms.BattleMode = BattleMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_ECF2F8634BBB0582BA9D98B2017148FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnLoaded_ECF2F8634BBB0582BA9D98B2017148FB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnLoaded_ECF2F8634BBB0582BA9D98B2017148FB");

	Params::ABattleEnemyBP_C_OnLoaded_ECF2F8634BBB0582BA9D98B2017148FB_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_F5708AAA4318ED8D35680F8B575705A5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnLoaded_F5708AAA4318ED8D35680F8B575705A5(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnLoaded_F5708AAA4318ED8D35680F8B575705A5");

	Params::ABattleEnemyBP_C_OnLoaded_F5708AAA4318ED8D35680F8B575705A5_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_CF189632406811CCECD0E986C4050965
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnLoaded_CF189632406811CCECD0E986C4050965(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnLoaded_CF189632406811CCECD0E986C4050965");

	Params::ABattleEnemyBP_C_OnLoaded_CF189632406811CCECD0E986C4050965_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_F9638E394117BD243ABB85A5103FB38E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnLoaded_F9638E394117BD243ABB85A5103FB38E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnLoaded_F9638E394117BD243ABB85A5103FB38E");

	Params::ABattleEnemyBP_C_OnLoaded_F9638E394117BD243ABB85A5103FB38E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_6F5A957B409A4872EDC2DD8E3B1A6B2B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnLoaded_6F5A957B409A4872EDC2DD8E3B1A6B2B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnLoaded_6F5A957B409A4872EDC2DD8E3B1A6B2B");

	Params::ABattleEnemyBP_C_OnLoaded_6F5A957B409A4872EDC2DD8E3B1A6B2B_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_A8CACB7C43D931A6DFDA55910D9CE780
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnLoaded_A8CACB7C43D931A6DFDA55910D9CE780(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnLoaded_A8CACB7C43D931A6DFDA55910D9CE780");

	Params::ABattleEnemyBP_C_OnLoaded_A8CACB7C43D931A6DFDA55910D9CE780_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_4835FA82420C732C1024A79D680A3973
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::OnLoaded_4835FA82420C732C1024A79D680A3973(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OnLoaded_4835FA82420C732C1024A79D680A3973");

	Params::ABattleEnemyBP_C_OnLoaded_4835FA82420C732C1024A79D680A3973_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetStatusDestruction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::SetStatusDestruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetStatusDestruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetStatusGroggy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::SetStatusGroggy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetStatusGroggy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.FinishDeadEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::FinishDeadEffect(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "FinishDeadEffect");

	Params::ABattleEnemyBP_C_FinishDeadEffect_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.FinishDestructionEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::FinishDestructionEffect(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "FinishDestructionEffect");

	Params::ABattleEnemyBP_C_FinishDestructionEffect_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetStatusFellowDestruction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::SetStatusFellowDestruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetStatusFellowDestruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetStatusVanish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::SetStatusVanish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetStatusVanish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::CustomEvent_1(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CustomEvent_1");

	Params::ABattleEnemyBP_C_CustomEvent_1_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.LoadEnemyResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::LoadEnemyResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "LoadEnemyResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.WaitEnemyResourceLoadFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::WaitEnemyResourceLoadFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "WaitEnemyResourceLoadFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetStatusDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::SetStatusDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetStatusDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.LoadEnemyIconResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::LoadEnemyIconResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "LoadEnemyIconResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.WaitEnemyIconResourceLoadFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::WaitEnemyIconResourceLoadFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "WaitEnemyIconResourceLoadFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.WeaponTextureLoadFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::WeaponTextureLoadFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "WeaponTextureLoadFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.LoadEnemyResourceForReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::LoadEnemyResourceForReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "LoadEnemyResourceForReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.LoadChangeActionModeResource
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleEnemyBP_C::LoadChangeActionModeResource(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "LoadChangeActionModeResource");

	Params::ABattleEnemyBP_C_LoadChangeActionModeResource_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.EndStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::EndStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "EndStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.OpenStatusUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::OpenStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "OpenStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.HideStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::HideStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "HideStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ResumeStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::ResumeStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ResumeStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.BeginEnemyStatusUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleEnemyStatus_C*        StatusUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::BeginEnemyStatusUI(class UBattleEnemyStatus_C* StatusUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "BeginEnemyStatusUI");

	Params::ABattleEnemyBP_C_BeginEnemyStatusUI_Params Parms{};

	Parms.StatusUI = StatusUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.UpdateSideCharacterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::UpdateSideCharacterUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UpdateSideCharacterUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetSuccessRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EABILITY_TYPE           AbilityType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::SetSuccessRate(enum class EABILITY_TYPE AbilityType, int32 AbilityRatio, int32 InvocationValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetSuccessRate");

	Params::ABattleEnemyBP_C_SetSuccessRate_Params Parms{};

	Parms.AbilityType = AbilityType;
	Parms.AbilityRatio = AbilityRatio;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetBribePrice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EABILITY_TYPE           AbilityType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AbilityRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::SetBribePrice(enum class EABILITY_TYPE AbilityType, float AbilityRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetBribePrice");

	Params::ABattleEnemyBP_C_SetBribePrice_Params Parms{};

	Parms.AbilityType = AbilityType;
	Parms.AbilityRatio = AbilityRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InstantDeath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetDamage");

	Params::ABattleEnemyBP_C_SetDamage_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;
	Parms.InstantDeath = InstantDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.UseMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UseMP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::UseMP(int32 UseMP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "UseMP");

	Params::ABattleEnemyBP_C_UseMP_Params Parms{};

	Parms.UseMP = UseMP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetSelectMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetSelectMaterial(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetSelectMaterial");

	Params::ABattleEnemyBP_C_SetSelectMaterial_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.Update Animation State OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::Update_Animation_State_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "Update Animation State OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetWeakVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetWeakVisible(enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, bool CheckGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetWeakVisible");

	Params::ABattleEnemyBP_C_SetWeakVisible_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Attribute = Attribute;
	Parms.CheckGroup = CheckGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetDamage_MP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::SetDamage_MP(int32 DamageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetDamage_MP");

	Params::ABattleEnemyBP_C_SetDamage_MP_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetBoostPoint_OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetBoostPoint_OLD(int32 Value, bool Use)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetBoostPoint_OLD");

	Params::ABattleEnemyBP_C_SetBoostPoint_OLD_Params Parms{};

	Parms.Value = Value;
	Parms.Use = Use;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.BeginAddBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::BeginAddBoostPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "BeginAddBoostPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.CalcNextTurnWaitTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::CalcNextTurnWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CalcNextTurnWaitTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.CoverStepIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::CoverStepIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CoverStepIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.EnemyEscape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::EnemyEscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "EnemyEscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.CallEnemyEnterAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::CallEnemyEnterAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "CallEnemyEnterAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ForceDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::ForceDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ForceDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetDamageForReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetDamageForReplay(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetDamageForReplay");

	Params::ABattleEnemyBP_C_SetDamageForReplay_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.SetDamageForPoison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::SetDamageForPoison(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "SetDamageForPoison");

	Params::ABattleEnemyBP_C_SetDamageForPoison_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ReceiveTick");

	Params::ABattleEnemyBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.RecoveryMP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::RecoveryMP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RecoveryMP");

	Params::ABattleEnemyBP_C_RecoveryMP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.RecoveryHP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::RecoveryHP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RecoveryHP");

	Params::ABattleEnemyBP_C_RecoveryHP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.PlayCharmEscape
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::PlayCharmEscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "PlayCharmEscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.PlayCharmEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::PlayCharmEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "PlayCharmEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ExecReturnCharmAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleEnemyBP_C::ExecReturnCharmAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ExecReturnCharmAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ExecReturnSupporterAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWithReturnText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::ExecReturnSupporterAction(bool bWithReturnText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ExecReturnSupporterAction");

	Params::ABattleEnemyBP_C_ExecReturnSupporterAction_Params Parms{};

	Parms.bWithReturnText = bWithReturnText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.RecoveryBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEnemyBP_C::RecoveryBP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "RecoveryBP");

	Params::ABattleEnemyBP_C_RecoveryBP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyBP.BattleEnemyBP_C.ExecuteUbergraph_BattleEnemyBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEnemyBP_C::ExecuteUbergraph_BattleEnemyBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyBP_C", "ExecuteUbergraph_BattleEnemyBP");

	Params::ABattleEnemyBP_C_ExecuteUbergraph_BattleEnemyBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


