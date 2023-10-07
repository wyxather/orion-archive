#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LevelFunction.LevelFunction_C
// (None)

class UClass* ULevelFunction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelFunction_C");

	return Clss;
}


// LevelFunction_C LevelFunction.Default__LevelFunction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULevelFunction_C* ULevelFunction_C::GetDefaultObj()
{
	static class ULevelFunction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelFunction_C*>(ULevelFunction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelFunction.LevelFunction_C.RefreshPlayerLevelArea
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::RefreshPlayerLevelArea(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RefreshPlayerLevelArea");

	Params::ULevelFunction_C_RefreshPlayerLevelArea_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.EqualsPlayerCharaLevelArea
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     VPos                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSame                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULevelFunction_C::EqualsPlayerCharaLevelArea(const struct FVector& VPos, class UObject* __WorldContext, bool* IsSame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "EqualsPlayerCharaLevelArea");

	Params::ULevelFunction_C_EqualsPlayerCharaLevelArea_Params Parms{};

	Parms.VPos = VPos;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSame != nullptr)
		*IsSame = Parms.IsSame;

}


// Function LevelFunction.LevelFunction_C.GetRequestedLevelTriggerCameraLock
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCameraLockParams           CameraLockParam                                                  (Parm, OutParm, NoDestructor)

void ULevelFunction_C::GetRequestedLevelTriggerCameraLock(class UObject* __WorldContext, struct FCameraLockParams* CameraLockParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "GetRequestedLevelTriggerCameraLock");

	Params::ULevelFunction_C_GetRequestedLevelTriggerCameraLock_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CameraLockParam != nullptr)
		*CameraLockParam = std::move(Parms.CameraLockParam);

}


// Function LevelFunction.LevelFunction_C.GetFirstLevelTrigger
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelTriggerActor*          LevelTrigger                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::GetFirstLevelTrigger(class UObject* __WorldContext, class ALevelTriggerActor** LevelTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "GetFirstLevelTrigger");

	Params::ULevelFunction_C_GetFirstLevelTrigger_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelTrigger != nullptr)
		*LevelTrigger = Parms.LevelTrigger;

}


// Function LevelFunction.LevelFunction_C.DebugSpawnPlayer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULevelFunction_C::DebugSpawnPlayer(class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "DebugSpawnPlayer");

	Params::ULevelFunction_C_DebugSpawnPlayer_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LevelFunction.LevelFunction_C.DebugInitLevel
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::DebugInitLevel(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "DebugInitLevel");

	Params::ULevelFunction_C_DebugInitLevel_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.SortSwitchIndoorTrigger
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASwitchIndoorTriggerBP_C*>SwitchIndoorTrigger                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASwitchIndoorTriggerBP_C*>Ret                                                              (Parm, OutParm)

void ULevelFunction_C::SortSwitchIndoorTrigger(TArray<class ASwitchIndoorTriggerBP_C*>& SwitchIndoorTrigger, class UObject* __WorldContext, TArray<class ASwitchIndoorTriggerBP_C*>* Ret)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "SortSwitchIndoorTrigger");

	Params::ULevelFunction_C_SortSwitchIndoorTrigger_Params Parms{};

	Parms.SwitchIndoorTrigger = SwitchIndoorTrigger;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);

}


// Function LevelFunction.LevelFunction_C.LevelChangeHouseSetting
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelTriggerActor*          LevelTrigger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::LevelChangeHouseSetting(class ALevelTriggerActor* LevelTrigger, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "LevelChangeHouseSetting");

	Params::ULevelFunction_C_LevelChangeHouseSetting_Params Parms{};

	Parms.LevelTrigger = LevelTrigger;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.GetMapAndRegionNameByLevelID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              LevelId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RegionName                                                       (Parm, OutParm)
// class FText                        MapName                                                          (Parm, OutParm)

void ULevelFunction_C::GetMapAndRegionNameByLevelID(int32 LevelId, int32 Selection, class UObject* __WorldContext, class FText* RegionName, class FText* MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "GetMapAndRegionNameByLevelID");

	Params::ULevelFunction_C_GetMapAndRegionNameByLevelID_Params Parms{};

	Parms.LevelId = LevelId;
	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RegionName != nullptr)
		*RegionName = Parms.RegionName;

	if (MapName != nullptr)
		*MapName = Parms.MapName;

}


// Function LevelFunction.LevelFunction_C.ViewerLevelBeginPlay
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::ViewerLevelBeginPlay(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "ViewerLevelBeginPlay");

	Params::ULevelFunction_C_ViewerLevelBeginPlay_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.IsLevelChanged
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULevelFunction_C::IsLevelChanged(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "IsLevelChanged");

	Params::ULevelFunction_C_IsLevelChanged_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelFunction.LevelFunction_C.IsLevelChanging
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChanging                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULevelFunction_C::IsLevelChanging(class UObject* __WorldContext, bool* IsChanging)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "IsLevelChanging");

	Params::ULevelFunction_C_IsLevelChanging_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsChanging != nullptr)
		*IsChanging = Parms.IsChanging;

}


// Function LevelFunction.LevelFunction_C.SetEvent_CompletedLevelChangeFadeIn
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 CompletedFadeIn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::SetEvent_CompletedLevelChangeFadeIn(FDelegateProperty_& CompletedFadeIn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "SetEvent_CompletedLevelChangeFadeIn");

	Params::ULevelFunction_C_SetEvent_CompletedLevelChangeFadeIn_Params Parms{};

	Parms.CompletedFadeIn = CompletedFadeIn;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.RequestInvadeBattleStart
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPartyCharacterData> Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BattleMapIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::RequestInvadeBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, int32 BattleMapIndex, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestInvadeBattleStart");

	Params::ULevelFunction_C_RequestInvadeBattleStart_Params Parms{};

	Parms.Player = Player;
	Parms.EnemyGroupID = EnemyGroupID;
	Parms.BattleMapIndex = BattleMapIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.RequestMapChangeByNameForEvent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NextMapName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTriggerID         ReqTrigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFadeUI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ChangeBGM                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULevelFunction_C::RequestMapChangeByNameForEvent(class FName NextMapName, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestMapChangeByNameForEvent");

	Params::ULevelFunction_C_RequestMapChangeByNameForEvent_Params Parms{};

	Parms.NextMapName = NextMapName;
	Parms.ReqTrigger = ReqTrigger;
	Parms.UseFadeUI = UseFadeUI;
	Parms.ChangeBGM = ChangeBGM;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelFunction.LevelFunction_C.RequestMapChangeForEvent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextMapID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTriggerID         ReqTrigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFadeUI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ChangeBGM                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULevelFunction_C::RequestMapChangeForEvent(int32 NextMapID, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestMapChangeForEvent");

	Params::ULevelFunction_C_RequestMapChangeForEvent_Params Parms{};

	Parms.NextMapID = NextMapID;
	Parms.ReqTrigger = ReqTrigger;
	Parms.UseFadeUI = UseFadeUI;
	Parms.ChangeBGM = ChangeBGM;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelFunction.LevelFunction_C.RequestMapChangeByNameWithBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NextMapName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTriggerID         ReqTrigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFadeUI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ChangeBGM                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::RequestMapChangeByNameWithBGM(class FName NextMapName, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestMapChangeByNameWithBGM");

	Params::ULevelFunction_C_RequestMapChangeByNameWithBGM_Params Parms{};

	Parms.NextMapName = NextMapName;
	Parms.ReqTrigger = ReqTrigger;
	Parms.UseFadeUI = UseFadeUI;
	Parms.ChangeBGM = ChangeBGM;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.RequestBattleStart
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPartyCharacterData> Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEventBGM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              BattleMapIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::RequestBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool IsEventBGM, int32 BattleMapIndex, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestBattleStart");

	Params::ULevelFunction_C_RequestBattleStart_Params Parms{};

	Parms.Player = Player;
	Parms.EnemyGroupID = EnemyGroupID;
	Parms.IsEventBGM = IsEventBGM;
	Parms.BattleMapIndex = BattleMapIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.RequestMapChangeWithBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextMapID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTriggerID         ReqTrigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFadeUI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ChangeBGM                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::RequestMapChangeWithBGM(int32 NextMapID, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestMapChangeWithBGM");

	Params::ULevelFunction_C_RequestMapChangeWithBGM_Params Parms{};

	Parms.NextMapID = NextMapID;
	Parms.ReqTrigger = ReqTrigger;
	Parms.UseFadeUI = UseFadeUI;
	Parms.ChangeBGM = ChangeBGM;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.RequestMapChangeByName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NextMapName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTriggerID         ReqTrigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFadeUI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::RequestMapChangeByName(class FName NextMapName, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestMapChangeByName");

	Params::ULevelFunction_C_RequestMapChangeByName_Params Parms{};

	Parms.NextMapName = NextMapName;
	Parms.ReqTrigger = ReqTrigger;
	Parms.UseFadeUI = UseFadeUI;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.RequestMapChange
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextMapID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTriggerID         ReqTrigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFadeUI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::RequestMapChange(int32 NextMapID, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "RequestMapChange");

	Params::ULevelFunction_C_RequestMapChange_Params Parms{};

	Parms.NextMapID = NextMapID;
	Parms.ReqTrigger = ReqTrigger;
	Parms.UseFadeUI = UseFadeUI;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.LevelBeginPlay
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::LevelBeginPlay(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "LevelBeginPlay");

	Params::ULevelFunction_C_LevelBeginPlay_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.TriggerSpawnPlayer
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelTriggerActor*          LevelTrigger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::TriggerSpawnPlayer(class ALevelTriggerActor* LevelTrigger, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "TriggerSpawnPlayer");

	Params::ULevelFunction_C_TriggerSpawnPlayer_Params Parms{};

	Parms.LevelTrigger = LevelTrigger;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.SetPlayerLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::SetPlayerLocation(struct FVector& Location, enum class EKSCharacterDir InputPin, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "SetPlayerLocation");

	Params::ULevelFunction_C_SetPlayerLocation_Params Parms{};

	Parms.Location = Location;
	Parms.InputPin = InputPin;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.LoadPlayerLocation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::LoadPlayerLocation(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "LoadPlayerLocation");

	Params::ULevelFunction_C_LoadPlayerLocation_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelFunction.LevelFunction_C.LevelEndPlay
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelFunction_C::LevelEndPlay(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelFunction_C", "LevelEndPlay");

	Params::ULevelFunction_C_LevelEndPlay_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


