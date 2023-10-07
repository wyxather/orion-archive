#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_ResidentGame.BP_ResidentGame_C
// (Actor)

class UClass* ABP_ResidentGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ResidentGame_C");

	return Clss;
}


// BP_ResidentGame_C BP_ResidentGame.Default__BP_ResidentGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ResidentGame_C* ABP_ResidentGame_C::GetDefaultObj()
{
	static class ABP_ResidentGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ResidentGame_C*>(ABP_ResidentGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ResidentGame.BP_ResidentGame_C.Tick_SaveDataClearnup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::Tick_SaveDataClearnup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "Tick_SaveDataClearnup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.StopResidentGame
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::StopResidentGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StopResidentGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.PreLoadTitleWidgets
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TSoftObjectPtr<class UObject>>Array                                                            (Parm, OutParm)

void ABP_ResidentGame_C::PreLoadTitleWidgets(TArray<TSoftObjectPtr<class UObject>>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "PreLoadTitleWidgets");

	Params::ABP_ResidentGame_C_PreLoadTitleWidgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function BP_ResidentGame.BP_ResidentGame_C.OnLoaded_UIMainTitle
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ResidentGame_C::OnLoaded_UIMainTitle(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "OnLoaded_UIMainTitle");

	Params::ABP_ResidentGame_C_OnLoaded_UIMainTitle_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentGame.BP_ResidentGame_C.DirectLoadGame_OnFailedLoadGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::DirectLoadGame_OnFailedLoadGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "DirectLoadGame_OnFailedLoadGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.TickDirectLoadGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::TickDirectLoadGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "TickDirectLoadGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.DirectLoadGame_CallbackLoadGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJSaveData*                 SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResidentGame_C::DirectLoadGame_CallbackLoadGame(const class FString& SlotName, int32 UserIndex, class UMJSaveData* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "DirectLoadGame_CallbackLoadGame");

	Params::ABP_ResidentGame_C_DirectLoadGame_CallbackLoadGame_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentGame.BP_ResidentGame_C.DirectLoadGame_CallbackChangeMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResidentGame_C::DirectLoadGame_CallbackChangeMap(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "DirectLoadGame_CallbackChangeMap");

	Params::ABP_ResidentGame_C_DirectLoadGame_CallbackChangeMap_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentGame.BP_ResidentGame_C.Step Load Common UIResources
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::Step_Load_Common_UIResources(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "Step Load Common UIResources");

	Params::ABP_ResidentGame_C_Step_Load_Common_UIResources_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.Tick_UIMainTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::Tick_UIMainTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "Tick_UIMainTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.Tick_ResidentGame
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::Tick_ResidentGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "Tick_ResidentGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.CheckPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ResidentGame_C::CheckPoint(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "CheckPoint");

	Params::ABP_ResidentGame_C_CheckPoint_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentGame.BP_ResidentGame_C.CheckTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ResidentGame_C::CheckTime(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "CheckTime");

	Params::ABP_ResidentGame_C_CheckTime_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentGame.BP_ResidentGame_C.IsLevelManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::IsLevelManagerReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "IsLevelManagerReady");

	Params::ABP_ResidentGame_C_IsLevelManagerReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.InitForDebugStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::InitForDebugStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "InitForDebugStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.Set DBNotice Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::Set_DBNotice_Delegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "Set DBNotice Delegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepInitSaveData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepInitSaveData(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepInitSaveData");

	Params::ABP_ResidentGame_C_StepInitSaveData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepPlayerController(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepPlayerController");

	Params::ABP_ResidentGame_C_StepPlayerController_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepCharacter(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepCharacter");

	Params::ABP_ResidentGame_C_StepCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepDebug
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepDebug(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepDebug");

	Params::ABP_ResidentGame_C_StepDebug_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepEffect(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepEffect");

	Params::ABP_ResidentGame_C_StepEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepFinish(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepFinish");

	Params::ABP_ResidentGame_C_StepFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepUIResource
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepUIResource(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepUIResource");

	Params::ABP_ResidentGame_C_StepUIResource_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.SetupAfterLoadedDB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::SetupAfterLoadedDB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "SetupAfterLoadedDB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepBattle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepBattle(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepBattle");

	Params::ABP_ResidentGame_C_StepBattle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.StepDBAccess
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::StepDBAccess(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "StepDBAccess");

	Params::ABP_ResidentGame_C_StepDBAccess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.Setup Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentGame_C::Setup_Manager(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "Setup Manager");

	Params::ABP_ResidentGame_C_Setup_Manager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_ResidentGame.BP_ResidentGame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResidentGame_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "ReceiveTick");

	Params::ABP_ResidentGame_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentGame.BP_ResidentGame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ResidentGame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentGame.BP_ResidentGame_C.ExecuteUbergraph_BP_ResidentGame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResidentGame_C::ExecuteUbergraph_BP_ResidentGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentGame_C", "ExecuteUbergraph_BP_ResidentGame");

	Params::ABP_ResidentGame_C_ExecuteUbergraph_BP_ResidentGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


