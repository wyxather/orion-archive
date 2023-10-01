#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_EnrageAirAnim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetRiftActorFromRegisters
struct UA_Pet_EnrageAirAnim_C_GetRiftActorFromRegisters_Params
{
	class ABPPetEnrageRift_C*                          res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetLocationFromRegisters
struct UA_Pet_EnrageAirAnim_C_GetLocationFromRegisters_Params
{
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.OnBegin
struct UA_Pet_EnrageAirAnim_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.ExecuteUbergraph_A_Pet_EnrageAirAnim
struct UA_Pet_EnrageAirAnim_C_ExecuteUbergraph_A_Pet_EnrageAirAnim_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
