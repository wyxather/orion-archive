#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAmmoItem_AllAmmo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.ReceiveBeginPlay
struct ABPAmmoItem_AllAmmo_C_ReceiveBeginPlay_Params
{
};

// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.FillAmmo
struct ABPAmmoItem_AllAmmo_C_FillAmmo_Params
{
	class AOakCharacter*                               PickupInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           CurrentValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.PickedUp
struct ABPAmmoItem_AllAmmo_C_PickedUp_Params
{
	class AOakCharacter*                               PickupInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.CanBePickedUp
struct ABPAmmoItem_AllAmmo_C_CanBePickedUp_Params
{
	class AOakCharacter**                              PickupInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UsedByInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AInventoryItemPickup**                       WorldPickupActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
