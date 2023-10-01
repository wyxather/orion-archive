#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_AmmoBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ModifyInspectInfo
struct AConsumable_AmmoBox_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ValidateUse
struct AConsumable_AmmoBox_C_ValidateUse_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Consumable_AmmoBox.Consumable_AmmoBox_C.Regenerate
struct AConsumable_AmmoBox_C_Regenerate_Params
{
};

// Function Consumable_AmmoBox.Consumable_AmmoBox_C.HasFullAmmo
struct AConsumable_AmmoBox_C_HasFullAmmo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ReceiveBeginPlay
struct AConsumable_AmmoBox_C_ReceiveBeginPlay_Params
{
};

// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ExecuteUbergraph_Consumable_AmmoBox
struct AConsumable_AmmoBox_C_ExecuteUbergraph_Consumable_AmmoBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
