#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDestruction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxDestruction.GbxDestructibleActor.SetFracturable
struct AGbxDestructibleActor_SetFracturable_Params
{
	bool                                               bFracturable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDestruction.GbxDestructibleActor.OnRep_TransformBuffer
struct AGbxDestructibleActor_OnRep_TransformBuffer_Params
{
};

// Function GbxDestruction.GbxDestructibleActor.OnRep_SyncID
struct AGbxDestructibleActor_OnRep_SyncID_Params
{
};

// Function GbxDestruction.GbxDestructibleActor.OnRep_FractureBuffer
struct AGbxDestructibleActor_OnRep_FractureBuffer_Params
{
};

// Function GbxDestruction.GbxDestructibleComponent.SetFracturable
struct UGbxDestructibleComponent_SetFracturable_Params
{
	bool                                               bFracturable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured
struct UGbxDestructibleComponent_GetTotalPercentFractured_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture
struct UGbxDestructibleComponent_GetDamageRequiredToFracture_Params
{
	int                                                Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDestruction.GbxDestructibleComponent.FractureRandomChunk
struct UGbxDestructibleComponent_FractureRandomChunk_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
