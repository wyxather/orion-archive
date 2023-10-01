#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_PS_Sabre_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.UserConstructionScript
struct ABPChar_TedioreTurret_PS_Sabre_C_UserConstructionScript_Params
{
};

// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ReceiveBeginPlay
struct ABPChar_TedioreTurret_PS_Sabre_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Fired
struct ABPChar_TedioreTurret_PS_Sabre_C_Fired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Reload2
struct ABPChar_TedioreTurret_PS_Sabre_C_Reload2_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.K2_OnMovementModeChanged
struct ABPChar_TedioreTurret_PS_Sabre_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre
struct ABPChar_TedioreTurret_PS_Sabre_C_ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
