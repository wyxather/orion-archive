// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAugAtt_SuperSoldier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C.K2_OnShieldNotFilled
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAugAtt_SuperSoldier_C::K2_OnShieldNotFilled(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C.K2_OnShieldNotFilled");

	UShieldAugAtt_SuperSoldier_C_K2_OnShieldNotFilled_Params params;
	params.Shield = Shield;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C.K2_OnShieldFilled
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAugAtt_SuperSoldier_C::K2_OnShieldFilled(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C.K2_OnShieldFilled");

	UShieldAugAtt_SuperSoldier_C_K2_OnShieldFilled_Params params;
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
