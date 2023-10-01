#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_FrenzyDust_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get Reload Speed
struct AConsumable_FrenzyDust_C_Get_Reload_Speed_Params
{
	float                                              ReloadSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get FireSpeed
struct AConsumable_FrenzyDust_C_Get_FireSpeed_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ParamDuration
struct AConsumable_FrenzyDust_C_ParamDuration_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get Ranged Damage Mod
struct AConsumable_FrenzyDust_C_Get_Ranged_Damage_Mod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ModifyInspectInfo
struct AConsumable_FrenzyDust_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.OnActivate
struct AConsumable_FrenzyDust_C_OnActivate_Params
{
};

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.DoAction
struct AConsumable_FrenzyDust_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ExecuteUbergraph_Consumable_FrenzyDust
struct AConsumable_FrenzyDust_C_ExecuteUbergraph_Consumable_FrenzyDust_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
