#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Swamp_Devastator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnRep_MagazineOn
struct AWeapon_Swamp_Devastator_C_OnRep_MagazineOn_Params
{
};

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.ModifyDamage
struct AWeapon_Swamp_Devastator_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnActivated
struct AWeapon_Swamp_Devastator_C_OnActivated_Params
{
};

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnFire
struct AWeapon_Swamp_Devastator_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnFireEnd
struct AWeapon_Swamp_Devastator_C_OnFireEnd_Params
{
};

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnServer_End
struct AWeapon_Swamp_Devastator_C_OnServer_End_Params
{
};

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnServer_TurnOff
struct AWeapon_Swamp_Devastator_C_OnServer_TurnOff_Params
{
};

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.ExecuteUbergraph_Weapon_Swamp_Devastator
struct AWeapon_Swamp_Devastator_C_ExecuteUbergraph_Weapon_Swamp_Devastator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
