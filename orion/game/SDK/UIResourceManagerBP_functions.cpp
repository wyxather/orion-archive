#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass UIResourceManagerBP.UIResourceManagerBP_C
// (Actor)

class UClass* AUIResourceManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIResourceManagerBP_C");

	return Clss;
}


// UIResourceManagerBP_C UIResourceManagerBP.Default__UIResourceManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUIResourceManagerBP_C* AUIResourceManagerBP_C::GetDefaultObj()
{
	static class AUIResourceManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIResourceManagerBP_C*>(AUIResourceManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIResourceManagerBP.UIResourceManagerBP_C.Callback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUIResourceManagerBP_C::Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIResourceManagerBP_C", "Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIResourceManagerBP.UIResourceManagerBP_C.UpdateManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUIResourceManagerBP_C::UpdateManager(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIResourceManagerBP_C", "UpdateManager");

	Params::AUIResourceManagerBP_C_UpdateManager_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIResourceManagerBP.UIResourceManagerBP_C.ExecuteUbergraph_UIResourceManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUIResourceManagerBP_C::ExecuteUbergraph_UIResourceManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIResourceManagerBP_C", "ExecuteUbergraph_UIResourceManagerBP");

	Params::AUIResourceManagerBP_C_ExecuteUbergraph_UIResourceManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


