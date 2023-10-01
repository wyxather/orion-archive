// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_DreamerEventRegionBarrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DreamerEventRegionBarrier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.UserConstructionScript");

	ABP_DreamerEventRegionBarrier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_DreamerEventRegionBarrier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.ReceiveBeginPlay");

	ABP_DreamerEventRegionBarrier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DreamerEventRegionBarrier_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DreamerEventRegionBarrier_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_DreamerEventRegionBarrier_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DreamerEventRegionBarrier_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.OnExitBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      RemnantChr                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DreamerEventRegionBarrier_C::OnExitBarrier(class ARemnantCharacter** RemnantChr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.OnExitBarrier");

	ABP_DreamerEventRegionBarrier_C_OnExitBarrier_Params params;
	params.RemnantChr = RemnantChr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.OnEnterBarrier
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      RemnantChr                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DreamerEventRegionBarrier_C::OnEnterBarrier(class ARemnantCharacter** RemnantChr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.OnEnterBarrier");

	ABP_DreamerEventRegionBarrier_C_OnEnterBarrier_Params params;
	params.RemnantChr = RemnantChr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.ExecuteUbergraph_BP_DreamerEventRegionBarrier
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DreamerEventRegionBarrier_C::ExecuteUbergraph_BP_DreamerEventRegionBarrier(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C.ExecuteUbergraph_BP_DreamerEventRegionBarrier");

	ABP_DreamerEventRegionBarrier_C_ExecuteUbergraph_BP_DreamerEventRegionBarrier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
