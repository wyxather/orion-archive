#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_Fireplace_G.BPi_Fireplace_G_C
// (Actor)

class UClass* ABPi_Fireplace_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_Fireplace_G_C");

	return Clss;
}


// BPi_Fireplace_G_C BPi_Fireplace_G.Default__BPi_Fireplace_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_Fireplace_G_C* ABPi_Fireplace_G_C::GetDefaultObj()
{
	static class ABPi_Fireplace_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_Fireplace_G_C*>(ABPi_Fireplace_G_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPi_Fireplace_G.BPi_Fireplace_G_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPi_Fireplace_G_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPi_Fireplace_G_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPi_Fireplace_G.BPi_Fireplace_G_C.ExecuteUbergraph_BPi_Fireplace_G
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPi_Fireplace_G_C::ExecuteUbergraph_BPi_Fireplace_G(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPi_Fireplace_G_C", "ExecuteUbergraph_BPi_Fireplace_G");

	Params::ABPi_Fireplace_G_C_ExecuteUbergraph_BPi_Fireplace_G_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


