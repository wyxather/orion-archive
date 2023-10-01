// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Ember_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldAug_Ember.ShieldAug_Ember_C.K2_NativeDelayCallback
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)
// struct FName*                  DelayName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShieldAug_Ember_C::K2_NativeDelayCallback(class AShield** Shield, struct FName* DelayName, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_Ember.ShieldAug_Ember_C.K2_NativeDelayCallback");

	UShieldAug_Ember_C_K2_NativeDelayCallback_Params params;
	params.Shield = Shield;
	params.DelayName = DelayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAug_Ember.ShieldAug_Ember_C.K2_OnShieldBeginPlay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAug_Ember_C::K2_OnShieldBeginPlay(class AShield** Shield, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_Ember.ShieldAug_Ember_C.K2_OnShieldBeginPlay");

	UShieldAug_Ember_C_K2_OnShieldBeginPlay_Params params;
	params.Shield = Shield;

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
