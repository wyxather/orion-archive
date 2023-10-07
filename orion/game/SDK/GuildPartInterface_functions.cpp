#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass GuildPartInterface.GuildPartInterface_C
// (None)

class UClass* IGuildPartInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuildPartInterface_C");

	return Clss;
}


// GuildPartInterface_C GuildPartInterface.Default__GuildPartInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGuildPartInterface_C* IGuildPartInterface_C::GetDefaultObj()
{
	static class IGuildPartInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGuildPartInterface_C*>(IGuildPartInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GuildPartInterface.GuildPartInterface_C.GetAcquisitionJobAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGuildPartInterface_C::GetAcquisitionJobAbility(int32* JobID, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildPartInterface_C", "GetAcquisitionJobAbility");

	Params::IGuildPartInterface_C_GetAcquisitionJobAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JobID != nullptr)
		*JobID = Parms.JobID;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GuildPartInterface.GuildPartInterface_C.GetCurrentIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGuildPartInterface_C::GetCurrentIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildPartInterface_C", "GetCurrentIndex");

	Params::IGuildPartInterface_C_GetCurrentIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GuildPartInterface.GuildPartInterface_C.MenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGuildPartInterface_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildPartInterface_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildPartInterface.GuildPartInterface_C.MenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGuildPartInterface_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildPartInterface_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildPartInterface.GuildPartInterface_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGuildPartInterface_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildPartInterface_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildPartInterface.GuildPartInterface_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGuildPartInterface_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildPartInterface_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}

}


