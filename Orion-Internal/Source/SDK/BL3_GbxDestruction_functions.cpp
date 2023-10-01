// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDestruction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxDestruction.GbxDestructibleActor.SetFracturable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFracturable                   (Parm, ZeroConstructor, IsPlainOldData)

void AGbxDestructibleActor::SetFracturable(bool bFracturable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.SetFracturable");

	AGbxDestructibleActor_SetFracturable_Params params;
	params.bFracturable = bFracturable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDestruction.GbxDestructibleActor.OnRep_TransformBuffer
// (Final, Native, Public)

void AGbxDestructibleActor::OnRep_TransformBuffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.OnRep_TransformBuffer");

	AGbxDestructibleActor_OnRep_TransformBuffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDestruction.GbxDestructibleActor.OnRep_SyncID
// (Final, Native, Public)

void AGbxDestructibleActor::OnRep_SyncID()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.OnRep_SyncID");

	AGbxDestructibleActor_OnRep_SyncID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDestruction.GbxDestructibleActor.OnRep_FractureBuffer
// (Final, Native, Public)

void AGbxDestructibleActor::OnRep_FractureBuffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.OnRep_FractureBuffer");

	AGbxDestructibleActor_OnRep_FractureBuffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDestruction.GbxDestructibleComponent.SetFracturable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFracturable                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDestructibleComponent::SetFracturable(bool bFracturable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.SetFracturable");

	UGbxDestructibleComponent_SetFracturable_Params params;
	params.bFracturable = bFracturable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxDestructibleComponent::GetTotalPercentFractured()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured");

	UGbxDestructibleComponent_GetTotalPercentFractured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Depth                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxDestructibleComponent::GetDamageRequiredToFracture(int Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture");

	UGbxDestructibleComponent_GetDamageRequiredToFracture_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDestruction.GbxDestructibleComponent.FractureRandomChunk
// (Final, Native, Public, BlueprintCallable)

void UGbxDestructibleComponent::FractureRandomChunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.FractureRandomChunk");

	UGbxDestructibleComponent_FractureRandomChunk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
