// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora2_GUN_L01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_CM_Ixora2_GUN_L01_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.OnActivated");

	UAbility_CM_Ixora2_GUN_L01_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_EnterIronBear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CM_Ixora2_GUN_L01_C::CMIxora2_EnterIronBear(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_EnterIronBear");

	UAbility_CM_Ixora2_GUN_L01_C_CMIxora2_EnterIronBear_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_ExitIronBear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CM_Ixora2_GUN_L01_C::CMIxora2_ExitIronBear(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_ExitIronBear");

	UAbility_CM_Ixora2_GUN_L01_C_CMIxora2_ExitIronBear_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CM_Ixora2_GUN_L01_C::ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01");

	UAbility_CM_Ixora2_GUN_L01_C_ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
