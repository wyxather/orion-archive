#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TitleLoadSceneIF.TitleLoadSceneIF_C
// (None)

class UClass* ITitleLoadSceneIF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleLoadSceneIF_C");

	return Clss;
}


// TitleLoadSceneIF_C TitleLoadSceneIF.Default__TitleLoadSceneIF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ITitleLoadSceneIF_C* ITitleLoadSceneIF_C::GetDefaultObj()
{
	static class ITitleLoadSceneIF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ITitleLoadSceneIF_C*>(ITitleLoadSceneIF_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleLoadSceneIF.TitleLoadSceneIF_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ITitleLoadSceneIF_C::Initialize(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadSceneIF_C", "Initialize");

	Params::ITitleLoadSceneIF_C_Initialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


