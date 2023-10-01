#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SR_VLA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnPutDown
struct ABPWeap_SR_VLA_C_OnPutDown_Params
{
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnSwitchedMode
struct ABPWeap_SR_VLA_C_OnSwitchedMode_Params
{
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnEquipped
struct ABPWeap_SR_VLA_C_OnEquipped_Params
{
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UpdateResourceLocks
struct ABPWeap_SR_VLA_C_UpdateResourceLocks_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UserConstructionScript
struct ABPWeap_SR_VLA_C_UserConstructionScript_Params
{
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveBeginPlay
struct ABPWeap_SR_VLA_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveEndPlay
struct ABPWeap_SR_VLA_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.Weapon_NotifyPutDown
struct ABPWeap_SR_VLA_C_Weapon_NotifyPutDown_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ExecuteUbergraph_BPWeap_SR_VLA
struct ABPWeap_SR_VLA_C_ExecuteUbergraph_BPWeap_SR_VLA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
