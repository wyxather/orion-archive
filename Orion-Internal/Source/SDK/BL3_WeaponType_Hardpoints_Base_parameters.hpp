#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronCubAnimBP
struct AWeaponType_Hardpoints_Base_C_GetIronCubAnimBP_Params
{
	class UBPAnim_IronCub_C*                           AnimGraph;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronBearAnimBPs
struct AWeaponType_Hardpoints_Base_C_GetIronBearAnimBPs_Params
{
	class UBPAnim_IronBear_1st_C*                      AnimGraph_1st;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBPAnim_IronBear_3rd_C*                      AnimGraph_3rd;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.UserConstructionScript
struct AWeaponType_Hardpoints_Base_C_UserConstructionScript_Params
{
};

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.BeginHardPointAction
struct AWeaponType_Hardpoints_Base_C_BeginHardPointAction_Params
{
};

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.EndHardPointAction
struct AWeaponType_Hardpoints_Base_C_EndHardPointAction_Params
{
};

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.K2_Initialize
struct AWeaponType_Hardpoints_Base_C_K2_Initialize_Params
{
};

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.InitializeHardPointIronCub
struct AWeaponType_Hardpoints_Base_C_InitializeHardPointIronCub_Params
{
};

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.ExecuteUbergraph_WeaponType_Hardpoints_Base
struct AWeaponType_Hardpoints_Base_C_ExecuteUbergraph_WeaponType_Hardpoints_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
