#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_ModMinion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_ModMinion.BPI_ModMinion_C.GetMinionOwner
struct UBPI_ModMinion_C_GetMinionOwner_Params
{
	class AActor*                                      Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ModMinion.BPI_ModMinion_C.GetCauseDamageScalar
struct UBPI_ModMinion_C_GetCauseDamageScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ModMinion.BPI_ModMinion_C.MinionHasDamageTag
struct UBPI_ModMinion_C_MinionHasDamageTag_Params
{
	bool                                               ExtraDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ModMinion.BPI_ModMinion_C.HasSoulEmberTrinket
struct UBPI_ModMinion_C_HasSoulEmberTrinket_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ModMinion.BPI_ModMinion_C.DestroyMinion
struct UBPI_ModMinion_C_DestroyMinion_Params
{
};

// Function BPI_ModMinion.BPI_ModMinion_C.IsValidMinion
struct UBPI_ModMinion_C_IsValidMinion_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ModMinion.BPI_ModMinion_C.GetSpawnTime
struct UBPI_ModMinion_C_GetSpawnTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
