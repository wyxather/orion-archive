#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSGameModeBP.KSGameModeBP_C
// (Actor)

class UClass* AKSGameModeBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSGameModeBP_C");

	return Clss;
}


// KSGameModeBP_C KSGameModeBP.Default__KSGameModeBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSGameModeBP_C* AKSGameModeBP_C::GetDefaultObj()
{
	static class AKSGameModeBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSGameModeBP_C*>(AKSGameModeBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSGameModeBP.KSGameModeBP_C.IsLoadReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSGameModeBP_C::IsLoadReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "IsLoadReady");

	Params::AKSGameModeBP_C_IsLoadReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeBP.KSGameModeBP_C.IsManagerReady_DEPRICATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSGameModeBP_C::IsManagerReady_DEPRICATED(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "IsManagerReady_DEPRICATED");

	Params::AKSGameModeBP_C_IsManagerReady_DEPRICATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeBP.KSGameModeBP_C.SetLoadReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSGameModeBP_C::SetLoadReady(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "SetLoadReady");

	Params::AKSGameModeBP_C_SetLoadReady_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeBP.KSGameModeBP_C.SetManagerReady_DEPRICATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSGameModeBP_C::SetManagerReady_DEPRICATED(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "SetManagerReady_DEPRICATED");

	Params::AKSGameModeBP_C_SetManagerReady_DEPRICATED_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeBP.KSGameModeBP_C.SetAllManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSGameModeBP_C::SetAllManagerReady(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "SetAllManagerReady");

	Params::AKSGameModeBP_C_SetAllManagerReady_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeBP.KSGameModeBP_C.IsAllManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSGameModeBP_C::IsAllManagerReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "IsAllManagerReady");

	Params::AKSGameModeBP_C_IsAllManagerReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeBP.KSGameModeBP_C.SetBalloonManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     BalloonManager                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSGameModeBP_C::SetBalloonManager(class UObject* BalloonManager, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "SetBalloonManager");

	Params::AKSGameModeBP_C_SetBalloonManager_Params Parms{};

	Parms.BalloonManager = BalloonManager;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeBP.KSGameModeBP_C.GetLoader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSSimpleLevelLoader*        Loader                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSGameModeBP_C::GetLoader(class AKSSimpleLevelLoader** Loader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "GetLoader");

	Params::AKSGameModeBP_C_GetLoader_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Loader != nullptr)
		*Loader = Parms.Loader;

}


// Function KSGameModeBP.KSGameModeBP_C.PossessTitlePawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::PossessTitlePawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "PossessTitlePawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.CreateLetterWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::CreateLetterWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "CreateLetterWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.Debug_GetStoryMemoryData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              TextList                                                         (Parm, OutParm)
// int32                              MemoryIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSGameModeBP_C::Debug_GetStoryMemoryData(TArray<class FString>* TextList, int32 MemoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "Debug_GetStoryMemoryData");

	Params::AKSGameModeBP_C_Debug_GetStoryMemoryData_Params Parms{};

	Parms.MemoryIndex = MemoryIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (TextList != nullptr)
		*TextList = std::move(Parms.TextList);

}


// Function KSGameModeBP.KSGameModeBP_C.Debug_ResetEncountWipeFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::Debug_ResetEncountWipeFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "Debug_ResetEncountWipeFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.StartApp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::StartApp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "StartApp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.CreateAutoSavingWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::CreateAutoSavingWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "CreateAutoSavingWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.CreateLoadingWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::CreateLoadingWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "CreateLoadingWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.CreateFadeWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::CreateFadeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "CreateFadeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.RemoveTitlePawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::RemoveTitlePawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "RemoveTitlePawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.ShowTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSGameModeBP_C::ShowTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "ShowTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeBP.KSGameModeBP_C.ExecuteUbergraph_KSGameModeBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSGameModeBP_C::ExecuteUbergraph_KSGameModeBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeBP_C", "ExecuteUbergraph_KSGameModeBP");

	Params::AKSGameModeBP_C_ExecuteUbergraph_KSGameModeBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


