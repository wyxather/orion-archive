#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass NPCFunction.NPCFunction_C
// (None)

class UClass* UNPCFunction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCFunction_C");

	return Clss;
}


// NPCFunction_C NPCFunction.Default__NPCFunction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPCFunction_C* UNPCFunction_C::GetDefaultObj()
{
	static class UNPCFunction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPCFunction_C*>(UNPCFunction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCFunction.NPCFunction_C.GetSupporterSupportLimit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SupporterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SupportLimit                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCFunction_C::GetSupporterSupportLimit(class FName SupporterName, class UObject* __WorldContext, int32* SupportLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "GetSupporterSupportLimit");

	Params::UNPCFunction_C_GetSupporterSupportLimit_Params Parms{};

	Parms.SupporterName = SupporterName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SupportLimit != nullptr)
		*SupportLimit = Parms.SupportLimit;

}


// Function NPCFunction.NPCFunction_C.GetSupporterCommandTable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SupporterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSupporterCommandData>CommandTable                                                     (Parm, OutParm)

void UNPCFunction_C::GetSupporterCommandTable(class FName SupporterName, class UObject* __WorldContext, TArray<struct FSupporterCommandData>* CommandTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "GetSupporterCommandTable");

	Params::UNPCFunction_C_GetSupporterCommandTable_Params Parms{};

	Parms.SupporterName = SupporterName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CommandTable != nullptr)
		*CommandTable = std::move(Parms.CommandTable);

}


// Function NPCFunction.NPCFunction_C.IsUnlimitedSupporter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUnlimited                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCFunction_C::IsUnlimitedSupporter(class AKSCharacterBase* NPC, class UObject* __WorldContext, bool* IsUnlimited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "IsUnlimitedSupporter");

	Params::UNPCFunction_C_IsUnlimitedSupporter_Params Parms{};

	Parms.NPC = NPC;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnlimited != nullptr)
		*IsUnlimited = Parms.IsUnlimited;

}


// Function NPCFunction.NPCFunction_C.GetSupporterWeaponType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SupporterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCFunction_C::GetSupporterWeaponType(class FName SupporterName, class UObject* __WorldContext, enum class EWEAPON_CATEGORY* WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "GetSupporterWeaponType");

	Params::UNPCFunction_C_GetSupporterWeaponType_Params Parms{};

	Parms.SupporterName = SupporterName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function NPCFunction.NPCFunction_C.GetSupporterData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SupporterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSupportCharacterData       SupportData                                                      (Parm, OutParm)

void UNPCFunction_C::GetSupporterData(class FName SupporterName, class UObject* __WorldContext, bool* IsFound, struct FSupportCharacterData* SupportData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "GetSupporterData");

	Params::UNPCFunction_C_GetSupporterData_Params Parms{};

	Parms.SupporterName = SupporterName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (SupportData != nullptr)
		*SupportData = std::move(Parms.SupportData);

}


// Function NPCFunction.NPCFunction_C.IsSupporterExists
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SupporterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNPCFunction_C::IsSupporterExists(class FName SupporterName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "IsSupporterExists");

	Params::UNPCFunction_C_IsSupporterExists_Params Parms{};

	Parms.SupporterName = SupporterName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPCFunction.NPCFunction_C.GetPlacementDataNpcID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlacementData              PlacementData                                                    (Parm, OutParm)

void UNPCFunction_C::GetPlacementDataNpcID(int32 NPCUniqID, class UObject* __WorldContext, struct FPlacementData* PlacementData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "GetPlacementDataNpcID");

	Params::UNPCFunction_C_GetPlacementDataNpcID_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PlacementData != nullptr)
		*PlacementData = std::move(Parms.PlacementData);

}


// Function NPCFunction.NPCFunction_C.GetNPCNameLabel
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Text                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCFunction_C::GetNPCNameLabel(class FName NPCLabel, class UObject* __WorldContext, class FName* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "GetNPCNameLabel");

	Params::UNPCFunction_C_GetNPCNameLabel_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function NPCFunction.NPCFunction_C.IsFollowPlayerNPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNPCFunction_C::IsFollowPlayerNPC(int32 NPCUniqID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "IsFollowPlayerNPC");

	Params::UNPCFunction_C_IsFollowPlayerNPC_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPCFunction.NPCFunction_C.IsSwoonState
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSwoon                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCFunction_C::IsSwoonState(class FName NPCLabel, class UObject* __WorldContext, bool* IsSwoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "IsSwoonState");

	Params::UNPCFunction_C_IsSwoonState_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwoon != nullptr)
		*IsSwoon = Parms.IsSwoon;

}


// Function NPCFunction.NPCFunction_C.GetNPCName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void UNPCFunction_C::GetNPCName(class FName NPCLabel, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFunction_C", "GetNPCName");

	Params::UNPCFunction_C_GetNPCName_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}

}


