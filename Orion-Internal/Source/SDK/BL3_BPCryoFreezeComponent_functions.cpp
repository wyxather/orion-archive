// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCryoFreezeComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPCryoFreezeComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ReceiveBeginPlay");

	UBPCryoFreezeComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.OnGbxComponentFracture_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 FractureCentroid               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          FracturePercent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSilentFracture                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPCryoFreezeComponent_C::OnGbxComponentFracture_Event_1(const struct FVector& FractureCentroid, const struct FVector& HitDirection, float FracturePercent, bool bSilentFracture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.OnGbxComponentFracture_Event_1");

	UBPCryoFreezeComponent_C_OnGbxComponentFracture_Event_1_Params params;
	params.FractureCentroid = FractureCentroid;
	params.HitDirection = HitDirection;
	params.FracturePercent = FracturePercent;
	params.bSilentFracture = bSilentFracture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ExecuteUbergraph_BPCryoFreezeComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPCryoFreezeComponent_C::ExecuteUbergraph_BPCryoFreezeComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ExecuteUbergraph_BPCryoFreezeComponent");

	UBPCryoFreezeComponent_C_ExecuteUbergraph_BPCryoFreezeComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
