// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_TedioreTurret_SpiderMind_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCont_TedioreTurret_SpiderMind.BPCont_TedioreTurret_SpiderMind_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCont_TedioreTurret_SpiderMind_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_TedioreTurret_SpiderMind.BPCont_TedioreTurret_SpiderMind_C.UserConstructionScript");

	ABPCont_TedioreTurret_SpiderMind_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_TedioreTurret_SpiderMind.BPCont_TedioreTurret_SpiderMind_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret
// (BlueprintEvent)
// Parameters:
// class UTargetingComponent*     TargetingComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPCont_TedioreTurret_SpiderMind_C::BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret(class UTargetingComponent* TargetingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_TedioreTurret_SpiderMind.BPCont_TedioreTurret_SpiderMind_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret");

	ABPCont_TedioreTurret_SpiderMind_C_BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret_Params params;
	params.TargetingComponent = TargetingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_TedioreTurret_SpiderMind.BPCont_TedioreTurret_SpiderMind_C.ExecuteUbergraph_BPCont_TedioreTurret_SpiderMind
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCont_TedioreTurret_SpiderMind_C::ExecuteUbergraph_BPCont_TedioreTurret_SpiderMind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_TedioreTurret_SpiderMind.BPCont_TedioreTurret_SpiderMind_C.ExecuteUbergraph_BPCont_TedioreTurret_SpiderMind");

	ABPCont_TedioreTurret_SpiderMind_C_ExecuteUbergraph_BPCont_TedioreTurret_SpiderMind_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
