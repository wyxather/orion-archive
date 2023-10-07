#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TitlePawn.TitlePawn_C
// (Actor, Pawn)

class UClass* ATitlePawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitlePawn_C");

	return Clss;
}


// TitlePawn_C TitlePawn.Default__TitlePawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATitlePawn_C* ATitlePawn_C::GetDefaultObj()
{
	static class ATitlePawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATitlePawn_C*>(ATitlePawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitlePawn.TitlePawn_C.ExecuteUbergraph_TitlePawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATitlePawn_C::ExecuteUbergraph_TitlePawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePawn_C", "ExecuteUbergraph_TitlePawn");

	Params::ATitlePawn_C_ExecuteUbergraph_TitlePawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


