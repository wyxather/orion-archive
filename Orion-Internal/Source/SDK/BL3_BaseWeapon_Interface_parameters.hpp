#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BaseWeapon_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseWeapon_Interface.BaseWeapon_Interface_C.BPAnim_Data
struct UBaseWeapon_Interface_C_BPAnim_Data_Params
{
	float                                              FiregripType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ScopeType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ModeType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseWeapon_Interface.BaseWeapon_Interface_C.GetChargePercent
struct UBaseWeapon_Interface_C_GetChargePercent_Params
{
	float                                              ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
