#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inspectable_Info_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.UpdatePageTurns
struct UWidget_Inspectable_Info_C_UpdatePageTurns_Params
{
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.IncrementPage
struct UWidget_Inspectable_Info_C_IncrementPage_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.InitCurrentPage
struct UWidget_Inspectable_Info_C_InitCurrentPage_Params
{
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.Init
struct UWidget_Inspectable_Info_C_Init_Params
{
	class ABP_Inspectable_C**                          Inspectible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               InitialPage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnLeft
struct UWidget_Inspectable_Info_C_OnLeft_Params
{
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnRight
struct UWidget_Inspectable_Info_C_OnRight_Params
{
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.AnimateInDetailedInfo
struct UWidget_Inspectable_Info_C_AnimateInDetailedInfo_Params
{
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.AnimateOutDetailedInfo
struct UWidget_Inspectable_Info_C_AnimateOutDetailedInfo_Params
{
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.BndEvt__Widget_ButtonEx_NavLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inspectable_Info_C_BndEvt__Widget_ButtonEx_NavLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.ExecuteUbergraph_Widget_Inspectable_Info
struct UWidget_Inspectable_Info_C_ExecuteUbergraph_Widget_Inspectable_Info_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnPageUpdate__DelegateSignature
struct UWidget_Inspectable_Info_C_OnPageUpdate__DelegateSignature_Params
{
	bool*                                              PrevVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              NextVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
