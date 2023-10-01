#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InspectableHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.EndInspectWithContext
struct UWidget_InspectableHUD_C_EndInspectWithContext_Params
{
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.CheckReadUIAutoOpen
struct UWidget_InspectableHUD_C_CheckReadUIAutoOpen_Params
{
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ToggleInspectableInfo
struct UWidget_InspectableHUD_C_ToggleInspectableInfo_Params
{
	bool*                                              IsManualOpen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ShowInspectableInfo
struct UWidget_InspectableHUD_C_ShowInspectableInfo_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ClearInspectable
struct UWidget_InspectableHUD_C_ClearInspectable_Params
{
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Toggle Quest Inventory
struct UWidget_InspectableHUD_C_Toggle_Quest_Inventory_Params
{
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Show Quest Inventory
struct UWidget_InspectableHUD_C_Show_Quest_Inventory_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Set Inspectable Mode
struct UWidget_InspectableHUD_C_Set_Inspectable_Mode_Params
{
	TEnumAsByte<E_InspectableHUDMode>*                 Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Set Inspectable
struct UWidget_InspectableHUD_C_Set_Inspectable_Params
{
	class ABP_Inspectable_C**                          Inspectable_Object;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Construct
struct UWidget_InspectableHUD_C_Construct_Params
{
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnInteractive_Event_1
struct UWidget_InspectableHUD_C_OnInteractive_Event_1_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnUpdatePageUI
struct UWidget_InspectableHUD_C_OnUpdatePageUI_Params
{
	bool*                                              PrevVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              NextVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnUseItemFail_Event_1
struct UWidget_InspectableHUD_C_OnUseItemFail_Event_1_Params
{
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ExecuteUbergraph_Widget_InspectableHUD
struct UWidget_InspectableHUD_C_ExecuteUbergraph_Widget_InspectableHUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnInspectableInfoToggled__DelegateSignature
struct UWidget_InspectableHUD_C_OnInspectableInfoToggled__DelegateSignature_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
