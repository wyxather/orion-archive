#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemInfo_RangedWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.CheckPulseUpgrade
struct UWidget_ItemInfo_RangedWeapon_C_CheckPulseUpgrade_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.HasInputFocus
struct UWidget_ItemInfo_RangedWeapon_C_HasInputFocus_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.EndEquipMod
struct UWidget_ItemInfo_RangedWeapon_C_EndEquipMod_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BeginEquipMod
struct UWidget_ItemInfo_RangedWeapon_C_BeginEquipMod_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSetItem
struct UWidget_ItemInfo_RangedWeapon_C_OnSetItem_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.Construct
struct UWidget_ItemInfo_RangedWeapon_C_Construct_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSelectItem_Event_1
struct UWidget_ItemInfo_RangedWeapon_C_OnSelectItem_Event_1_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowIngredients;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnItemAction_Event_1
struct UWidget_ItemInfo_RangedWeapon_C_OnItemAction_Event_1_Params
{
	TEnumAsByte<EInventoryAction>*                     Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_ItemInfo_RangedWeapon_C_BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.EndInputFocus
struct UWidget_ItemInfo_RangedWeapon_C_EndInputFocus_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__ModList_K2Node_ComponentBoundEvent_1_OnUpdateCustomEquipment__DelegateSignature
struct UWidget_ItemInfo_RangedWeapon_C_BndEvt__ModList_K2Node_ComponentBoundEvent_1_OnUpdateCustomEquipment__DelegateSignature_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.DoAction
struct UWidget_ItemInfo_RangedWeapon_C_DoAction_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWidget_ItemInfo_RangedWeapon_C_BndEvt__Button_137_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWidget_ItemInfo_RangedWeapon_C_BndEvt__Button_137_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWidget_ItemInfo_RangedWeapon_C_BndEvt__Button_137_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.Init
struct UWidget_ItemInfo_RangedWeapon_C_Init_Params
{
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.ApplySizeModifier
struct UWidget_ItemInfo_RangedWeapon_C_ApplySizeModifier_Params
{
	int*                                               Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.ExecuteUbergraph_Widget_ItemInfo_RangedWeapon
struct UWidget_ItemInfo_RangedWeapon_C_ExecuteUbergraph_Widget_ItemInfo_RangedWeapon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSubAction__DelegateSignature
struct UWidget_ItemInfo_RangedWeapon_C_OnSubAction__DelegateSignature_Params
{
	struct FText*                                      ActionLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
