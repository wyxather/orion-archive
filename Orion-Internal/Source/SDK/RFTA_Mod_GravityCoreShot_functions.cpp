// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_GravityCoreShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.GetGravityWellMultiTargetAddedDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          BonusDamagePerHitsDamage       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_GravityCoreShot_C::GetGravityWellMultiTargetAddedDamage(float* BonusDamagePerHitsDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.GetGravityWellMultiTargetAddedDamage");

	AMod_GravityCoreShot_C_GetGravityWellMultiTargetAddedDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonusDamagePerHitsDamage != nullptr)
		*BonusDamagePerHitsDamage = params.BonusDamagePerHitsDamage;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.GetGravityWellDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_GravityCoreShot_C::GetGravityWellDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.GetGravityWellDamage");

	AMod_GravityCoreShot_C_GetGravityWellDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.Get Projectile Damage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ImpactDamage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_GravityCoreShot_C::Get_Projectile_Damage(float* ImpactDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.Get Projectile Damage");

	AMod_GravityCoreShot_C_Get_Projectile_Damage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactDamage != nullptr)
		*ImpactDamage = params.ImpactDamage;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_GravityCoreShot_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ModifyInspectInfo");

	AMod_GravityCoreShot_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_GravityCoreShot_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ModifyDamage");

	AMod_GravityCoreShot_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.WindupForceFeedback__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void AMod_GravityCoreShot_C::WindupForceFeedback__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.WindupForceFeedback__FinishedFunc");

	AMod_GravityCoreShot_C_WindupForceFeedback__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.WindupForceFeedback__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void AMod_GravityCoreShot_C::WindupForceFeedback__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.WindupForceFeedback__UpdateFunc");

	AMod_GravityCoreShot_C_WindupForceFeedback__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnFire
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_GravityCoreShot_C::OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnFire");

	AMod_GravityCoreShot_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnPreFireBegin
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_GravityCoreShot_C::OnPreFireBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnPreFireBegin");

	AMod_GravityCoreShot_C_OnPreFireBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnPreFireEnd
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_GravityCoreShot_C::OnPreFireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnPreFireEnd");

	AMod_GravityCoreShot_C_OnPreFireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnDetached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_GravityCoreShot_C::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnDetached");

	AMod_GravityCoreShot_C_OnDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ExecuteUbergraph_Mod_GravityCoreShot
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_GravityCoreShot_C::ExecuteUbergraph_Mod_GravityCoreShot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ExecuteUbergraph_Mod_GravityCoreShot");

	AMod_GravityCoreShot_C_ExecuteUbergraph_Mod_GravityCoreShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
