// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_Unique03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_Unique03_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.OnActivated");

	UOakAbility_Beastmaster_Unique03_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.OnCausedDamage_UniqueClassMod03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Beastmaster_Unique03_C::OnCausedDamage_UniqueClassMod03(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.OnCausedDamage_UniqueClassMod03");

	UOakAbility_Beastmaster_Unique03_C_OnCausedDamage_UniqueClassMod03_Params params;
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


// Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique03
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_Unique03_C::ExecuteUbergraph_OakAbility_Beastmaster_Unique03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique03");

	UOakAbility_Beastmaster_Unique03_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
