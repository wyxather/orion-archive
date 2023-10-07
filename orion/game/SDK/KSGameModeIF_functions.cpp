#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSGameModeIF.KSGameModeIF_C
// (None)

class UClass* IKSGameModeIF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSGameModeIF_C");

	return Clss;
}


// KSGameModeIF_C KSGameModeIF.Default__KSGameModeIF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IKSGameModeIF_C* IKSGameModeIF_C::GetDefaultObj()
{
	static class IKSGameModeIF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IKSGameModeIF_C*>(IKSGameModeIF_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSGameModeIF.KSGameModeIF_C.ShowTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IKSGameModeIF_C::ShowTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "ShowTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeIF.KSGameModeIF_C.RemoveTitlePawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IKSGameModeIF_C::RemoveTitlePawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "RemoveTitlePawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameModeIF.KSGameModeIF_C.IsLoadReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSGameModeIF_C::IsLoadReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "IsLoadReady");

	Params::IKSGameModeIF_C_IsLoadReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeIF.KSGameModeIF_C.IsManagerReady_DEPRICATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSGameModeIF_C::IsManagerReady_DEPRICATED(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "IsManagerReady_DEPRICATED");

	Params::IKSGameModeIF_C_IsManagerReady_DEPRICATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeIF.KSGameModeIF_C.SetLoadReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSGameModeIF_C::SetLoadReady(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "SetLoadReady");

	Params::IKSGameModeIF_C_SetLoadReady_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeIF.KSGameModeIF_C.SetManagerReady_DEPRICATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSGameModeIF_C::SetManagerReady_DEPRICATED(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "SetManagerReady_DEPRICATED");

	Params::IKSGameModeIF_C_SetManagerReady_DEPRICATED_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeIF.KSGameModeIF_C.SetAllManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSGameModeIF_C::SetAllManagerReady(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "SetAllManagerReady");

	Params::IKSGameModeIF_C_SetAllManagerReady_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeIF.KSGameModeIF_C.IsAllManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSGameModeIF_C::IsAllManagerReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "IsAllManagerReady");

	Params::IKSGameModeIF_C_IsAllManagerReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeIF.KSGameModeIF_C.SetBalloonManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     BalloonManager                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSGameModeIF_C::SetBalloonManager(class UObject* BalloonManager, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "SetBalloonManager");

	Params::IKSGameModeIF_C_SetBalloonManager_Params Parms{};

	Parms.BalloonManager = BalloonManager;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSGameModeIF.KSGameModeIF_C.GetLoader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSSimpleLevelLoader*        Loader                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IKSGameModeIF_C::GetLoader(class AKSSimpleLevelLoader** Loader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameModeIF_C", "GetLoader");

	Params::IKSGameModeIF_C_GetLoader_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Loader != nullptr)
		*Loader = Parms.Loader;

}

}


