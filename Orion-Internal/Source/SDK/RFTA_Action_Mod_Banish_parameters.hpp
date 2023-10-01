#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Banish_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Banish.Action_Mod_Banish_C.ManualResetMaterials
struct UAction_Mod_Banish_C_ManualResetMaterials_Params
{
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.HasImmuneTag
struct UAction_Mod_Banish_C_HasImmuneTag_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.IsAlive
struct UAction_Mod_Banish_C_IsAlive_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.FilterIncomingDamage
struct UAction_Mod_Banish_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.OnUnequipItem
struct UAction_Mod_Banish_C_OnUnequipItem_Params
{
	class AEquipment**                                 Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.UpdateActorMaterials
struct UAction_Mod_Banish_C_UpdateActorMaterials_Params
{
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.OnEquipItem
struct UAction_Mod_Banish_C_OnEquipItem_Params
{
	class AEquipment**                                 Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.AllowAction
struct UAction_Mod_Banish_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.IsPlayer
struct UAction_Mod_Banish_C_IsPlayer_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.IsBoss
struct UAction_Mod_Banish_C_IsBoss_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.OnActionStart
struct UAction_Mod_Banish_C_OnActionStart_Params
{
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.OnActionStop
struct UAction_Mod_Banish_C_OnActionStop_Params
{
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.SetOwnerDisabled
struct UAction_Mod_Banish_C_SetOwnerDisabled_Params
{
	bool*                                              Disabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.OnTick
struct UAction_Mod_Banish_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.StopForCinematic
struct UAction_Mod_Banish_C_StopForCinematic_Params
{
	class APlayerControllerGunfire**                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bIsInCinematic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Banish.Action_Mod_Banish_C.ExecuteUbergraph_Action_Mod_Banish
struct UAction_Mod_Banish_C_ExecuteUbergraph_Action_Mod_Banish_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
