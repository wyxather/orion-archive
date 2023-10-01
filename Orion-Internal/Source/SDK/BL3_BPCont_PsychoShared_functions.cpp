// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_PsychoShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCont_PsychoShared.BPCont_PsychoShared_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCont_PsychoShared_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_PsychoShared.BPCont_PsychoShared_C.UserConstructionScript");

	ABPCont_PsychoShared_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_PsychoShared.BPCont_PsychoShared_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_PsychoMaleBasic
// (BlueprintEvent)
// Parameters:
// class UTargetingComponent*     TargetingComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPCont_PsychoShared_C::BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_PsychoMaleBasic(class UTargetingComponent* TargetingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_PsychoShared.BPCont_PsychoShared_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_PsychoMaleBasic");

	ABPCont_PsychoShared_C_BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_PsychoMaleBasic_Params params;
	params.TargetingComponent = TargetingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_PsychoShared.BPCont_PsychoShared_C.ExecuteUbergraph_BPCont_PsychoShared
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCont_PsychoShared_C::ExecuteUbergraph_BPCont_PsychoShared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_PsychoShared.BPCont_PsychoShared_C.ExecuteUbergraph_BPCont_PsychoShared");

	ABPCont_PsychoShared_C_ExecuteUbergraph_BPCont_PsychoShared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
