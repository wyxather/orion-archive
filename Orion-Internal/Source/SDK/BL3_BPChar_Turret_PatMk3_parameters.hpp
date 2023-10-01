#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Turret_PatMk3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.UserConstructionScript
struct ABPChar_Turret_PatMk3_C_UserConstructionScript_Params
{
};

// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ReceiveBeginPlay
struct ABPChar_Turret_PatMk3_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.Fired
struct ABPChar_Turret_PatMk3_C_Fired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ExecuteUbergraph_BPChar_Turret_PatMk3
struct ABPChar_Turret_PatMk3_C_ExecuteUbergraph_BPChar_Turret_PatMk3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
