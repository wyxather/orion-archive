// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Gunerang_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Gunerang_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.UserConstructionScript");

	ATEDProjectile_Gunerang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Gunerang_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReceiveBeginPlay");

	ATEDProjectile_Gunerang_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReturnToSender
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Gunerang_C::ReturnToSender()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReturnToSender");

	ATEDProjectile_Gunerang_C_ReturnToSender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.FindNewFriends
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Gunerang_C::FindNewFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.FindNewFriends");

	ATEDProjectile_Gunerang_C_FindNewFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBounce
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATEDProjectile_Gunerang_C::OnBounce(struct FHitResult* Hit, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBounce");

	ATEDProjectile_Gunerang_C_OnBounce_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang
// (BlueprintEvent)

void ATEDProjectile_Gunerang_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang");

	ATEDProjectile_Gunerang_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBehaviorInitialized
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 BehaviorClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Gunerang_C::OnBehaviorInitialized(class UClass** BehaviorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBehaviorInitialized");

	ATEDProjectile_Gunerang_C_OnBehaviorInitialized_Params params;
	params.BehaviorClass = BehaviorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnExplode
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Gunerang_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnExplode");

	ATEDProjectile_Gunerang_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ExecuteUbergraph_TEDProjectile_Gunerang
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Gunerang_C::ExecuteUbergraph_TEDProjectile_Gunerang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ExecuteUbergraph_TEDProjectile_Gunerang");

	ATEDProjectile_Gunerang_C_ExecuteUbergraph_TEDProjectile_Gunerang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
