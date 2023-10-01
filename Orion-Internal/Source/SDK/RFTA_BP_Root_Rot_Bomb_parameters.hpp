#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Root_Rot_Bomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnNotifyTakeDamage
struct ABP_Root_Rot_Bomb_C_OnNotifyTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ReceiveBeginPlay
struct ABP_Root_Rot_Bomb_C_ReceiveBeginPlay_Params
{
};

// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnTimer
struct ABP_Root_Rot_Bomb_C_OnTimer_Params
{
};

// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ExecuteUbergraph_BP_Root_Rot_Bomb
struct ABP_Root_Rot_Bomb_C_ExecuteUbergraph_BP_Root_Rot_Bomb_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
