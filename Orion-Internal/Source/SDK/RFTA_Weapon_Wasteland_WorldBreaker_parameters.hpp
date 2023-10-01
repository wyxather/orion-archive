#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Wasteland_WorldBreaker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.ModifyInspectInfo
struct AWeapon_Wasteland_WorldBreaker_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnHitTarget
struct AWeapon_Wasteland_WorldBreaker_C_OnHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.MeleeChargeAttack
struct AWeapon_Wasteland_WorldBreaker_C_MeleeChargeAttack_Params
{
};

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnEquipped
struct AWeapon_Wasteland_WorldBreaker_C_OnEquipped_Params
{
};

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnUnequipped
struct AWeapon_Wasteland_WorldBreaker_C_OnUnequipped_Params
{
};

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnStateChange
struct AWeapon_Wasteland_WorldBreaker_C_OnStateChange_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.ExecuteUbergraph_Weapon_Wasteland_WorldBreaker
struct AWeapon_Wasteland_WorldBreaker_C_ExecuteUbergraph_Weapon_Wasteland_WorldBreaker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
