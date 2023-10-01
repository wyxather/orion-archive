#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_WeaponMelee_Base_Success_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnBegin
struct UAction_WeaponMelee_Base_Success_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnEnd
struct UAction_WeaponMelee_Base_Success_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.CameraPush
struct UAction_WeaponMelee_Base_Success_C_CameraPush_Params
{
};

// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnBeginBringUpWeapon
struct UAction_WeaponMelee_Base_Success_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.CameraPop
struct UAction_WeaponMelee_Base_Success_C_CameraPop_Params
{
};

// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.ExecuteUbergraph_Action_WeaponMelee_Base_Success
struct UAction_WeaponMelee_Base_Success_C_ExecuteUbergraph_Action_WeaponMelee_Base_Success_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
