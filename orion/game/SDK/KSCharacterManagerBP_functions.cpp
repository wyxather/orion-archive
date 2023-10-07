#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSCharacterManagerBP.KSCharacterManagerBP_C
// (Actor)

class UClass* AKSCharacterManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSCharacterManagerBP_C");

	return Clss;
}


// KSCharacterManagerBP_C KSCharacterManagerBP.Default__KSCharacterManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSCharacterManagerBP_C* AKSCharacterManagerBP_C::GetDefaultObj()
{
	static class AKSCharacterManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSCharacterManagerBP_C*>(AKSCharacterManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSCharacterManagerBP_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "IsReady");

	Params::AKSCharacterManagerBP_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshHunterPartnerVisibility
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::RefreshHunterPartnerVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RefreshHunterPartnerVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetVisibilityHunterPartner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            HunterChara                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSPartnerCharacter_C*       PartnerChara                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPartnerCharaVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSCharacterManagerBP_C::SetVisibilityHunterPartner(class AKSCharacterBase* HunterChara, class AKSPartnerCharacter_C* PartnerChara, bool bPartnerCharaVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "SetVisibilityHunterPartner");

	Params::AKSCharacterManagerBP_C_SetVisibilityHunterPartner_Params Parms{};

	Parms.HunterChara = HunterChara;
	Parms.PartnerChara = PartnerChara;
	Parms.bPartnerCharaVisibility = bPartnerCharaVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.InitAfterLoadSaveData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMJSaveData*                 SaveData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCharacterManagerBP_C::InitAfterLoadSaveData(class UMJSaveData* SaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "InitAfterLoadSaveData");

	Params::AKSCharacterManagerBP_C_InitAfterLoadSaveData_Params Parms{};

	Parms.SaveData = SaveData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshPartyAfterChangeMember
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::RefreshPartyAfterChangeMember()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RefreshPartyAfterChangeMember");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.EquipItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::EquipItem(enum class EPlayableCharacterID CharacterID, class FName ItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "EquipItem");

	Params::AKSCharacterManagerBP_C_EquipItem_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshEpilogueParty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RefreshEpilogueParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RefreshEpilogueParty");

	Params::AKSCharacterManagerBP_C_RefreshEpilogueParty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.FullRecoveryCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCharacterManagerBP_C::FullRecoveryCharacter(int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "FullRecoveryCharacter");

	Params::AKSCharacterManagerBP_C_FullRecoveryCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.FullRecoveryAllPartyMember
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::FullRecoveryAllPartyMember()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "FullRecoveryAllPartyMember");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RemoveAllEquipment
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RemoveAllEquipment(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RemoveAllEquipment");

	Params::AKSCharacterManagerBP_C_RemoveAllEquipment_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RegisterNpcToFollowNPCList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RegisterNpcToFollowNPCList(enum class EMJFieldCommandType FCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RegisterNpcToFollowNPCList");

	Params::AKSCharacterManagerBP_C_RegisterNpcToFollowNPCList_Params Parms{};

	Parms.FCType = FCType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.UpdatePartnerEnable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::UpdatePartnerEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "UpdatePartnerEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.Debug_OutputFollowInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::Debug_OutputFollowInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "Debug_OutputFollowInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshPartnerCharacters
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RefreshPartnerCharacters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RefreshPartnerCharacters");

	Params::AKSCharacterManagerBP_C_RefreshPartnerCharacters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddPartnerCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            Follow                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AKSCharacterManagerBP_C::AddPartnerCharacter(class AKSCharacterBase* Follow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "AddPartnerCharacter");

	Params::AKSCharacterManagerBP_C_AddPartnerCharacter_Params Parms{};

	Parms.Follow = Follow;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.BeginPlayers
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::BeginPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "BeginPlayers");

	Params::AKSCharacterManagerBP_C_BeginPlayers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetPlayerCurrentArea
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ELEVEL_AREA_TYPE        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ELEVEL_AREA_TYPE AKSCharacterManagerBP_C::GetPlayerCurrentArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "GetPlayerCurrentArea");

	Params::AKSCharacterManagerBP_C_GetPlayerCurrentArea_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetResidentResourceLabelList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                LabelList                                                        (Parm, OutParm)
// bool                               ContainNpcResource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSCharacterManagerBP_C::GetResidentResourceLabelList(TArray<class FName>* LabelList, bool ContainNpcResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "GetResidentResourceLabelList");

	Params::AKSCharacterManagerBP_C_GetResidentResourceLabelList_Params Parms{};

	Parms.ContainNpcResource = ContainNpcResource;

	UObject::ProcessEvent(Func, &Parms);

	if (LabelList != nullptr)
		*LabelList = std::move(Parms.LabelList);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.InitParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     MovePoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::InitParams(const struct FVector& MovePoint, enum class EKSCharacterDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "InitParams");

	Params::AKSCharacterManagerBP_C_InitParams_Params Parms{};

	Parms.MovePoint = MovePoint;
	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetBarCharacterEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::SetBarCharacterEnable(int32 Index, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "SetBarCharacterEnable");

	Params::AKSCharacterManagerBP_C_SetBarCharacterEnable_Params Parms{};

	Parms.Index = Index;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RemoveBarCharacterAll
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RemoveBarCharacterAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RemoveBarCharacterAll");

	Params::AKSCharacterManagerBP_C_RemoveBarCharacterAll_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetBarCharacterEnable_OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSCharacterManagerBP_C::SetBarCharacterEnable_OLD(int32 Index, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "SetBarCharacterEnable_OLD");

	Params::AKSCharacterManagerBP_C_SetBarCharacterEnable_OLD_Params Parms{};

	Parms.Index = Index;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.LoadPlayerResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::LoadPlayerResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "LoadPlayerResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddBarCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AKSCharacterManagerBP_C::AddBarCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir, int32 CharIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "AddBarCharacter");

	Params::AKSCharacterManagerBP_C_AddBarCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;
	Parms.Location = Location;
	Parms.Dir = Dir;
	Parms.CharIndex = CharIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetupPlayableCharacterData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCharacterManagerBP_C::SetupPlayableCharacterData(enum class EPlayableCharacterID PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "SetupPlayableCharacterData");

	Params::AKSCharacterManagerBP_C_SetupPlayableCharacterData_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetPartyCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AKSCharacterManagerBP_C::GetPartyCharacter(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "GetPartyCharacter");

	Params::AKSCharacterManagerBP_C_GetPartyCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshFollowCharacters
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RefreshFollowCharacters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RefreshFollowCharacters");

	Params::AKSCharacterManagerBP_C_RefreshFollowCharacters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshFollowCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RefreshFollowCharacter(class AKSCharacterBase* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RefreshFollowCharacter");

	Params::AKSCharacterManagerBP_C_RefreshFollowCharacter_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetPartyHouseIn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OffsetHeight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HouseOut                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bNotPartyRefresh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::SetPartyHouseIn(float Scale, float OffsetHeight, bool HouseOut, bool bNotPartyRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "SetPartyHouseIn");

	Params::AKSCharacterManagerBP_C_SetPartyHouseIn_Params Parms{};

	Parms.Scale = Scale;
	Parms.OffsetHeight = OffsetHeight;
	Parms.HouseOut = HouseOut;
	Parms.bNotPartyRefresh = bNotPartyRefresh;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshPartyCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSkipLoadResource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSCharacterManagerBP_C::RefreshPartyCharacter(bool bSkipLoadResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "RefreshPartyCharacter");

	Params::AKSCharacterManagerBP_C_RefreshPartyCharacter_Params Parms{};

	Parms.bSkipLoadResource = bSkipLoadResource;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddPartyCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            Follow                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartyIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AKSCharacterManagerBP_C::AddPartyCharacter(class AKSCharacterBase* Follow, int32 PartyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "AddPartyCharacter");

	Params::AKSCharacterManagerBP_C_AddPartyCharacter_Params Parms{};

	Parms.Follow = Follow;
	Parms.PartyIndex = PartyIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddEventCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AKSCharacterManagerBP_C::AddEventCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "AddEventCharacter");

	Params::AKSCharacterManagerBP_C_AddEventCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;
	Parms.Location = Location;
	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.Callback Player Load DEPRICATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AKSCharacterManagerBP_C::Callback_Player_Load_DEPRICATED(TArray<class UObject*>& Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "Callback Player Load DEPRICATED");

	Params::AKSCharacterManagerBP_C_Callback_Player_Load_DEPRICATED_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddFieldCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AKSCharacterManagerBP_C::AddFieldCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "AddFieldCharacter");

	Params::AKSCharacterManagerBP_C_AddFieldCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;
	Parms.Location = Location;
	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddPlayerCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AKSCharacterManagerBP_C::AddPlayerCharacter(enum class EPlayableCharacterID PlayerID, struct FVector& Location, enum class EKSCharacterDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "AddPlayerCharacter");

	Params::AKSCharacterManagerBP_C_AddPlayerCharacter_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.Location = Location;
	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SpawnChara
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterCategory    Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCharacterManagerBP_C::SpawnChara(enum class EKSCharacterCategory Category, class UClass* Class, const struct FVector& Location, class FName Animation, enum class EKSCharacterDir Dir, class AKSCharacterBase** Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "SpawnChara");

	Params::AKSCharacterManagerBP_C_SpawnChara_Params Parms{};

	Parms.Category = Category;
	Parms.Class = Class;
	Parms.Location = Location;
	Parms.Animation = Animation;
	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSPlayerCharacter_C*        Player                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCharacterManagerBP_C::GetPlayer(class AKSPlayerCharacter_C** Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "GetPlayer");

	Params::AKSCharacterManagerBP_C_GetPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCharacterManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "ReceiveTick");

	Params::AKSCharacterManagerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.PostInitManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCharacterManagerBP_C::PostInitManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "PostInitManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCharacterManagerBP.KSCharacterManagerBP_C.ExecuteUbergraph_KSCharacterManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCharacterManagerBP_C::ExecuteUbergraph_KSCharacterManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerBP_C", "ExecuteUbergraph_KSCharacterManagerBP");

	Params::AKSCharacterManagerBP_C_ExecuteUbergraph_KSCharacterManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


