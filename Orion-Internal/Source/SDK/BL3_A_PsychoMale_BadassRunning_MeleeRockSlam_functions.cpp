// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeRockSlam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.GbxAsyncRequest_Spawned_D412A4A94D04A1FEDB5F4898E40F5D93
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeRockSlam_C::GbxAsyncRequest_Spawned_D412A4A94D04A1FEDB5F4898E40F5D93(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.GbxAsyncRequest_Spawned_D412A4A94D04A1FEDB5F4898E40F5D93");

	UA_PsychoMale_BadassRunning_MeleeRockSlam_C_GbxAsyncRequest_Spawned_D412A4A94D04A1FEDB5F4898E40F5D93_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeRockSlam_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.OnBegin");

	UA_PsychoMale_BadassRunning_MeleeRockSlam_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_BadassRunning_MeleeRockSlam_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.MeleeStrike");

	UA_PsychoMale_BadassRunning_MeleeRockSlam_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeRockSlam
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeRockSlam_C::ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeRockSlam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeRockSlam.A_PsychoMale_BadassRunning_MeleeRockSlam_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeRockSlam");

	UA_PsychoMale_BadassRunning_MeleeRockSlam_C_ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeRockSlam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
