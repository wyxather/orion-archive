#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemInfo.Widget_ItemInfo_C.SetSizeModifier
struct UWidget_ItemInfo_C_SetSizeModifier_Params
{
	int*                                               Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.GetEmptyVisibility_2
struct UWidget_ItemInfo_C_GetEmptyVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.GetEmptyVisibility_1
struct UWidget_ItemInfo_C_GetEmptyVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.SetInfoHidden
struct UWidget_ItemInfo_C_SetInfoHidden_Params
{
	bool*                                              Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.DoAction
struct UWidget_ItemInfo_C_DoAction_Params
{
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.HasInputFocus
struct UWidget_ItemInfo_C_HasInputFocus_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.EndInputFocus
struct UWidget_ItemInfo_C_EndInputFocus_Params
{
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.GetCompareInspectInfo
struct UWidget_ItemInfo_C_GetCompareInspectInfo_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Compare;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo                                CompareInspectInfo;                                       // (Parm, OutParm)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.GetVisibility_1
struct UWidget_ItemInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.Get_AttributeName_Text_1
struct UWidget_ItemInfo_C_Get_AttributeName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.SetInspectInfo
struct UWidget_ItemInfo_C_SetInspectInfo_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.GetInventoryItem
struct UWidget_ItemInfo_C_GetInventoryItem_Params
{
	struct FInventoryItem                              Item;                                                     // (Parm, OutParm, NoDestructor, ContainsInstancedReference)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.SetItem
struct UWidget_ItemInfo_C_SetItem_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               CompareItemID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.Construct
struct UWidget_ItemInfo_C_Construct_Params
{
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature
struct UWidget_ItemInfo_C_BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature
struct UWidget_ItemInfo_C_BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature
struct UWidget_ItemInfo_C_BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature_Params
{
	struct FText*                                      ActionLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.ExecuteUbergraph_Widget_ItemInfo
struct UWidget_ItemInfo_C_ExecuteUbergraph_Widget_ItemInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.OnSubAction__DelegateSignature
struct UWidget_ItemInfo_C_OnSubAction__DelegateSignature_Params
{
	struct FText*                                      ActionLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.OnModSelected__DelegateSignature
struct UWidget_ItemInfo_C_OnModSelected__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo.Widget_ItemInfo_C.OnModClicked__DelegateSignature
struct UWidget_ItemInfo_C_OnModClicked__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
