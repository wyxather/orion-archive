#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPC_MJLevelManager.BPC_MJLevelManager_C
// (Actor)

class UClass* ABPC_MJLevelManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPC_MJLevelManager_C");

	return Clss;
}


// BPC_MJLevelManager_C BPC_MJLevelManager.Default__BPC_MJLevelManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPC_MJLevelManager_C* ABPC_MJLevelManager_C::GetDefaultObj()
{
	static class ABPC_MJLevelManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPC_MJLevelManager_C*>(ABPC_MJLevelManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.GameOverUIFinishEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NSelectCursor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_MJLevelManager_C::GameOverUIFinishEvent(int32 NSelectCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "GameOverUIFinishEvent");

	Params::ABPC_MJLevelManager_C_GameOverUIFinishEvent_Params Parms{};

	Parms.NSelectCursor = NSelectCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_StartUnloadLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_StartUnloadLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_StartUnloadLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_EndLevelLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_EndLevelLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_EndLevelLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_StartLevelLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_StartLevelLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_StartLevelLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.IsFadeInAllowed
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_MJLevelManager_C::IsFadeInAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "IsFadeInAllowed");

	Params::ABPC_MJLevelManager_C_IsFadeInAllowed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.FinishBattleLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_MJLevelManager_C::FinishBattleLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "FinishBattleLevel");

	Params::ABPC_MJLevelManager_C_FinishBattleLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.RequestLoadFieldLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTriggerID         TriggerID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fade                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ChangeBGM                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_MJLevelManager_C::RequestLoadFieldLevel(class FName Map, enum class ELevelTriggerID TriggerID, bool Fade, bool ChangeBGM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "RequestLoadFieldLevel");

	Params::ABPC_MJLevelManager_C_RequestLoadFieldLevel_Params Parms{};

	Parms.Map = Map;
	Parms.TriggerID = TriggerID;
	Parms.Fade = Fade;
	Parms.ChangeBGM = ChangeBGM;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.SaveVisitedMap_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_MJLevelManager_C::SaveVisitedMap_Impl(class FName LevelId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "SaveVisitedMap_Impl");

	Params::ABPC_MJLevelManager_C_SaveVisitedMap_Impl_Params Parms{};

	Parms.LevelId = LevelId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_EndChangeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_EndChangeLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_EndChangeLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_StartFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_StartFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_StartFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_PrevFadeIn_Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_PrevFadeIn_Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_PrevFadeIn_Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_PrevFadeIn_Entry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_PrevFadeIn_Entry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_PrevFadeIn_Entry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_EndUnloadLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_EndUnloadLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_EndUnloadLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_EndFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_EndFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_EndFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_StartChangeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Proc_StartChangeLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_StartChangeLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_NotifyLevelLoader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELEVEL_TYPE             LevelType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelLoaderNotice      Notice                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_MJLevelManager_C::Proc_NotifyLevelLoader(class FName LevelName, enum class ELEVEL_TYPE LevelType, enum class ELevelLoaderNotice Notice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_NotifyLevelLoader");

	Params::ABPC_MJLevelManager_C_Proc_NotifyLevelLoader_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.LevelType = LevelType;
	Parms.Notice = Notice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Proc_NotifyLevelTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELEVEL_TYPE             LevelType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelTransitionNotice  Notice                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_MJLevelManager_C::Proc_NotifyLevelTransition(class FName LevelId, enum class ELEVEL_TYPE LevelType, enum class ELevelTransitionNotice Notice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Proc_NotifyLevelTransition");

	Params::ABPC_MJLevelManager_C_Proc_NotifyLevelTransition_Params Parms{};

	Parms.LevelId = LevelId;
	Parms.LevelType = LevelType;
	Parms.Notice = Notice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.IsRunningFadeOut
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_MJLevelManager_C::IsRunningFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "IsRunningFadeOut");

	Params::ABPC_MJLevelManager_C_IsRunningFadeOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.IsRunningFadeIn
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_MJLevelManager_C::IsRunningFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "IsRunningFadeIn");

	Params::ABPC_MJLevelManager_C_IsRunningFadeIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.StartFadeOut
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_MJLevelManager_C::StartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "StartFadeOut");

	Params::ABPC_MJLevelManager_C_StartFadeOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.StartFadeIn
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_MJLevelManager_C::StartFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "StartFadeIn");

	Params::ABPC_MJLevelManager_C_StartFadeIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.SaveVisitedMap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SaveLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_MJLevelManager_C::SaveVisitedMap(class FName SaveLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "SaveVisitedMap");

	Params::ABPC_MJLevelManager_C_SaveVisitedMap_Params Parms{};

	Parms.SaveLevel = SaveLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.ExecuteUbergraph_BPC_MJLevelManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_MJLevelManager_C::ExecuteUbergraph_BPC_MJLevelManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "ExecuteUbergraph_BPC_MJLevelManager");

	Params::ABPC_MJLevelManager_C_ExecuteUbergraph_BPC_MJLevelManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MJLevelManager.BPC_MJLevelManager_C.CompletedFadeIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_MJLevelManager_C::CompletedFadeIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_MJLevelManager_C", "CompletedFadeIn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


