// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_DLC1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_DLC1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.OnActivated");

	UOakAbility_Beastmaster_ClassMod_DLC1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.Beastmaster DLC1 Class Mod On Caused Any Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Beastmaster_ClassMod_DLC1_C::Beastmaster_DLC1_Class_Mod_On_Caused_Any_Damage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.Beastmaster DLC1 Class Mod On Caused Any Damage");

	UOakAbility_Beastmaster_ClassMod_DLC1_C_Beastmaster_DLC1_Class_Mod_On_Caused_Any_Damage_Params params;
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


// Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_DLC1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_ClassMod_DLC1_C::ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_DLC1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_DLC1");

	UOakAbility_Beastmaster_ClassMod_DLC1_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_DLC1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
