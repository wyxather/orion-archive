#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_WorldsEdge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.WorldsEdgeFireProjectiles
struct AWeapon_Rural_WorldsEdge_C_WorldsEdgeFireProjectiles_Params
{
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.ModifyInspectInfo
struct AWeapon_Rural_WorldsEdge_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.Set Light Intensity
struct AWeapon_Rural_WorldsEdge_C_Set_Light_Intensity_Params
{
	float*                                             NewIntensity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnNotInHand
struct AWeapon_Rural_WorldsEdge_C_OnNotInHand_Params
{
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnActivated
struct AWeapon_Rural_WorldsEdge_C_OnActivated_Params
{
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnInHand
struct AWeapon_Rural_WorldsEdge_C_OnInHand_Params
{
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnCharacterEvent
struct AWeapon_Rural_WorldsEdge_C_OnCharacterEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.Server_FireProjectiles
struct AWeapon_Rural_WorldsEdge_C_Server_FireProjectiles_Params
{
	struct FVector*                                    Origin_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator*                                   Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.ExecuteUbergraph_Weapon_Rural_WorldsEdge
struct AWeapon_Rural_WorldsEdge_C_ExecuteUbergraph_Weapon_Rural_WorldsEdge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
