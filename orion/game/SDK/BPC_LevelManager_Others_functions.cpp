#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPC_LevelManager_Others.BPC_LevelManager_Others_C
// (Actor)

class UClass* ABPC_LevelManager_Others_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPC_LevelManager_Others_C");

	return Clss;
}


// BPC_LevelManager_Others_C BPC_LevelManager_Others.Default__BPC_LevelManager_Others_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPC_LevelManager_Others_C* ABPC_LevelManager_Others_C::GetDefaultObj()
{
	static class ABPC_LevelManager_Others_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPC_LevelManager_Others_C*>(ABPC_LevelManager_Others_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RequestBattleFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::RequestBattleFinish(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RequestBattleFinish");

	Params::ABPC_LevelManager_Others_C_RequestBattleFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RequestBattleStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPartyCharacterData> Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvadeBattle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEventBGM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              BattleMapIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::RequestBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool InvadeBattle, bool IsEventBGM, int32 BattleMapIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RequestBattleStart");

	Params::ABPC_LevelManager_Others_C_RequestBattleStart_Params Parms{};

	Parms.Player = Player;
	Parms.EnemyGroupID = EnemyGroupID;
	Parms.InvadeBattle = InvadeBattle;
	Parms.IsEventBGM = IsEventBGM;
	Parms.BattleMapIndex = BattleMapIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckThiefChokerFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnLabel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::CheckThiefChokerFlag(class FName NewParam, class FName* ReturnLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CheckThiefChokerFlag");

	Params::ABPC_LevelManager_Others_C_CheckThiefChokerFlag_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnLabel != nullptr)
		*ReturnLabel = Parms.ReturnLabel;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CanOpenFastTravelTutotial
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::CanOpenFastTravelTutotial(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CanOpenFastTravelTutotial");

	Params::ABPC_LevelManager_Others_C_CanOpenFastTravelTutotial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Debug_ShowBarNPCSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OneCharaSpawned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Rand                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::Debug_ShowBarNPCSpawn(bool OneCharaSpawned, int32 Rand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Debug_ShowBarNPCSpawn");

	Params::ABPC_LevelManager_Others_C_Debug_ShowBarNPCSpawn_Params Parms{};

	Parms.OneCharaSpawned = OneCharaSpawned;
	Parms.Rand = Rand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckStorySelect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CheckTutorial                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ExistStory                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::CheckStorySelect(bool CheckTutorial, bool* ExistStory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CheckStorySelect");

	Params::ABPC_LevelManager_Others_C_CheckStorySelect_Params Parms{};

	Parms.CheckTutorial = CheckTutorial;

	UObject::ProcessEvent(Func, &Parms);

	if (ExistStory != nullptr)
		*ExistStory = Parms.ExistStory;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnLoadedBeforeGameOverSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJSaveData*                 SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::OnLoadedBeforeGameOverSaveData(const class FString& SlotName, int32 UserIndex, class UMJSaveData* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnLoadedBeforeGameOverSaveData");

	Params::ABPC_LevelManager_Others_C_OnLoadedBeforeGameOverSaveData_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckEventParamCondition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlacementEventParamSet     EventParamSet                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_LevelManager_Others_C::CheckEventParamCondition(struct FPlacementEventParamSet& EventParamSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CheckEventParamCondition");

	Params::ABPC_LevelManager_Others_C_CheckEventParamCondition_Params Parms{};

	Parms.EventParamSet = EventParamSet;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPartyCharacterOnChangeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InGame                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::RefreshPartyCharacterOnChangeLevel(bool InGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshPartyCharacterOnChangeLevel");

	Params::ABPC_LevelManager_Others_C_RefreshPartyCharacterOnChangeLevel_Params Parms{};

	Parms.InGame = InGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SetupInHouseOnChangeLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::SetupInHouseOnChangeLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SetupInHouseOnChangeLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ResetEncountOnChangeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ResetEncountOnChangeLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ResetEncountOnChangeLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPostProcessOnChangeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RefreshPostProcessOnChangeLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshPostProcessOnChangeLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPlacementOnChangeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RefreshPlacementOnChangeLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshPlacementOnChangeLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPlayerOnChangeLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RefreshPlayerOnChangeLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshPlayerOnChangeLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ShowFastTravelTutorial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::ShowFastTravelTutorial(bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ShowFastTravelTutorial");

	Params::ABPC_LevelManager_Others_C_ShowFastTravelTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFieldLevelShown_Last
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFieldLevelShown_Last()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFieldLevelShown_Last");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckStackObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::CheckStackObject(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CheckStackObject");

	Params::ABPC_LevelManager_Others_C_CheckStackObject_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CallbackFinishFadeIn_InEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPC_LevelManager_Others_C::CallbackFinishFadeIn_InEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CallbackFinishFadeIn_InEvent");

	Params::ABPC_LevelManager_Others_C_CallbackFinishFadeIn_InEvent_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ShowStorySelectMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ShowStorySelectMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ShowStorySelectMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ResetCameraLockBeforeFadeIn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ResetCameraLockBeforeFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ResetCameraLockBeforeFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ResetHouseOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ResetHouseOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ResetHouseOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnPlacementObject_Impl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPLACEMENT_TYPE         PlacementType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempDataLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RefreshFollowNPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlacementData              PlacementData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               FadeChara                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForceSpawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::SpawnPlacementObject_Impl(enum class EPLACEMENT_TYPE PlacementType, class FName TempDataLabel, const struct FVector& SpawnPos, bool RefreshFollowNPC, struct FPlacementData& PlacementData, bool FadeChara, bool ForceSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SpawnPlacementObject_Impl");

	Params::ABPC_LevelManager_Others_C_SpawnPlacementObject_Impl_Params Parms{};

	Parms.PlacementType = PlacementType;
	Parms.TempDataLabel = TempDataLabel;
	Parms.SpawnPos = SpawnPos;
	Parms.RefreshFollowNPC = RefreshFollowNPC;
	Parms.PlacementData = PlacementData;
	Parms.FadeChara = FadeChara;
	Parms.ForceSpawn = ForceSpawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPlacedObject_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPLACEMENT_TYPE         PlacementType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempDataLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RefreshFollowNPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUpdateSwoon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::RefreshPlacedObject_Impl(enum class EPLACEMENT_TYPE PlacementType, class FName TempDataLabel, bool RefreshFollowNPC, bool bUpdateSwoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshPlacedObject_Impl");

	Params::ABPC_LevelManager_Others_C_RefreshPlacedObject_Impl_Params Parms{};

	Parms.PlacementType = PlacementType;
	Parms.TempDataLabel = TempDataLabel;
	Parms.RefreshFollowNPC = RefreshFollowNPC;
	Parms.bUpdateSwoon = bUpdateSwoon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.DestroyDontPlaceObject_Impl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPLACEMENT_TYPE         PlacementType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempDataLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FadeChara                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      FollowNPCIDs                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              UniqIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::DestroyDontPlaceObject_Impl(enum class EPLACEMENT_TYPE PlacementType, class FName TempDataLabel, bool FadeChara, TArray<int32>& FollowNPCIDs, int32 UniqIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "DestroyDontPlaceObject_Impl");

	Params::ABPC_LevelManager_Others_C_DestroyDontPlaceObject_Impl_Params Parms{};

	Parms.PlacementType = PlacementType;
	Parms.TempDataLabel = TempDataLabel;
	Parms.FadeChara = FadeChara;
	Parms.FollowNPCIDs = FollowNPCIDs;
	Parms.UniqIndex = UniqIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckLevelTriggerEnable_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::CheckLevelTriggerEnable_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CheckLevelTriggerEnable_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SequeceRequestStorySelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SequeceRequestStorySelect(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SequeceRequestStorySelect");

	Params::ABPC_LevelManager_Others_C_SequeceRequestStorySelect_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SequenceRequest_SavePointStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SequenceRequest_SavePointStart(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SequenceRequest_SavePointStart");

	Params::ABPC_LevelManager_Others_C_SequenceRequest_SavePointStart_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SequenceRequest_GoTitleCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SequenceRequest_GoTitleCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SequenceRequest_GoTitleCallback");

	Params::ABPC_LevelManager_Others_C_SequenceRequest_GoTitleCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshCharacterResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::RefreshCharacterResource(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshCharacterResource");

	Params::ABPC_LevelManager_Others_C_RefreshCharacterResource_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckInGameLevelTransition
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::CheckInGameLevelTransition(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CheckInGameLevelTransition");

	Params::ABPC_LevelManager_Others_C_CheckInGameLevelTransition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshSwoon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_LevelManager_Others_C::RefreshSwoon(int32 NPCUniqID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshSwoon");

	Params::ABPC_LevelManager_Others_C_RefreshSwoon_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.IsGameOverLevelLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_LevelManager_Others_C::IsGameOverLevelLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "IsGameOverLevelLoad");

	Params::ABPC_LevelManager_Others_C_IsGameOverLevelLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.GetBattleEnemyGroupID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABPC_LevelManager_Others_C::GetBattleEnemyGroupID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "GetBattleEnemyGroupID");

	Params::ABPC_LevelManager_Others_C_GetBattleEnemyGroupID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshBarChangeCharacter_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RefreshBarChangeCharacter_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshBarChangeCharacter_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshSwoon_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::RefreshSwoon_Impl(int32 NPCUniqID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshSwoon_Impl");

	Params::ABPC_LevelManager_Others_C_RefreshSwoon_Impl_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ResetCameraLockParam_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ResetCameraLockParam_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ResetCameraLockParam_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.HouseChangeVisible_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InHouse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Floor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::HouseChangeVisible_Impl(bool InHouse, int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "HouseChangeVisible_Impl");

	Params::ABPC_LevelManager_Others_C_HouseChangeVisible_Impl_Params Parms{};

	Parms.InHouse = InHouse;
	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnShownField_AfterBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_LevelManager_Others_C::OnShownField_AfterBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnShownField_AfterBattle");

	Params::ABPC_LevelManager_Others_C_OnShownField_AfterBattle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ChangeBarCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BarCharaIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBarTalkDefine              BarTalkDefine                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPC_LevelManager_Others_C::ChangeBarCharacter(int32 BarCharaIndex, int32 CharacterID, struct FBarTalkDefine& BarTalkDefine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ChangeBarCharacter");

	Params::ABPC_LevelManager_Others_C_ChangeBarCharacter_Params Parms{};

	Parms.BarCharaIndex = BarCharaIndex;
	Parms.CharacterID = CharacterID;
	Parms.BarTalkDefine = BarTalkDefine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFinishLoadFieldLevel_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFinishLoadFieldLevel_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFinishLoadFieldLevel_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnBeginLevelChangeFadeOut_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnBeginLevelChangeFadeOut_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnBeginLevelChangeFadeOut_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFinishFadeOut_Field_Last_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFinishFadeOut_Field_Last_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFinishFadeOut_Field_Last_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc on Finish Fade Out Field First Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_on_Finish_Fade_Out_Field_First_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc on Finish Fade Out Field First Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFieldLevelShown_Last_Impl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFieldLevelShown_Last_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFieldLevelShown_Last_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc on Field Level Shown First Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_on_Field_Level_Shown_First_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc on Field Level Shown First Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFinishFadeIn_Impl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFinishFadeIn_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFinishFadeIn_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnStartGameOver_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnStartGameOver_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnStartGameOver_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnFinishFadeInAfterBattle_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnFinishFadeInAfterBattle_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnFinishFadeInAfterBattle_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.On Shown Field After Battle Impl
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GotoGameOver                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::On_Shown_Field_After_Battle_Impl(bool* GotoGameOver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "On Shown Field After Battle Impl");

	Params::ABPC_LevelManager_Others_C_On_Shown_Field_After_Battle_Impl_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GotoGameOver != nullptr)
		*GotoGameOver = Parms.GotoGameOver;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnFinishBattle_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnFinishBattle_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnFinishBattle_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnStartBattle_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnStartBattle_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnStartBattle_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnFinishFadeIn_Impl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnFinishFadeIn_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnFinishFadeIn_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Try Swoon Revival
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSFieldNPCCharacter_C*      NPCChara                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUpdateSwoon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::Try_Swoon_Revival(class AKSFieldNPCCharacter_C* NPCChara, bool bUpdateSwoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Try Swoon Revival");

	Params::ABPC_LevelManager_Others_C_Try_Swoon_Revival_Params Parms{};

	Parms.NPCChara = NPCChara;
	Parms.bUpdateSwoon = bUpdateSwoon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.FindCollisionDisabledNPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NPCUnqID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::FindCollisionDisabledNPC(int32& NPCUnqID, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "FindCollisionDisabledNPC");

	Params::ABPC_LevelManager_Others_C_FindCollisionDisabledNPC_Params Parms{};

	Parms.NPCUnqID = NPCUnqID;

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ClearCollisionDisabledNPC_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ClearCollisionDisabledNPC_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ClearCollisionDisabledNPC_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.UpdateCollisionDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AKSFieldCharacter_C*         Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::UpdateCollisionDisabled(bool IsDisable, class AKSFieldCharacter_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "UpdateCollisionDisabled");

	Params::ABPC_LevelManager_Others_C_UpdateCollisionDisabled_Params Parms{};

	Parms.IsDisable = IsDisable;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.AddCollisionDisabledNPC_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::AddCollisionDisabledNPC_Impl(int32 NPCUniqID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "AddCollisionDisabledNPC_Impl");

	Params::ABPC_LevelManager_Others_C_AddCollisionDisabledNPC_Impl_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Debug_ShowPostProcessVolumeInfo_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Debug_ShowPostProcessVolumeInfo_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Debug_ShowPostProcessVolumeInfo_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SetupSwoonEmotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSFieldNPCCharacter_C*      InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SetupSwoonEmotion(class AKSFieldNPCCharacter_C* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SetupSwoonEmotion");

	Params::ABPC_LevelManager_Others_C_SetupSwoonEmotion_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.VisibleBarCharacter_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::VisibleBarCharacter_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "VisibleBarCharacter_Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Debug Change Bar Chara Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Debug_Change_Bar_Chara_Impl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Debug Change Bar Chara Impl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.NPCLandCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSFieldNPCCharacter_C*      SpawNPC                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::NPCLandCheck(class AKSFieldNPCCharacter_C* SpawNPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "NPCLandCheck");

	Params::ABPC_LevelManager_Others_C_NPCLandCheck_Params Parms{};

	Parms.SpawNPC = SpawNPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshBarCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RefreshBarCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshBarCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ChangeBGM_OnFinishFadeOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ChangeBGM_OnFinishFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ChangeBGM_OnFinishFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Game Over UIFinish Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::Game_Over_UIFinish_Event(int32 SelectCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Game Over UIFinish Event");

	Params::ABPC_LevelManager_Others_C_Game_Over_UIFinish_Event_Params Parms{};

	Parms.SelectCursor = SelectCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Remove_TargetNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCUnqIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::Remove_TargetNPC(int32 NPCUnqIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Remove_TargetNPC");

	Params::ABPC_LevelManager_Others_C_Remove_TargetNPC_Params Parms{};

	Parms.NPCUnqIndex = NPCUnqIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Remove
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPLACEMENT_TYPE         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRemove                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::Remove(enum class EPLACEMENT_TYPE Type, class FName TargetLabel, bool* IsRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Remove");

	Params::ABPC_LevelManager_Others_C_Remove_Params Parms{};

	Parms.Type = Type;
	Parms.TargetLabel = TargetLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRemove != nullptr)
		*IsRemove = Parms.IsRemove;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RemoveListAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RemoveListAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RemoveListAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnSequencer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SequencerLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlacedSequencerBP_C*        Sequencer                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SpawnSequencer(class FName SequencerLabel, class APlacedSequencerBP_C** Sequencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SpawnSequencer");

	Params::ABPC_LevelManager_Others_C_SpawnSequencer_Params Parms{};

	Parms.SequencerLabel = SequencerLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Sequencer != nullptr)
		*Sequencer = Parms.Sequencer;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnEventTrigger
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TriggerLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Pos                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlacementData              PlacementData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      EventTrigger                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SpawnEventTrigger(class FName TriggerLabel, const struct FVector& Pos, const struct FVector& Size, const struct FPlacementData& PlacementData, class AActor** EventTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SpawnEventTrigger");

	Params::ABPC_LevelManager_Others_C_SpawnEventTrigger_Params Parms{};

	Parms.TriggerLabel = TriggerLabel;
	Parms.Pos = Pos;
	Parms.Size = Size;
	Parms.PlacementData = PlacementData;

	UObject::ProcessEvent(Func, &Parms);

	if (EventTrigger != nullptr)
		*EventTrigger = Parms.EventTrigger;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnMapObject
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ObjLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ObjectId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Pos                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InHouse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AKSObjectBase*               Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SpawnMapObject(class FName ObjLabel, class FName ObjectId, const struct FVector& Pos, enum class EKSCharacterDir Dir, bool InHouse, class AKSObjectBase** Output_Get)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SpawnMapObject");

	Params::ABPC_LevelManager_Others_C_SpawnMapObject_Params Parms{};

	Parms.ObjLabel = ObjLabel;
	Parms.ObjectId = ObjectId;
	Parms.Pos = Pos;
	Parms.Dir = Dir;
	Parms.InHouse = InHouse;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnNPC
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlacementData              PlacementData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsFadeChara                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsForceSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AKSFieldNPCCharacter_C*      NPCCharacter                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::SpawnNPC(class FName NPCLabel, struct FPlacementData& PlacementData, bool IsFadeChara, bool IsForceSpawn, class AKSFieldNPCCharacter_C** NPCCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SpawnNPC");

	Params::ABPC_LevelManager_Others_C_SpawnNPC_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.PlacementData = PlacementData;
	Parms.IsFadeChara = IsFadeChara;
	Parms.IsForceSpawn = IsForceSpawn;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCCharacter != nullptr)
		*NPCCharacter = Parms.NPCCharacter;

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.LoadedInit
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::LoadedInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "LoadedInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RecoveryNPC
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RecoveryNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RecoveryNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RemoveTargetNPC_ByID
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NpdUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::RemoveTargetNPC_ByID(int32 NpdUniqID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RemoveTargetNPC_ByID");

	Params::ABPC_LevelManager_Others_C_RemoveTargetNPC_ByID_Params Parms{};

	Parms.NpdUniqID = NpdUniqID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SetVisibleBarChangeCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::SetVisibleBarChangeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SetVisibleBarChangeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Debug_ChangeBarChara
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Debug_ChangeBarChara()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Debug_ChangeBarChara");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Debug_ShowPostProcessVolumeInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Debug_ShowPostProcessVolumeInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Debug_ShowPostProcessVolumeInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ClearCollisionDisabledNPC
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ClearCollisionDisabledNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ClearCollisionDisabledNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.EndBattleWipe
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GameOverCursor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::EndBattleWipe(int32 GameOverCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "EndBattleWipe");

	Params::ABPC_LevelManager_Others_C_EndBattleWipe_Params Parms{};

	Parms.GameOverCursor = GameOverCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.InitOnBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::InitOnBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "InitOnBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFinishFadeIn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFinishFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFinishFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFinishFadeOut_Field_First
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFinishFadeOut_Field_First()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFinishFadeOut_Field_First");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFinishFadeOut_Field_Last
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFinishFadeOut_Field_Last()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFinishFadeOut_Field_Last");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnFinishFadeIn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnFinishFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnFinishFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnStartBattle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnStartBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnStartBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnFinishBattle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnFinishBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnFinishBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnFinishFadeIn_AfterBattle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnFinishFadeIn_AfterBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnFinishFadeIn_AfterBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.OnStartGameOver
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::OnStartGameOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "OnStartGameOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnBeginLevelChangeFadeOut
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnBeginLevelChangeFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnBeginLevelChangeFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFinishLoadFieldLevel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFinishLoadFieldLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFinishLoadFieldLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.AddCollisionDisabledNPC
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCUniqID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::AddCollisionDisabledNPC(int32 NPCUniqID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "AddCollisionDisabledNPC");

	Params::ABPC_LevelManager_Others_C_AddCollisionDisabledNPC_Params Parms{};

	Parms.NPCUniqID = NPCUniqID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshBarChangeCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::RefreshBarChangeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshBarChangeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ResetCameraLockParam
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::ResetCameraLockParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ResetCameraLockParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.HouseChangeVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InHouse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Floor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::HouseChangeVisible(bool InHouse, int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "HouseChangeVisible");

	Params::ABPC_LevelManager_Others_C_HouseChangeVisible_Params Parms{};

	Parms.InHouse = InHouse;
	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.Proc_OnFieldLevelShown_First
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::Proc_OnFieldLevelShown_First()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "Proc_OnFieldLevelShown_First");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ChangeMapPreProcess
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextMapID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::ChangeMapPreProcess(int32 NextMapID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ChangeMapPreProcess");

	Params::ABPC_LevelManager_Others_C_ChangeMapPreProcess_Params Parms{};

	Parms.NextMapID = NextMapID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.VisibleBarCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::VisibleBarCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "VisibleBarCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.CheckLevelTriggerEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_LevelManager_Others_C::CheckLevelTriggerEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "CheckLevelTriggerEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.DestroyDontPlaceObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPLACEMENT_TYPE         EPlacementType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempDataLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFadeChara                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      AnFollowNPCID                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              NUniqUndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::DestroyDontPlaceObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, bool bFadeChara, TArray<int32>& AnFollowNPCID, int32 NUniqUndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "DestroyDontPlaceObject");

	Params::ABPC_LevelManager_Others_C_DestroyDontPlaceObject_Params Parms{};

	Parms.EPlacementType = EPlacementType;
	Parms.TempDataLabel = TempDataLabel;
	Parms.bFadeChara = bFadeChara;
	Parms.AnFollowNPCID = AnFollowNPCID;
	Parms.NUniqUndex = NUniqUndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.RefreshPlacedObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPLACEMENT_TYPE         EPlacementType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempDataLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRefreshFollowNPC                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUpdateSwoon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::RefreshPlacedObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, bool bRefreshFollowNPC, bool bUpdateSwoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "RefreshPlacedObject");

	Params::ABPC_LevelManager_Others_C_RefreshPlacedObject_Params Parms{};

	Parms.EPlacementType = EPlacementType;
	Parms.TempDataLabel = TempDataLabel;
	Parms.bRefreshFollowNPC = bRefreshFollowNPC;
	Parms.bUpdateSwoon = bUpdateSwoon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.SpawnPlacementObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPLACEMENT_TYPE         EPlacementType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempDataLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VSpawnPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRefreshFollowNPC                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlacementData              PPlacementData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bFadeChara                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bForceSpawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPC_LevelManager_Others_C::SpawnPlacementObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, const struct FVector& VSpawnPos, bool bRefreshFollowNPC, struct FPlacementData& PPlacementData, bool bFadeChara, bool bForceSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "SpawnPlacementObject");

	Params::ABPC_LevelManager_Others_C_SpawnPlacementObject_Params Parms{};

	Parms.EPlacementType = EPlacementType;
	Parms.TempDataLabel = TempDataLabel;
	Parms.VSpawnPos = VSpawnPos;
	Parms.bRefreshFollowNPC = bRefreshFollowNPC;
	Parms.PPlacementData = PPlacementData;
	Parms.bFadeChara = bFadeChara;
	Parms.bForceSpawn = bForceSpawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_LevelManager_Others.BPC_LevelManager_Others_C.ExecuteUbergraph_BPC_LevelManager_Others
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_LevelManager_Others_C::ExecuteUbergraph_BPC_LevelManager_Others(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_LevelManager_Others_C", "ExecuteUbergraph_BPC_LevelManager_Others");

	Params::ABPC_LevelManager_Others_C_ExecuteUbergraph_BPC_LevelManager_Others_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


