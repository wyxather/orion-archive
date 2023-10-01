#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetSpiderant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnLoop
struct UACharge_PetSpiderant_C_OnLoop_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnEnd
struct UACharge_PetSpiderant_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnHitWall
struct UACharge_PetSpiderant_C_OnHitWall_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.OnBegin
struct UACharge_PetSpiderant_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.Notify_Melee
struct UACharge_PetSpiderant_C_Notify_Melee_Params
{
};

// Function ACharge_PetSpiderant.ACharge_PetSpiderant_C.ExecuteUbergraph_ACharge_PetSpiderant
struct UACharge_PetSpiderant_C_ExecuteUbergraph_ACharge_PetSpiderant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
