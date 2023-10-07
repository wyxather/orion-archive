#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_InventorComponent.BP_InventorComponent_C
// (None)

class UClass* UBP_InventorComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InventorComponent_C");

	return Clss;
}


// BP_InventorComponent_C BP_InventorComponent.Default__BP_InventorComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InventorComponent_C* UBP_InventorComponent_C::GetDefaultObj()
{
	static class UBP_InventorComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InventorComponent_C*>(UBP_InventorComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InventorComponent.BP_InventorComponent_C.IsInventorItemAllReady
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::IsInventorItemAllReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "IsInventorItemAllReady");

	Params::UBP_InventorComponent_C_IsInventorItemAllReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.StartCreateAllInventorItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::StartCreateAllInventorItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "StartCreateAllInventorItem");

	Params::UBP_InventorComponent_C_StartCreateAllInventorItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.IsExecutableInventorItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::IsExecutableInventorItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "IsExecutableInventorItem");

	Params::UBP_InventorComponent_C_IsExecutableInventorItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.UseInventorItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrInventorItemLabel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::UseInventorItem(class FName StrInventorItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "UseInventorItem");

	Params::UBP_InventorComponent_C_UseInventorItem_Params Parms{};

	Parms.StrInventorItemLabel = StrInventorItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.IsInventorItemReady
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::IsInventorItemReady(class FName StrLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "IsInventorItemReady");

	Params::UBP_InventorComponent_C_IsInventorItemReady_Params Parms{};

	Parms.StrLabel = StrLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.IsInventorItemExecCreate
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::IsInventorItemExecCreate(class FName StrLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "IsInventorItemExecCreate");

	Params::UBP_InventorComponent_C_IsInventorItemExecCreate_Params Parms{};

	Parms.StrLabel = StrLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.GetInventorItemCreateTurn
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StrLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NRestTurn                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NCreateTurnMax                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventorComponent_C::GetInventorItemCreateTurn(class FName StrLabel, int32* NRestTurn, int32* NCreateTurnMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "GetInventorItemCreateTurn");

	Params::UBP_InventorComponent_C_GetInventorItemCreateTurn_Params Parms{};

	Parms.StrLabel = StrLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (NRestTurn != nullptr)
		*NRestTurn = Parms.NRestTurn;

	if (NCreateTurnMax != nullptr)
		*NCreateTurnMax = Parms.NCreateTurnMax;

}


// Function BP_InventorComponent.BP_InventorComponent_C.UpdateCreateInventorItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NTurnCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRandom                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseText                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::UpdateCreateInventorItem(int32 NTurnCount, bool bRandom, bool bUseText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "UpdateCreateInventorItem");

	Params::UBP_InventorComponent_C_UpdateCreateInventorItem_Params Parms{};

	Parms.NTurnCount = NTurnCount;
	Parms.bRandom = bRandom;
	Parms.bUseText = bUseText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.StartCreateInventorItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrInventorItemLabel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::StartCreateInventorItem(class FName StrInventorItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "StartCreateInventorItem");

	Params::UBP_InventorComponent_C_StartCreateInventorItem_Params Parms{};

	Parms.StrInventorItemLabel = StrInventorItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.InitInventorItemData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::InitInventorItemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "InitInventorItemData");

	Params::UBP_InventorComponent_C_InitInventorItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventorComponent.BP_InventorComponent_C.AddInventorItemData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrInventorItemLabel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInventorTurn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InventorComponent_C::AddInventorItemData(class FName StrInventorItemLabel, int32 NInventorTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_InventorComponent_C", "AddInventorItemData");

	Params::UBP_InventorComponent_C_AddInventorItemData_Params Parms{};

	Parms.StrInventorItemLabel = StrInventorItemLabel;
	Parms.NInventorTurn = NInventorTurn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


