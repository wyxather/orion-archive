#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Hammer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Hammer.Weapon_Hammer_C.ModifyDamage
struct AWeapon_Hammer_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Hammer.Weapon_Hammer_C.DoHammerAOE
struct AWeapon_Hammer_C_DoHammerAOE_Params
{
};

// Function Weapon_Hammer.Weapon_Hammer_C.DoChargeHammerAOE
struct AWeapon_Hammer_C_DoChargeHammerAOE_Params
{
};

// Function Weapon_Hammer.Weapon_Hammer_C.OnEquipped
struct AWeapon_Hammer_C_OnEquipped_Params
{
};

// Function Weapon_Hammer.Weapon_Hammer_C.OnUnequipped
struct AWeapon_Hammer_C_OnUnequipped_Params
{
};

// Function Weapon_Hammer.Weapon_Hammer_C.OnStateChange
struct AWeapon_Hammer_C_OnStateChange_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Hammer.Weapon_Hammer_C.NotifyHitTarget
struct AWeapon_Hammer_C_NotifyHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Weapon_Hammer.Weapon_Hammer_C.ExecuteUbergraph_Weapon_Hammer
struct AWeapon_Hammer_C_ExecuteUbergraph_Weapon_Hammer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
