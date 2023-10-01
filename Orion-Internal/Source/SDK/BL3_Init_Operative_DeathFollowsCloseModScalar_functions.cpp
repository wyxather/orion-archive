// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_DeathFollowsCloseModScalar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_Operative_DeathFollowsCloseModScalar_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.CalculateAttributeInitialValue");

	UInit_Operative_DeathFollowsCloseModScalar_C_CalculateAttributeInitialValue_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.Get Death Follows Close Bonus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ability_Mod_Bonus              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInit_Operative_DeathFollowsCloseModScalar_C::Get_Death_Follows_Close_Bonus(class UObject* Object, float* Ability_Mod_Bonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.Get Death Follows Close Bonus");

	UInit_Operative_DeathFollowsCloseModScalar_C_Get_Death_Follows_Close_Bonus_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ability_Mod_Bonus != nullptr)
		*Ability_Mod_Bonus = params.Ability_Mod_Bonus;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
