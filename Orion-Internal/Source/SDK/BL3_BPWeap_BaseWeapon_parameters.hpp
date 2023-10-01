#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_BaseWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BPAnim_Data
struct ABPWeap_BaseWeapon_C_BPAnim_Data_Params
{
	float                                              FiregripType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ScopeType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ModeType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.GetChargePercent
struct ABPWeap_BaseWeapon_C_GetChargePercent_Params
{
	float                                              ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.JokeReload
struct ABPWeap_BaseWeapon_C_JokeReload_Params
{
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Get IK Offset Data
struct ABPWeap_BaseWeapon_C_Get_IK_Offset_Data_Params
{
	bool                                               DebugSockets;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               First_Person;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponSocket_Left;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponSocket_Right;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  L_IK_Offset;                                              // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  R_IK_Offset;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BoneRotator_Incremental
struct ABPWeap_BaseWeapon_C_BoneRotator_Incremental_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BoneRotationSpeed;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRotation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NewRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentRotator;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.UserConstructionScript
struct ABPWeap_BaseWeapon_C_UserConstructionScript_Params
{
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReceiveBeginPlay
struct ABPWeap_BaseWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReInitialize
struct ABPWeap_BaseWeapon_C_ReInitialize_Params
{
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.WeaponAttached
struct ABPWeap_BaseWeapon_C_WeaponAttached_Params
{
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadStarted
struct ABPWeap_BaseWeapon_C_Notify_ReloadStarted_Params
{
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadEnded
struct ABPWeap_BaseWeapon_C_Notify_ReloadEnded_Params
{
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ExecuteUbergraph_BPWeap_BaseWeapon
struct ABPWeap_BaseWeapon_C_ExecuteUbergraph_BPWeap_BaseWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
