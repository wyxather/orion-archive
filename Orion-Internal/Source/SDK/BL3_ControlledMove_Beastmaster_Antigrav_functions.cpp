// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Beastmaster_Antigrav_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Beastmaster_Antigrav_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.OnServerStart");

	UControlledMove_Beastmaster_Antigrav_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.SpawnLoot
// (BlueprintCallable, BlueprintEvent)

void UControlledMove_Beastmaster_Antigrav_C::SpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.SpawnLoot");

	UControlledMove_Beastmaster_Antigrav_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Beastmaster_Antigrav_C::ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav");

	UControlledMove_Beastmaster_Antigrav_C_ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
