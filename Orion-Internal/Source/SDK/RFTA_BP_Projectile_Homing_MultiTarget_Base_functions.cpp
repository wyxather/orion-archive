// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Projectile_Homing_MultiTarget_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.ClearTargetIndicator
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Homing_MultiTarget_Base_C::ClearTargetIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.ClearTargetIndicator");

	ABP_Projectile_Homing_MultiTarget_Base_C_ClearTargetIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.ReceiveEndPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Homing_MultiTarget_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.ReceiveEndPlay");

	ABP_Projectile_Homing_MultiTarget_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.BndEvt__FxActorDestroyer_K2Node_ComponentBoundEvent_0_SoftDestroyEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void ABP_Projectile_Homing_MultiTarget_Base_C::BndEvt__FxActorDestroyer_K2Node_ComponentBoundEvent_0_SoftDestroyEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.BndEvt__FxActorDestroyer_K2Node_ComponentBoundEvent_0_SoftDestroyEvent__DelegateSignature");

	ABP_Projectile_Homing_MultiTarget_Base_C_BndEvt__FxActorDestroyer_K2Node_ComponentBoundEvent_0_SoftDestroyEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Projectile_Homing_MultiTarget_Base_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.OnProjectileHit");

	ABP_Projectile_Homing_MultiTarget_Base_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.ExecuteUbergraph_BP_Projectile_Homing_MultiTarget_Base
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Homing_MultiTarget_Base_C::ExecuteUbergraph_BP_Projectile_Homing_MultiTarget_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C.ExecuteUbergraph_BP_Projectile_Homing_MultiTarget_Base");

	ABP_Projectile_Homing_MultiTarget_Base_C_ExecuteUbergraph_BP_Projectile_Homing_MultiTarget_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
