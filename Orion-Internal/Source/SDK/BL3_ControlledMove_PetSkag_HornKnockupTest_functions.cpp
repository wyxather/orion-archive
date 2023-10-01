// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PetSkag_HornKnockupTest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PetSkag_HornKnockupTest_C::OnStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnStop");

	UControlledMove_PetSkag_HornKnockupTest_C_OnStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PetSkag_HornKnockupTest_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnServerStart");

	UControlledMove_PetSkag_HornKnockupTest_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PetSkag_HornKnockupTest_C::ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest");

	UControlledMove_PetSkag_HornKnockupTest_C_ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
