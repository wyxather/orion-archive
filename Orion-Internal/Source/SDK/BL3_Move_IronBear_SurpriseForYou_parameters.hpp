#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Move_IronBear_SurpriseForYou_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnHitTargetable
struct UMove_IronBear_SurpriseForYou_C_OnHitTargetable_Params
{
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnServerStart
struct UMove_IronBear_SurpriseForYou_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnStop
struct UMove_IronBear_SurpriseForYou_C_OnStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.ExecuteUbergraph_Move_IronBear_SurpriseForYou
struct UMove_IronBear_SurpriseForYou_C_ExecuteUbergraph_Move_IronBear_SurpriseForYou_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
