// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RangedWeapon_Mod_Action_MultiTarget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ValidateArc
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARangedWeapon_Mod_Action_MultiTarget_C::ValidateArc(class ACharacterGunfire** Target, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ValidateArc");

	ARangedWeapon_Mod_Action_MultiTarget_C_ValidateArc_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.RemoveProjectile
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::RemoveProjectile(class AActor** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.RemoveProjectile");

	ARangedWeapon_Mod_Action_MultiTarget_C_RemoveProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.AddProjectile
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ForTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::AddProjectile(class AActor** ForTarget, class AActor** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.AddProjectile");

	ARangedWeapon_Mod_Action_MultiTarget_C_AddProjectile_Params params;
	params.ForTarget = ForTarget;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ContainsValidProjectile
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMod_MultiTarget_PendingTarget Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARangedWeapon_Mod_Action_MultiTarget_C::ContainsValidProjectile(struct FMod_MultiTarget_PendingTarget* Entry, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ContainsValidProjectile");

	ARangedWeapon_Mod_Action_MultiTarget_C_ContainsValidProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Entry != nullptr)
		*Entry = params.Entry;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ValidateCachedTargets
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::ValidateCachedTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ValidateCachedTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_ValidateCachedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnUpdatePendingTargets
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnUpdatePendingTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnUpdatePendingTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnUpdatePendingTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnRep_PendingTargets
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnRep_PendingTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnRep_PendingTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnRep_PendingTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.GetDrawTargets
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)

void ARangedWeapon_Mod_Action_MultiTarget_C::GetDrawTargets(TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.GetDrawTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_GetDrawTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearInvalidTargets
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RemoveUnfiredProjectiles       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARangedWeapon_Mod_Action_MultiTarget_C::ClearInvalidTargets(bool* RemoveUnfiredProjectiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearInvalidTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_ClearInvalidTargets_Params params;
	params.RemoveUnfiredProjectiles = RemoveUnfiredProjectiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.DrawIndicators
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::DrawIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.DrawIndicators");

	ARangedWeapon_Mod_Action_MultiTarget_C_DrawIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.AddPendingTargets
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARangedWeapon_Mod_Action_MultiTarget_C::AddPendingTargets(TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.AddPendingTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_AddPendingTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CalculateClientAimVector
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimOrigin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 AimEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ARangedWeapon_Mod_Action_MultiTarget_C::CalculateClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CalculateClientAimVector");

	ARangedWeapon_Mod_Action_MultiTarget_C_CalculateClientAimVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimOrigin != nullptr)
		*AimOrigin = params.AimOrigin;
	if (AimEnd != nullptr)
		*AimEnd = params.AimEnd;

	return params.ReturnValue;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.PickTarget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeightedTargetEntry> PotentialTargets               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::PickTarget(TArray<struct FWeightedTargetEntry>* PotentialTargets, int* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.PickTarget");

	ARangedWeapon_Mod_Action_MultiTarget_C_PickTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PotentialTargets != nullptr)
		*PotentialTargets = params.PotentialTargets;
	if (Target != nullptr)
		*Target = params.Target;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.GetCurrentTargets
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AllowCached                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)

void ARangedWeapon_Mod_Action_MultiTarget_C::GetCurrentTargets(bool* AllowCached, TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.GetCurrentTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_GetCurrentTargets_Params params;
	params.AllowCached = AllowCached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.SelectTargets
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FWeightedTargetEntry> PotentialTargets               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)

void ARangedWeapon_Mod_Action_MultiTarget_C::SelectTargets(TArray<struct FWeightedTargetEntry>* PotentialTargets, TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.SelectTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_SelectTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PotentialTargets != nullptr)
		*PotentialTargets = params.PotentialTargets;
	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CreateIndicator
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewIndicator                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::CreateIndicator(class AActor** NewIndicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CreateIndicator");

	ARangedWeapon_Mod_Action_MultiTarget_C_CreateIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewIndicator != nullptr)
		*NewIndicator = params.NewIndicator;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearIndicator
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Indicator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::ClearIndicator(class AActor** Indicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearIndicator");

	ARangedWeapon_Mod_Action_MultiTarget_C_ClearIndicator_Params params;
	params.Indicator = Indicator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.MoveIndicatorToTarget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Indicator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::MoveIndicatorToTarget(class AActor** Indicator, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.MoveIndicatorToTarget");

	ARangedWeapon_Mod_Action_MultiTarget_C_MoveIndicatorToTarget_Params params;
	params.Indicator = Indicator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.WeighTarget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::WeighTarget(class AActor** Target, float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.WeighTarget");

	ARangedWeapon_Mod_Action_MultiTarget_C_WeighTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weight != nullptr)
		*Weight = params.Weight;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearPreviewIndicators
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::ClearPreviewIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearPreviewIndicators");

	ARangedWeapon_Mod_Action_MultiTarget_C_ClearPreviewIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.UpdatePreviewIndicators
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::UpdatePreviewIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.UpdatePreviewIndicators");

	ARangedWeapon_Mod_Action_MultiTarget_C_UpdatePreviewIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.FindTargets
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeightedTargetEntry> Targets                        (Parm, OutParm, ZeroConstructor)

void ARangedWeapon_Mod_Action_MultiTarget_C::FindTargets(TArray<struct FWeightedTargetEntry>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.FindTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_FindTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnPreviewStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnPreviewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnPreviewStart");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnPreviewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnPreviewEnd
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnPreviewEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnPreviewEnd");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnPreviewEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.PreviewLoop
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::PreviewLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.PreviewLoop");

	ARangedWeapon_Mod_Action_MultiTarget_C_PreviewLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.UpdateTargets
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::UpdateTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.UpdateTargets");

	ARangedWeapon_Mod_Action_MultiTarget_C_UpdateTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnAttached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnAttached");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnDetached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnDetached");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ReceiveTick");

	ARangedWeapon_Mod_Action_MultiTarget_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnBeginUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnBeginUse");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnEndUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnEndUse");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnEndUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnActivate");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CustomEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CustomEvent");

	ARangedWeapon_Mod_Action_MultiTarget_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnDeactivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_MultiTarget_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnDeactivate");

	ARangedWeapon_Mod_Action_MultiTarget_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_MultiTarget_C::ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget");

	ARangedWeapon_Mod_Action_MultiTarget_C_ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
