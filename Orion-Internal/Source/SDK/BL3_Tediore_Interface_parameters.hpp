#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Tediore_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tediore_Interface.Tediore_Interface_C.Tediore_WeaponData
struct UTediore_Interface_C_Tediore_WeaponData_Params
{
	float                                              DamageRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumMirvProjectiles;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LoadedAmmo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ThrowType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
