#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_VoiceOfTheTempest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.ModifyInspectInfo
struct AWeapon_Pan_VoiceOfTheTempest_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnActivated
struct AWeapon_Pan_VoiceOfTheTempest_C_OnActivated_Params
{
};

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnHitTarget
struct AWeapon_Pan_VoiceOfTheTempest_C_OnHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnEquipped
struct AWeapon_Pan_VoiceOfTheTempest_C_OnEquipped_Params
{
};

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnUnequipped
struct AWeapon_Pan_VoiceOfTheTempest_C_OnUnequipped_Params
{
};

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnStateChange
struct AWeapon_Pan_VoiceOfTheTempest_C_OnStateChange_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest
struct AWeapon_Pan_VoiceOfTheTempest_C_ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
