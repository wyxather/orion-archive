// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_IronBear_ShortFuse_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.NewFunction_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLoc                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPassiveSkill_IronBear_ShortFuse_C::NewFunction_1(float Damage, class UDamageSource* DamageSource, const struct FVector& HitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.NewFunction_1");

	UPassiveSkill_IronBear_ShortFuse_C_NewFunction_1_Params params;
	params.Damage = Damage;
	params.DamageSource = DamageSource;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_IronBear_ShortFuse_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.OnActivated");

	UPassiveSkill_IronBear_ShortFuse_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.CausedDamage_ShortFuse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_IronBear_ShortFuse_C::CausedDamage_ShortFuse(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.CausedDamage_ShortFuse");

	UPassiveSkill_IronBear_ShortFuse_C_CausedDamage_ShortFuse_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_IronBear_ShortFuse_C::ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse");

	UPassiveSkill_IronBear_ShortFuse_C_ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
