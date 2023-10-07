#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C
// (Actor)

class UClass* ABP_FCv2_FieldCommandFlowBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FCv2_FieldCommandFlowBase_C");

	return Clss;
}


// BP_FCv2_FieldCommandFlowBase_C BP_FCv2_FieldCommandFlowBase.Default__BP_FCv2_FieldCommandFlowBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FCv2_FieldCommandFlowBase_C* ABP_FCv2_FieldCommandFlowBase_C::GetDefaultObj()
{
	static class ABP_FCv2_FieldCommandFlowBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FCv2_FieldCommandFlowBase_C*>(ABP_FCv2_FieldCommandFlowBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RefreshEmotionOnRelease
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReleaseNpcId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::RefreshEmotionOnRelease(int32 ReleaseNpcId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "RefreshEmotionOnRelease");

	Params::ABP_FCv2_FieldCommandFlowBase_C_RefreshEmotionOnRelease_Params Parms{};

	Parms.ReleaseNpcId = ReleaseNpcId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetWasNpcReleased
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_FCv2_FieldCommandFlowBase_C::GetWasNpcReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetWasNpcReleased");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetWasNpcReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.ReleaseFollowingNpc
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WithoutRefresh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::ReleaseFollowingNpc(bool WithoutRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "ReleaseFollowingNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_ReleaseFollowingNpc_Params Parms{};

	Parms.WithoutRefresh = WithoutRefresh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsReserveEvent
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsReserveEvent(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsReserveEvent");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsReserveEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PlayReservedEventIfNeeded
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayed                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::PlayReservedEventIfNeeded(bool* IsPlayed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "PlayReservedEventIfNeeded");

	Params::ABP_FCv2_FieldCommandFlowBase_C_PlayReservedEventIfNeeded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayed != nullptr)
		*IsPlayed = Parms.IsPlayed;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.ReserveEventIfNeeded
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENPCEVENT_TYPE          EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsReserved                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::ReserveEventIfNeeded(enum class ENPCEVENT_TYPE EventType, bool* IsReserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "ReserveEventIfNeeded");

	Params::ABP_FCv2_FieldCommandFlowBase_C_ReserveEventIfNeeded_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsReserved != nullptr)
		*IsReserved = Parms.IsReserved;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetTargetPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::SetTargetPlayer(class AKSCharacterBase* TargetPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SetTargetPlayer");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SetTargetPlayer_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.ReleaseFollowWaitingNpcIfNeeded
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReleasedNpcId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::ReleaseFollowWaitingNpcIfNeeded(int32* ReleasedNpcId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "ReleaseFollowWaitingNpcIfNeeded");

	Params::ABP_FCv2_FieldCommandFlowBase_C_ReleaseFollowWaitingNpcIfNeeded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReleasedNpcId != nullptr)
		*ReleasedNpcId = Parms.ReleasedNpcId;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RestoreFollowWaitingNpcIfNeededByPlayerId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRestored                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::RestoreFollowWaitingNpcIfNeededByPlayerId(enum class EPlayableCharacterID CharaID, bool* IsRestored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "RestoreFollowWaitingNpcIfNeededByPlayerId");

	Params::ABP_FCv2_FieldCommandFlowBase_C_RestoreFollowWaitingNpcIfNeededByPlayerId_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRestored != nullptr)
		*IsRestored = Parms.IsRestored;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowWaitingNpcLabel
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetFollowWaitingNpcLabel(class FName* NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowWaitingNpcLabel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowWaitingNpcLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCLabel != nullptr)
		*NPCLabel = Parms.NPCLabel;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RestoreFollowWaitingNpcIfNeeded
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRestored                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::RestoreFollowWaitingNpcIfNeeded(bool* IsRestored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "RestoreFollowWaitingNpcIfNeeded");

	Params::ABP_FCv2_FieldCommandFlowBase_C_RestoreFollowWaitingNpcIfNeeded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRestored != nullptr)
		*IsRestored = Parms.IsRestored;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowWaitingNpcName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetFollowWaitingNpcName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowWaitingNpcName");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowWaitingNpcName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetNPCName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNPCName");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNPCName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetFollowingNpcName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowingNpcName");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcLabel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_FCv2_FieldCommandFlowBase_C::GetFollowingNpcLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowingNpcLabel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowWaitingNpcId
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetFollowWaitingNpcId(int32* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowWaitingNpcId");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowWaitingNpcId_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsStoryFollowNpc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Story_Npc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsStoryFollowNpc(bool* Story_Npc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsStoryFollowNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsStoryFollowNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Story_Npc != nullptr)
		*Story_Npc = Parms.Story_Npc;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.Open Follow Waiting Npc Dialog if Needed
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::Open_Follow_Waiting_Npc_Dialog_if_Needed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "Open Follow Waiting Npc Dialog if Needed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.Follow Npc
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::Follow_Npc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "Follow Npc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SwoonNpc_Internal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENpcSwoonType           SwoonType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::SwoonNpc_Internal(class AKSCharacterBase* TargetNpc, enum class ENpcSwoonType SwoonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SwoonNpc_Internal");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SwoonNpc_Internal_Params Parms{};

	Parms.TargetNpc = TargetNpc;
	Parms.SwoonType = SwoonType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsSwoonedNpc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::GetIsSwoonedNpc(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetIsSwoonedNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetIsSwoonedNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsPlayedEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::GetIsPlayedEvent(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetIsPlayedEvent");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetIsPlayedEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetTargetPlayerHP
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HP                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::SetTargetPlayerHP(int32 HP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SetTargetPlayerHP");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SetTargetPlayerHP_Params Parms{};

	Parms.HP = HP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsAlreadyCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAlreadyCompleted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::GetIsAlreadyCompleted(bool* IsAlreadyCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetIsAlreadyCompleted");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetIsAlreadyCompleted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsAlreadyCompleted != nullptr)
		*IsAlreadyCompleted = Parms.IsAlreadyCompleted;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFooterText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetFooterText(class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFooterText");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFooterText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetHeaderText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetHeaderText(class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetHeaderText");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetHeaderText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetHelpText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetHelpText(class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetHelpText");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetHelpText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFieldCommandData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFieldCommandData           Data                                                             (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetFieldCommandData(struct FFieldCommandData* Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFieldCommandData");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFieldCommandData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsImpossibleSucceed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_FCv2_FieldCommandFlowBase_C::IsImpossibleSucceed(class AKSCharacterBase* TargetNpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsImpossibleSucceed");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsImpossibleSucceed_Params Parms{};

	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsAvailable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsAvailable");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsAvailable_Params Parms{};

	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetPlayableEventLabelByGotItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        EventName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_FCv2_FieldCommandFlowBase_C::GetPlayableEventLabelByGotItems(class FName* EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetPlayableEventLabelByGotItems");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetPlayableEventLabelByGotItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EventName != nullptr)
		*EventName = Parms.EventName;

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.AddGotItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::AddGotItem(class FName& NewItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "AddGotItem");

	Params::ABP_FCv2_FieldCommandFlowBase_C_AddGotItem_Params Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetIsIgnoreFollowProcessFromEventCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIgnoreFollowProcessFromEventCommand                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::SetIsIgnoreFollowProcessFromEventCommand(bool IsIgnoreFollowProcessFromEventCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SetIsIgnoreFollowProcessFromEventCommand");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SetIsIgnoreFollowProcessFromEventCommand_Params Parms{};

	Parms.IsIgnoreFollowProcessFromEventCommand = IsIgnoreFollowProcessFromEventCommand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetIsIgnoreSwoonProcessFromEventCommand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIgnoreSwoonProcessFromEventCommand                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::SetIsIgnoreSwoonProcessFromEventCommand(bool IsIgnoreSwoonProcessFromEventCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SetIsIgnoreSwoonProcessFromEventCommand");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SetIsIgnoreSwoonProcessFromEventCommand_Params Parms{};

	Parms.IsIgnoreSwoonProcessFromEventCommand = IsIgnoreSwoonProcessFromEventCommand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.WillPlayEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::WillPlayEvent(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "WillPlayEvent");

	Params::ABP_FCv2_FieldCommandFlowBase_C_WillPlayEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.ExecuteFromPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::ExecuteFromPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "ExecuteFromPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsExecutableFromPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsExecutableFromPanel(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsExecutableFromPanel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsExecutableFromPanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.OnStartFieldCommand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::OnStartFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "OnStartFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.OnFinishFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::OnFinishFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "OnFinishFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsCompleted(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsCompleted");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsCompleted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.HasRequiredMoney
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::HasRequiredMoney(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "HasRequiredMoney");

	Params::ABP_FCv2_FieldCommandFlowBase_C_HasRequiredMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcSupportLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Limit                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetFollowingNpcSupportLimit(int32* Limit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowingNpcSupportLimit");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcSupportLimit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Limit != nullptr)
		*Limit = Parms.Limit;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFollowingNpc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsFollowingNpc(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsFollowingNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsFollowingNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcId
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetFollowingNpcId(int32* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowingNpcId");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcId_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            NPC                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetFollowingNpc(class AKSCharacterBase** NPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetFollowingNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPC != nullptr)
		*NPC = Parms.NPC;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsNeedFollowWaitingProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsNeedFollowWaitingProcess(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsNeedFollowWaitingProcess");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsNeedFollowWaitingProcess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFollowWaitingNpc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsFollowWaitingNpc(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsFollowWaitingNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsFollowWaitingNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFollowNpc
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsFollowNpc(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsFollowNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsFollowNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsWaitingToStartEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_FCv2_FieldCommandFlowBase_C::GetIsWaitingToStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetIsWaitingToStartEvent");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetIsWaitingToStartEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetTargetPlayerCharacterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    Player                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetTargetPlayerCharacterID(enum class EPlayableCharacterID* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetTargetPlayerCharacterID");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetTargetPlayerCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetTargetPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            TargetPlayer                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetTargetPlayer(class AKSCharacterBase** TargetPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetTargetPlayer");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetTargetPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetPlayer != nullptr)
		*TargetPlayer = Parms.TargetPlayer;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetTargetNpc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetTargetNpc(class AKSCharacterBase** TargetNpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetTargetNpc");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetTargetNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetNpc != nullptr)
		*TargetNpc = Parms.TargetNpc;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.HasRequiredItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::HasRequiredItem(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "HasRequiredItem");

	Params::ABP_FCv2_FieldCommandFlowBase_C_HasRequiredItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsGreaterEqualRequiredLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsGreaterEqualRequiredLevel(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsGreaterEqualRequiredLevel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsGreaterEqualRequiredLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PostProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::PostProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "PostProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.AddNpcTalkBalloon
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_FCv2_FieldCommandFlowBase_C::AddNpcTalkBalloon(class FName RowName, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "AddNpcTalkBalloon");

	Params::ABP_FCv2_FieldCommandFlowBase_C_AddNpcTalkBalloon_Params Parms{};

	Parms.RowName = RowName;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsRunningFieldCommandWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsRunningFieldCommandWidget(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsRunningFieldCommandWidget");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsRunningFieldCommandWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.BeginEventCallback
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::BeginEventCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "BeginEventCallback");

	Params::ABP_FCv2_FieldCommandFlowBase_C_BeginEventCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetNextEventLabel
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NextEventLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::SetNextEventLabel(class FName NextEventLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SetNextEventLabel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SetNextEventLabel_Params Parms{};

	Parms.NextEventLabel = NextEventLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.UpdateFlow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInterruptPlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "UpdateFlow");

	Params::ABP_FCv2_FieldCommandFlowBase_C_UpdateFlow_Params Parms{};

	Parms.IsInterruptPlay = IsInterruptPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PreProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::PreProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "PreProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PlayFieldCommandAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaySe                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_FCv2_FieldCommandFlowBase_C::PlayFieldCommandAction(bool IsPlaySe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "PlayFieldCommandAction");

	Params::ABP_FCv2_FieldCommandFlowBase_C_PlayFieldCommandAction_Params Parms{};

	Parms.IsPlaySe = IsPlaySe;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.TurnPlayerToNpc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::TurnPlayerToNpc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "TurnPlayerToNpc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.FaceEachOther
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::FaceEachOther()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "FaceEachOther");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcSerifLabel
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SerifLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFC_NpcSerifType        SerifType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OutputSerifLabel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetNpcSerifLabel(class FName SerifLabel, enum class EFC_NpcSerifType SerifType, class FName* OutputSerifLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNpcSerifLabel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNpcSerifLabel_Params Parms{};

	Parms.SerifLabel = SerifLabel;
	Parms.SerifType = SerifType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputSerifLabel != nullptr)
		*OutputSerifLabel = Parms.OutputSerifLabel;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SwapTargetNPC
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::SwapTargetNPC(class AKSCharacterBase* TargetNpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SwapTargetNPC");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SwapTargetNPC_Params Parms{};

	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsOpeningBalloon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsOpeningBalloon(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsOpeningBalloon");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsOpeningBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsIgnoreFollowProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ignore_Follow_Process                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsIgnoreFollowProcess(bool* Ignore_Follow_Process)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsIgnoreFollowProcess");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsIgnoreFollowProcess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ignore_Follow_Process != nullptr)
		*Ignore_Follow_Process = Parms.Ignore_Follow_Process;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFulfilledExecCondition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlowBase_C::IsFulfilledExecCondition(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "IsFulfilledExecCondition");

	Params::ABP_FCv2_FieldCommandFlowBase_C_IsFulfilledExecCondition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcUniqueID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_FCv2_FieldCommandFlowBase_C::GetNpcUniqueID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNpcUniqueID");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNpcUniqueID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PlayPlayerTalkEventCallback
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::PlayPlayerTalkEventCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "PlayPlayerTalkEventCallback");

	Params::ABP_FCv2_FieldCommandFlowBase_C_PlayPlayerTalkEventCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RequestPlayerTalkEvent
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::RequestPlayerTalkEvent(class FName EventLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "RequestPlayerTalkEvent");

	Params::ABP_FCv2_FieldCommandFlowBase_C_RequestPlayerTalkEvent_Params Parms{};

	Parms.EventLabel = EventLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.DrawEventLabel
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<class FName, float>           LabelAndWightSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        WinningLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::DrawEventLabel(TMap<class FName, float> LabelAndWightSet, class FName* WinningLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "DrawEventLabel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_DrawEventLabel_Params Parms{};

	Parms.LabelAndWightSet = LabelAndWightSet;

	UObject::ProcessEvent(Func, &Parms);

	if (WinningLabel != nullptr)
		*WinningLabel = Parms.WinningLabel;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FNPCData                    NPCData                                                          (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetNPCData(struct FNPCData* NPCData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNPCData");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNPCData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCData != nullptr)
		*NPCData = std::move(Parms.NPCData);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetNpcLabel(class FName* NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNpcLabel");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNpcLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCLabel != nullptr)
		*NPCLabel = Parms.NPCLabel;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCHearData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FNPCHearDataBase            HearData                                                         (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetNPCHearData(struct FNPCHearDataBase* HearData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNPCHearData");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNPCHearData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HearData != nullptr)
		*HearData = std::move(Parms.HearData);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCPurchaseData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FNPCPurchaseDataBase        PurchaseData                                                     (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetNPCPurchaseData(struct FNPCPurchaseDataBase* PurchaseData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNPCPurchaseData");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNPCPurchaseData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PurchaseData != nullptr)
		*PurchaseData = std::move(Parms.PurchaseData);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetPlayerProperty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayerPropertyComponent*    PlayerProp                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetPlayerProperty(class UPlayerPropertyComponent** PlayerProp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetPlayerProperty");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetPlayerProperty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayerProp != nullptr)
		*PlayerProp = Parms.PlayerProp;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcProperty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       NpcProp                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::GetNpcProperty(class UNpcPropertyComponent** NpcProp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNpcProperty");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNpcProperty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NpcProp != nullptr)
		*NpcProp = Parms.NpcProp;

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCBattleData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FNPCBattleData              BattleData                                                       (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetNPCBattleData(struct FNPCBattleData* BattleData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNPCBattleData");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNPCBattleData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleData != nullptr)
		*BattleData = std::move(Parms.BattleData);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCLeadData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FNPCLeadDataBase            LeadData                                                         (Parm, OutParm)

void ABP_FCv2_FieldCommandFlowBase_C::GetNPCLeadData(struct FNPCLeadDataBase* LeadData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "GetNPCLeadData");

	Params::ABP_FCv2_FieldCommandFlowBase_C_GetNPCLeadData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LeadData != nullptr)
		*LeadData = std::move(Parms.LeadData);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetupFlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlowBase_C::SetupFlow(class AKSCharacterBase* TargetNpc, class AKSCharacterBase* TargetPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "SetupFlow");

	Params::ABP_FCv2_FieldCommandFlowBase_C_SetupFlow_Params Parms{};

	Parms.TargetNpc = TargetNpc;
	Parms.TargetPlayer = TargetPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlowBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlowBase_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


