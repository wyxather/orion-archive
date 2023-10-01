#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Blizzard_StormCloud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.CalcMoveToDestination
struct AMod_Blizzard_StormCloud_C_CalcMoveToDestination_Params
{
	struct FVector                                     Destination;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.GetRandomPointInCircle
struct AMod_Blizzard_StormCloud_C_GetRandomPointInCircle_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.ReceiveBeginPlay
struct AMod_Blizzard_StormCloud_C_ReceiveBeginPlay_Params
{
};

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.StartFX
struct AMod_Blizzard_StormCloud_C_StartFX_Params
{
};

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.DoRain
struct AMod_Blizzard_StormCloud_C_DoRain_Params
{
};

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.StopFX
struct AMod_Blizzard_StormCloud_C_StopFX_Params
{
};

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.ExecuteUbergraph_Mod_Blizzard_StormCloud
struct AMod_Blizzard_StormCloud_C_ExecuteUbergraph_Mod_Blizzard_StormCloud_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
