#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibFieldCommand.LibFieldCommand_C
// (None)

class UClass* ULibFieldCommand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibFieldCommand_C");

	return Clss;
}


// LibFieldCommand_C LibFieldCommand.Default__LibFieldCommand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibFieldCommand_C* ULibFieldCommand_C::GetDefaultObj()
{
	static class ULibFieldCommand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibFieldCommand_C*>(ULibFieldCommand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibFieldCommand.LibFieldCommand_C.GetRandomForFC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Random                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetRandomForFC(class UObject* __WorldContext, int32* Random)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetRandomForFC");

	Params::ULibFieldCommand_C_GetRandomForFC_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Random != nullptr)
		*Random = Parms.Random;

}


// Function LibFieldCommand.LibFieldCommand_C.GetFieldCommandCharacterType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMJFieldCommandType     FieldCommandType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    CharacterType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetFieldCommandCharacterType(enum class EMJFieldCommandType FieldCommandType, class UObject* __WorldContext, enum class EPlayableCharacterID* CharacterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetFieldCommandCharacterType");

	Params::ULibFieldCommand_C_GetFieldCommandCharacterType_Params Parms{};

	Parms.FieldCommandType = FieldCommandType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterType != nullptr)
		*CharacterType = Parms.CharacterType;

}


// Function LibFieldCommand.LibFieldCommand_C.SetUnFollowingFlag
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFollow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::SetUnFollowingFlag(bool IsFollow, class FName NPCLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "SetUnFollowingFlag");

	Params::ULibFieldCommand_C_SetUnFollowingFlag_Params Parms{};

	Parms.IsFollow = IsFollow;
	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.SetFollowingFlag
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFollow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::SetFollowingFlag(bool IsFollow, class FName NPCLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "SetFollowingFlag");

	Params::ULibFieldCommand_C_SetFollowingFlag_Params Parms{};

	Parms.IsFollow = IsFollow;
	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.SetFollowFlag
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFollow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::SetFollowFlag(bool IsFollow, class FName NPCLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "SetFollowFlag");

	Params::ULibFieldCommand_C_SetFollowFlag_Params Parms{};

	Parms.IsFollow = IsFollow;
	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.GetHireFieldCommandNeedMoney
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCLeadDataBase            NPCLeadData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NeedMoney                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetHireFieldCommandNeedMoney(struct FNPCLeadDataBase& NPCLeadData, class UObject* __WorldContext, int32* NeedMoney)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetHireFieldCommandNeedMoney");

	Params::ULibFieldCommand_C_GetHireFieldCommandNeedMoney_Params Parms{};

	Parms.NPCLeadData = NPCLeadData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NeedMoney != nullptr)
		*NeedMoney = Parms.NeedMoney;

}


// Function LibFieldCommand.LibFieldCommand_C.GetHearFieldCommandNeedLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCHearDataBase            NPCHearData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NeedLevel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetHearFieldCommandNeedLevel(struct FNPCHearDataBase& NPCHearData, class UObject* __WorldContext, int32* NeedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetHearFieldCommandNeedLevel");

	Params::ULibFieldCommand_C_GetHearFieldCommandNeedLevel_Params Parms{};

	Parms.NPCHearData = NPCHearData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NeedLevel != nullptr)
		*NeedLevel = Parms.NeedLevel;

}


// Function LibFieldCommand.LibFieldCommand_C.GetLeadFieldCommandNeedLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCLeadDataBase            NPCLeadData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NeedLevel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetLeadFieldCommandNeedLevel(struct FNPCLeadDataBase& NPCLeadData, class UObject* __WorldContext, int32* NeedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetLeadFieldCommandNeedLevel");

	Params::ULibFieldCommand_C_GetLeadFieldCommandNeedLevel_Params Parms{};

	Parms.NPCLeadData = NPCLeadData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NeedLevel != nullptr)
		*NeedLevel = Parms.NeedLevel;

}


// Function LibFieldCommand.LibFieldCommand_C.GetBattleFieldCommandNeedLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCBattleData              NPCBattleData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NeedLevel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetBattleFieldCommandNeedLevel(struct FNPCBattleData& NPCBattleData, class UObject* __WorldContext, int32* NeedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetBattleFieldCommandNeedLevel");

	Params::ULibFieldCommand_C_GetBattleFieldCommandNeedLevel_Params Parms{};

	Parms.NPCBattleData = NPCBattleData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NeedLevel != nullptr)
		*NeedLevel = Parms.NeedLevel;

}


// Function LibFieldCommand.LibFieldCommand_C.PrintFieldCommandProbability
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseProbability                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CorrectedProbability                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RandValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::PrintFieldCommandProbability(enum class EMJFieldCommandType FCType, float BaseProbability, float CorrectedProbability, float RandValue, bool IsSuccess, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "PrintFieldCommandProbability");

	Params::ULibFieldCommand_C_PrintFieldCommandProbability_Params Parms{};

	Parms.FCType = FCType;
	Parms.BaseProbability = BaseProbability;
	Parms.CorrectedProbability = CorrectedProbability;
	Parms.RandValue = RandValue;
	Parms.IsSuccess = IsSuccess;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.GetNpcSerifLabel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SerifLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFC_NpcSerifType        SerifType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NpcUniqueIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OutputSerifLabel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetNpcSerifLabel(class FName SerifLabel, enum class EFC_NpcSerifType SerifType, int32 NpcUniqueIndex, class UObject* __WorldContext, class FName* OutputSerifLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetNpcSerifLabel");

	Params::ULibFieldCommand_C_GetNpcSerifLabel_Params Parms{};

	Parms.SerifLabel = SerifLabel;
	Parms.SerifType = SerifType;
	Parms.NpcUniqueIndex = NpcUniqueIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputSerifLabel != nullptr)
		*OutputSerifLabel = Parms.OutputSerifLabel;

}


// Function LibFieldCommand.LibFieldCommand_C.GetSupportLimit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SupportLimit                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetSupportLimit(class FName NPCLabel, class UObject* __WorldContext, int32* SupportLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetSupportLimit");

	Params::ULibFieldCommand_C_GetSupportLimit_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SupportLimit != nullptr)
		*SupportLimit = Parms.SupportLimit;

}


// Function LibFieldCommand.LibFieldCommand_C.GetNpcBattleDataByNpcLabel
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlacementLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNPCBattleData              OutBattleData                                                    (Parm, OutParm)

void ULibFieldCommand_C::GetNpcBattleDataByNpcLabel(class FName PlacementLabel, class UObject* __WorldContext, struct FNPCBattleData* OutBattleData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetNpcBattleDataByNpcLabel");

	Params::ULibFieldCommand_C_GetNpcBattleDataByNpcLabel_Params Parms{};

	Parms.PlacementLabel = PlacementLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBattleData != nullptr)
		*OutBattleData = std::move(Parms.OutBattleData);

}


// Function LibFieldCommand.LibFieldCommand_C.IsItemPurchased
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PurchaseIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::IsItemPurchased(class FName NPCLabel, int32 PurchaseIndex, class UObject* __WorldContext, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "IsItemPurchased");

	Params::ULibFieldCommand_C_IsItemPurchased_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.PurchaseIndex = PurchaseIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function LibFieldCommand.LibFieldCommand_C.HasItemMaxCount
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibFieldCommand_C::HasItemMaxCount(class FName ItemLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "HasItemMaxCount");

	Params::ULibFieldCommand_C_HasItemMaxCount_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibFieldCommand.LibFieldCommand_C.IsOnSaleRobItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPurchaseItemInfoData       PurchaseItemInfoData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasMaxCount                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::IsOnSaleRobItem(struct FPurchaseItemInfoData& PurchaseItemInfoData, class UObject* __WorldContext, bool* Return, bool* HasMaxCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "IsOnSaleRobItem");

	Params::ULibFieldCommand_C_IsOnSaleRobItem_Params Parms{};

	Parms.PurchaseItemInfoData = PurchaseItemInfoData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (HasMaxCount != nullptr)
		*HasMaxCount = Parms.HasMaxCount;

}


// Function LibFieldCommand.LibFieldCommand_C.AddPurchasedList
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlacementLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PurchaseIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::AddPurchasedList(class FName PlacementLabel, int32 PurchaseIndex, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "AddPurchasedList");

	Params::ULibFieldCommand_C_AddPurchasedList_Params Parms{};

	Parms.PlacementLabel = PlacementLabel;
	Parms.PurchaseIndex = PurchaseIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.CheckOutOfRobStocks
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutOfStocks                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckOutOfRobStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckOutOfRobStocks");

	Params::ULibFieldCommand_C_CheckOutOfRobStocks_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutOfStocks != nullptr)
		*OutOfStocks = Parms.OutOfStocks;

}


// Function LibFieldCommand.LibFieldCommand_C.Swoon NPC
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENpcSwoonType           SwoonType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::Swoon_NPC(class AKSCharacterBase* TargetNpc, enum class ENpcSwoonType SwoonType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "Swoon NPC");

	Params::ULibFieldCommand_C_Swoon_NPC_Params Parms{};

	Parms.TargetNpc = TargetNpc;
	Parms.SwoonType = SwoonType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.CheckOutOfStocks
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PlacementLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FCBitmask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutOfStocks                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckOutOfStocks(class FName PlacementLabel, int32 FCBitmask, class UObject* __WorldContext, bool* OutOfStocks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckOutOfStocks");

	Params::ULibFieldCommand_C_CheckOutOfStocks_Params Parms{};

	Parms.PlacementLabel = PlacementLabel;
	Parms.FCBitmask = FCBitmask;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutOfStocks != nullptr)
		*OutOfStocks = Parms.OutOfStocks;

}


// Function LibFieldCommand.LibFieldCommand_C.CheckOutOfBegStocks
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutOfStocks                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckOutOfBegStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckOutOfBegStocks");

	Params::ULibFieldCommand_C_CheckOutOfBegStocks_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutOfStocks != nullptr)
		*OutOfStocks = Parms.OutOfStocks;

}


// Function LibFieldCommand.LibFieldCommand_C.CheckOutOfPurchaseStocks
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutOfStocks                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckOutOfPurchaseStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckOutOfPurchaseStocks");

	Params::ULibFieldCommand_C_CheckOutOfPurchaseStocks_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutOfStocks != nullptr)
		*OutOfStocks = Parms.OutOfStocks;

}


// Function LibFieldCommand.LibFieldCommand_C.CheckOutOfStealStocks
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutOfStocks                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckOutOfStealStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckOutOfStealStocks");

	Params::ULibFieldCommand_C_CheckOutOfStealStocks_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutOfStocks != nullptr)
		*OutOfStocks = Parms.OutOfStocks;

}


// Function LibFieldCommand.LibFieldCommand_C.GetNPCShopList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PlacementLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                ShopList                                                         (Parm, OutParm)

void ULibFieldCommand_C::GetNPCShopList(class FName PlacementLabel, class UObject* __WorldContext, TArray<class FName>* ShopList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetNPCShopList");

	Params::ULibFieldCommand_C_GetNPCShopList_Params Parms{};

	Parms.PlacementLabel = PlacementLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ShopList != nullptr)
		*ShopList = std::move(Parms.ShopList);

}


// Function LibFieldCommand.LibFieldCommand_C.GetNPCPurchaseItemList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPurchaseItemInfoData>PuechaseData                                                     (Parm, OutParm)

void ULibFieldCommand_C::GetNPCPurchaseItemList(class FName NPCLabel, class UObject* __WorldContext, TArray<struct FPurchaseItemInfoData>* PuechaseData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetNPCPurchaseItemList");

	Params::ULibFieldCommand_C_GetNPCPurchaseItemList_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PuechaseData != nullptr)
		*PuechaseData = std::move(Parms.PuechaseData);

}


// Function LibFieldCommand.LibFieldCommand_C.GetTameMonsterList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMonsterListData>    TameMonsterList                                                  (Parm, OutParm)

void ULibFieldCommand_C::GetTameMonsterList(class UObject* __WorldContext, TArray<struct FMonsterListData>* TameMonsterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetTameMonsterList");

	Params::ULibFieldCommand_C_GetTameMonsterList_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TameMonsterList != nullptr)
		*TameMonsterList = std::move(Parms.TameMonsterList);

}


// Function LibFieldCommand.LibFieldCommand_C.GetSearchProbability
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              BaseProbability                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rate                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetSearchProbability(float& BaseProbability, class UObject* __WorldContext, int32* Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetSearchProbability");

	Params::ULibFieldCommand_C_GetSearchProbability_Params Parms{};

	Parms.BaseProbability = BaseProbability;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;

}


// Function LibFieldCommand.LibFieldCommand_C.GetSearchSuccessRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              SearchLv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rate                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetSearchSuccessRate(int32 SearchLv, class UObject* __WorldContext, float* Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetSearchSuccessRate");

	Params::ULibFieldCommand_C_GetSearchSuccessRate_Params Parms{};

	Parms.SearchLv = SearchLv;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;

}


// Function LibFieldCommand.LibFieldCommand_C.IsAvailableNightFieldCommand
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETimeZoneType           TimeZone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Available                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::IsAvailableNightFieldCommand(enum class ETimeZoneType TimeZone, class UObject* __WorldContext, bool* Available)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "IsAvailableNightFieldCommand");

	Params::ULibFieldCommand_C_IsAvailableNightFieldCommand_Params Parms{};

	Parms.TimeZone = TimeZone;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Available != nullptr)
		*Available = Parms.Available;

}


// Function LibFieldCommand.LibFieldCommand_C.IsAvailableDayTimeFieldCommand
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETimeZoneType           TimeZone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Available                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::IsAvailableDayTimeFieldCommand(enum class ETimeZoneType TimeZone, class UObject* __WorldContext, bool* Available)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "IsAvailableDayTimeFieldCommand");

	Params::ULibFieldCommand_C_IsAvailableDayTimeFieldCommand_Params Parms{};

	Parms.TimeZone = TimeZone;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Available != nullptr)
		*Available = Parms.Available;

}


// Function LibFieldCommand.LibFieldCommand_C.GetFieldCommandType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EMJFieldCommandType>FieldCommandType                                                 (Parm, OutParm)

void ULibFieldCommand_C::GetFieldCommandType(int32 PlayerID, class UObject* __WorldContext, TArray<enum class EMJFieldCommandType>* FieldCommandType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetFieldCommandType");

	Params::ULibFieldCommand_C_GetFieldCommandType_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FieldCommandType != nullptr)
		*FieldCommandType = std::move(Parms.FieldCommandType);

}


// Function LibFieldCommand.LibFieldCommand_C.GetAvailableFieldCommandInCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayableCharacterData      PlayableCharacterData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     AvailableFieldCommand                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ImpossibleFlag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetAvailableFieldCommandInCharacter(const struct FPlayableCharacterData& PlayableCharacterData, class UObject* __WorldContext, enum class EMJFieldCommandType* AvailableFieldCommand, int32* ImpossibleFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetAvailableFieldCommandInCharacter");

	Params::ULibFieldCommand_C_GetAvailableFieldCommandInCharacter_Params Parms{};

	Parms.PlayableCharacterData = PlayableCharacterData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableFieldCommand != nullptr)
		*AvailableFieldCommand = Parms.AvailableFieldCommand;

	if (ImpossibleFlag != nullptr)
		*ImpossibleFlag = Parms.ImpossibleFlag;

}


// Function LibFieldCommand.LibFieldCommand_C.CheckCharacterHaveFieldCommandType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayableCharacterData      PlayableCharacterData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EMJFieldCommandType     CheckType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckTimeZone                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HaveFieldCommand                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ImpossibleFlag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::CheckCharacterHaveFieldCommandType(const struct FPlayableCharacterData& PlayableCharacterData, enum class EMJFieldCommandType CheckType, bool CheckTimeZone, class UObject* __WorldContext, bool* HaveFieldCommand, int32* ImpossibleFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckCharacterHaveFieldCommandType");

	Params::ULibFieldCommand_C_CheckCharacterHaveFieldCommandType_Params Parms{};

	Parms.PlayableCharacterData = PlayableCharacterData;
	Parms.CheckType = CheckType;
	Parms.CheckTimeZone = CheckTimeZone;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HaveFieldCommand != nullptr)
		*HaveFieldCommand = Parms.HaveFieldCommand;

	if (ImpossibleFlag != nullptr)
		*ImpossibleFlag = Parms.ImpossibleFlag;

}


// Function LibFieldCommand.LibFieldCommand_C.Face Each Other
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            CharacterA                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            CharacterB                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::Face_Each_Other(class AKSCharacterBase* CharacterA, class AKSCharacterBase* CharacterB, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "Face Each Other");

	Params::ULibFieldCommand_C_Face_Each_Other_Params Parms{};

	Parms.CharacterA = CharacterA;
	Parms.CharacterB = CharacterB;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.GetNPCLeadData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PlacementLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNPCLeadDataBase            NPCLeadData                                                      (Parm, OutParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::GetNPCLeadData(class FName PlacementLabel, class UObject* __WorldContext, struct FNPCLeadDataBase* NPCLeadData, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetNPCLeadData");

	Params::ULibFieldCommand_C_GetNPCLeadData_Params Parms{};

	Parms.PlacementLabel = PlacementLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCLeadData != nullptr)
		*NPCLeadData = std::move(Parms.NPCLeadData);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibFieldCommand.LibFieldCommand_C.CheckHearFlag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       TargetNpcProperty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HearFlag                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckHearFlag(class UNpcPropertyComponent* TargetNpcProperty, class UObject* __WorldContext, bool* HearFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckHearFlag");

	Params::ULibFieldCommand_C_CheckHearFlag_Params Parms{};

	Parms.TargetNpcProperty = TargetNpcProperty;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HearFlag != nullptr)
		*HearFlag = Parms.HearFlag;

}


// Function LibFieldCommand.LibFieldCommand_C.CheckHaveInformation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       NpcProperty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HaveInfo                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckHaveInformation(class UNpcPropertyComponent* NpcProperty, class UObject* __WorldContext, bool* HaveInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckHaveInformation");

	Params::ULibFieldCommand_C_CheckHaveInformation_Params Parms{};

	Parms.NpcProperty = NpcProperty;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HaveInfo != nullptr)
		*HaveInfo = Parms.HaveInfo;

}


// Function LibFieldCommand.LibFieldCommand_C.GetTownName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TownID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TownName                                                         (Parm, OutParm)

void ULibFieldCommand_C::GetTownName(int32 TownID, class UObject* __WorldContext, class FText* TownName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetTownName");

	Params::ULibFieldCommand_C_GetTownName_Params Parms{};

	Parms.TownID = TownID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TownName != nullptr)
		*TownName = Parms.TownName;

}


// Function LibFieldCommand.LibFieldCommand_C.GetFieldCommandParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              FieldCommandLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldCommandParam          FCParameter                                                      (Parm, OutParm)

void ULibFieldCommand_C::GetFieldCommandParam(int32 FieldCommandLevel, class UObject* __WorldContext, struct FFieldCommandParam* FCParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetFieldCommandParam");

	Params::ULibFieldCommand_C_GetFieldCommandParam_Params Parms{};

	Parms.FieldCommandLevel = FieldCommandLevel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FCParameter != nullptr)
		*FCParameter = std::move(Parms.FCParameter);

}


// Function LibFieldCommand.LibFieldCommand_C.CheckHaveFieldCommandItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMJFieldCommandType     CommandType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FindItem                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              BenefitValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::CheckHaveFieldCommandItem(enum class EMJFieldCommandType CommandType, class UObject* __WorldContext, bool* FindItem, float* BenefitValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckHaveFieldCommandItem");

	Params::ULibFieldCommand_C_CheckHaveFieldCommandItem_Params Parms{};

	Parms.CommandType = CommandType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FindItem != nullptr)
		*FindItem = Parms.FindItem;

	if (BenefitValue != nullptr)
		*BenefitValue = Parms.BenefitValue;

}


// Function LibFieldCommand.LibFieldCommand_C.GetFieldCommandLevelFromType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     CommandType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckFCItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CheckTimeZone                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FieldCommandLevel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetFieldCommandLevelFromType(enum class EMJFieldCommandType CommandType, bool CheckFCItem, bool CheckTimeZone, class UObject* __WorldContext, int32* FieldCommandLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetFieldCommandLevelFromType");

	Params::ULibFieldCommand_C_GetFieldCommandLevelFromType_Params Parms{};

	Parms.CommandType = CommandType;
	Parms.CheckFCItem = CheckFCItem;
	Parms.CheckTimeZone = CheckTimeZone;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FieldCommandLevel != nullptr)
		*FieldCommandLevel = Parms.FieldCommandLevel;

}


// Function LibFieldCommand.LibFieldCommand_C.OpenGetInfoDialog
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                GetItemLabelList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::OpenGetInfoDialog(TArray<class FName>& GetItemLabelList, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "OpenGetInfoDialog");

	Params::ULibFieldCommand_C_OpenGetInfoDialog_Params Parms{};

	Parms.GetItemLabelList = GetItemLabelList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.GetInvadeLabelList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FTameMonsterData>    TameMonsterList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                InvadeLabel                                                      (Parm, OutParm)

void ULibFieldCommand_C::GetInvadeLabelList(TArray<struct FTameMonsterData>& TameMonsterList, class UObject* __WorldContext, TArray<class FName>* InvadeLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetInvadeLabelList");

	Params::ULibFieldCommand_C_GetInvadeLabelList_Params Parms{};

	Parms.TameMonsterList = TameMonsterList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (InvadeLabel != nullptr)
		*InvadeLabel = std::move(Parms.InvadeLabel);

}


// Function LibFieldCommand.LibFieldCommand_C.SetImageColor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAcqImage*                   Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 TintColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::SetImageColor(class UAcqImage* Input, const struct FSlateColor& TintColor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "SetImageColor");

	Params::ULibFieldCommand_C_SetImageColor_Params Parms{};

	Parms.Input = Input;
	Parms.TintColor = TintColor;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.CheckSearchSuccess
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SearchLv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::CheckSearchSuccess(class FName NPCLabel, int32 SearchLv, class UObject* __WorldContext, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "CheckSearchSuccess");

	Params::ULibFieldCommand_C_CheckSearchSuccess_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.SearchLv = SearchLv;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function LibFieldCommand.LibFieldCommand_C.GetSearchSuccessPerc
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCHearDataBase            NPCHearData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SearchLv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SuccessPerc                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetSearchSuccessPerc(struct FNPCHearDataBase& NPCHearData, int32 SearchLv, class UObject* __WorldContext, int32* SuccessPerc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetSearchSuccessPerc");

	Params::ULibFieldCommand_C_GetSearchSuccessPerc_Params Parms{};

	Parms.NPCHearData = NPCHearData;
	Parms.SearchLv = SearchLv;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SuccessPerc != nullptr)
		*SuccessPerc = Parms.SuccessPerc;

}


// Function LibFieldCommand.LibFieldCommand_C.GetNPCHearData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        PlacementLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNPCHearDataBase            Out_Row                                                          (Parm, OutParm)

void ULibFieldCommand_C::GetNPCHearData(class FName PlacementLabel, class UObject* __WorldContext, struct FNPCHearDataBase* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetNPCHearData");

	Params::ULibFieldCommand_C_GetNPCHearData_Params Parms{};

	Parms.PlacementLabel = PlacementLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);

}


// Function LibFieldCommand.LibFieldCommand_C.GetNPCHearInfoLabelList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                LabelList                                                        (Parm, OutParm)

void ULibFieldCommand_C::GetNPCHearInfoLabelList(class FName NPCLabel, class UObject* __WorldContext, TArray<class FName>* LabelList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetNPCHearInfoLabelList");

	Params::ULibFieldCommand_C_GetNPCHearInfoLabelList_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (LabelList != nullptr)
		*LabelList = std::move(Parms.LabelList);

}


// Function LibFieldCommand.LibFieldCommand_C.GetLureProbability
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              BaseProbability                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rate                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetLureProbability(float& BaseProbability, class UObject* __WorldContext, int32* Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetLureProbability");

	Params::ULibFieldCommand_C_GetLureProbability_Params Parms{};

	Parms.BaseProbability = BaseProbability;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;

}


// Function LibFieldCommand.LibFieldCommand_C.GetLureSuccessRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              LureLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SuccessRate                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::GetLureSuccessRate(int32 LureLevel, class UObject* __WorldContext, float* SuccessRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetLureSuccessRate");

	Params::ULibFieldCommand_C_GetLureSuccessRate_Params Parms{};

	Parms.LureLevel = LureLevel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SuccessRate != nullptr)
		*SuccessRate = Parms.SuccessRate;

}


// Function LibFieldCommand.LibFieldCommand_C.Setup and Refresh Follow NPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NPCID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     FieldCommandType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::Setup_and_Refresh_Follow_NPC(class FName NPCLabel, int32 NPCID, enum class EPlayableCharacterID PlayerID, enum class EMJFieldCommandType FieldCommandType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "Setup and Refresh Follow NPC");

	Params::ULibFieldCommand_C_Setup_and_Refresh_Follow_NPC_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.NPCID = NPCID;
	Parms.PlayerID = PlayerID;
	Parms.FieldCommandType = FieldCommandType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.Release Placate Follow NPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            ReleaseCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::Release_Placate_Follow_NPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "Release Placate Follow NPC");

	Params::ULibFieldCommand_C_Release_Placate_Follow_NPC_Params Parms{};

	Parms.ReleaseCharacter = ReleaseCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.ReleaseHireFollowNPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            ReleaseCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::ReleaseHireFollowNPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "ReleaseHireFollowNPC");

	Params::ULibFieldCommand_C_ReleaseHireFollowNPC_Params Parms{};

	Parms.ReleaseCharacter = ReleaseCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.SetPlayerTalk
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::SetPlayerTalk(class FName RowName, class AActor* Target, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "SetPlayerTalk");

	Params::ULibFieldCommand_C_SetPlayerTalk_Params Parms{};

	Parms.RowName = RowName;
	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.GetInformationEvent
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                NotificationList                                                 (Parm, OutParm)
// TArray<class FName>                AddItemList                                                      (Parm, OutParm)

void ULibFieldCommand_C::GetInformationEvent(class AKSCharacterBase* TargetCharacter, class UObject* __WorldContext, TArray<class FName>* NotificationList, TArray<class FName>* AddItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetInformationEvent");

	Params::ULibFieldCommand_C_GetInformationEvent_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NotificationList != nullptr)
		*NotificationList = std::move(Parms.NotificationList);

	if (AddItemList != nullptr)
		*AddItemList = std::move(Parms.AddItemList);

}


// Function LibFieldCommand.LibFieldCommand_C.NPCRelease_OLD
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::NPCRelease_OLD(int32 NPCUniqID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "NPCRelease_OLD");

	Params::ULibFieldCommand_C_NPCRelease_OLD_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.ReleaseLeadFollowNPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            ReleaseCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::ReleaseLeadFollowNPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "ReleaseLeadFollowNPC");

	Params::ULibFieldCommand_C_ReleaseLeadFollowNPC_Params Parms{};

	Parms.ReleaseCharacter = ReleaseCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.ReleaseLureFollowNPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            ReleaseCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::ReleaseLureFollowNPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "ReleaseLureFollowNPC");

	Params::ULibFieldCommand_C_ReleaseLureFollowNPC_Params Parms{};

	Parms.ReleaseCharacter = ReleaseCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.SetupFollowNPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::SetupFollowNPC(class FName NPCLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "SetupFollowNPC");

	Params::ULibFieldCommand_C_SetupFollowNPC_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.IsFixedFollowNPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     FC_Type                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFixed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::IsFixedFollowNPC(enum class EMJFieldCommandType FC_Type, class UObject* __WorldContext, bool* IsFixed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "IsFixedFollowNPC");

	Params::ULibFieldCommand_C_IsFixedFollowNPC_Params Parms{};

	Parms.FC_Type = FC_Type;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFixed != nullptr)
		*IsFixed = Parms.IsFixed;

}


// Function LibFieldCommand.LibFieldCommand_C.GetCalcIDList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                IDList                                                           (Parm, OutParm)

void ULibFieldCommand_C::GetCalcIDList(TArray<class FName>& ID, class UObject* __WorldContext, TArray<class FName>* IDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "GetCalcIDList");

	Params::ULibFieldCommand_C_GetCalcIDList_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IDList != nullptr)
		*IDList = std::move(Parms.IDList);

}


// Function LibFieldCommand.LibFieldCommand_C.AddConnectionValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TownID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::AddConnectionValue(int32 TownID, int32 AddValue, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "AddConnectionValue");

	Params::ULibFieldCommand_C_AddConnectionValue_Params Parms{};

	Parms.TownID = TownID;
	Parms.AddValue = AddValue;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.Sub Relation Value
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibFieldCommand_C::Sub_Relation_Value(class FName NPCLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "Sub Relation Value");

	Params::ULibFieldCommand_C_Sub_Relation_Value_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibFieldCommand.LibFieldCommand_C.NPCSwoon Talk
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EventComplete                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibFieldCommand_C::NPCSwoon_Talk(class AKSCharacterBase* TargetCharacter, class UObject* __WorldContext, bool* EventComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibFieldCommand_C", "NPCSwoon Talk");

	Params::ULibFieldCommand_C_NPCSwoon_Talk_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EventComplete != nullptr)
		*EventComplete = Parms.EventComplete;

}

}


