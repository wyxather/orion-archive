#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPC_FadeManager.BPC_FadeManager_C
// (Actor)

class UClass* ABPC_FadeManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPC_FadeManager_C");

	return Clss;
}


// BPC_FadeManager_C BPC_FadeManager.Default__BPC_FadeManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPC_FadeManager_C* ABPC_FadeManager_C::GetDefaultObj()
{
	static class ABPC_FadeManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPC_FadeManager_C*>(ABPC_FadeManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPC_FadeManager.BPC_FadeManager_C.CreateFadeWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_FadeManager_C::CreateFadeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_FadeManager_C", "CreateFadeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_FadeManager.BPC_FadeManager_C.CreateBattleWipeWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_FadeManager_C::CreateBattleWipeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_FadeManager_C", "CreateBattleWipeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_FadeManager.BPC_FadeManager_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_FadeManager_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_FadeManager_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_FadeManager.BPC_FadeManager_C.ExecuteUbergraph_BPC_FadeManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_FadeManager_C::ExecuteUbergraph_BPC_FadeManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_FadeManager_C", "ExecuteUbergraph_BPC_FadeManager");

	Params::ABPC_FadeManager_C_ExecuteUbergraph_BPC_FadeManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


