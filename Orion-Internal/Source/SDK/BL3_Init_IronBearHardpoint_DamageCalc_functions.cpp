// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_IronBearHardpoint_DamageCalc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C.GetStrengthThroughBalanceScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOakCharacter_IronBear*  InIronBear                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInit_IronBearHardpoint_DamageCalc_C::GetStrengthThroughBalanceScalar(class AOakCharacter_IronBear* InIronBear, float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C.GetStrengthThroughBalanceScalar");

	UInit_IronBearHardpoint_DamageCalc_C_GetStrengthThroughBalanceScalar_Params params;
	params.InIronBear = InIronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
