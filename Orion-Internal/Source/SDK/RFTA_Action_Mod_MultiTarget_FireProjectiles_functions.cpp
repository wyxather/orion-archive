// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_MultiTarget_FireProjectiles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetEndProjectileLocation
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           ProjectileIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_MultiTarget_FireProjectiles_C::GetEndProjectileLocation(int* ProjectileIndex, struct FVector* EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetEndProjectileLocation");

	UAction_Mod_MultiTarget_FireProjectiles_C_GetEndProjectileLocation_Params params;
	params.ProjectileIndex = ProjectileIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndLocation != nullptr)
		*EndLocation = params.EndLocation;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FireAllProjectiles
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Mod_MultiTarget_FireProjectiles_C::FireAllProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FireAllProjectiles");

	UAction_Mod_MultiTarget_FireProjectiles_C_FireAllProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FireAndAddProjectile
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMultiTargetProjectileEntry* ProjectileEntry                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_MultiTarget_FireProjectiles_C::FireAndAddProjectile(struct FMultiTargetProjectileEntry* ProjectileEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FireAndAddProjectile");

	UAction_Mod_MultiTarget_FireProjectiles_C_FireAndAddProjectile_Params params;
	params.ProjectileEntry = ProjectileEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.InitProjectile
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Projectile_Homing_MultiTarget_Base_C** Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_MultiTarget_FireProjectiles_C::InitProjectile(class AActor** Target, class ABP_Projectile_Homing_MultiTarget_Base_C** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.InitProjectile");

	UAction_Mod_MultiTarget_FireProjectiles_C_InitProjectile_Params params;
	params.Target = Target;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FinishFiringProjectiles
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Mod_MultiTarget_FireProjectiles_C::FinishFiringProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.FinishFiringProjectiles");

	UAction_Mod_MultiTarget_FireProjectiles_C_FinishFiringProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetFireDirection
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Dir                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_MultiTarget_FireProjectiles_C::GetFireDirection(struct FVector* Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetFireDirection");

	UAction_Mod_MultiTarget_FireProjectiles_C_GetFireDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dir != nullptr)
		*Dir = params.Dir;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.OrderTargets
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          OrderedTargets                 (Parm, OutParm, ZeroConstructor)

void UAction_Mod_MultiTarget_FireProjectiles_C::OrderTargets(class ACharacterGunfire** Character, TArray<class AActor*>* Targets, TArray<class AActor*>* OrderedTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.OrderTargets");

	UAction_Mod_MultiTarget_FireProjectiles_C_OrderTargets_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (OrderedTargets != nullptr)
		*OrderedTargets = params.OrderedTargets;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetCurrentTarget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_MultiTarget_FireProjectiles_C::GetCurrentTarget(int* Index, TArray<class AActor*>* Targets, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.GetCurrentTarget");

	UAction_Mod_MultiTarget_FireProjectiles_C_GetCurrentTarget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (Target != nullptr)
		*Target = params.Target;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.Get Socket Location from owner
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_MultiTarget_FireProjectiles_C::Get_Socket_Location_from_owner(struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.Get Socket Location from owner");

	UAction_Mod_MultiTarget_FireProjectiles_C_Get_Socket_Location_from_owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_MultiTarget_FireProjectiles_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.OnActionStart");

	UAction_Mod_MultiTarget_FireProjectiles_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_MultiTarget_FireProjectiles_C::ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C.ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles");

	UAction_Mod_MultiTarget_FireProjectiles_C_ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
