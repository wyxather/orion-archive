#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_NewWorldTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.IsEnabled
struct UWidget_NewWorldTab_C_IsEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.SetQuestInfo
struct UWidget_NewWorldTab_C_SetQuestInfo_Params
{
	struct FRemnantQuestEntry*                         Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.Refresh
struct UWidget_NewWorldTab_C_Refresh_Params
{
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.Construct
struct UWidget_NewWorldTab_C_Construct_Params
{
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_NewWorldTab_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_NewWorldTab_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature
struct UWidget_NewWorldTab_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature_Params
{
	EUINavigation*                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.ExecuteUbergraph_Widget_NewWorldTab
struct UWidget_NewWorldTab_C_ExecuteUbergraph_Widget_NewWorldTab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnRight__DelegateSignature
struct UWidget_NewWorldTab_C_OnRight__DelegateSignature_Params
{
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnLeft__DelegateSignature
struct UWidget_NewWorldTab_C_OnLeft__DelegateSignature_Params
{
};

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnSelected__DelegateSignature
struct UWidget_NewWorldTab_C_OnSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
