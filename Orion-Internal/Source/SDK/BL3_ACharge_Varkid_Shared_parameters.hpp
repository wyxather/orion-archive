#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_Varkid_Shared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnBegin
struct UACharge_Varkid_Shared_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.Notify_HitTarget
struct UACharge_Varkid_Shared_C_Notify_HitTarget_Params
{
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnMiss
struct UACharge_Varkid_Shared_C_OnMiss_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnLoop
struct UACharge_Varkid_Shared_C_OnLoop_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnHitWall
struct UACharge_Varkid_Shared_C_OnHitWall_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnReachCliff
struct UACharge_Varkid_Shared_C_OnReachCliff_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnEnd
struct UACharge_Varkid_Shared_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.Notify_StopDamage
struct UACharge_Varkid_Shared_C_Notify_StopDamage_Params
{
};

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.ExecuteUbergraph_ACharge_Varkid_Shared
struct UACharge_Varkid_Shared_C_ExecuteUbergraph_ACharge_Varkid_Shared_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
