#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass FCv2_FieldCommandManager.FCv2_FieldCommandManager_C
// (Actor)

class UClass* AFCv2_FieldCommandManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FCv2_FieldCommandManager_C");

	return Clss;
}


// FCv2_FieldCommandManager_C FCv2_FieldCommandManager.Default__FCv2_FieldCommandManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFCv2_FieldCommandManager_C* AFCv2_FieldCommandManager_C::GetDefaultObj()
{
	static class AFCv2_FieldCommandManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFCv2_FieldCommandManager_C*>(AFCv2_FieldCommandManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsPlayingBadConnectionFlow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::IsPlayingBadConnectionFlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsPlayingBadConnectionFlow");

	Params::AFCv2_FieldCommandManager_C_IsPlayingBadConnectionFlow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetIdleGuestCharacter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFCv2_FieldCommandManager_C::SetIdleGuestCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetIdleGuestCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.StartBadConnectionTalk
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::StartBadConnectionTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "StartBadConnectionTalk");

	Params::AFCv2_FieldCommandManager_C_StartBadConnectionTalk_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetIsIgnoreSwoonProcessFromEventCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFCv2_FieldCommandManager_C::SetIsIgnoreSwoonProcessFromEventCommand(bool Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetIsIgnoreSwoonProcessFromEventCommand");

	Params::AFCv2_FieldCommandManager_C_SetIsIgnoreSwoonProcessFromEventCommand_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.RestoreFollowWaitingNpcsIfNeeded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFCv2_FieldCommandManager_C::RestoreFollowWaitingNpcsIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "RestoreFollowWaitingNpcsIfNeeded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnClosedWaitingNpcComeBackDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::OnClosedWaitingNpcComeBackDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "OnClosedWaitingNpcComeBackDialog");

	Params::AFCv2_FieldCommandManager_C_OnClosedWaitingNpcComeBackDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateLastResult
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESequenceResult         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::UpdateLastResult(enum class ESequenceResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "UpdateLastResult");

	Params::AFCv2_FieldCommandManager_C_UpdateLastResult_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetupFlowBase
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetChara                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::SetupFlowBase(class AKSCharacterBase* TargetChara, enum class EMJFieldCommandType FCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetupFlowBase");

	Params::AFCv2_FieldCommandManager_C_SetupFlowBase_Params Parms{};

	Parms.TargetChara = TargetChara;
	Parms.FCType = FCType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CanExecFieldCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::CanExecFieldCommand(class FName NPCLabel, enum class EMJFieldCommandType FCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "CanExecFieldCommand");

	Params::AFCv2_FieldCommandManager_C_CanExecFieldCommand_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.FCType = FCType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ResetManagerFromTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::ResetManagerFromTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "ResetManagerFromTitle");

	Params::AFCv2_FieldCommandManager_C_ResetManagerFromTitle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ResetManager
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::ResetManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "ResetManager");

	Params::AFCv2_FieldCommandManager_C_ResetManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.RecoveryConnectionValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TownID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::RecoveryConnectionValue(int32 TownID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "RecoveryConnectionValue");

	Params::AFCv2_FieldCommandManager_C_RecoveryConnectionValue_Params Parms{};

	Parms.TownID = TownID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ConnectionBadNotification
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::ConnectionBadNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "ConnectionBadNotification");

	Params::AFCv2_FieldCommandManager_C_ConnectionBadNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnFinishBadConnectionTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETUTORIAL_TYPE          TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::OnFinishBadConnectionTutorial(enum class ETUTORIAL_TYPE TutorialType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "OnFinishBadConnectionTutorial");

	Params::AFCv2_FieldCommandManager_C_OnFinishBadConnectionTutorial_Params Parms{};

	Parms.TutorialType = TutorialType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OpenConnectionBadNotification
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpenTutorial                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFCv2_FieldCommandManager_C::OpenConnectionBadNotification(bool* IsOpenTutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "OpenConnectionBadNotification");

	Params::AFCv2_FieldCommandManager_C_OpenConnectionBadNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpenTutorial != nullptr)
		*IsOpenTutorial = Parms.IsOpenTutorial;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.StartSwoonTalk
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::StartSwoonTalk(class AKSCharacterBase* TargetNpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "StartSwoonTalk");

	Params::AFCv2_FieldCommandManager_C_StartSwoonTalk_Params Parms{};

	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetTargetNpc
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AFCv2_FieldCommandManager_C::GetTargetNpc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetTargetNpc");

	Params::AFCv2_FieldCommandManager_C_GetTargetNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetFlowBase
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFieldCommandFlowBase*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AFieldCommandFlowBase* AFCv2_FieldCommandManager_C::GetFlowBase(enum class EMJFieldCommandType FCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetFlowBase");

	Params::AFCv2_FieldCommandManager_C_GetFlowBase_Params Parms{};

	Parms.FCType = FCType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPurchaseItemList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPurchaseItemInfoData>ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<struct FPurchaseItemInfoData> AFCv2_FieldCommandManager_C::GetPurchaseItemList(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetPurchaseItemList");

	Params::AFCv2_FieldCommandManager_C_GetPurchaseItemList_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsBattleType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::IsBattleType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsBattleType");

	Params::AFCv2_FieldCommandManager_C_IsBattleType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetIsGameOverWhenLoose
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::GetIsGameOverWhenLoose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetIsGameOverWhenLoose");

	Params::AFCv2_FieldCommandManager_C_GetIsGameOverWhenLoose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetCharacterByFcType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     FieldCommandType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* AFCv2_FieldCommandManager_C::GetCharacterByFcType(enum class EMJFieldCommandType FieldCommandType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetCharacterByFcType");

	Params::AFCv2_FieldCommandManager_C_GetCharacterByFcType_Params Parms{};

	Parms.FieldCommandType = FieldCommandType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsImpossibleSucceed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::IsImpossibleSucceed(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsImpossibleSucceed");

	Params::AFCv2_FieldCommandManager_C_IsImpossibleSucceed_Params Parms{};

	Parms.FCType = FCType;
	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsAvailableFieldCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::IsAvailableFieldCommand(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsAvailableFieldCommand");

	Params::AFCv2_FieldCommandManager_C_IsAvailableFieldCommand_Params Parms{};

	Parms.FCType = FCType;
	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsCompleteFieldCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::IsCompleteFieldCommand(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsCompleteFieldCommand");

	Params::AFCv2_FieldCommandManager_C_IsCompleteFieldCommand_Params Parms{};

	Parms.FCType = FCType;
	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CreateFlowClassIfNeeded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMJFieldCommandType     FCType                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::CreateFlowClassIfNeeded(enum class EMJFieldCommandType& FCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "CreateFlowClassIfNeeded");

	Params::AFCv2_FieldCommandManager_C_CreateFlowClassIfNeeded_Params Parms{};

	Parms.FCType = FCType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CreateFlowClasssesIfNeeded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EMJFieldCommandType>FcTypes                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AFCv2_FieldCommandManager_C::CreateFlowClasssesIfNeeded(TArray<enum class EMJFieldCommandType>& FcTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "CreateFlowClasssesIfNeeded");

	Params::AFCv2_FieldCommandManager_C_CreateFlowClasssesIfNeeded_Params Parms{};

	Parms.FcTypes = FcTypes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetFlowType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFCv2_FieldCommandManagerFlowTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EFCv2_FieldCommandManagerFlowType AFCv2_FieldCommandManager_C::GetFlowType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetFlowType");

	Params::AFCv2_FieldCommandManager_C_GetFlowType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetFlowType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCv2_FieldCommandManagerFlowTypeNewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::SetFlowType(enum class EFCv2_FieldCommandManagerFlowType NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetFlowType");

	Params::AFCv2_FieldCommandManager_C_SetFlowType_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetStartParam
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetChara                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::SetStartParam(class AKSCharacterBase* TargetChara, enum class EMJFieldCommandType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetStartParam");

	Params::AFCv2_FieldCommandManager_C_SetStartParam_Params Parms{};

	Parms.TargetChara = TargetChara;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetIsIgnoreFollowProcessFromEventCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFCv2_FieldCommandManager_C::SetIsIgnoreFollowProcessFromEventCommand(bool Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetIsIgnoreFollowProcessFromEventCommand");

	Params::AFCv2_FieldCommandManager_C_SetIsIgnoreFollowProcessFromEventCommand_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GrabStateSnapshot_Internal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm)

TMap<class FString, class FString> AFCv2_FieldCommandManager_C::GrabStateSnapshot_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GrabStateSnapshot_Internal");

	Params::AFCv2_FieldCommandManager_C_GrabStateSnapshot_Internal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPlayingCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFieldCommandFlowBase*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AFieldCommandFlowBase* AFCv2_FieldCommandManager_C::GetPlayingCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetPlayingCommand");

	Params::AFCv2_FieldCommandManager_C_GetPlayingCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString AFCv2_FieldCommandManager_C::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetState");

	Params::AFCv2_FieldCommandManager_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CanExecMainSequence
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFCv2_FieldCommandManager_C::CanExecMainSequence(bool* Yes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "CanExecMainSequence");

	Params::AFCv2_FieldCommandManager_C_CanExecMainSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetFieldCommandPreviewWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_FieldCommandPreviewWidget_C*Return                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::GetFieldCommandPreviewWidget(class UWBP_FieldCommandPreviewWidget_C** Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetFieldCommandPreviewWidget");

	Params::AFCv2_FieldCommandManager_C_GetFieldCommandPreviewWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.FinishFieldCommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::FinishFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "FinishFieldCommand");

	Params::AFCv2_FieldCommandManager_C_FinishFieldCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsEndFieldCommandAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::IsEndFieldCommandAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsEndFieldCommandAction");

	Params::AFCv2_FieldCommandManager_C_IsEndFieldCommandAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsPlaying
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsPlaying");

	Params::AFCv2_FieldCommandManager_C_IsPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsPlayingFieldCommandAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFCv2_FieldCommandManager_C::IsPlayingFieldCommandAction(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "IsPlayingFieldCommandAction");

	Params::AFCv2_FieldCommandManager_C_IsPlayingFieldCommandAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnFinishFieldCommandAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFCv2_FieldCommandManager_C::OnFinishFieldCommandAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "OnFinishFieldCommandAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.PlayFieldCommandActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayed                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              MaxWaitTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::PlayFieldCommandActions(bool* IsPlayed, float* MaxWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "PlayFieldCommandActions");

	Params::AFCv2_FieldCommandManager_C_PlayFieldCommandActions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayed != nullptr)
		*IsPlayed = Parms.IsPlayed;

	if (MaxWaitTime != nullptr)
		*MaxWaitTime = Parms.MaxWaitTime;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetActiveFcFlows
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_FCv2_FieldCommandFlowBase_C*>Flows                                                            (Parm, OutParm)

void AFCv2_FieldCommandManager_C::GetActiveFcFlows(TArray<class ABP_FCv2_FieldCommandFlowBase_C*>* Flows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetActiveFcFlows");

	Params::AFCv2_FieldCommandManager_C_GetActiveFcFlows_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Flows != nullptr)
		*Flows = std::move(Parms.Flows);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetActiveFcTypes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EMJFieldCommandType>FcTypes                                                          (Parm, OutParm)

void AFCv2_FieldCommandManager_C::GetActiveFcTypes(TArray<enum class EMJFieldCommandType>* FcTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetActiveFcTypes");

	Params::AFCv2_FieldCommandManager_C_GetActiveFcTypes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FcTypes != nullptr)
		*FcTypes = std::move(Parms.FcTypes);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetupActiveFlows
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AKSCharacterBase*>    Party                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AFCv2_FieldCommandManager_C::SetupActiveFlows(TArray<class AKSCharacterBase*>& Party)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetupActiveFlows");

	Params::AFCv2_FieldCommandManager_C_SetupActiveFlows_Params Parms{};

	Parms.Party = Party;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPostSequence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFCV2_FieldCommandManagerPostSequencePostSequence                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::GetPostSequence(enum class EFCV2_FieldCommandManagerPostSequence* PostSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetPostSequence");

	Params::AFCv2_FieldCommandManager_C_GetPostSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PostSequence != nullptr)
		*PostSequence = Parms.PostSequence;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetPostSequence
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCV2_FieldCommandManagerPostSequencePostSequence                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::SetPostSequence(enum class EFCV2_FieldCommandManagerPostSequence PostSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetPostSequence");

	Params::AFCv2_FieldCommandManager_C_SetPostSequence_Params Parms{};

	Parms.PostSequence = PostSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetMainSequence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFCV2_FieldCommandManagerMainSequenceMainSequence                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::GetMainSequence(enum class EFCV2_FieldCommandManagerMainSequence* MainSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetMainSequence");

	Params::AFCv2_FieldCommandManager_C_GetMainSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MainSequence != nullptr)
		*MainSequence = Parms.MainSequence;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetMainSequence
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCV2_FieldCommandManagerMainSequenceMainSequence                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::SetMainSequence(enum class EFCV2_FieldCommandManagerMainSequence MainSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetMainSequence");

	Params::AFCv2_FieldCommandManager_C_SetMainSequence_Params Parms{};

	Parms.MainSequence = MainSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPreSequence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFCV2_FieldCommandManagerPreSequencePreSequence                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::GetPreSequence(enum class EFCV2_FieldCommandManagerPreSequence* PreSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetPreSequence");

	Params::AFCv2_FieldCommandManager_C_GetPreSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PreSequence != nullptr)
		*PreSequence = Parms.PreSequence;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetPreSequence
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCV2_FieldCommandManagerPreSequencePreSequence                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::SetPreSequence(enum class EFCV2_FieldCommandManagerPreSequence PreSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetPreSequence");

	Params::AFCv2_FieldCommandManager_C_SetPreSequence_Params Parms{};

	Parms.PreSequence = PreSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdatePostSequence
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::UpdatePostSequence(enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "UpdatePostSequence");

	Params::AFCv2_FieldCommandManager_C_UpdatePostSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateMainSequence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::UpdateMainSequence(enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "UpdateMainSequence");

	Params::AFCv2_FieldCommandManager_C_UpdateMainSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdatePreSequence
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::UpdatePreSequence(enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "UpdatePreSequence");

	Params::AFCv2_FieldCommandManager_C_UpdatePreSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetRootSequence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFCv2_FieldCommandManagerRootSequenceRootSequence                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::GetRootSequence(enum class EFCv2_FieldCommandManagerRootSequence* RootSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "GetRootSequence");

	Params::AFCv2_FieldCommandManager_C_GetRootSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RootSequence != nullptr)
		*RootSequence = Parms.RootSequence;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetRootSequence
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCv2_FieldCommandManagerRootSequenceRootSequence                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::SetRootSequence(enum class EFCv2_FieldCommandManagerRootSequence RootSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetRootSequence");

	Params::AFCv2_FieldCommandManager_C_SetRootSequence_Params Parms{};

	Parms.RootSequence = RootSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::UpdateManager(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "UpdateManager");

	Params::AFCv2_FieldCommandManager_C_UpdateManager_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateRootSequence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::UpdateRootSequence(enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "UpdateRootSequence");

	Params::AFCv2_FieldCommandManager_C_UpdateRootSequence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.StartFieldCommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::StartFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "StartFieldCommand");

	Params::AFCv2_FieldCommandManager_C_StartFieldCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetupCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EMJFieldCommandType>FieldCommand                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFCv2_FieldCommandManager_C::SetupCommand(TArray<enum class EMJFieldCommandType>& FieldCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "SetupCommand");

	Params::AFCv2_FieldCommandManager_C_SetupCommand_Params Parms{};

	Parms.FieldCommand = FieldCommand;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnEnterGameOver
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AFCv2_FieldCommandManager_C::OnEnterGameOver(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "OnEnterGameOver");

	Params::AFCv2_FieldCommandManager_C_OnEnterGameOver_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnStartFieldMainSequence
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AFCv2_FieldCommandManager_C::OnStartFieldMainSequence(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "OnStartFieldMainSequence");

	Params::AFCv2_FieldCommandManager_C_OnStartFieldMainSequence_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFCv2_FieldCommandManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFCv2_FieldCommandManager_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ExecuteUbergraph_FCv2_FieldCommandManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFCv2_FieldCommandManager_C::ExecuteUbergraph_FCv2_FieldCommandManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FCv2_FieldCommandManager_C", "ExecuteUbergraph_FCv2_FieldCommandManager");

	Params::AFCv2_FieldCommandManager_C_ExecuteUbergraph_FCv2_FieldCommandManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


