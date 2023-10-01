// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BaseWeapon_Interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseWeapon_Interface.BaseWeapon_Interface_C.BPAnim_Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FiregripType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ScopeType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ModeType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseWeapon_Interface_C::BPAnim_Data(float* FiregripType, float* GripType, float* ScopeType, float* ModeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseWeapon_Interface.BaseWeapon_Interface_C.BPAnim_Data");

	UBaseWeapon_Interface_C_BPAnim_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FiregripType != nullptr)
		*FiregripType = params.FiregripType;
	if (GripType != nullptr)
		*GripType = params.GripType;
	if (ScopeType != nullptr)
		*ScopeType = params.ScopeType;
	if (ModeType != nullptr)
		*ModeType = params.ModeType;
}


// Function BaseWeapon_Interface.BaseWeapon_Interface_C.GetChargePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseWeapon_Interface_C::GetChargePercent(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseWeapon_Interface.BaseWeapon_Interface_C.GetChargePercent");

	UBaseWeapon_Interface_C_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
