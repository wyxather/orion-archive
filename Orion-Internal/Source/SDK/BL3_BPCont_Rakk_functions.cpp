// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_Rakk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCont_Rakk.BPCont_Rakk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCont_Rakk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Rakk.BPCont_Rakk_C.UserConstructionScript");

	ABPCont_Rakk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_Rakk.BPCont_Rakk_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_0_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_Rakk
// (BlueprintEvent)
// Parameters:
// class UTargetingComponent*     TargetingComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPCont_Rakk_C::BndEvt__Targeting_K2Node_ComponentBoundEvent_0_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_Rakk(class UTargetingComponent* TargetingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Rakk.BPCont_Rakk_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_0_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_Rakk");

	ABPCont_Rakk_C_BndEvt__Targeting_K2Node_ComponentBoundEvent_0_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_Rakk_Params params;
	params.TargetingComponent = TargetingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_Rakk.BPCont_Rakk_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPCont_Rakk_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Rakk.BPCont_Rakk_C.ReceiveBeginPlay");

	ABPCont_Rakk_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_Rakk.BPCont_Rakk_C.Ambient_Shriek
// (BlueprintCallable, BlueprintEvent)

void ABPCont_Rakk_C::Ambient_Shriek()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Rakk.BPCont_Rakk_C.Ambient_Shriek");

	ABPCont_Rakk_C_Ambient_Shriek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_Rakk.BPCont_Rakk_C.ExecuteUbergraph_BPCont_Rakk
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCont_Rakk_C::ExecuteUbergraph_BPCont_Rakk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Rakk.BPCont_Rakk_C.ExecuteUbergraph_BPCont_Rakk");

	ABPCont_Rakk_C_ExecuteUbergraph_BPCont_Rakk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
