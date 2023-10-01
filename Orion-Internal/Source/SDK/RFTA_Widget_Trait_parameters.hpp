#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Trait_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Trait.Widget_Trait_C.HasNoTraitManualLevelUp
struct UWidget_Trait_C_HasNoTraitManualLevelUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Trait.Widget_Trait_C.PickStat
struct UWidget_Trait_C_PickStat_Params
{
	struct FInspectInfo                                InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInspectStat                                Stat;                                                     // (Parm, OutParm)
};

// Function Widget_Trait.Widget_Trait_C.HasTraitPoints
struct UWidget_Trait_C_HasTraitPoints_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.Get_Border_4_Visibility_1
struct UWidget_Trait_C_Get_Border_4_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.Get_Stats_Visibility_1
struct UWidget_Trait_C_Get_Stats_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.Get_Description_Visibility_1
struct UWidget_Trait_C_Get_Description_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.CanSpendTraitPoint
struct UWidget_Trait_C_CanSpendTraitPoint_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Trait.Widget_Trait_C.Add_TraitLevel
struct UWidget_Trait_C_Add_TraitLevel_Params
{
};

// Function Widget_Trait.Widget_Trait_C.ShowUpgrade
struct UWidget_Trait_C_ShowUpgrade_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Trait.Widget_Trait_C.Refresh
struct UWidget_Trait_C_Refresh_Params
{
};

// Function Widget_Trait.Widget_Trait_C.CacheInspectInfo
struct UWidget_Trait_C_CacheInspectInfo_Params
{
};

// Function Widget_Trait.Widget_Trait_C.Construct
struct UWidget_Trait_C_Construct_Params
{
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_90_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_90_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_136_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_136_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_348_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_348_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_397_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_397_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnAction__DelegateSignature
struct UWidget_Trait_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnAction__DelegateSignature_Params
{
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.OnTraitLevelChanged_Event_1
struct UWidget_Trait_C_OnTraitLevelChanged_Event_1_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PreviousLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.SimulateClick
struct UWidget_Trait_C_SimulateClick_Params
{
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.OnConfirm
struct UWidget_Trait_C_OnConfirm_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Trait.Widget_Trait_C.UpgradeEffectEvent
struct UWidget_Trait_C_UpgradeEffectEvent_Params
{
};

// Function Widget_Trait.Widget_Trait_C.ExecuteUbergraph_Widget_Trait
struct UWidget_Trait_C_ExecuteUbergraph_Widget_Trait_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
