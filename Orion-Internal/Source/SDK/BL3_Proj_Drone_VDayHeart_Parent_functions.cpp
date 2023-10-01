// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Drone_VDayHeart_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnRep_OwnerDeathType
// (BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Parent_C::OnRep_OwnerDeathType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnRep_OwnerDeathType");

	AProj_Drone_VDayHeart_Parent_C_OnRep_OwnerDeathType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHealthDepletedHeart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::OnHealthDepletedHeart(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHealthDepletedHeart");

	AProj_Drone_VDayHeart_Parent_C_OnHealthDepletedHeart_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.SetHeartVelocity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Parent_C::SetHeartVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.SetHeartVelocity");

	AProj_Drone_VDayHeart_Parent_C_SetHeartVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.HandleStatIncrementDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::HandleStatIncrementDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.HandleStatIncrementDialog");

	AProj_Drone_VDayHeart_Parent_C_HandleStatIncrementDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.UserConstructionScript");

	AProj_Drone_VDayHeart_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Drone_VDayHeart_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ReceiveBeginPlay");

	AProj_Drone_VDayHeart_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test");

	AProj_Drone_VDayHeart_Parent_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnDeath_HeartOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::OnDeath_HeartOwner(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnDeath_HeartOwner");

	AProj_Drone_VDayHeart_Parent_C_OnDeath_HeartOwner_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitWorld");

	AProj_Drone_VDayHeart_Parent_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BeginCleanup
// (BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Parent_C::BeginCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BeginCleanup");

	AProj_Drone_VDayHeart_Parent_C_BeginCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.Destroyed_HeartOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::Destroyed_HeartOwner(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.Destroyed_HeartOwner");

	AProj_Drone_VDayHeart_Parent_C_Destroyed_HeartOwner_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OwnerDiedByHostile
// (BlueprintCallable, BlueprintEvent)

void AProj_Drone_VDayHeart_Parent_C::OwnerDiedByHostile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OwnerDiedByHostile");

	AProj_Drone_VDayHeart_Parent_C_OwnerDiedByHostile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitDamagableObject");

	AProj_Drone_VDayHeart_Parent_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Drone_VDayHeart_Parent_C::ExecuteUbergraph_Proj_Drone_VDayHeart_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Parent");

	AProj_Drone_VDayHeart_Parent_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
