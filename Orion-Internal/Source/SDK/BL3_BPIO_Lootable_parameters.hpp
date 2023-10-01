#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPIO_Lootable.BPIO_Lootable_C.PlayAudio
struct ABPIO_Lootable_C_PlayAudio_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.UserConstructionScript
struct ABPIO_Lootable_C_UserConstructionScript_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.OnLocked
struct ABPIO_Lootable_C_OnLocked_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.OnEnabling
struct ABPIO_Lootable_C_OnEnabling_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.OnEnabled
struct ABPIO_Lootable_C_OnEnabled_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.OnDisabling
struct ABPIO_Lootable_C_OnDisabling_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.OnDisabled
struct ABPIO_Lootable_C_OnDisabled_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.OnAllPickupsDetached_Event
struct ABPIO_Lootable_C_OnAllPickupsDetached_Event_Params
{
	class ADroppedInventoryItemPickup*                 Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PickedUpBy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable.BPIO_Lootable_C.OnPickupDetached_Event_1
struct ABPIO_Lootable_C_OnPickupDetached_Event_1_Params
{
	class ADroppedInventoryItemPickup*                 Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PickedUpBy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable.BPIO_Lootable_C.ReceiveBeginPlay
struct ABPIO_Lootable_C_ReceiveBeginPlay_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable
struct ABPIO_Lootable_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPIO_Lootable.BPIO_Lootable_C.ExecuteUbergraph_BPIO_Lootable
struct ABPIO_Lootable_C_ExecuteUbergraph_BPIO_Lootable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable.BPIO_Lootable_C.On_Opening__DelegateSignature
struct ABPIO_Lootable_C_On_Opening__DelegateSignature_Params
{
};

// Function BPIO_Lootable.BPIO_Lootable_C.On_AllLootTaken__DelegateSignature
struct ABPIO_Lootable_C_On_AllLootTaken__DelegateSignature_Params
{
	class ADroppedInventoryItemPickup*                 PickedUpItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable.BPIO_Lootable_C.On_AnyLootTaken__DelegateSignature
struct ABPIO_Lootable_C_On_AnyLootTaken__DelegateSignature_Params
{
	class ADroppedInventoryItemPickup*                 PickedUpItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable.BPIO_Lootable_C.On_Opened__DelegateSignature
struct ABPIO_Lootable_C_On_Opened__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
