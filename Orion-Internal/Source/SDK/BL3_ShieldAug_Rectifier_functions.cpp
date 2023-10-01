// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Rectifier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldAug_Rectifier.ShieldAug_Rectifier_C.K2_NativeDelayCallback
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)
// struct FName*                  DelayName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShieldAug_Rectifier_C::K2_NativeDelayCallback(class AShield** Shield, struct FName* DelayName, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_Rectifier.ShieldAug_Rectifier_C.K2_NativeDelayCallback");

	UShieldAug_Rectifier_C_K2_NativeDelayCallback_Params params;
	params.Shield = Shield;
	params.DelayName = DelayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAug_Rectifier.ShieldAug_Rectifier_C.K2_UntriggerEffect
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAug_Rectifier_C::K2_UntriggerEffect(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_Rectifier.ShieldAug_Rectifier_C.K2_UntriggerEffect");

	UShieldAug_Rectifier_C_K2_UntriggerEffect_Params params;
	params.Shield = Shield;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAug_Rectifier.ShieldAug_Rectifier_C.K2_TriggerEffect
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAug_Rectifier_C::K2_TriggerEffect(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_Rectifier.ShieldAug_Rectifier_C.K2_TriggerEffect");

	UShieldAug_Rectifier_C_K2_TriggerEffect_Params params;
	params.Shield = Shield;
	params.ResourcePool = ResourcePool;

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
