#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RadialShortcutComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.HandleEntitlement
struct UBP_RadialShortcutComponent_C_HandleEntitlement_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ValidateEntitlements
struct UBP_RadialShortcutComponent_C_ValidateEntitlements_Params
{
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.AutoPopulate
struct UBP_RadialShortcutComponent_C_AutoPopulate_Params
{
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.HasSlottedItem
struct UBP_RadialShortcutComponent_C_HasSlottedItem_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               NumSlots;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnRep_Items
struct UBP_RadialShortcutComponent_C_OnRep_Items_Params
{
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.AutoSlotItem
struct UBP_RadialShortcutComponent_C_AutoSlotItem_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.RemoveBySlot
struct UBP_RadialShortcutComponent_C_RemoveBySlot_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.RemoveByItem
struct UBP_RadialShortcutComponent_C_RemoveByItem_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.SetSlot
struct UBP_RadialShortcutComponent_C_SetSlot_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.GetSlotCount
struct UBP_RadialShortcutComponent_C_GetSlotCount_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.GetSlot
struct UBP_RadialShortcutComponent_C_GetSlot_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ServerSetSlot
struct UBP_RadialShortcutComponent_C_ServerSetSlot_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.UseItem
struct UBP_RadialShortcutComponent_C_UseItem_Params
{
	unsigned char*                                     Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.SimulateSetSlot
struct UBP_RadialShortcutComponent_C_SimulateSetSlot_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ServerUseItem
struct UBP_RadialShortcutComponent_C_ServerUseItem_Params
{
	unsigned char*                                     Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ReceiveBeginPlay
struct UBP_RadialShortcutComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnAddItem
struct UBP_RadialShortcutComponent_C_OnAddItem_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ExecuteUbergraph_BP_RadialShortcutComponent
struct UBP_RadialShortcutComponent_C_ExecuteUbergraph_BP_RadialShortcutComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnSlotUsed__DelegateSignature
struct UBP_RadialShortcutComponent_C_OnSlotUsed__DelegateSignature_Params
{
	unsigned char*                                     Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnChanged__DelegateSignature
struct UBP_RadialShortcutComponent_C_OnChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
