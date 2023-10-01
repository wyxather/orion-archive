#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Small_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.UserConstructionScript
struct APD_Rock_Formation_Pile_Eridian_Small_C_UserConstructionScript_Params
{
};

// Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.Damaged
struct APD_Rock_Formation_Pile_Eridian_Small_C_Damaged_Params
{
	struct FVector*                                    HitLocation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpulseDir;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small
struct APD_Rock_Formation_Pile_Eridian_Small_C_ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
