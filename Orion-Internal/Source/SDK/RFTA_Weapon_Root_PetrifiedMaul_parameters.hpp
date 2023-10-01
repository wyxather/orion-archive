#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Root_PetrifiedMaul_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ModifyInspectInfo
struct AWeapon_Root_PetrifiedMaul_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ModifyDamage
struct AWeapon_Root_PetrifiedMaul_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.MulticastPetrifiedProcFX
struct AWeapon_Root_PetrifiedMaul_C_MulticastPetrifiedProcFX_Params
{
	struct FVector*                                    WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ExecuteUbergraph_Weapon_Root_PetrifiedMaul
struct AWeapon_Root_PetrifiedMaul_C_ExecuteUbergraph_Weapon_Root_PetrifiedMaul_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
