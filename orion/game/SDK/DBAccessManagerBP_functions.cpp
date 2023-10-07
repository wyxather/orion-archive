#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass DBAccessManagerBP.DBAccessManagerBP_C
// (Actor)

class UClass* ADBAccessManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DBAccessManagerBP_C");

	return Clss;
}


// DBAccessManagerBP_C DBAccessManagerBP.Default__DBAccessManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADBAccessManagerBP_C* ADBAccessManagerBP_C::GetDefaultObj()
{
	static class ADBAccessManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADBAccessManagerBP_C*>(ADBAccessManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DBAccessManagerBP.DBAccessManagerBP_C.CheckNotCoexistencePlacementLabel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                PlacementLabels                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADBAccessManagerBP_C::CheckNotCoexistencePlacementLabel(TArray<class FName>& PlacementLabels, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "CheckNotCoexistencePlacementLabel");

	Params::ADBAccessManagerBP_C_CheckNotCoexistencePlacementLabel_Params Parms{};

	Parms.PlacementLabels = PlacementLabels;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.IsfulfilledPlacementCondition
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PlacementLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADBAccessManagerBP_C::IsfulfilledPlacementCondition(class FName PlacementLabel, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "IsfulfilledPlacementCondition");

	Params::ADBAccessManagerBP_C_IsfulfilledPlacementCondition_Params Parms{};

	Parms.PlacementLabel = PlacementLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.GetMenuJobIDList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      OutIDList                                                        (Parm, OutParm)

void ADBAccessManagerBP_C::GetMenuJobIDList(TArray<int32>* OutIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "GetMenuJobIDList");

	Params::ADBAccessManagerBP_C_GetMenuJobIDList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutIDList != nullptr)
		*OutIDList = std::move(Parms.OutIDList);

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.GetMenuJobLabelList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                OutJobList                                                       (Parm, OutParm)

void ADBAccessManagerBP_C::GetMenuJobLabelList(TArray<class FName>* OutJobList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "GetMenuJobLabelList");

	Params::ADBAccessManagerBP_C_GetMenuJobLabelList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutJobList != nullptr)
		*OutJobList = std::move(Parms.OutJobList);

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.Debug_GetEnemyLabelFromResourceLabel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ResourceLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        EnemyLabel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::Debug_GetEnemyLabelFromResourceLabel(class FName ResourceLabel, bool* Success, class FName* EnemyLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "Debug_GetEnemyLabelFromResourceLabel");

	Params::ADBAccessManagerBP_C_Debug_GetEnemyLabelFromResourceLabel_Params Parms{};

	Parms.ResourceLabel = ResourceLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (EnemyLabel != nullptr)
		*EnemyLabel = Parms.EnemyLabel;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.Debug_GetNPCFlag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPCFlag                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADBAccessManagerBP_C::Debug_GetNPCFlag(class FName EnemyLabel, bool* NPCFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "Debug_GetNPCFlag");

	Params::ADBAccessManagerBP_C_Debug_GetNPCFlag_Params Parms{};

	Parms.EnemyLabel = EnemyLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCFlag != nullptr)
		*NPCFlag = Parms.NPCFlag;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.MakeItemDetailText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ADBAccessManagerBP_C::MakeItemDetailText(struct FItemData& ItemData, int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "MakeItemDetailText");

	Params::ADBAccessManagerBP_C_MakeItemDetailText_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertSupportAbilityIdToLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              SuportAbilityId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SuportAbilityLabel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADBAccessManagerBP_C::ConvertSupportAbilityIdToLabel(int32 SuportAbilityId, class FName* SuportAbilityLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertSupportAbilityIdToLabel");

	Params::ADBAccessManagerBP_C_ConvertSupportAbilityIdToLabel_Params Parms{};

	Parms.SuportAbilityId = SuportAbilityId;

	UObject::ProcessEvent(Func, &Parms);

	if (SuportAbilityLabel != nullptr)
		*SuportAbilityLabel = Parms.SuportAbilityLabel;

	return Parms.ReturnValue;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToSupportAbilityID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ConvertLabelToSupportAbilityID(class FName AbilityLabel, int32* AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertLabelToSupportAbilityID");

	Params::ADBAccessManagerBP_C_ConvertLabelToSupportAbilityID_Params Parms{};

	Parms.AbilityLabel = AbilityLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityID != nullptr)
		*AbilityID = Parms.AbilityID;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.SearchAbilitySetFromRestricWeapon
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        WeaponLabel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilitySetLabel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADBAccessManagerBP_C::SearchAbilitySetFromRestricWeapon(class FName& WeaponLabel, class FName* AbilitySetLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "SearchAbilitySetFromRestricWeapon");

	Params::ADBAccessManagerBP_C_SearchAbilitySetFromRestricWeapon_Params Parms{};

	Parms.WeaponLabel = WeaponLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySetLabel != nullptr)
		*AbilitySetLabel = Parms.AbilitySetLabel;

	return Parms.ReturnValue;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.GetItemDataForMenu
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataForMenu            Value                                                            (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADBAccessManagerBP_C::GetItemDataForMenu(class FName& ItemLabel, struct FItemDataForMenu* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "GetItemDataForMenu");

	Params::ADBAccessManagerBP_C_GetItemDataForMenu_Params Parms{};

	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToAbilitySetID
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilitySetLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilitySetID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADBAccessManagerBP_C::ConvertLabelToAbilitySetID(class FName AbilitySetLabel, int32* AbilitySetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertLabelToAbilitySetID");

	Params::ADBAccessManagerBP_C_ConvertLabelToAbilitySetID_Params Parms{};

	Parms.AbilitySetLabel = AbilitySetLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySetID != nullptr)
		*AbilitySetID = Parms.AbilitySetID;

	return Parms.ReturnValue;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertUniqueIDToLabel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NPCLabel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADBAccessManagerBP_C::ConvertUniqueIDToLabel(int32 NPCUniqID, class FName* NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertUniqueIDToLabel");

	Params::ADBAccessManagerBP_C_ConvertUniqueIDToLabel_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCLabel != nullptr)
		*NPCLabel = Parms.NPCLabel;

	return Parms.ReturnValue;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertEncountTriggerIDToLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              EncountTriggerId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EncountTriggerLabel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ConvertEncountTriggerIDToLabel(int32 EncountTriggerId, class FName* EncountTriggerLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertEncountTriggerIDToLabel");

	Params::ADBAccessManagerBP_C_ConvertEncountTriggerIDToLabel_Params Parms{};

	Parms.EncountTriggerId = EncountTriggerId;

	UObject::ProcessEvent(Func, &Parms);

	if (EncountTriggerLabel != nullptr)
		*EncountTriggerLabel = Parms.EncountTriggerLabel;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToAbilitySetID_OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilitySetLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilitySetID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ConvertLabelToAbilitySetID_OLD(class FName AbilitySetLabel, int32* AbilitySetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertLabelToAbilitySetID_OLD");

	Params::ADBAccessManagerBP_C_ConvertLabelToAbilitySetID_OLD_Params Parms{};

	Parms.AbilitySetLabel = AbilitySetLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySetID != nullptr)
		*AbilitySetID = Parms.AbilitySetID;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertAbilitySetIDToLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              AbilitySetID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFind                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADBAccessManagerBP_C::ConvertAbilitySetIDToLabel(int32 AbilitySetID, class FName* AbilityLabel, bool* IsFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertAbilitySetIDToLabel");

	Params::ADBAccessManagerBP_C_ConvertAbilitySetIDToLabel_Params Parms{};

	Parms.AbilitySetID = AbilitySetID;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

	if (IsFind != nullptr)
		*IsFind = Parms.IsFind;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertSupporterIDToLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              SupporterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SupporterLabel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ConvertSupporterIDToLabel(int32& SupporterID, class FName* SupporterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertSupporterIDToLabel");

	Params::ADBAccessManagerBP_C_ConvertSupporterIDToLabel_Params Parms{};

	Parms.SupporterID = SupporterID;

	UObject::ProcessEvent(Func, &Parms);

	if (SupporterLabel != nullptr)
		*SupporterLabel = Parms.SupporterLabel;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.CreateMenuJobData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADBAccessManagerBP_C::CreateMenuJobData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "CreateMenuJobData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.PrepareDBAccess
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADBAccessManagerBP_C::PrepareDBAccess(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "PrepareDBAccess");

	Params::ADBAccessManagerBP_C_PrepareDBAccess_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToEnemyID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EnemyID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ConvertLabelToEnemyID(class FName Label, int32* EnemyID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertLabelToEnemyID");

	Params::ADBAccessManagerBP_C_ConvertLabelToEnemyID_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyID != nullptr)
		*EnemyID = Parms.EnemyID;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertEnemyIDToLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              EnemyID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EnemyLabel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ConvertEnemyIDToLabel(int32& EnemyID, class FName* EnemyLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertEnemyIDToLabel");

	Params::ADBAccessManagerBP_C_ConvertEnemyIDToLabel_Params Parms{};

	Parms.EnemyID = EnemyID;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyLabel != nullptr)
		*EnemyLabel = Parms.EnemyLabel;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertLabelToAbilityID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ConvertLabelToAbilityID(class FName AbilityLabel, int32* AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertLabelToAbilityID");

	Params::ADBAccessManagerBP_C_ConvertLabelToAbilityID_Params Parms{};

	Parms.AbilityLabel = AbilityLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityID != nullptr)
		*AbilityID = Parms.AbilityID;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ConvertAbilityIDToLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              AbilityID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFind                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADBAccessManagerBP_C::ConvertAbilityIDToLabel(int32& AbilityID, class FName* AbilityLabel, bool* IsFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ConvertAbilityIDToLabel");

	Params::ADBAccessManagerBP_C_ConvertAbilityIDToLabel_Params Parms{};

	Parms.AbilityID = AbilityID;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

	if (IsFind != nullptr)
		*IsFind = Parms.IsFind;

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.CreaetItemDataforMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADBAccessManagerBP_C::CreaetItemDataforMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "CreaetItemDataforMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADBAccessManagerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DBAccessManagerBP.DBAccessManagerBP_C.ExecuteUbergraph_DBAccessManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBAccessManagerBP_C::ExecuteUbergraph_DBAccessManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DBAccessManagerBP_C", "ExecuteUbergraph_DBAccessManagerBP");

	Params::ADBAccessManagerBP_C_ExecuteUbergraph_DBAccessManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


