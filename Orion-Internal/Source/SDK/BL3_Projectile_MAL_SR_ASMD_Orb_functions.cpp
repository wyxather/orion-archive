// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_MAL_SR_ASMD_Orb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_MAL_SR_ASMD_Orb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.UserConstructionScript");

	AProjectile_MAL_SR_ASMD_Orb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_MAL_SR_ASMD_Orb_C::BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb");

	AProjectile_MAL_SR_ASMD_Orb_C_BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb_Params params;
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


// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_MAL_SR_ASMD_Orb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ReceiveBeginPlay");

	AProjectile_MAL_SR_ASMD_Orb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_MAL_SR_ASMD_Orb_C::ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb");

	AProjectile_MAL_SR_ASMD_Orb_C_ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
