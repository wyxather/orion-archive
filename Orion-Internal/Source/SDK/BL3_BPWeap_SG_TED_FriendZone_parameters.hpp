#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_TED_FriendZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.TedioreThrowWeapon
struct ABPWeap_SG_TED_FriendZone_C_TedioreThrowWeapon_Params
{
	class AActor*                                      ThrownProjectile;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.UserConstructionScript
struct ABPWeap_SG_TED_FriendZone_C_UserConstructionScript_Params
{
};

// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.SpawnTurret
struct ABPWeap_SG_TED_FriendZone_C_SpawnTurret_Params
{
};

// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.ExecuteUbergraph_BPWeap_SG_TED_FriendZone
struct ABPWeap_SG_TED_FriendZone_C_ExecuteUbergraph_BPWeap_SG_TED_FriendZone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
