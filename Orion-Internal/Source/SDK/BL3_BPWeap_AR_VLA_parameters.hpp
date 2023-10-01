#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_AR_VLA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.Update_Bipod_FX
struct ABPWeap_AR_VLA_C_Update_Bipod_FX_Params
{
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UpdateResourceLocks
struct ABPWeap_AR_VLA_C_UpdateResourceLocks_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnSwitchedMode
struct ABPWeap_AR_VLA_C_OnSwitchedMode_Params
{
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnPutDown
struct ABPWeap_AR_VLA_C_OnPutDown_Params
{
	class AWeapon*                                     Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnEquipped
struct ABPWeap_AR_VLA_C_OnEquipped_Params
{
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UserConstructionScript
struct ABPWeap_AR_VLA_C_UserConstructionScript_Params
{
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveBeginPlay
struct ABPWeap_AR_VLA_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveEndPlay
struct ABPWeap_AR_VLA_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ExecuteUbergraph_BPWeap_AR_VLA
struct ABPWeap_AR_VLA_C_ExecuteUbergraph_BPWeap_AR_VLA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
