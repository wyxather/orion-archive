#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Fist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Fist.Weapon_Fist_C.ModifyDamage
struct AWeapon_Fist_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Fist.Weapon_Fist_C.IsDefaultEquipment
struct AWeapon_Fist_C_IsDefaultEquipment_Params
{
	bool                                               DefaultEquipment;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Fist.Weapon_Fist_C.GetLevel
struct AWeapon_Fist_C_GetLevel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Fist.Weapon_Fist_C.PostComputeCharacterStats
struct AWeapon_Fist_C_PostComputeCharacterStats_Params
{
};

// Function Weapon_Fist.Weapon_Fist_C.ExecuteUbergraph_Weapon_Fist
struct AWeapon_Fist_C_ExecuteUbergraph_Weapon_Fist_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
