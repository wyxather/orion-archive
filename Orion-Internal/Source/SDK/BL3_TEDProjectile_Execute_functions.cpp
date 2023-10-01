// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Execute_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_Execute.TEDProjectile_Execute_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Execute_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Execute.TEDProjectile_Execute_C.UserConstructionScript");

	ATEDProjectile_Execute_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Execute.TEDProjectile_Execute_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Execute_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Execute.TEDProjectile_Execute_C.ReceiveBeginPlay");

	ATEDProjectile_Execute_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnBounce
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATEDProjectile_Execute_C::OnBounce(struct FHitResult* Hit, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnBounce");

	ATEDProjectile_Execute_C_OnBounce_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Execute_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnHitEnemy");

	ATEDProjectile_Execute_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Execute.TEDProjectile_Execute_C.ExecuteUbergraph_TEDProjectile_Execute
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Execute_C::ExecuteUbergraph_TEDProjectile_Execute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Execute.TEDProjectile_Execute_C.ExecuteUbergraph_TEDProjectile_Execute");

	ATEDProjectile_Execute_C_ExecuteUbergraph_TEDProjectile_Execute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
