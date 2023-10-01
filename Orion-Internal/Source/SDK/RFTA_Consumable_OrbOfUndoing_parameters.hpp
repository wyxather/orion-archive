#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_OrbOfUndoing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ModifyInspectInfo
struct AConsumable_OrbOfUndoing_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnActivate
struct AConsumable_OrbOfUndoing_C_OnActivate_Params
{
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ClientInitTraitChange
struct AConsumable_OrbOfUndoing_C_ClientInitTraitChange_Params
{
	class UTraitsComponent**                           Traits;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.SetTraitLevels
struct AConsumable_OrbOfUndoing_C_SetTraitLevels_Params
{
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ServerTraitChange
struct AConsumable_OrbOfUndoing_C_ServerTraitChange_Params
{
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnEquipped
struct AConsumable_OrbOfUndoing_C_OnEquipped_Params
{
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ExecuteUbergraph_Consumable_OrbOfUndoing
struct AConsumable_OrbOfUndoing_C_ExecuteUbergraph_Consumable_OrbOfUndoing_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
