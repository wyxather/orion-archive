#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_SummonDigiClone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Failure_264F849F461DE8AE8A8C7B98070E4B60
struct UAction_Operative_SummonDigiClone_C_Failure_264F849F461DE8AE8A8C7B98070E4B60_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Success_264F849F461DE8AE8A8C7B98070E4B60
struct UAction_Operative_SummonDigiClone_C_Success_264F849F461DE8AE8A8C7B98070E4B60_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.OnBegin
struct UAction_Operative_SummonDigiClone_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.AnimNotify_SpawnClones
struct UAction_Operative_SummonDigiClone_C_AnimNotify_SpawnClones_Params
{
};

// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.ExecuteUbergraph_Action_Operative_SummonDigiClone
struct UAction_Operative_SummonDigiClone_C_ExecuteUbergraph_Action_Operative_SummonDigiClone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
