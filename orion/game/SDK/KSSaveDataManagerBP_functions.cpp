#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSSaveDataManagerBP.KSSaveDataManagerBP_C
// (Actor)

class UClass* AKSSaveDataManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSSaveDataManagerBP_C");

	return Clss;
}


// KSSaveDataManagerBP_C KSSaveDataManagerBP.Default__KSSaveDataManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSSaveDataManagerBP_C* AKSSaveDataManagerBP_C::GetDefaultObj()
{
	static class AKSSaveDataManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSSaveDataManagerBP_C*>(AKSSaveDataManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetEndrollSegmentBattleReplay
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEndRollSegmentSet      SegmentID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSSaveDataManagerBP_C::SetEndrollSegmentBattleReplay(enum class EEndRollSegmentSet SegmentID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "SetEndrollSegmentBattleReplay");

	Params::AKSSaveDataManagerBP_C_SetEndrollSegmentBattleReplay_Params Parms{};

	Parms.SegmentID = SegmentID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.UpdateSlotData
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSSaveSlotName         SlotIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSSaveDataManagerBP_C::UpdateSlotData(enum class EKSSaveSlotName SlotIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "UpdateSlotData");

	Params::AKSSaveDataManagerBP_C_UpdateSlotData_Params Parms{};

	Parms.SlotIdx = SlotIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetGameSaveData_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMJSaveData*                 SaveData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSSaveDataManagerBP_C::SetGameSaveData_BP(class UMJSaveData* SaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "SetGameSaveData_BP");

	Params::AKSSaveDataManagerBP_C_SetGameSaveData_BP_Params Parms{};

	Parms.SaveData = SaveData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.InitGameData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSSaveDataManagerBP_C::InitGameData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "InitGameData");

	Params::AKSSaveDataManagerBP_C_InitGameData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.GetCalcBaseBattleSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AKSSaveDataManagerBP_C::GetCalcBaseBattleSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "GetCalcBaseBattleSpeed");

	Params::AKSSaveDataManagerBP_C_GetCalcBaseBattleSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetBattleSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSSaveDataManagerBP_C::SetBattleSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "SetBattleSpeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.ResetBattleSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSSaveDataManagerBP_C::ResetBattleSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "ResetBattleSpeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.ChangeBattleSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSSaveDataManagerBP_C::ChangeBattleSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "ChangeBattleSpeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.InitSystemData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSSaveDataManagerBP_C::InitSystemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "InitSystemData");

	Params::AKSSaveDataManagerBP_C_InitSystemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.CheckPartyMainMember
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHit                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSSaveDataManagerBP_C::CheckPartyMainMember(enum class EPlayableCharacterID CharaID, bool* IsHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "CheckPartyMainMember");

	Params::AKSSaveDataManagerBP_C_CheckPartyMainMember_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.RestoreParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSSaveDataManagerBP_C::RestoreParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "RestoreParty");

	Params::AKSSaveDataManagerBP_C_RestoreParty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetupLastDungeonParty
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Party1                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Party2                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSSaveDataManagerBP_C::SetupLastDungeonParty(TArray<int32>& Party1, TArray<int32>& Party2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "SetupLastDungeonParty");

	Params::AKSSaveDataManagerBP_C_SetupLastDungeonParty_Params Parms{};

	Parms.Party1 = Party1;
	Parms.Party2 = Party2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetupReminiscenceParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSSaveDataManagerBP_C::SetupReminiscenceParty(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "SetupReminiscenceParty");

	Params::AKSSaveDataManagerBP_C_SetupReminiscenceParty_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.GetActiveSaveSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSSaveSlotName         SaveSlotName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSSaveDataManagerBP_C::GetActiveSaveSlot(enum class EKSSaveSlotName* SaveSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "GetActiveSaveSlot");

	Params::AKSSaveDataManagerBP_C_GetActiveSaveSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SaveSlotName != nullptr)
		*SaveSlotName = Parms.SaveSlotName;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.SetActiveSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSSaveSlotName         SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSSaveDataManagerBP_C::SetActiveSaveSlot(enum class EKSSaveSlotName SaveSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "SetActiveSaveSlot");

	Params::AKSSaveDataManagerBP_C_SetActiveSaveSlot_Params Parms{};

	Parms.SaveSlotName = SaveSlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.CloseAutoSaveUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSSaveDataManagerBP_C::CloseAutoSaveUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "CloseAutoSaveUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.OpenAutoSaveUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSSaveDataManagerBP_C::OpenAutoSaveUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "OpenAutoSaveUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.StartAutoSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 AutoSavedDelegate                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSSaveDataManagerBP_C::StartAutoSave(FDelegateProperty_& AutoSavedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "StartAutoSave");

	Params::AKSSaveDataManagerBP_C_StartAutoSave_Params Parms{};

	Parms.AutoSavedDelegate = AutoSavedDelegate;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.OnEndAutoSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSSaveDataManagerBP_C::OnEndAutoSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "OnEndAutoSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveDataManagerBP.KSSaveDataManagerBP_C.ExecuteUbergraph_KSSaveDataManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSSaveDataManagerBP_C::ExecuteUbergraph_KSSaveDataManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveDataManagerBP_C", "ExecuteUbergraph_KSSaveDataManagerBP");

	Params::AKSSaveDataManagerBP_C_ExecuteUbergraph_KSSaveDataManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


