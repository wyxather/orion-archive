// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_SpiderMind_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_TedioreTurret_SpiderMind_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.UserConstructionScript");

	ABPChar_TedioreTurret_SpiderMind_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_TedioreTurret_SpiderMind_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ReceiveBeginPlay");

	ABPChar_TedioreTurret_SpiderMind_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.InitializeWeapon
// (BlueprintCallable, BlueprintEvent)

void ABPChar_TedioreTurret_SpiderMind_C::InitializeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.InitializeWeapon");

	ABPChar_TedioreTurret_SpiderMind_C_InitializeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABPChar_TedioreTurret_SpiderMind_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret");

	ABPChar_TedioreTurret_SpiderMind_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret_Params params;
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


// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_TedioreTurret_SpiderMind_C::ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind");

	ABPChar_TedioreTurret_SpiderMind_C_ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
