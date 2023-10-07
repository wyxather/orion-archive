#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleActionOrderBP.BattleActionOrderBP_C
// (Actor)

class UClass* ABattleActionOrderBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleActionOrderBP_C");

	return Clss;
}


// BattleActionOrderBP_C BattleActionOrderBP.Default__BattleActionOrderBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleActionOrderBP_C* ABattleActionOrderBP_C::GetDefaultObj()
{
	static class ABattleActionOrderBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleActionOrderBP_C*>(ABattleActionOrderBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SavedNextOrderChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleActionOrderBP_C::SavedNextOrderChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SavedNextOrderChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.MergeNextOrderChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleActionOrderBP_C::MergeNextOrderChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "MergeNextOrderChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.IsSettledOrderForEightBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::IsSettledOrderForEightBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "IsSettledOrderForEightBattle");

	Params::ABattleActionOrderBP_C_IsSettledOrderForEightBattle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.UpdateNextOrderForDefeatChange
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::UpdateNextOrderForDefeatChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "UpdateNextOrderForDefeatChange");

	Params::ABattleActionOrderBP_C_UpdateNextOrderForDefeatChange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.AddLastActionOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FActionOrderData            CInsertOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// int32                              NInsetIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::AddLastActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, struct FActionOrderData& CInsertOrder, int32* NInsetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "AddLastActionOrder");

	Params::ABattleActionOrderBP_C_AddLastActionOrder_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.CInsertOrder = CInsertOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (NInsetIndex != nullptr)
		*NInsetIndex = Parms.NInsetIndex;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.EndCharacterOrderForEightBattle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::EndCharacterOrderForEightBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "EndCharacterOrderForEightBattle");

	Params::ABattleActionOrderBP_C_EndCharacterOrderForEightBattle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SubActionCharacterCount
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SubActionCharacterCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SubActionCharacterCount");

	Params::ABattleActionOrderBP_C_SubActionCharacterCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.AddNextOrderCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CAddCharacter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::AddNextOrderCharacter(class ABattleCharacterBase* CAddCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "AddNextOrderCharacter");

	Params::ABattleActionOrderBP_C_AddNextOrderCharacter_Params Parms{};

	Parms.CAddCharacter = CAddCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveActionOrderByIndex
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcReserveList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              NRemoveIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveActionOrderByIndex(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, int32 NRemoveIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveActionOrderByIndex");

	Params::ABattleActionOrderBP_C_RemoveActionOrderByIndex_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.AcReserveList = AcReserveList;
	Parms.NRemoveIndex = NRemoveIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.AssignCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleActionOrderBP_C::AssignCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "AssignCurrent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.AssignNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleActionOrderBP_C::AssignNext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "AssignNext");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertNextOrderForSubParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NInsetIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::InsertNextOrderForSubParty(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "InsertNextOrderForSubParty");

	Params::ABattleActionOrderBP_C_InsertNextOrderForSubParty_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (NInsetIndex != nullptr)
		*NInsetIndex = Parms.NInsetIndex;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertCurrentOrderForSubParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NInsetIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::InsertCurrentOrderForSubParty(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "InsertCurrentOrderForSubParty");

	Params::ABattleActionOrderBP_C_InsertCurrentOrderForSubParty_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (NInsetIndex != nullptr)
		*NInsetIndex = Parms.NInsetIndex;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.AdjustSubPartyOrder
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    TargetSubPartyOrder                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    OriginalMainPartyOrder                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    ResultOrder                                                      (Parm, OutParm, ContainsInstancedReference)

void ABattleActionOrderBP_C::AdjustSubPartyOrder(TArray<struct FActionOrderData>& TargetSubPartyOrder, TArray<struct FActionOrderData>& OriginalMainPartyOrder, TArray<struct FActionOrderData>* ResultOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "AdjustSubPartyOrder");

	Params::ABattleActionOrderBP_C_AdjustSubPartyOrder_Params Parms{};

	Parms.TargetSubPartyOrder = TargetSubPartyOrder;
	Parms.OriginalMainPartyOrder = OriginalMainPartyOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultOrder != nullptr)
		*ResultOrder = std::move(Parms.ResultOrder);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateMainPartyCharacterList
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcOriginalOrder                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcOrderResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::CreateMainPartyCharacterList(TArray<struct FActionOrderData>& AcOriginalOrder, TArray<struct FActionOrderData>& AcOrderResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "CreateMainPartyCharacterList");

	Params::ABattleActionOrderBP_C_CreateMainPartyCharacterList_Params Parms{};

	Parms.AcOriginalOrder = AcOriginalOrder;
	Parms.AcOrderResult = AcOrderResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.PlaySubIconCloseAnim
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    OrderData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::PlaySubIconCloseAnim(TArray<struct FActionOrderData>& OrderData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "PlaySubIconCloseAnim");

	Params::ABattleActionOrderBP_C_PlaySubIconCloseAnim_Params Parms{};

	Parms.OrderData = OrderData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.PlaySubIconOpenAnim
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    OrderData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::PlaySubIconOpenAnim(TArray<struct FActionOrderData>& OrderData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "PlaySubIconOpenAnim");

	Params::ABattleActionOrderBP_C_PlaySubIconOpenAnim_Params Parms{};

	Parms.OrderData = OrderData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveNextOrderForSubParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveNextOrderForSubParty(class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveNextOrderForSubParty");

	Params::ABattleActionOrderBP_C_RemoveNextOrderForSubParty_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveCurrentOrderForSubParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveCurrentOrderForSubParty(class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveCurrentOrderForSubParty");

	Params::ABattleActionOrderBP_C_RemoveCurrentOrderForSubParty_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.Update Sub Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    TargetMainSortOrder                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    TargetSubSortOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    OperationOrderData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsNextOrder                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OpenedSubIcon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleActionOrderBP_C::Update_Sub_Icon(TArray<struct FActionOrderData>& TargetMainSortOrder, TArray<struct FActionOrderData>& TargetSubSortOrder, TArray<struct FActionOrderData>& OperationOrderData, bool IsNextOrder, bool OpenedSubIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "Update Sub Icon");

	Params::ABattleActionOrderBP_C_Update_Sub_Icon_Params Parms{};

	Parms.TargetMainSortOrder = TargetMainSortOrder;
	Parms.TargetSubSortOrder = TargetSubSortOrder;
	Parms.OperationOrderData = OperationOrderData;
	Parms.IsNextOrder = IsNextOrder;
	Parms.OpenedSubIcon = OpenedSubIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateSubPartyCharacterList
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcSubPartyCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionOrderData>    AcOrderResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsNextOrder                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::CreateSubPartyCharacterList(TArray<class ABattleCharacterBase*>& AcSubPartyCharacter, TArray<struct FActionOrderData>& AcOrderResult, bool IsNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "CreateSubPartyCharacterList");

	Params::ABattleActionOrderBP_C_CreateSubPartyCharacterList_Params Parms{};

	Parms.AcSubPartyCharacter = AcSubPartyCharacter;
	Parms.AcOrderResult = AcOrderResult;
	Parms.IsNextOrder = IsNextOrder;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.Debug_OutputLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleActionOrderBP_C::Debug_OutputLog(bool Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "Debug_OutputLog");

	Params::ABattleActionOrderBP_C_Debug_OutputLog_Params Parms{};

	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SetupSubPartyPlayer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcSubPartyPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SetupSubPartyPlayer(TArray<class ABattleCharacterBase*>& AcSubPartyPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SetupSubPartyPlayer");

	Params::ABattleActionOrderBP_C_SetupSubPartyPlayer_Params Parms{};

	Parms.AcSubPartyPlayer = AcSubPartyPlayer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ChangeBattleSubParty
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CActiveCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DefeatChange                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ChangeBattleSubParty(class ABattleCharacterBase* CActiveCharacter, bool DefeatChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ChangeBattleSubParty");

	Params::ABattleActionOrderBP_C_ChangeBattleSubParty_Params Parms{};

	Parms.CActiveCharacter = CActiveCharacter;
	Parms.DefeatChange = DefeatChange;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateSubPartyOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcSubPartyCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionOrderData>    AcOriginalOrder                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcOrderResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcReserveList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcBribeOrderList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsNextOrder                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::CreateSubPartyOrder(TArray<class ABattleCharacterBase*>& AcSubPartyCharacter, TArray<struct FActionOrderData>& AcOriginalOrder, TArray<struct FActionOrderData>& AcOrderResult, TArray<struct FActionOrderData>& AcReserveList, TArray<struct FActionOrderData>& AcBribeOrderList, bool IsNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "CreateSubPartyOrder");

	Params::ABattleActionOrderBP_C_CreateSubPartyOrder_Params Parms{};

	Parms.AcSubPartyCharacter = AcSubPartyCharacter;
	Parms.AcOriginalOrder = AcOriginalOrder;
	Parms.AcOrderResult = AcOrderResult;
	Parms.AcReserveList = AcReserveList;
	Parms.AcBribeOrderList = AcBribeOrderList;
	Parms.IsNextOrder = IsNextOrder;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.PopOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CNextCharacter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionOrderData            CNextOrderData                                                   (Parm, OutParm, NoDestructor, ContainsInstancedReference)

void ABattleActionOrderBP_C::PopOrder(class ABattleCharacterBase** CNextCharacter, struct FActionOrderData* CNextOrderData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "PopOrder");

	Params::ABattleActionOrderBP_C_PopOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CNextCharacter != nullptr)
		*CNextCharacter = Parms.CNextCharacter;

	if (CNextOrderData != nullptr)
		*CNextOrderData = std::move(Parms.CNextOrderData);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.GetOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CNextCharacter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionOrderData            CNextOrderData                                                   (Parm, OutParm, NoDestructor, ContainsInstancedReference)

void ABattleActionOrderBP_C::GetOrder(class ABattleCharacterBase** CNextCharacter, struct FActionOrderData* CNextOrderData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "GetOrder");

	Params::ABattleActionOrderBP_C_GetOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CNextCharacter != nullptr)
		*CNextCharacter = Parms.CNextCharacter;

	if (CNextOrderData != nullptr)
		*CNextOrderData = std::move(Parms.CNextOrderData);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SetBattleFirstActionTurn
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcFirstActionCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SetBattleFirstActionTurn(TArray<class ABattleCharacterBase*>& AcFirstActionCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SetBattleFirstActionTurn");

	Params::ABattleActionOrderBP_C_SetBattleFirstActionTurn_Params Parms{};

	Parms.AcFirstActionCharacter = AcFirstActionCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.GetEstimateActionOrderList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FActionOrderData>    AcCurrentOrder                                                   (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcNextOrder                                                      (Parm, OutParm, ContainsInstancedReference)

void ABattleActionOrderBP_C::GetEstimateActionOrderList(TArray<struct FActionOrderData>* AcCurrentOrder, TArray<struct FActionOrderData>* AcNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "GetEstimateActionOrderList");

	Params::ABattleActionOrderBP_C_GetEstimateActionOrderList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AcCurrentOrder != nullptr)
		*AcCurrentOrder = std::move(Parms.AcCurrentOrder);

	if (AcNextOrder != nullptr)
		*AcNextOrder = std::move(Parms.AcNextOrder);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.GetActionOrderList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FActionOrderData>    AcCurrentOrder                                                   (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcNextOrder                                                      (Parm, OutParm, ContainsInstancedReference)

void ABattleActionOrderBP_C::GetActionOrderList(TArray<struct FActionOrderData>* AcCurrentOrder, TArray<struct FActionOrderData>* AcNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "GetActionOrderList");

	Params::ABattleActionOrderBP_C_GetActionOrderList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AcCurrentOrder != nullptr)
		*AcCurrentOrder = std::move(Parms.AcCurrentOrder);

	if (AcNextOrder != nullptr)
		*AcNextOrder = std::move(Parms.AcNextOrder);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.UpdateCharacterIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleActionOrderBP_C::UpdateCharacterIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "UpdateCharacterIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SealActionOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionOrderData            CTargetOrder                                                     (Parm, OutParm, NoDestructor, ContainsInstancedReference)
// bool                               bSealNextOrder                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SealActionOrder(class ABattleCharacterBase* CTarget, struct FActionOrderData* CTargetOrder, bool* bSealNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SealActionOrder");

	Params::ABattleActionOrderBP_C_SealActionOrder_Params Parms{};

	Parms.CTarget = CTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (CTargetOrder != nullptr)
		*CTargetOrder = std::move(Parms.CTargetOrder);

	if (bSealNextOrder != nullptr)
		*bSealNextOrder = Parms.bSealNextOrder;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SetEstimateActionOrderChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EACTION_ORDER_TYPE      EOrderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bBuffOrder                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FindCharacter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleActionOrderBP_C::SetEstimateActionOrderChange(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, bool bBuffOrder, bool* FindCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SetEstimateActionOrderChange");

	Params::ABattleActionOrderBP_C_SetEstimateActionOrderChange_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.CTargetCharacter = CTargetCharacter;
	Parms.EOrderType = EOrderType;
	Parms.bBuffOrder = bBuffOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (FindCharacter != nullptr)
		*FindCharacter = Parms.FindCharacter;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ExecEstimateActionOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcTargetCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EACTION_ORDER_TYPE      EOrderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NMoveCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bContainCurrentOrder                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bContinueEstimate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ExecEstimateActionOrder(TArray<class ABattleCharacterBase*>& AcTargetCharacter, enum class EACTION_ORDER_TYPE EOrderType, int32 NMoveCount, bool bContainCurrentOrder, bool bContinueEstimate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ExecEstimateActionOrder");

	Params::ABattleActionOrderBP_C_ExecEstimateActionOrder_Params Parms{};

	Parms.AcTargetCharacter = AcTargetCharacter;
	Parms.EOrderType = EOrderType;
	Parms.NMoveCount = NMoveCount;
	Parms.bContainCurrentOrder = bContainCurrentOrder;
	Parms.bContinueEstimate = bContinueEstimate;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SetNextOrderChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SetNextOrderChange(class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SetNextOrderChange");

	Params::ABattleActionOrderBP_C_SetNextOrderChange_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SetActionOrderChange
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SetActionOrderChange(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SetActionOrderChange");

	Params::ABattleActionOrderBP_C_SetActionOrderChange_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SetCurrentOrderChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SetCurrentOrderChange(class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SetCurrentOrderChange");

	Params::ABattleActionOrderBP_C_SetCurrentOrderChange_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetNextOrderForIsOrderChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ResetNextOrderForIsOrderChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ResetNextOrderForIsOrderChange");

	Params::ABattleActionOrderBP_C_ResetNextOrderForIsOrderChange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetCurrentOrderForIsOrderChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ResetCurrentOrderForIsOrderChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ResetCurrentOrderForIsOrderChange");

	Params::ABattleActionOrderBP_C_ResetCurrentOrderForIsOrderChange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetActionOrderForIsOrderChange
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ResetActionOrderForIsOrderChange(TArray<struct FActionOrderData>& AcTargetOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ResetActionOrderForIsOrderChange");

	Params::ABattleActionOrderBP_C_ResetActionOrderForIsOrderChange_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ExecMoveNextOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NMoveCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ExecMoveNextOrder(enum class EACTION_ORDER_TYPE EType, int32 NMoveCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ExecMoveNextOrder");

	Params::ABattleActionOrderBP_C_ExecMoveNextOrder_Params Parms{};

	Parms.EType = EType;
	Parms.NMoveCount = NMoveCount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ExecMoveCurrentOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NMoveCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ExecMoveCurrentOrder(enum class EACTION_ORDER_TYPE EType, int32 NMoveCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ExecMoveCurrentOrder");

	Params::ABattleActionOrderBP_C_ExecMoveCurrentOrder_Params Parms{};

	Parms.EType = EType;
	Parms.NMoveCount = NMoveCount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveBreakStyle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveBreakStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveBreakStyle");

	Params::ABattleActionOrderBP_C_RemoveBreakStyle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ReplaceActionOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcReserveList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CReplaceCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NReplaceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReturnOrderToReserve                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActionOrderData            CReplaceOrder                                                    (Parm, OutParm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ReplaceActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, enum class EACTION_ORDER_TYPE EType, class ABattleCharacterBase* CReplaceCharacter, int32 NReplaceIndex, bool bReturnOrderToReserve, struct FActionOrderData* CReplaceOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ReplaceActionOrder");

	Params::ABattleActionOrderBP_C_ReplaceActionOrder_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.AcReserveList = AcReserveList;
	Parms.EType = EType;
	Parms.CReplaceCharacter = CReplaceCharacter;
	Parms.NReplaceIndex = NReplaceIndex;
	Parms.bReturnOrderToReserve = bReturnOrderToReserve;

	UObject::ProcessEvent(Func, &Parms);

	if (CReplaceOrder != nullptr)
		*CReplaceOrder = std::move(Parms.CReplaceOrder);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.BribeActionOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionOrderData            CReplaceOrder                                                    (Parm, OutParm, NoDestructor, ContainsInstancedReference)
// struct FActionOrderData            CTargetOrder                                                     (Parm, OutParm, NoDestructor, ContainsInstancedReference)
// bool                               bReplaceNextOrder                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::BribeActionOrder(class ABattleCharacterBase* CEnforcer, class ABattleCharacterBase* CTarget, struct FActionOrderData* CReplaceOrder, struct FActionOrderData* CTargetOrder, bool* bReplaceNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "BribeActionOrder");

	Params::ABattleActionOrderBP_C_BribeActionOrder_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.CTarget = CTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (CReplaceOrder != nullptr)
		*CReplaceOrder = std::move(Parms.CReplaceOrder);

	if (CTargetOrder != nullptr)
		*CTargetOrder = std::move(Parms.CTargetOrder);

	if (bReplaceNextOrder != nullptr)
		*bReplaceNextOrder = Parms.bReplaceNextOrder;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveActionOrderForEstimate
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveActionOrderForEstimate(TArray<struct FActionOrderData>& AcTargetOrder, class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveActionOrderForEstimate");

	Params::ABattleActionOrderBP_C_RemoveActionOrderForEstimate_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveActionOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcReserveList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList, class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveActionOrder");

	Params::ABattleActionOrderBP_C_RemoveActionOrder_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.AcReserveList = AcReserveList;
	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetEstimateNextOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ResetEstimateNextOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ResetEstimateNextOrder");

	Params::ABattleActionOrderBP_C_ResetEstimateNextOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetEstimateCurrentOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ResetEstimateCurrentOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ResetEstimateCurrentOrder");

	Params::ABattleActionOrderBP_C_ResetEstimateCurrentOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.FindCurrentOrderByCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionOrderData>    AcFindOrderList                                                  (Parm, OutParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::FindCurrentOrderByCharacter(class ABattleCharacterBase* CTargetCharacter, TArray<struct FActionOrderData>* AcFindOrderList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "FindCurrentOrderByCharacter");

	Params::ABattleActionOrderBP_C_FindCurrentOrderByCharacter_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (AcFindOrderList != nullptr)
		*AcFindOrderList = std::move(Parms.AcFindOrderList);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.FindNextOrderByCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionOrderData>    AcFindOrderList                                                  (Parm, OutParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::FindNextOrderByCharacter(class ABattleCharacterBase* CTargetCharacter, TArray<struct FActionOrderData>* AcFindOrderList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "FindNextOrderByCharacter");

	Params::ABattleActionOrderBP_C_FindNextOrderByCharacter_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (AcFindOrderList != nullptr)
		*AcFindOrderList = std::move(Parms.AcFindOrderList);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ClearCurrentOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ClearCurrentOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ClearCurrentOrder");

	Params::ABattleActionOrderBP_C_ClearCurrentOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveNextOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEverSince                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveNextOrder(class ABattleCharacterBase* CTargetCharacter, bool bEverSince)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveNextOrder");

	Params::ABattleActionOrderBP_C_RemoveNextOrder_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;
	Parms.bEverSince = bEverSince;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveCurrentOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveCurrentOrder(class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveCurrentOrder");

	Params::ABattleActionOrderBP_C_RemoveCurrentOrder_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertNextOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NInsetIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FDelay                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::InsertNextOrder(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EType, float FDelay, bool bUseIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "InsertNextOrder");

	Params::ABattleActionOrderBP_C_InsertNextOrder_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;
	Parms.EType = EType;
	Parms.FDelay = FDelay;
	Parms.bUseIcon = bUseIcon;

	UObject::ProcessEvent(Func, &Parms);

	if (NInsetIndex != nullptr)
		*NInsetIndex = Parms.NInsetIndex;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.BreakActionOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::BreakActionOrder(class ABattleCharacterBase* CTargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "BreakActionOrder");

	Params::ABattleActionOrderBP_C_BreakActionOrder_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertCurrentOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NInsetIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTargetCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FDelay                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::InsertCurrentOrder(int32* NInsetIndex, class ABattleCharacterBase* CTargetCharacter, enum class EACTION_ORDER_TYPE EType, float FDelay, bool bUseIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "InsertCurrentOrder");

	Params::ABattleActionOrderBP_C_InsertCurrentOrder_Params Parms{};

	Parms.CTargetCharacter = CTargetCharacter;
	Parms.EType = EType;
	Parms.FDelay = FDelay;
	Parms.bUseIcon = bUseIcon;

	UObject::ProcessEvent(Func, &Parms);

	if (NInsetIndex != nullptr)
		*NInsetIndex = Parms.NInsetIndex;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ChangeBattleTurn
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ChangeBattleTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ChangeBattleTurn");

	Params::ABattleActionOrderBP_C_ChangeBattleTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateActionOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcBattleCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionOrderData>    AcOrderResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcReserveList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::CreateActionOrder(TArray<class ABattleCharacterBase*>& AcBattleCharacter, TArray<struct FActionOrderData>& AcOrderResult, TArray<struct FActionOrderData>& AcReserveList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "CreateActionOrder");

	Params::ABattleActionOrderBP_C_CreateActionOrder_Params Parms{};

	Parms.AcBattleCharacter = AcBattleCharacter;
	Parms.AcOrderResult = AcOrderResult;
	Parms.AcReserveList = AcReserveList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.IsCurrentOrderComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::IsCurrentOrderComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "IsCurrentOrderComplete");

	Params::ABattleActionOrderBP_C_IsCurrentOrderComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.IsNextCharacterContinue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CCheckCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::IsNextCharacterContinue(class ABattleCharacterBase* CCheckCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "IsNextCharacterContinue");

	Params::ABattleActionOrderBP_C_IsNextCharacterContinue_Params Parms{};

	Parms.CCheckCharacter = CCheckCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.IsNextCharacterCross
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::IsNextCharacterCross()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "IsNextCharacterCross");

	Params::ABattleActionOrderBP_C_IsNextCharacterCross_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetCurrentCharacterWaitTime
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::ResetCurrentCharacterWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "ResetCurrentCharacterWaitTime");

	Params::ABattleActionOrderBP_C_ResetCurrentCharacterWaitTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.UpdateNextOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::UpdateNextOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "UpdateNextOrder");

	Params::ABattleActionOrderBP_C_UpdateNextOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SortPredicateByNextTime
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionOrderData            CElementA                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// struct FActionOrderData            CElementB                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SortPredicateByNextTime(struct FActionOrderData& CElementA, struct FActionOrderData& CElementB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SortPredicateByNextTime");

	Params::ABattleActionOrderBP_C_SortPredicateByNextTime_Params Parms{};

	Parms.CElementA = CElementA;
	Parms.CElementB = CElementB;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SortPredicateByWaitTime
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionOrderData            CElementA                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// struct FActionOrderData            CElementB                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SortPredicateByWaitTime(struct FActionOrderData& CElementA, struct FActionOrderData& CElementB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SortPredicateByWaitTime");

	Params::ABattleActionOrderBP_C_SortPredicateByWaitTime_Params Parms{};

	Parms.CElementA = CElementA;
	Parms.CElementB = CElementB;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.CheckShuffleEnable
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionOrderData            CTargetOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::CheckShuffleEnable(const struct FActionOrderData& CTargetOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "CheckShuffleEnable");

	Params::ABattleActionOrderBP_C_CheckShuffleEnable_Params Parms{};

	Parms.CTargetOrder = CTargetOrder;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.InitializeActionOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcBattlePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBase*>AcBattleEnemy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBATTLE_START_TYPE      EStartType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::InitializeActionOrder(TArray<class ABattleCharacterBase*>& AcBattlePlayer, TArray<class ABattleCharacterBase*>& AcBattleEnemy, enum class EBATTLE_START_TYPE EStartType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "InitializeActionOrder");

	Params::ABattleActionOrderBP_C_InitializeActionOrder_Params Parms{};

	Parms.AcBattlePlayer = AcBattlePlayer;
	Parms.AcBattleEnemy = AcBattleEnemy;
	Parms.EStartType = EStartType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.SetupFirstTurnPlayer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::SetupFirstTurnPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "SetupFirstTurnPlayer");

	Params::ABattleActionOrderBP_C_SetupFirstTurnPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertActionOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FActionOrderData            CInsertOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// int32                              NInsetIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::InsertActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, struct FActionOrderData& CInsertOrder, int32* NInsetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "InsertActionOrder");

	Params::ABattleActionOrderBP_C_InsertActionOrder_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.CInsertOrder = CInsertOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (NInsetIndex != nullptr)
		*NInsetIndex = Parms.NInsetIndex;

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.MoveActionOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NMoveCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsNextOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::MoveActionOrder(TArray<struct FActionOrderData>& AcTargetOrder, enum class EACTION_ORDER_TYPE EType, int32 NMoveCount, bool bIsNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "MoveActionOrder");

	Params::ABattleActionOrderBP_C_MoveActionOrder_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.EType = EType;
	Parms.NMoveCount = NMoveCount;
	Parms.bIsNextOrder = bIsNextOrder;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveBreakStyleOrder
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FActionOrderData>    AcTargetOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActionOrderData>    AcReserveList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleActionOrderBP_C::RemoveBreakStyleOrder(TArray<struct FActionOrderData>& AcTargetOrder, TArray<struct FActionOrderData>& AcReserveList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionOrderBP_C", "RemoveBreakStyleOrder");

	Params::ABattleActionOrderBP_C_RemoveBreakStyleOrder_Params Parms{};

	Parms.AcTargetOrder = AcTargetOrder;
	Parms.AcReserveList = AcReserveList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


