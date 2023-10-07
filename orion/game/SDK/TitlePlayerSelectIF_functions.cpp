#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TitlePlayerSelectIF.TitlePlayerSelectIF_C
// (None)

class UClass* ITitlePlayerSelectIF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitlePlayerSelectIF_C");

	return Clss;
}


// TitlePlayerSelectIF_C TitlePlayerSelectIF.Default__TitlePlayerSelectIF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ITitlePlayerSelectIF_C* ITitlePlayerSelectIF_C::GetDefaultObj()
{
	static class ITitlePlayerSelectIF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ITitlePlayerSelectIF_C*>(ITitlePlayerSelectIF_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitlePlayerSelectIF.TitlePlayerSelectIF_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ITitlePlayerSelectIF_C::Initialize(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelectIF_C", "Initialize");

	Params::ITitlePlayerSelectIF_C_Initialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


