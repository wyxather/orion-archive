#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerStatusTree.WBP_PlayerStatusTree_C
// (None)

class UClass* UWBP_PlayerStatusTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerStatusTree_C");

	return Clss;
}


// WBP_PlayerStatusTree_C WBP_PlayerStatusTree.Default__WBP_PlayerStatusTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerStatusTree_C* UWBP_PlayerStatusTree_C::GetDefaultObj()
{
	static class UWBP_PlayerStatusTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerStatusTree_C*>(UWBP_PlayerStatusTree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.AttachSubPartyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsA                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_BattleSelectSubPlayerStatus_C*StatusUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatusTree_C::AttachSubPartyStatus(bool IsA, class UWBP_BattleSelectSubPlayerStatus_C* StatusUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PlayerStatusTree_C", "AttachSubPartyStatus");

	Params::UWBP_PlayerStatusTree_C_AttachSubPartyStatus_Params Parms{};

	Parms.IsA = IsA;
	Parms.StatusUI = StatusUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.GetStatusUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsA                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UBattleSelectPlayerStatus_C*>StatusUI                                                         (Parm, OutParm, ContainsInstancedReference)

void UWBP_PlayerStatusTree_C::GetStatusUI(bool IsA, TArray<class UBattleSelectPlayerStatus_C*>* StatusUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PlayerStatusTree_C", "GetStatusUI");

	Params::UWBP_PlayerStatusTree_C_GetStatusUI_Params Parms{};

	Parms.IsA = IsA;

	UObject::ProcessEvent(Func, &Parms);

	if (StatusUI != nullptr)
		*StatusUI = std::move(Parms.StatusUI);

}


// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.DetachPartyStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerStatusTree_C::DetachPartyStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PlayerStatusTree_C", "DetachPartyStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.AttachPartyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsA                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattleSelectPlayerStatus_C* StatusUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatusTree_C::AttachPartyStatus(bool IsA, class UBattleSelectPlayerStatus_C* StatusUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PlayerStatusTree_C", "AttachPartyStatus");

	Params::UWBP_PlayerStatusTree_C_AttachPartyStatus_Params Parms{};

	Parms.IsA = IsA;
	Parms.StatusUI = StatusUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.PlayPartyChangeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeToA                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerStatusTree_C::PlayPartyChangeAnim(bool ChangeToA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PlayerStatusTree_C", "PlayPartyChangeAnim");

	Params::UWBP_PlayerStatusTree_C_PlayPartyChangeAnim_Params Parms{};

	Parms.ChangeToA = ChangeToA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerStatusTree_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PlayerStatusTree_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.ExecuteUbergraph_WBP_PlayerStatusTree
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatusTree_C::ExecuteUbergraph_WBP_PlayerStatusTree(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PlayerStatusTree_C", "ExecuteUbergraph_WBP_PlayerStatusTree");

	Params::UWBP_PlayerStatusTree_C_ExecuteUbergraph_WBP_PlayerStatusTree_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


