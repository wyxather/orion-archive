#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_ScarOfTheJungleGod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.IsDefaultEquipment
struct AWeapon_Pan_ScarOfTheJungleGod_C_IsDefaultEquipment_Params
{
	bool                                               DefaultEquipment;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.ModifyInspectInfo
struct AWeapon_Pan_ScarOfTheJungleGod_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.OnHitTarget
struct AWeapon_Pan_ScarOfTheJungleGod_C_OnHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.ExecuteUbergraph_Weapon_Pan_ScarOfTheJungleGod
struct AWeapon_Pan_ScarOfTheJungleGod_C_ExecuteUbergraph_Weapon_Pan_ScarOfTheJungleGod_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
