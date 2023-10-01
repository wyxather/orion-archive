// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Projectile_Stick_Sphere_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ShouldDoQuickDissolve
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Projectile_Stick_Sphere_Base_C::ShouldDoQuickDissolve(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ShouldDoQuickDissolve");

	ABP_Projectile_Stick_Sphere_Base_C_ShouldDoQuickDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Stick_Sphere_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ReceiveTick");

	ABP_Projectile_Stick_Sphere_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.OnProjectileStop
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Stick_Sphere_Base_C::OnProjectileStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.OnProjectileStop");

	ABP_Projectile_Stick_Sphere_Base_C_OnProjectileStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Projectile_Stick_Sphere_Base_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.OnProjectileHit");

	ABP_Projectile_Stick_Sphere_Base_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.DoDissolve
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Stick_Sphere_Base_C::DoDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.DoDissolve");

	ABP_Projectile_Stick_Sphere_Base_C_DoDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ExecuteUbergraph_BP_Projectile_Stick_Sphere_Base
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Stick_Sphere_Base_C::ExecuteUbergraph_BP_Projectile_Stick_Sphere_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ExecuteUbergraph_BP_Projectile_Stick_Sphere_Base");

	ABP_Projectile_Stick_Sphere_Base_C_ExecuteUbergraph_BP_Projectile_Stick_Sphere_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
