#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemInfo_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.ApplySizeModifier
struct UWidget_ItemInfo_Base_C_ApplySizeModifier_Params
{
	int*                                               Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.Init
struct UWidget_ItemInfo_Base_C_Init_Params
{
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.DoAction
struct UWidget_ItemInfo_Base_C_DoAction_Params
{
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.HasInputFocus
struct UWidget_ItemInfo_Base_C_HasInputFocus_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.EndInputFocus
struct UWidget_ItemInfo_Base_C_EndInputFocus_Params
{
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.GetLabel
struct UWidget_ItemInfo_Base_C_GetLabel_Params
{
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.RefreshInspectInfo
struct UWidget_ItemInfo_Base_C_RefreshInspectInfo_Params
{
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.InitStats
struct UWidget_ItemInfo_Base_C_InitStats_Params
{
	class UPanelWidget**                               Root;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetInspectInfo
struct UWidget_ItemInfo_Base_C_SetInspectInfo_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               CompareInspectInfo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetItem
struct UWidget_ItemInfo_Base_C_SetItem_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Compare;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               CompareInspectInfo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.IsValid
struct UWidget_ItemInfo_Base_C_IsValid_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetItemFromInventory
struct UWidget_ItemInfo_Base_C_SetItemFromInventory_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               CompareInspectInfo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnSetItem
struct UWidget_ItemInfo_Base_C_OnSetItem_Params
{
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.ExecuteUbergraph_Widget_ItemInfo_Base
struct UWidget_ItemInfo_Base_C_ExecuteUbergraph_Widget_ItemInfo_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnClickMod__DelegateSignature
struct UWidget_ItemInfo_Base_C_OnClickMod__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnSelectMod__DelegateSignature
struct UWidget_ItemInfo_Base_C_OnSelectMod__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
