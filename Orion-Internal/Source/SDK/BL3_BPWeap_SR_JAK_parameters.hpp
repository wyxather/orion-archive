#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SR_JAK_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.UserConstructionScript
struct ABPWeap_SR_JAK_C_UserConstructionScript_Params
{
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ReceiveBeginPlay
struct ABPWeap_SR_JAK_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideMag
struct ABPWeap_SR_JAK_C_HideMag_Params
{
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ShowAmmo
struct ABPWeap_SR_JAK_C_ShowAmmo_Params
{
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideAmmo
struct ABPWeap_SR_JAK_C_HideAmmo_Params
{
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Fire_Rotate
struct ABPWeap_SR_JAK_C_Fire_Rotate_Params
{
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.RotationReset
struct ABPWeap_SR_JAK_C_RotationReset_Params
{
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Notify_ReloadEnded
struct ABPWeap_SR_JAK_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ExecuteUbergraph_BPWeap_SR_JAK
struct ABPWeap_SR_JAK_C_ExecuteUbergraph_BPWeap_SR_JAK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
