#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Gun_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnFire
struct AWeapon_Gun_Base_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnEquipped
struct AWeapon_Gun_Base_C_OnEquipped_Params
{
};

// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnUnequipped
struct AWeapon_Gun_Base_C_OnUnequipped_Params
{
};

// Function Weapon_Gun_Base.Weapon_Gun_Base_C.ReceiveBeginPlay
struct AWeapon_Gun_Base_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_Gun_Base.Weapon_Gun_Base_C.ExecuteUbergraph_Weapon_Gun_Base
struct AWeapon_Gun_Base_C_ExecuteUbergraph_Weapon_Gun_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
