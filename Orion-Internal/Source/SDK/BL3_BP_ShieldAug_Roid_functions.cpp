// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldAug_Roid_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldDepleted
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_ShieldAug_Roid_C::K2_OnShieldDepleted(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldDepleted");

	UBP_ShieldAug_Roid_C_K2_OnShieldDepleted_Params params;
	params.Shield = Shield;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldFilled
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_ShieldAug_Roid_C::K2_OnShieldFilled(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldFilled");

	UBP_ShieldAug_Roid_C_K2_OnShieldFilled_Params params;
	params.Shield = Shield;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldUnequipped
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter**          Equipper                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_ShieldAug_Roid_C::K2_OnShieldUnequipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldUnequipped");

	UBP_ShieldAug_Roid_C_K2_OnShieldUnequipped_Params params;
	params.Shield = Shield;
	params.Equipper = Equipper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldEquipped
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter**          Equipper                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_ShieldAug_Roid_C::K2_OnShieldEquipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldEquipped");

	UBP_ShieldAug_Roid_C_K2_OnShieldEquipped_Params params;
	params.Shield = Shield;
	params.Equipper = Equipper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnCausedDamage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)
// class AActor**                 DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType**         DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource**          DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails*   Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ShieldAug_Roid_C::K2_OnCausedDamage(class AShield** Shield, class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnCausedDamage");

	UBP_ShieldAug_Roid_C_K2_OnCausedDamage_Params params;
	params.Shield = Shield;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
