#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass 3DWorldMapCloseSequencerV2.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C 3DWorldMapCloseSequencerV2.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function 3DWorldMapCloseSequencerV2.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_3DWorldMapActorV2_C*     BP_3DWorld_Map_Actor_V2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_3DWorldMapActorV2_C* BP_3DWorld_Map_Actor_V2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.BP_3DWorld_Map_Actor_V2 = BP_3DWorld_Map_Actor_V2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function 3DWorldMapCloseSequencerV2.SequenceDirector_C.BP_3DWorld_Map_Actor_V2_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_3DWorldMapActorV2_C*     BP_3DWorld_Map_Actor_V2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_3DWorld_Map_Actor_V2_Event_1(class ABP_3DWorldMapActorV2_C* BP_3DWorld_Map_Actor_V2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "BP_3DWorld_Map_Actor_V2_Event_1");

	Params::USequenceDirector_C_BP_3DWorld_Map_Actor_V2_Event_1_Params Parms{};

	Parms.BP_3DWorld_Map_Actor_V2 = BP_3DWorld_Map_Actor_V2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function 3DWorldMapCloseSequencerV2.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


