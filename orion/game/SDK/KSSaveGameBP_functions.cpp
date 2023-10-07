#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSSaveGameBP.KSSaveGameBP_C
// (None)

class UClass* UKSSaveGameBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSSaveGameBP_C");

	return Clss;
}


// KSSaveGameBP_C KSSaveGameBP.Default__KSSaveGameBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKSSaveGameBP_C* UKSSaveGameBP_C::GetDefaultObj()
{
	static class UKSSaveGameBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKSSaveGameBP_C*>(UKSSaveGameBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSSaveGameBP.KSSaveGameBP_C.CheckPartyEquipmentAilmentEnable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_TYPE           Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAilment                    Ailment                                                          (Parm, OutParm, HasGetValueTypeHash)
// struct FAilmentHandler             AilmentHandler                                                   (Parm, OutParm, NoDestructor)

void UKSSaveGameBP_C::CheckPartyEquipmentAilmentEnable(enum class EAILMENT_TYPE Type, bool* IsFound, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "CheckPartyEquipmentAilmentEnable");

	Params::UKSSaveGameBP_C_CheckPartyEquipmentAilmentEnable_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (Ailment != nullptr)
		*Ailment = std::move(Parms.Ailment);

	if (AilmentHandler != nullptr)
		*AilmentHandler = std::move(Parms.AilmentHandler);

}


// Function KSSaveGameBP.KSSaveGameBP_C.AddParticipationOrderCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    JoinCharaID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::AddParticipationOrderCharacter(enum class EPlayableCharacterID JoinCharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "AddParticipationOrderCharacter");

	Params::UKSSaveGameBP_C_AddParticipationOrderCharacter_Params Parms{};

	Parms.JoinCharaID = JoinCharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterFixedEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFixed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::SetCharacterFixedEquipment(int32 CharacterID, enum class EEQUIPMENT_PART Part, bool IsFixed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetCharacterFixedEquipment");

	Params::UKSSaveGameBP_C_SetCharacterFixedEquipment_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Part = Part;
	Parms.IsFixed = IsFixed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetPartyMember
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSavePlayerCharacterData>PartyMemberData                                                  (Parm, OutParm)

void UKSSaveGameBP_C::GetPartyMember(TArray<struct FSavePlayerCharacterData>* PartyMemberData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetPartyMember");

	Params::UKSSaveGameBP_C_GetPartyMember_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PartyMemberData != nullptr)
		*PartyMemberData = std::move(Parms.PartyMemberData);

}


// Function KSSaveGameBP.KSSaveGameBP_C.Set Character POT
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              POT                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::Set_Character_POT(int32 CharacterID, int32 POT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "Set Character POT");

	Params::UKSSaveGameBP_C_Set_Character_POT_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.POT = POT;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetPlayerExp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextExp                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalExp                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::GetPlayerExp(int32 Level, int32* NextExp, int32* TotalExp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetPlayerExp");

	Params::UKSSaveGameBP_C_GetPlayerExp_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

	if (NextExp != nullptr)
		*NextExp = Parms.NextExp;

	if (TotalExp != nullptr)
		*TotalExp = Parms.TotalExp;

}


// Function KSSaveGameBP.KSSaveGameBP_C.CheckAlreadyLearned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CheckID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAlreadyLearned                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::CheckAlreadyLearned(int32 CheckID, bool* IsAlreadyLearned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "CheckAlreadyLearned");

	Params::UKSSaveGameBP_C_CheckAlreadyLearned_Params Parms{};

	Parms.CheckID = CheckID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlreadyLearned != nullptr)
		*IsAlreadyLearned = Parms.IsAlreadyLearned;

}


// Function KSSaveGameBP.KSSaveGameBP_C.IsLearnAbilityFull
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsFull                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              EmptyIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::IsLearnAbilityFull(bool* IsFull, int32* EmptyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "IsLearnAbilityFull");

	Params::UKSSaveGameBP_C_IsLearnAbilityFull_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsFull != nullptr)
		*IsFull = Parms.IsFull;

	if (EmptyIndex != nullptr)
		*EmptyIndex = Parms.EmptyIndex;

}


// Function KSSaveGameBP.KSSaveGameBP_C.DeleteFollowNpc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDelete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::DeleteFollowNpc(enum class EPlayableCharacterID CharacterID, bool* IsDelete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "DeleteFollowNpc");

	Params::UKSSaveGameBP_C_DeleteFollowNpc_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDelete != nullptr)
		*IsDelete = Parms.IsDelete;

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetClearedMainScenarioDataMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              DataMax                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::GetClearedMainScenarioDataMax(int32* DataMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetClearedMainScenarioDataMax");

	Params::UKSSaveGameBP_C_GetClearedMainScenarioDataMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DataMax != nullptr)
		*DataMax = Parms.DataMax;

}


// Function KSSaveGameBP.KSSaveGameBP_C.InitClearedMainScenario
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKSSaveGameBP_C::InitClearedMainScenario()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "InitClearedMainScenario");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetBattleReplayData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleReplayData           ReplayData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EEndRollSegmentSet      EndRollSegment                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetBattleReplayData(const struct FBattleReplayData& ReplayData, enum class EEndRollSegmentSet EndRollSegment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetBattleReplayData");

	Params::UKSSaveGameBP_C_SetBattleReplayData_Params Parms{};

	Parms.ReplayData = ReplayData;
	Parms.EndRollSegment = EndRollSegment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetBattleReplayData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEndRollSegmentSet      EndRollSegment                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleReplayData           ReplayData                                                       (Parm, OutParm)

void UKSSaveGameBP_C::GetBattleReplayData(enum class EEndRollSegmentSet EndRollSegment, struct FBattleReplayData* ReplayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetBattleReplayData");

	Params::UKSSaveGameBP_C_GetBattleReplayData_Params Parms{};

	Parms.EndRollSegment = EndRollSegment;

	UObject::ProcessEvent(Func, &Parms);

	if (ReplayData != nullptr)
		*ReplayData = std::move(Parms.ReplayData);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SubSupportLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SubValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LimitOver                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::SubSupportLimit(int32 SubValue, enum class EPlayableCharacterID CharacterID, bool* LimitOver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SubSupportLimit");

	Params::UKSSaveGameBP_C_SubSupportLimit_Params Parms{};

	Parms.SubValue = SubValue;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (LimitOver != nullptr)
		*LimitOver = Parms.LimitOver;

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetNPCHearFlag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HearFlag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::SetNPCHearFlag(class FName NPCLabel, bool HearFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetNPCHearFlag");

	Params::UKSSaveGameBP_C_SetNPCHearFlag_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.HearFlag = HearFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.DelSubParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::DelSubParty(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "DelSubParty");

	Params::UKSSaveGameBP_C_DelSubParty_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.DelMainParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::DelMainParty(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "DelMainParty");

	Params::UKSSaveGameBP_C_DelMainParty_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.LeaveCharacterToParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::LeaveCharacterToParty(enum class EPlayableCharacterID CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "LeaveCharacterToParty");

	Params::UKSSaveGameBP_C_LeaveCharacterToParty_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.JoinGuestCharacterToParty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::JoinGuestCharacterToParty(enum class EPlayableCharacterID CharacterID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "JoinGuestCharacterToParty");

	Params::UKSSaveGameBP_C_JoinGuestCharacterToParty_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSSaveGameBP.KSSaveGameBP_C.CreatePartySet1And2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Set1_Main                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Set1_Sub                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Set2_Main                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Set2_Sub                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKSSaveGameBP_C::CreatePartySet1And2(TArray<int32>& Set1_Main, TArray<int32>& Set1_Sub, TArray<int32>& Set2_Main, TArray<int32>& Set2_Sub)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "CreatePartySet1And2");

	Params::UKSSaveGameBP_C_CreatePartySet1And2_Params Parms{};

	Parms.Set1_Main = Set1_Main;
	Parms.Set1_Sub = Set1_Sub;
	Parms.Set2_Main = Set2_Main;
	Parms.Set2_Sub = Set2_Sub;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.InitializationMapChangeHistory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKSSaveGameBP_C::InitializationMapChangeHistory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "InitializationMapChangeHistory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveGameBP.KSSaveGameBP_C.IsMaxMapChangeHistory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::IsMaxMapChangeHistory(bool* IsMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "IsMaxMapChangeHistory");

	Params::UKSSaveGameBP_C_IsMaxMapChangeHistory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMax != nullptr)
		*IsMax = Parms.IsMax;

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetParameterGrow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             GrowParam                                                        (Parm, OutParm, NoDestructor)

void UKSSaveGameBP_C::GetParameterGrow(int32 CharacterID, struct FCharacterParam* GrowParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetParameterGrow");

	Params::UKSSaveGameBP_C_GetParameterGrow_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (GrowParam != nullptr)
		*GrowParam = std::move(Parms.GrowParam);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetParameterGrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             GrowParam                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UKSSaveGameBP_C::SetParameterGrow(int32 CharacterID, const struct FCharacterParam& GrowParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetParameterGrow");

	Params::UKSSaveGameBP_C_SetParameterGrow_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.GrowParam = GrowParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetPreparationKnown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PreparationID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetPreparationKnown(int32 PreparationID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetPreparationKnown");

	Params::UKSSaveGameBP_C_SetPreparationKnown_Params Parms{};

	Parms.PreparationID = PreparationID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetPreparationKnown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PreparationID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Known                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::GetPreparationKnown(int32 PreparationID, bool* Known)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetPreparationKnown");

	Params::UKSSaveGameBP_C_GetPreparationKnown_Params Parms{};

	Parms.PreparationID = PreparationID;

	UObject::ProcessEvent(Func, &Parms);

	if (Known != nullptr)
		*Known = Parms.Known;

}


// Function KSSaveGameBP.KSSaveGameBP_C.CheckPartySupportAilmentEnable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESUPPORT_AILMENT_TYPE   Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::CheckPartySupportAilmentEnable(enum class ESUPPORT_AILMENT_TYPE Type, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "CheckPartySupportAilmentEnable");

	Params::UKSSaveGameBP_C_CheckPartySupportAilmentEnable_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function KSSaveGameBP.KSSaveGameBP_C.ClearLastBgmID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKSSaveGameBP_C::ClearLastBgmID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "ClearLastBgmID");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetLastBgmID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              LastBgmID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::GetLastBgmID(int32* LastBgmID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetLastBgmID");

	Params::UKSSaveGameBP_C_GetLastBgmID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LastBgmID != nullptr)
		*LastBgmID = Parms.LastBgmID;

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetFirstSelectCharacterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetFirstSelectCharacterID(int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetFirstSelectCharacterID");

	Params::UKSSaveGameBP_C_SetFirstSelectCharacterID_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetSupportAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetSupportAbility(int32 CharacterID, int32 AbilityID, int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetSupportAbility");

	Params::UKSSaveGameBP_C_SetSupportAbility_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.AbilityID = AbilityID;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.IsCompletedMainMission_DEPRECATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCompleted                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::IsCompletedMainMission_DEPRECATED(enum class EPlayableCharacterID CharacterID, bool* IsCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "IsCompletedMainMission_DEPRECATED");

	Params::UKSSaveGameBP_C_IsCompletedMainMission_DEPRECATED_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCompleted != nullptr)
		*IsCompleted = Parms.IsCompleted;

}


// Function KSSaveGameBP.KSSaveGameBP_C.MakeInitializedArrayOfBool
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InitValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       BoolArray                                                        (Parm, OutParm)

void UKSSaveGameBP_C::MakeInitializedArrayOfBool(int32 Size, bool InitValue, TArray<bool>* BoolArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "MakeInitializedArrayOfBool");

	Params::UKSSaveGameBP_C_MakeInitializedArrayOfBool_Params Parms{};

	Parms.Size = Size;
	Parms.InitValue = InitValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BoolArray != nullptr)
		*BoolArray = std::move(Parms.BoolArray);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetSubMemberCharacterIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      CharacterID                                                      (Parm, OutParm)

void UKSSaveGameBP_C::GetSubMemberCharacterIDs(TArray<int32>* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetSubMemberCharacterIDs");

	Params::UKSSaveGameBP_C_GetSubMemberCharacterIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterID != nullptr)
		*CharacterID = std::move(Parms.CharacterID);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetMainMemberCharacterIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      CharacterID                                                      (Parm, OutParm)

void UKSSaveGameBP_C::GetMainMemberCharacterIDs(TArray<int32>* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetMainMemberCharacterIDs");

	Params::UKSSaveGameBP_C_GetMainMemberCharacterIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterID != nullptr)
		*CharacterID = std::move(Parms.CharacterID);

}


// Function KSSaveGameBP.KSSaveGameBP_C.DeleteFollowNPCWithUniqueID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDelete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::DeleteFollowNPCWithUniqueID(int32 UniqueId, bool* IsDelete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "DeleteFollowNPCWithUniqueID");

	Params::UKSSaveGameBP_C_DeleteFollowNPCWithUniqueID_Params Parms{};

	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDelete != nullptr)
		*IsDelete = Parms.IsDelete;

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterEquipmentID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EquipmentID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetCharacterEquipmentID(int32 CharacterID, enum class EEQUIPMENT_PART Part, int32 EquipmentID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetCharacterEquipmentID");

	Params::UKSSaveGameBP_C_SetCharacterEquipmentID_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Part = Part;
	Parms.EquipmentID = EquipmentID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetSubMemberIDs_DEPRECATED
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      SubMemberID                                                      (Parm, OutParm)

void UKSSaveGameBP_C::GetSubMemberIDs_DEPRECATED(TArray<int32>* SubMemberID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetSubMemberIDs_DEPRECATED");

	Params::UKSSaveGameBP_C_GetSubMemberIDs_DEPRECATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SubMemberID != nullptr)
		*SubMemberID = std::move(Parms.SubMemberID);

}


// Function KSSaveGameBP.KSSaveGameBP_C.ConvertLabelToItemId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::ConvertLabelToItemId(class FName ItemLabel, int32* ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "ConvertLabelToItemId");

	Params::UKSSaveGameBP_C_ConvertLabelToItemId_Params Parms{};

	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetVisitedAllMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetBit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSSaveGameBP_C::SetVisitedAllMap(bool SetBit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetVisitedAllMap");

	Params::UKSSaveGameBP_C_SetVisitedAllMap_Params Parms{};

	Parms.SetBit = SetBit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetMainMemberIDs_DEPRECATED
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      MainMemberID                                                     (Parm, OutParm)

void UKSSaveGameBP_C::GetMainMemberIDs_DEPRECATED(TArray<int32>* MainMemberID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetMainMemberIDs_DEPRECATED");

	Params::UKSSaveGameBP_C_GetMainMemberIDs_DEPRECATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MainMemberID != nullptr)
		*MainMemberID = std::move(Parms.MainMemberID);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SubPlayerMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Money                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SubPlayerMoney(int32 Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SubPlayerMoney");

	Params::UKSSaveGameBP_C_SubPlayerMoney_Params Parms{};

	Parms.Money = Money;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.AddPlayerMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Money                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::AddPlayerMoney(int32 Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "AddPlayerMoney");

	Params::UKSSaveGameBP_C_AddPlayerMoney_Params Parms{};

	Parms.Money = Money;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetSubMember_DEPRECATED
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSavePlayerCharacterData>BattleMemberData                                                 (Parm, OutParm)

void UKSSaveGameBP_C::GetSubMember_DEPRECATED(TArray<struct FSavePlayerCharacterData>* BattleMemberData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetSubMember_DEPRECATED");

	Params::UKSSaveGameBP_C_GetSubMember_DEPRECATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleMemberData != nullptr)
		*BattleMemberData = std::move(Parms.BattleMemberData);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetBattleMember_DEPRECATED
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSavePlayerCharacterData>BattleMemberData                                                 (Parm, OutParm)

void UKSSaveGameBP_C::GetBattleMember_DEPRECATED(TArray<struct FSavePlayerCharacterData>* BattleMemberData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetBattleMember_DEPRECATED");

	Params::UKSSaveGameBP_C_GetBattleMember_DEPRECATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleMemberData != nullptr)
		*BattleMemberData = std::move(Parms.BattleMemberData);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetJobPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobPoint                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetJobPoint(int32 CharacterID, int32 JobPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetJobPoint");

	Params::UKSSaveGameBP_C_SetJobPoint_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.JobPoint = JobPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.MakeInitializedArrayOfInt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Array                                                            (Parm, OutParm)

void UKSSaveGameBP_C::MakeInitializedArrayOfInt(int32 Size, int32 InitValue, TArray<int32>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "MakeInitializedArrayOfInt");

	Params::UKSSaveGameBP_C_MakeInitializedArrayOfInt_Params Parms{};

	Parms.Size = Size;
	Parms.InitValue = InitValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SettingLoadGameData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKSSaveGameBP_C::SettingLoadGameData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SettingLoadGameData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SettingPlusNewGameData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKSSaveGameBP_C::SettingPlusNewGameData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SettingPlusNewGameData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterMP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MP                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetCharacterMP(int32 CharacterID, int32 MP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetCharacterMP");

	Params::UKSSaveGameBP_C_SetCharacterMP_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.MP = MP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetCharacterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavePlayerCharacterData    CharacterData                                                    (Parm, OutParm)

void UKSSaveGameBP_C::GetCharacterData(int32 CharacterID, struct FSavePlayerCharacterData* CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetCharacterData");

	Params::UKSSaveGameBP_C_GetCharacterData_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterData != nullptr)
		*CharacterData = std::move(Parms.CharacterData);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetNPCPurchasedItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PurchaseIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Flag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PurchaseRestock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpdateIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetNPCPurchasedItem(class FName NPCLabel, int32 PurchaseIndex, bool Flag, int32 PurchaseRestock, int32* UpdateIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetNPCPurchasedItem");

	Params::UKSSaveGameBP_C_SetNPCPurchasedItem_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.PurchaseIndex = PurchaseIndex;
	Parms.Flag = Flag;
	Parms.PurchaseRestock = PurchaseRestock;

	UObject::ProcessEvent(Func, &Parms);

	if (UpdateIndex != nullptr)
		*UpdateIndex = Parms.UpdateIndex;

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HP                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetCharacterHP(int32 CharacterID, int32 HP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetCharacterHP");

	Params::UKSSaveGameBP_C_SetCharacterHP_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.HP = HP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetCharacterJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetCharacterJob(int32 CharacterID, int32 JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetCharacterJob");

	Params::UKSSaveGameBP_C_SetCharacterJob_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetBackpackItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSaveBackPackItem>   ItemList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKSSaveGameBP_C::SetBackpackItemList(TArray<struct FSaveBackPackItem>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetBackpackItemList");

	Params::UKSSaveGameBP_C_SetBackpackItemList_Params Parms{};

	Parms.ItemList = ItemList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetBackpackItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FSaveBackPackItem>   Player_Backpack_Item_List                                        (Parm, OutParm)

void UKSSaveGameBP_C::GetBackpackItemList(TArray<struct FSaveBackPackItem>* Player_Backpack_Item_List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetBackpackItemList");

	Params::UKSSaveGameBP_C_GetBackpackItemList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player_Backpack_Item_List != nullptr)
		*Player_Backpack_Item_List = std::move(Parms.Player_Backpack_Item_List);

}


// Function KSSaveGameBP.KSSaveGameBP_C.GetPlayerMoney_DEPRECATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PlayerMoney                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::GetPlayerMoney_DEPRECATED(int32* PlayerMoney)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "GetPlayerMoney_DEPRECATED");

	Params::UKSSaveGameBP_C_GetPlayerMoney_DEPRECATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayerMoney != nullptr)
		*PlayerMoney = Parms.PlayerMoney;

}


// Function KSSaveGameBP.KSSaveGameBP_C.SetPlayerMoney_DEPRECATED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SetValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSSaveGameBP_C::SetPlayerMoney_DEPRECATED(int32 SetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSSaveGameBP_C", "SetPlayerMoney_DEPRECATED");

	Params::UKSSaveGameBP_C_SetPlayerMoney_DEPRECATED_Params Parms{};

	Parms.SetValue = SetValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


