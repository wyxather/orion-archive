#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_IO_Operative_ShoulderCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params
{
	TEnumAsByte<EOperativeShoulderCannon>              NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
struct UInterface_IO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params
{
	bool                                               Fast;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params
{
	bool                                               DigistructIn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
struct UInterface_IO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
