// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TenGallon_Reload_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_TenGallon_Reload_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.UserConstructionScript");

	AProj_TenGallon_Reload_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_TenGallon_Reload_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.ReceiveBeginPlay");

	AProj_TenGallon_Reload_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_TenGallon_Reload
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_TenGallon_Reload_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_TenGallon_Reload(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_TenGallon_Reload");

	AProj_TenGallon_Reload_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_TenGallon_Reload_Params params;
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


// Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.ExecuteUbergraph_Proj_TenGallon_Reload
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_TenGallon_Reload_C::ExecuteUbergraph_Proj_TenGallon_Reload(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TenGallon_Reload.Proj_TenGallon_Reload_C.ExecuteUbergraph_Proj_TenGallon_Reload");

	AProj_TenGallon_Reload_C_ExecuteUbergraph_Proj_TenGallon_Reload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
